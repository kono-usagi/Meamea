#include"../../Scene/SceneBase/SceneBase.h"

namespace mea
{
    /// <summary>
    /// �G���f�B���O�؂�ւ��A�i�s�Ǘ��N���X
    /// </summary>
    class End :public SceneBase
    {
    public:
        End();
        ~End();

        SceneBase* Update(float deltaTime)override;
        void Draw()override;
    };
}