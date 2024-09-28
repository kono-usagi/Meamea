#include "Stage.h"

namespace mea
{

    Stage::Stage()
        :GameObject(playObjectTag.STAGE)
    {
        //マップ画像の読み込み
        //mMapBackGround =
        mMapImage = LoadGraph(JsonManager::ImgDataInstance()->PlayInstance()->GetStage_One_BackGround().c_str());
        
        //マップ画像の表示
        DrawGraph(0, 0, mMapImage, FALSE);

        //動く岩の読み込み
        mRockImage = LoadGraph(JsonManager::ImgDataInstance()->PlayInstance()->GetMoveRock().c_str());

        //マップ情報の読み込み
        mMapX = JsonManager::StageDataInstance()->StageOneInstance()->Getx();
        mMapY = JsonManager::StageDataInstance()->StageOneInstance()->Gety();

        //mMapnumber=

    }

    Stage::~Stage()
    {
       
    }

    void Stage::Update(float deltatime)
    {
        Draw();
        Input();
    }

    void Stage::Draw()
    {
        
        
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
            Player player;
            player.Move(keyType);
            CountSteps();
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
            Move(keyType);
            CountSteps();
        }
    }

    void Stage::CountSteps()
    {
        mPlayerSteps--;

        if (mPlayerSteps <= 0)
        {
            SetAlive(false);
        }
    }

    int Stage::GetSteps()
    {
        return mPlayerSteps;
    }
}


