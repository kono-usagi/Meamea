#pragma once

namespace mea
{
    class PlayUi
    {
    public:
        /// <summary>
        /// �R���X�g���N�^
        /// </summary>
        PlayUi();

        /// <summary>
        /// �f�X�g���N�^
        /// </summary>
        ~PlayUi();

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
    };
}