#include"../../Scene/SceneBase/SceneBase.h"

namespace mea
{
    /// <summary>
    /// シナリオパートの進行管理クラス
    /// </summary>
    class Story :public SceneBase
    {
    public:

        /// <summary>
        /// コンストラクタ
        /// </summary>
        Story();

        /// <summary>
        /// デストラクタ
        /// </summary>
        ~Story();

    private:

        /// <summary>
        /// シーン更新処理
        /// </summary>
        /// <param name="deltaTime">デルタタイム</param>
        /// <returns>次のフレームシーン</returns>
        SceneBase* Update(const float deltaTime)override;

        /// <summary>
        /// シーン描画処理
        /// </summary>
        void Draw()override;
    };
}