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
        My3dApp::GameObjectManager::Update(deltaTime);
        My3dApp::GameObjectManager::Collision();
        return this;
    }

    void End::Draw()
    {
        //���ׂẴQ�[���I�u�W�F�N�g�̕`��
        My3dApp::GameObjectManager::Draw();
        My3dApp::DrawGrid(3000, 30);
    }
}