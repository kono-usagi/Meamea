#include"Story.h"
#include"DxLib.h"

namespace mea
{
    Story::Story()//�R���X�g���N�^
    {

    }
    Story::~Story()//�f�X�g���N�^
    {

    }
    SceneBase* Story::Update(float deltaTime)
    {
        // ���ׂẴQ�[���I�u�W�F�N�g�̍X�V
        My3dApp::GameObjectManager::Update(deltaTime);
        My3dApp::GameObjectManager::Collision();
        return this;
    }

    void Story::Draw()
    {
        //���ׂẴQ�[���I�u�W�F�N�g�̕`��
        My3dApp::GameObjectManager::Draw();
        My3dApp::DrawGrid(3000, 30);
    }
}