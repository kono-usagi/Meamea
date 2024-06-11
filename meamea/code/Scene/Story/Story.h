#include"../../Scene/SceneBase/SceneBase.h"

namespace mea
{
    /// <summary>
    /// シナリオパートの進行管理クラス
    /// </summary>
    class Story :public SceneBase
    {
    public:
        Story();//コンストラクタ
        ~Story();//デストラクタ

        SceneBase* Update(float deltaTime)override;
        void Draw()override;
    };
}