#pragma once
#include"DxLib.h"

namespace mea
{
    class BackGround
    {
    public:
        /// <summary>
        /// �R���X�g���N�^
        /// </summary>
        BackGround();

        /// <summary>
        /// �f�X�g���N�^
        /// </summary>
        ~BackGround();

        /// <summary>
        /// �X�V����
        /// </summary>
        void Update();

        /// <summary>
        /// �`�揈��
        /// </summary>
        void Draw();
    };
}