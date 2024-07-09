#pragma once
#include"../../GameObject/GameObject.h"
#include<vector>

const int FACE_TYPE = 4;//表情差分数
const int POS_X = 0;//画像のx座標
const int POS_Y = 0;//画像のy座標

namespace mea
{
    class Character
    {
    public:
        /// <summary>
        /// コンストラクタ
        /// </summary>
        Character();
        /// <summary>
        /// デストラクタ
        /// </summary>
        ~Character();

        /// <summary>
        /// 更新
        /// </summary>
        void Update();
        /// <summary>
        /// 描画
        /// </summary>
        void Draw();

    private:
        
        int mCharacterHandle[FACE_TYPE];//0:Normal,1:Puzzeld,2:Like,3:Impatience
        
        int nowType;//現在の表情
        VECTOR mHandlePos;

    };

}
