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

        int FileHandle;//現在のファイル入れるとこ
        char FileName[3][20] = { "Lilian_Talk1.txt","Lilian_Choice1A.txt","Lilian_Choice1B.txt" };//すべてのファイル名をここに保存
        char NextFile[20];//次読み込むファイル
        int KeyFlag = 0;//入力したら
        int flg = 0;//最初の文字表示]

        char TextString1[256];//テキスト保存
        char TextString2[256];//テキスト保存
        char NameString[256];//名前保存
        int TextWidth1;//テキストの幅
        int TextWidth2;//テキストの幅
        int NameWidth;//名前の幅

        char TextFlag[2] = "t";//テキストの種類判別用

        char TFlag[2] = "t";//"t"保存
        char QFlag[2] = "q";//"q"保存
        bool Q = false;

        int ChoiceImg;//選択をしていないほうの画像
        int ChoiceDecisionImg;//選択をしている方の画像
        int ChoiceButton;//今どちらを選択しているかを画像の位置保存
        int ChoiceY = 900;//選択をしていないほうの画像位置
        int ChoiceDecisionY = 750;//選択をしている方の画像位置


    };
}