#include "Stage.h"

namespace mea
{
    Stage::Stage()
    {
        //マップ画像の読み込み
        //mMapImage=

        //動く岩の描画

        //マップ情報の読み込み
        //mMapnumber=

    }

    Stage::~Stage()
    {
        //初期化
    }

    void Stage::Update()
    {
        Draw();
        Input();
    }

    void Stage::Draw()
    {
        //マップ画像の表示
        DrawGraph(0, 0, mMapImage, FALSE);
        
    }
    void Stage::DrawMapObject()
    {
        //動く岩が移動したら


    }

    void Stage::Input()
    {
        int keyFlg = 0;
        if (CheckHitKey(KEY_INPUT_UP) == 1|| CheckHitKey(KEY_INPUT_DOWN) == 1|| CheckHitKey(KEY_INPUT_RIGHT) == 1|| CheckHitKey(KEY_INPUT_LEFT) == 1)
        {
            keyFlg = 1;
            if (CheckHitKey(KEY_INPUT_UP) == 1)//上
            {
                isPlayerMove(KEY_UP);
            }
            if (CheckHitKey(KEY_INPUT_DOWN) == 1)//下
            {
                isPlayerMove(KEY_DOWN);
            }
            if (CheckHitKey(KEY_INPUT_RIGHT) == 1)//右
            {
                isPlayerMove(KEY_RIGHT);
            }
            if (CheckHitKey(KEY_INPUT_LEFT) == 1)//左
            {
                isPlayerMove(KEY_LEFT);
            }
        }
        else
        {
            keyFlg = 0;
        }

    }

    void Stage::isPlayerMove(int keyType)
    {
        //現在地の配列取得

        //入力方向の配列内情報の取得
        if (keyType == KEY_UP)//上
        {
            mMapInfo=mMapInfoArray[mArrayFirst][mArraySecond - mMoveDistance];
        }
        if (keyType == KEY_DOWN)//下
        {
            mMapInfo = mMapInfoArray[mArrayFirst][mArraySecond + mMoveDistance];
        }
        if (keyType == KEY_RIGHT)//右
        {
            mMapInfo = mMapInfoArray[mArrayFirst + mMoveDistance][mArraySecond];
        }
        if (keyType == KEY_LEFT)//左
        {
            mMapInfo = mMapInfoArray[mArrayFirst - mMoveDistance][mArraySecond];
        }

        if (mMapInfo == MAP_OBJECT_ROCK)//動く岩のとき
        {
            isMapObjectMove(keyType);
        }
        if (mMapInfo % 2 == 0)//情報が偶数のとき動かす　床0　罠2
        {
            Player::Move(keyType);
        }
    }

    void Stage::isMapObjectMove(int keyType)
    {
        //入力方向の配列内情報の取得
        if (keyType == KEY_UP)//上
        {
            mMapInfo = mMapInfoArray[mArrayFirst][mArraySecond - mMoveDistance-mMoveDistance];
        }
        if (keyType == KEY_DOWN)//下
        {
            mMapInfo = mMapInfoArray[mArrayFirst][mArraySecond + mMoveDistance]+ mMoveDistance;
        }
        if (keyType == KEY_RIGHT)//右
        {
            mMapInfo = mMapInfoArray[mArrayFirst + mMoveDistance+ mMoveDistance][mArraySecond];
        }
        if (keyType == KEY_LEFT)//左
        {
            mMapInfo = mMapInfoArray[mArrayFirst - mMoveDistance- mMoveDistance][mArraySecond];
        }

        if (mMapInfo % 2 == 0)//情報が偶数のとき動かす　床0　罠2
        {
            MapObject::Move(keyType);
        }
    }
}


