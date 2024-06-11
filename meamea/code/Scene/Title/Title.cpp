#include "Title.h"
#include"../../Scene/Play/Play.h"
#include"DxLib.h"

namespace mea
{
    Title::Title()
    {
        //処理なし
    }

    Title::~Title()
    {
        //処理なし
    }

    SceneBase* Title::Update(float deltaTime)
    {
        if (CheckHitKey(KEY_INPUT_SPACE))
        {
            return new Play;
        }
        return this;
    }

    void Title::Draw()
    {
        //タイトルロゴ表示

    }
}