#pragma once
#include<DxLib.h>

namespace mea
{
    /// <summary>
    /// シーンの更新処理クラス
    /// </summary>
    class SceneBase
    {
    public:

        /// <summary>
        /// コンストラクタ
        /// </summary>
        SceneBase();

        /// <summary>
        /// デストラクタ
        /// </summary>
        ~SceneBase();

        /// <summary>
        /// シーン更新処理
        /// </summary>
        /// <param name="deltaTime">デルタタイム</param>
        /// <returns>次のフレームシーン</returns>
        virtual SceneBase* Update(const float deltaTime) = 0;

        /// <summary>
        /// シーン描画処理
        /// </summary>
        virtual void Draw() = 0;
    };
}