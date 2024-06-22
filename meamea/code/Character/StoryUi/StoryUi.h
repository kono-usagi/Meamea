#pragma once
#include "DxLib.h"

namespace mea
{
    class StoryUi
    {
    public:
        /// <summary>
        /// コンストラクタ
        /// </summary>
        StoryUi();

        /// <summary>
        /// デストラクタ
        /// </summary>
        ~StoryUi();

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

    private:
        char String[256];   //文字列保持
    };
}