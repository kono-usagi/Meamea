#include"DxLib.h"

namespace mea
{
    /// <summary>
    /// �V�[���̍X�V�����N���X
    /// </summary>
    class SceneBase
    {
    public:
        SceneBase();//�R���X�g���N�^
        ~SceneBase();//�f�X�g���N�^

        /// <summary>
        /// �V�[���X�V����
        /// </summary>
        /// <param name="deltaTime">:�f���^�^�C��</param>
        virtual SceneBase* Update(float deltaTime) = 0;

        /// <summary>
        /// �V�[���`�揈��
        /// </summary>
        virtual void Draw() = 0;

    private:


    };
}