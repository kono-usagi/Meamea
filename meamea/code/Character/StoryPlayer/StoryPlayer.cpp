#include "StoryPlayer.h"
#include <Dxlib>

namespace mea
{
    StoryPlayer::StoryPlayer()
        /* :GameObject(ObjTag.StoryPlayer)*/
    {
        //処理なし
    }

    StoryPlayer::~StoryPlayer()
    {
        //処理なし
    }

    void StoryPlayer::Update()
    {
        MoveByKey();
    }

    void StoryPlayer::Draw()
    {
        DrawGraph(mUppos.x, mUppos.y, mFlameEffect[mUp], FALSE);
        DrawGraph(mDownpos.x, mDownpos.y, mFlameEffect[mDown], FALSE);
    }

    void StoryPlayer::MoveByKey()
    {
        //選択肢が選ばれたら
        if (CheckHitKey(KEY_INPUT_UP) == 1)
        {
            mUp = 0;
            mDown = 1;
        }
        if (CheckHitKey(KEY_INPUT_DOWN) == 1)
        {
            mDown = 0;
            mUp = 1;
        }
    }
}