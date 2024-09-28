#pragma once
#include"../../Scene/SceneBase/SceneBase.h"


namespace mea
{
    /// <summary>
    /// タイトル画面の進行管理クラス
    /// </summary>
    class Title :public SceneBase
    {
    public:

        /// <summary>
        /// コンストラクタ
        /// </summary>
        Title();

        /// <summary>
        /// デストラクタ
        /// </summary>
        ~Title();

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