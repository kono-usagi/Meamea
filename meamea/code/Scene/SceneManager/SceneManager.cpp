#include<DxLib.h>
#include<assert.h>

#include "SceneManager.h"

namespace mea
{
    SceneManager::SceneManager()
        :mHoldScene(nullptr)
        , mFps(new FPS)
    {
        //����������
        GameObjectManager::Initialize();
        AssetManager::InitAssetManager();

        //���݂̃V�[�����^�C�g���ɐݒ�
        mNowScene.emplace(new Title);
    }

    SceneManager::~SceneManager()
    {
        //�����Ȃ�
    }

    void SceneManager::GameLoop()
    {
        // �G�X�P�[�v�L�[��������邩�E�C���h�E��������܂Ń��[�v
        while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
        {
            //�V�[���̃t���[
            UpdateScene();    //�X�V����
            ChangeScene();    //�؂�ւ�����
            DrawScene();      //�`�揈��
        }
    }

    void SceneManager::UpdateScene()
    {
        //���݂̃V�[�����X�V����mHoldScene�ɑ��
        mFps->Update();
        mHoldScene = mNowScene.top()->UpdateScene(mFps->GetDeltaTime());
    }

    void SceneManager::DrawScene()
    {
        ClearDrawScreen();					// ��ʂ��N���A
        mNowScene.top()->DrawScene();		// ���̃V�[����\��
        ScreenFlip();						// ����ʂ̓��e��\��ʂɔ��f
    }

    void SceneManager::ChangeScene()
    {
        // ���̃V�[���������ł͂Ȃ�������
        if (mNowScene.top().get() != mHoldScene)
        {
            //���݂̃V�[�����폜���A���̃V�[���ɐ؂�ւ�
            mNowScene.pop();
            mNowScene.emplace(mHoldScene);

            //�V�[���̒��g����̏ꍇ�v���O�����������I��
            assert(!mNowScene.empty());
        }
    }

}

