#pragma once
#include"DxLib.h"

namespace mea
{
    class BackGround
    {
    public:
        /// <summary>
        /// コンストラクタ
        /// </summary>
        BackGround();

        /// <summary>
        /// デストラクタ
        /// </summary>
        ~BackGround();

        /// <summary>
        /// 更新処理
        /// </summary>
        void Update();

        /// <summary>
        /// 描画処理
        /// </summary>
        void Draw();
    };
}