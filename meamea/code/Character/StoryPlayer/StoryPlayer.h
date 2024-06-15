#pragma once
#include "../GameObject/GameObject.h"

namespace mea
{
    class StoryPlayer /*final :public GameObject*/
    {
    public:

        /// <summary>
        /// コンストラクタ
        /// </summary>
        StoryPlayer();

        /// <summary>
        /// デストラクタ
        /// </summary>
        ~StoryPlayer();

        /// <summary>
        /// 更新処理
        /// </summary>
        void Update()/*override*/;

        /// <summary>
        /// 描画処理
        /// </summary>
        void Draw()/*override*/;

        /// <summary>
        /// キー操作
        /// </summary>
        void MoveByKey();

    private:

        int mFlameEffect[1];//選択画像

        int mUp;            //選択指定
        int mDown;          //選択指定

        VECTOR mUppos;  //画像座標
        VECTOR mDownpos;
    };

}