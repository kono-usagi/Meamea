#pragma once
#include "DxLib.h"
#include"string"

namespace mea
{
    class Ui
    {
    public:
        /// <summary>
        /// デストラクタ
        /// </summary>
        ~Ui();

        /// <summary>
        /// 初期設定
        /// </summary>
        void Init();

        /// <summary>
        /// 入力処理
        /// </summary>
        void Input();

        /// <summary>
        /// 更新処理
        /// </summary>
        void Update();

        /// <summary>
        /// 描画処理
        /// </summary>
        void Draw();


        LPCSTR  mFontPath;

        int mFileHandle;//現在のファイル入れるとこ
        std::string mFileName[5];//すべてのファイル名をここに保存
        char mNextFile[20];//次読み込むファイル
        int mKeyFlag = 0;//入力したら
        int mflg = 0;//最初の文字表示]

        char mTextStringFirst[256];//テキスト保存
        char mTextStringSecond[256];//テキスト保存
        char mNameString[256];//名前保存
        int mTextWidthFirst;//テキストの幅
        int mTextWidthSecond;//テキストの幅
        int mNameWidth;//名前の幅

        char mTextType[2] = "t";//テキストの種類判別用
        char mTType[2] = "t";//"t"保存
        char mQType[2] = "q";//"q"保存
        short Q = 0;//false = 0  true = 1

        int mChoiceImg;//選択をしていないほうの画像
        int mChoiceDecisionImg;//選択をしている方の画像
        int mChoiceButton;//選択している方の画像位置保存
        int mChoiceY = 900;//選択をしていないほうの画像位置
        int mChoiceDecisionY = 750;//選択をしている方の画像位置

        std::string ImgDataText[2];//画像ファイル名を入れる
    };
}