#include"DxLib.h"
#include"Play.h"
#include"../../Object/GameObjectManager/PlayObjectManager/PlayObjectManager.h"

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
        PlayObjectManager::Update(deltaTime);
        return this;
    }

    void Play::Draw()
    {
        //���ׂẴQ�[���I�u�W�F�N�g�̕`��
        PlayObjectManager::Draw();
        DrawGrid(3000, 30);
       
    }
}