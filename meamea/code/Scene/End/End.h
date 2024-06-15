#include"../../Scene/SceneBase/SceneBase.h"

namespace mea
{
    /// <summary>
    /// エンディング切り替え、進行管理クラス
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