#pragma once
#include"DxLib.h"

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
        int step;

        int BackGround;   //一番奥の背景画像
        int Stage;        //mapの画像
    };
}