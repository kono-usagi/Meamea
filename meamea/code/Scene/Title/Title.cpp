#include "Title.h"
#include"../../Scene/Play/Play.h"
#include"DxLib.h"

namespace mea
{
    Title::Title()
    {
        //�����Ȃ�
    }

    Title::~Title()
    {
        //�����Ȃ�
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
        //�^�C�g�����S�\��

    }
}