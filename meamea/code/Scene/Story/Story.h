#include"../../Scene/SceneBase/SceneBase.h"

namespace mea
{
    /// <summary>
    /// �V�i���I�p�[�g�̐i�s�Ǘ��N���X
    /// </summary>
    class Story :public SceneBase
    {
    public:
        Story();//�R���X�g���N�^
        ~Story();//�f�X�g���N�^

        SceneBase* Update(float deltaTime)override;
        void Draw()override;
    };
}