#pragma once

namespace mea
{
    class PlayUi
    {
    public:
        /// <summary>
        /// コンストラクタ
        /// </summary>
        PlayUi();

        /// <summary>
        /// デストラクタ
        /// </summary>
        ~PlayUi();

        /// <summary>
        /// 更新処理
        /// </summary>
        void Update();

        /// <summary>
        /// 描画処理
        /// </summary>
        void Draw();

        /// <summary>
        /// フォントの設定
        /// </summary>
        void LoadFont();
    };
}