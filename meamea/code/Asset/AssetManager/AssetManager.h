#pragma once
#include<memory>

#include "../Img/Img.h"
#include "../Sound/Sound.h"

namespace mea
{
    /// <summary>
    /// �A�Z�b�g�Ǘ�
    /// </summary>
    class AssetManager final
    {
    public:

        /// <summary>
        /// �R���X�g���N�^
        /// </summary>
        AssetManager();

        /// <summary>
        /// �f�X�g���N�^
        /// </summary>
        ~AssetManager();
    private:

        std::unique_ptr<class Img> img;         //img�̎���
        std::unique_ptr<class Sound> sound;     //�T�E���h�̎���
    };
}
