#pragma once
#include "DxLib.h"
#include"string"

namespace mea
{
    class Ui
    {
    public:
        /// <summary>
        /// コンストラクタ
        /// </summary>
        Ui();

        /// <summary>
        /// デストラクタ
        /// </summary>
        ~Ui();

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

        LPCSTR  mFontPath;
        int mFileHandle;//ファイルの読み込み先
        char mTextString[256];//一行分のセリフ
        char mNameString[256];//話しているキャラクターの名前
        int mTextWidth = 0;//セリフの幅
        int mNameWidth = 0;//名前の幅
        int mKeyFlag = 0;//入力した瞬間か
        int mFlg = 0;


    };
}