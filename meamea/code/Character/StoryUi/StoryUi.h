#pragma once
#include "DxLib.h"

namespace mea
{
    class StoryUi
    {
    public:
        /// <summary>
        /// �R���X�g���N�^
        /// </summary>
        StoryUi();

        /// <summary>
        /// �f�X�g���N�^
        /// </summary>
        ~StoryUi();

        /// <summary>
        /// �X�V����
        /// </summary>
        void Update();

        /// <summary>
        /// �`�揈��
        /// </summary>
        void Draw();

        /// <summary>
        /// �t�H���g�̐ݒ�
        /// </summary>
        void LoadFont();

    private:
        char String[256];   //������ێ�
    };
}