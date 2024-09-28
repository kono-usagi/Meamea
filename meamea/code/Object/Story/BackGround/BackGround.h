#pragma once
#include"DxLib.h"
#include"string"
#include"../../GameObject/GameObject.h"

namespace mea
{
    class BackGround: public GameObject
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
        void Update(float deltaTime)override;

        /// <summary>
        /// 描画処理
        /// </summary>
        void Draw()override;

    private:

        std::string mImgName[5];
        int BackGroundHandle;
        int NameFrameHandle;
    };
}