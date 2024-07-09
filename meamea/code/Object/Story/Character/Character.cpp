#include "Character.h"

namespace mea
{
    Character::Character()
    {
        //画像の読み込み　forで回せる？
        mCharacterHandle[0];//=LoadGrafh("")
        mCharacterHandle[1];
        mCharacterHandle[2];
        mCharacterHandle[3];

        //座標指定
        mHandlePos.x = POS_X;
        mHandlePos.y = POS_Y;
    }
    Character::~Character()
    {
        //画像の削除
        for (int i = 0; i < FACE_TYPE; i++)
        {
            DeleteGraph(mCharacterHandle[FACE_TYPE]);
        }
    }

    void Character::Update()
    {
        Draw();
    }

    void Character::Draw()
    {
        DrawGraph(mHandlePos.x, mHandlePos.y, mCharacterHandle[nowType], FALSE);

        //表情切り替え
        //if(flg)nowType=1;
    }
}