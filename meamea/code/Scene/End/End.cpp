#include"End.h"
#include"DxLib.h"

namespace mea
{
    End::End()
    {

    }
    End::~End()
    {

    }
    SceneBase* End::Update(float deltaTime)
    {
        // ���ׂẴQ�[���I�u�W�F�N�g�̍X�V
        GameObjectManager::Update(deltaTime);
        return this;
    }

    void End::Draw()
    {
        //���ׂẴQ�[���I�u�W�F�N�g�̕`��
        GameObjectManager::Draw();
        DrawGrid(3000, 30);
    }
}