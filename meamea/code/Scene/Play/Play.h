#include"../../Scene/SceneBase/SceneBase.h"

namespace mea
{
    /// <summary>
    /// �Q�[���p�[�g�̐i�s�Ǘ��N���X
    /// </summary>
    class Play:public SceneBase
    {
    public:
        Play();//�R���X�g���N�^
        ~Play();//�f�X�g���N�^

        SceneBase* Update(float deltaTime)override;
        void Draw()override;
    };
}