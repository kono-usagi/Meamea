#include "Ui.h"

namespace mea
{
    void Ui::Init()
    {
        //画像読み込み
        mChoiceImg = LoadGraph("img/Choice.PNG");
        mChoiceDecisionImg = LoadGraph("img/Choice_decision.PNG");

        //フォントのロード
        if (AddFontResourceEx(mFontPath, FR_PRIVATE, NULL) > 0) {}
        else
        {
            //フォント読み込みエラー
            MessageBox(NULL, "フォント読み込み失敗", "", MB_OK);
        }
        ChangeFont("BIZ UDPMincho", DX_CHARSET_DEFAULT);

        //ファイル読み込み
        mFileHandle = FileRead_open(mFileName[0]);

        //フォントサイズ設定
        SetFontSize(46);
    }

    Ui::~Ui()
    {
        //画像の削除
        DeleteGraph(mChoiceImg);
        DeleteGraph(mChoiceDecisionImg);

        //フォントのアンロード
        if (RemoveFontResourceEx(mFontPath, FR_PRIVATE, NULL)) {
        }
        else {
            MessageBox(NULL, "フォントのアンロードに失敗", "", MB_OK);
        }

        //ファイルを閉じる
        FileRead_close(mFileHandle);
    }

    void Ui::Input()
    {
        //テキストを送る入力
        if (CheckHitKey(KEY_INPUT_SPACE))
        {
            if (mKeyFlag == 0)
            {
                FileRead_gets(mTextType, 256, mFileHandle);//一行読み込み ここでテキストの種類が入る

                if (strcmp(mTextType, mTType) == 0)
                {
                    Q = 0;
                    FileRead_gets(mNameString, 256, mFileHandle);//一行読み込み
                    mNameWidth = GetDrawStringWidth(mNameString, -1);//文字列の幅を取得
                    if (mChoiceDecisionY == 750)
                    {
                        FileRead_gets(mTextStringFirst, 256, mFileHandle);//一行読み込み
                        mTextWidthFirst = GetDrawStringWidth(mTextStringFirst, -1);//文字列の幅を取得
                    }
                    else if (mChoiceDecisionY == 900)
                    {
                        FileRead_gets(mTextStringSecond, 256, mFileHandle);//一行読み込み
                        mTextWidthSecond = GetDrawStringWidth(mTextStringSecond, -1);//文字列の幅を取得
                    }
                }
                else if (strcmp(mTextType, mQType) == 0)
                {
                    Q = 1;
                    FileRead_gets(mNameString, 256, mFileHandle);//一行読み込み
                    mNameWidth = GetDrawStringWidth(mNameString, -1);//文字列の幅を取得
                    FileRead_gets(mTextStringFirst, 256, mFileHandle);//一行読み込み
                    mTextWidthFirst = GetDrawStringWidth(mTextStringFirst, -1);//文字列の幅を取得
                    FileRead_gets(mTextStringSecond, 256, mFileHandle);//一行読み込み
                    mTextWidthSecond = GetDrawStringWidth(mTextStringSecond, -1);//文字列の幅を取得
                }
                mKeyFlag = 1;
            }
        }
        else
        {
            mKeyFlag = 0;
        }

        if (Q == 1)
        {
            if (CheckHitKey(KEY_INPUT_UP))
            {
                if (mChoiceButton == 0)
                {
                    mChoiceButton = 1;
                    mChoiceY = 900;
                    mChoiceDecisionY = 750;
                }
            }
            else
            {
                mChoiceButton = 0;
            }

            if (CheckHitKey(KEY_INPUT_DOWN))
            {
                if (mChoiceButton == 0)
                {
                    mChoiceButton = 1;
                    mChoiceY = 750;
                    mChoiceDecisionY = 900;
                }
            }
            else
            {
                mChoiceButton = 0;
            }

            if (CheckHitKey(KEY_INPUT_RETURN))
            {
                Q = 0;
                if (mChoiceDecisionY == 750)
                {
                    FileRead_gets(mNextFile, 256, mFileHandle);
                    for (int i = 0; i < 3; i++)
                    {
                        if (strcmp(mNextFile, mFileName[i]) == 0)
                        {
                            FileRead_close(mFileHandle);
                            mFileHandle = FileRead_open(mFileName[i]);
                        }
                    }
                }
                else if (mChoiceDecisionY == 900)
                {
                    FileRead_gets(mNextFile, 256, mFileHandle);
                    FileRead_gets(mNextFile, 256, mFileHandle);
                    for (int i = 0; i < 3; i++)
                    {
                        if (strcmp(mNextFile, mFileName[i]) == 0)
                        {
                            FileRead_close(mFileHandle);
                            mFileHandle = FileRead_open(mFileName[i]);
                        }
                    }
                }
            }
            else
            {
                mChoiceButton = 0;
            }
        }

    }

    void Ui::Draw()
    {
        if (Q == 1)
        {
            DrawGraph((1920 - 1013) / 2, mChoiceY, mChoiceImg, TRUE);
            DrawGraph((1920 - 1013) / 2, mChoiceDecisionY, mChoiceDecisionImg, TRUE);
        }

        if (mflg == 0)
        {
            mflg = 1;
        }
        else
        {
            if (Q == 0)//前表示した名前を黒で塗りつぶす
            {
                if (mChoiceDecisionY == 750)
                {
                    DrawString(0, 0, mTextType, GetColor(0, 0, 0));
                    DrawString((342 - mNameWidth) / 2, 660, mNameString, GetColor(0, 0, 0));//前表示した名前を黒で塗りつぶす
                    DrawString((1920 - mTextWidthFirst) / 2, 900, mTextStringFirst, GetColor(0, 0, 0));//前表示した文字を黒で塗りつぶす
                }
            }
            else
            {
                if (mChoiceDecisionY == 900)
                {
                    DrawString(0, 0, mTextType, GetColor(0, 0, 0));
                    DrawString((342 - mNameWidth) / 2, 660, mNameString, GetColor(0, 0, 0));
                    DrawString((1920 - mTextWidthFirst) / 2, 780, mTextStringFirst, GetColor(0, 0, 0));
                    DrawString((1920 - mTextWidthSecond) / 2, 930, mTextStringSecond, GetColor(0, 0, 0));
                }
            }
            DrawString(0, 0, mTextType, GetColor(255, 255, 255));//表示

            if (Q == 0)//文字の表示
            {
                DrawString((342 - mNameWidth) / 2, 660, mNameString, GetColor(255, 255, 255));//名前表示
                if (mChoiceDecisionY == 750)
                {
                    DrawString((1920 - mTextWidthFirst) / 2, 900, mTextStringFirst, GetColor(255, 255, 255));//セリフ表示
                }
                else if (mChoiceDecisionY == 900)
                {
                    DrawString((1920 - mTextWidthSecond) / 2, 900, mTextStringSecond, GetColor(255, 255, 255));//セリフ表示
                }
                //ChoiceDecisionY = 750;
            }
            else
            {
                DrawString((342 - mNameWidth) / 2, 660, mNameString, GetColor(255, 255, 255));//名前表示
                DrawString((1920 - mTextWidthFirst) / 2, 780, mTextStringFirst, GetColor(255, 255, 255));//セリフ表示
                DrawString((1920 - mTextWidthSecond) / 2, 930, mTextStringSecond, GetColor(255, 255, 255));//セリフ表示
            }
        }
    }

    void Ui::Update()
    {
        Input();
        Draw();
    }
}