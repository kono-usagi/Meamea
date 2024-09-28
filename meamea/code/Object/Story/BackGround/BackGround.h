#pragma once
#include"DxLib.h"
#include"string"

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

    private:

        std::string mImgName[5];
        int BackGroundHandle;
        int NameFrameHandle;
    };
}