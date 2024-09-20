#pragma once
#include"DxLib.h"
#include"../Stage/Stage.h"

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


    private:
        int step=0;   //歩数

        LPCSTR  mFontPath;
    };
}