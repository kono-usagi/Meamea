#include "StoryPlayer.h"
#include <Dxlib>

namespace mea
{
    StoryPlayer::StoryPlayer()
        /* :GameObject(ObjTag.StoryPlayer)*/
    {
        //èàóùÇ»Çµ
    }

    StoryPlayer::~StoryPlayer()
    {
        //èàóùÇ»Çµ
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
        //ëIëéàÇ™ëIÇŒÇÍÇΩÇÁ
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