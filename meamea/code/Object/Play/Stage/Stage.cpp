#include "Stage.h"

namespace mea
{
    Stage::Stage()
    {
        //マップ画像の読み込み
        //mMapImage=

        //マップ情報の読み込み
        //mMapnumber=

    }

    Stage::~Stage()
    {
        //初期化
    }

    void Stage::Update()
    {
    }

    void Stage::Draw()
    {
        //マップ画像の表示
        DrawGraph(0, 0, mMapImage, FALSE);
        
    }

    void Stage::Input()
    {
        if (CheckHitKey(KEY_INPUT_UP) == 1)//上
        {
            isMove(KEY_UP);
        }
        if (CheckHitKey(KEY_INPUT_DOWN) == 1)//下
        {
            isMove(KEY_DOWN);
        }
        if (CheckHitKey(KEY_INPUT_RIGHT) == 1)//右
        {
            isMove(KEY_RIGHT);
        }
        if (CheckHitKey(KEY_INPUT_LEFT) == 1)//左
        {
            isMove(KEY_LEFT);
        }
    }

    void Stage::isMove
}


