#include"../../Scene/SceneBase/SceneBase.h"

namespace mea
{
    /// <summary>
    /// �^�C�g����ʂ̐i�s�Ǘ��N���X
    /// </summary>
    class Title :public SceneBase
    {
    public:
        Title();
        ~Title();

        SceneBase* Update(float deltaTime)override;
        void Draw()override;
    };
}