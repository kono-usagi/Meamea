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
        GameObjectManager::Update(deltaTime);
        return this;
    }

    void Story::Draw()
    {
        //���ׂẴQ�[���I�u�W�F�N�g�̕`��
        GameObjectManager::Draw();
        DrawGrid(3000, 30);
    }
}