#pragma once
#include"../../Scene/SceneBase/SceneBase.h"

namespace mea
{
    /// <summary>
    /// エンディング切り替え、進行管理クラス
    /// </summary>
    class End :public SceneBase
    {
    public:

        /// <summary>
        /// コンストラクタ
        /// </summary>
        End();

        /// <summary>
        /// デストラクタ
        /// </summary>
        ~End();

    private:
        /// <summary>
        /// シーン更新処理
        /// </summary>
        /// <param name="deltaTime">デルタタイム</param>
        /// <returns>次のフレームシーン</returns>
        SceneBase* Update(const float deltaTime)override;

        /// <summary>
        ///  シーン描画処理
        /// </summary>
        void Draw()override;
    };
}