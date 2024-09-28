#pragma once
#include"DxLib.h"
#include"../Stage/Stage.h"
#include"../../GameObject/GameObject.h"

namespace mea
{
    class PlayUi:public GameObject
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
        void Update(float deltaTime)override;

        /// <summary>
        /// 描画処理
        /// </summary>
        void Draw()override;


    private:
        int step=0;   //歩数

        LPCSTR  mFontPath;
    };
}