#include"Play.h"
#include"DxLib.h"

namespace mea
{
    Play::Play()
    {
        //�v���C���[����

        //�X�e�[�W����

        //UI����

    }
    Play::~Play()//�R���X�g���N�^
    {

    }

    SceneBase* Play::Update(float deltaTime)
    {
        // ���ׂẴQ�[���I�u�W�F�N�g�̍X�V
        My3dApp::GameObjectManager::Update(deltaTime);
        My3dApp::GameObjectManager::Collision();
        return this;
    }

    void Play::Draw()
    {
        //���ׂẴQ�[���I�u�W�F�N�g�̕`��
        My3dApp::GameObjectManager::Draw();
        My3dApp::DrawGrid(3000, 30);

       
    }
}