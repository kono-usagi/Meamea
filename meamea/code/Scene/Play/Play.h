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

        /// <summary>
        /// コンストラクタ
        /// </summary>
        Play();

        /// <summary>
        /// デストラクタ
        /// </summary>
        ~Play();
    private:

        /// <summary>
        /// シーン更新処理
        /// </summary>
        /// <param name="deltaTime">デルタタイム</param>
        /// <returns>次のフレームシーン</returns>
        SceneBase* Update(const float deltaTime)override;

        /// <summary>
        /// シーン更新処理
        /// </summary>
        void Draw()override;
    };
}