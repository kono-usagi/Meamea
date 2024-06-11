#include"../../Scene/SceneBase/SceneBase.h"
#include"../../GameSystem/GameManager/GameManager.h"

namespace mea
{
    /// <summary>
    /// ゲームパートの進行管理クラス
    /// </summary>
    class Play:public SceneBase
    {
    public:
        Play();//コンストラクタ
        ~Play();//デストラクタ

        SceneBase* Update(float deltaTime)override;
        void Draw()override;
    };
}