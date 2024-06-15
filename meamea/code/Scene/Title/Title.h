#include"../../Scene/SceneBase/SceneBase.h"

namespace mea
{
    /// <summary>
    /// タイトル画面の進行管理クラス
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