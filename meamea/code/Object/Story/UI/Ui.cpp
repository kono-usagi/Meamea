#include "Ui.h"

namespace mea
{
    void Ui::Init()
    {
        //画像読み込み
        ChoiceImg = LoadGraph("img/Choice.PNG");
        ChoiceDecisionImg = LoadGraph("img/Choice_decision.PNG");

        //フォントのロード
        if (AddFontResourceEx(mFontPath, FR_PRIVATE, NULL) > 0) {}
        else
        {
            //フォント読み込みエラー
            MessageBox(NULL, "フォント読み込み失敗", "", MB_OK);
        }
        ChangeFont("BIZ UDPMincho", DX_CHARSET_DEFAULT);

        //ファイル読み込み
        FileHandle = FileRead_open(FileName[0]);

        //フォントサイズ設定
        SetFontSize(46);
    }

    Ui::~Ui()
    {
        //画像の削除
        DeleteGraph(ChoiceImg);
        DeleteGraph(ChoiceDecisionImg);

        //フォントのアンロード
        if (RemoveFontResourceEx(mFontPath, FR_PRIVATE, NULL)) {
        }
        else {
            MessageBox(NULL, "フォントのアンロードに失敗", "", MB_OK);
        }

        //ファイルを閉じる
        FileRead_close(FileHandle);
    }

    void Ui::Input()
    {
        //テキストを送る入力
        if (CheckHitKey(KEY_INPUT_SPACE))
        {
            if (KeyFlag == 0)
            {
                FileRead_gets(TextFlag, 256, FileHandle);//一行読み込み ここでテキストの種類が入る

                if (strcmp(TextFlag, TFlag) == 0)
                {
                    Q = false;
                    FileRead_gets(NameString, 256, FileHandle);//一行読み込み
                    NameWidth = GetDrawStringWidth(NameString, -1);//文字列の幅を取得
                    if (ChoiceDecisionY == 750)
                    {
                        FileRead_gets(TextString1, 256, FileHandle);//一行読み込み
                        TextWidth1 = GetDrawStringWidth(TextString1, -1);//文字列の幅を取得
                    }
                    else if (ChoiceDecisionY == 900)
                    {
                        FileRead_gets(TextString2, 256, FileHandle);//一行読み込み
                        TextWidth2 = GetDrawStringWidth(TextString2, -1);//文字列の幅を取得
                    }
                }
                else if (strcmp(TextFlag, QFlag) == 0)
                {
                    Q = true;
                    FileRead_gets(NameString, 256, FileHandle);//一行読み込み
                    NameWidth = GetDrawStringWidth(NameString, -1);//文字列の幅を取得
                    FileRead_gets(TextString1, 256, FileHandle);//一行読み込み
                    TextWidth1 = GetDrawStringWidth(TextString1, -1);//文字列の幅を取得
                    FileRead_gets(TextString2, 256, FileHandle);//一行読み込み
                    TextWidth2 = GetDrawStringWidth(TextString2, -1);//文字列の幅を取得
                }
                KeyFlag = 1;
            }
        }
        else
        {
            KeyFlag = 0;
        }

        if (Q == true)
        {
            if (CheckHitKey(KEY_INPUT_UP))
            {
                if (ChoiceButton == 0)
                {
                    ChoiceButton = 1;
                    ChoiceY = 900;
                    ChoiceDecisionY = 750;
                }
            }
            else
            {
                ChoiceButton = 0;
            }

            if (CheckHitKey(KEY_INPUT_DOWN))
            {
                if (ChoiceButton == 0)
                {
                    ChoiceButton = 1;
                    ChoiceY = 750;
                    ChoiceDecisionY = 900;
                }
            }
            else
            {
                ChoiceButton = 0;
            }

            if (CheckHitKey(KEY_INPUT_RETURN))
            {
                Q = false;
                if (ChoiceDecisionY == 750)
                {
                    FileRead_gets(NextFile, 256, FileHandle);
                    for (int i = 0; i < 3; i++)
                    {
                        if (strcmp(NextFile, FileName[i]) == 0)
                        {
                            FileRead_close(FileHandle);
                            FileHandle = FileRead_open(FileName[i]);
                        }
                    }
                }
                else if (ChoiceDecisionY == 900)
                {
                    FileRead_gets(NextFile, 256, FileHandle);
                    FileRead_gets(NextFile, 256, FileHandle);
                    for (int i = 0; i < 3; i++)
                    {
                        if (strcmp(NextFile, FileName[i]) == 0)
                        {
                            FileRead_close(FileHandle);
                            FileHandle = FileRead_open(FileName[i]);
                        }
                    }
                }
            }
            else
            {
                ChoiceButton = 0;
            }
        }

    }

    void Ui::Draw()
    {
        if (Q == true)
        {
            DrawGraph((1920 - 1013) / 2, ChoiceY, ChoiceImg, TRUE);
            DrawGraph((1920 - 1013) / 2, ChoiceDecisionY, ChoiceDecisionImg, TRUE);
        }

        if (flg == 0)
        {
            flg = 1;
        }
        else
        {
            if (Q == false)//前表示した名前を黒で塗りつぶす
            {
                if (ChoiceDecisionY == 750)
                {
                    DrawString(0, 0, TextFlag, GetColor(0, 0, 0));
                    DrawString((342 - NameWidth) / 2, 660, NameString, GetColor(0, 0, 0));//前表示した名前を黒で塗りつぶす
                    DrawString((1920 - TextWidth1) / 2, 900, TextString1, GetColor(0, 0, 0));//前表示した文字を黒で塗りつぶす
                }
            }
            else
            {
                if (ChoiceDecisionY == 900)
                {
                    DrawString(0, 0, TextFlag, GetColor(0, 0, 0));
                    DrawString((342 - NameWidth) / 2, 660, NameString, GetColor(0, 0, 0));
                    DrawString((1920 - TextWidth1) / 2, 780, TextString1, GetColor(0, 0, 0));
                    DrawString((1920 - TextWidth2) / 2, 930, TextString2, GetColor(0, 0, 0));
                }
            }
            DrawString(0, 0, TextFlag, GetColor(255, 255, 255));//表示

            if (Q == false)//文字の表示
            {
                DrawString((342 - NameWidth) / 2, 660, NameString, GetColor(255, 255, 255));//名前表示
                if (ChoiceDecisionY == 750)
                {
                    DrawString((1920 - TextWidth1) / 2, 900, TextString1, GetColor(255, 255, 255));//セリフ表示
                }
                else if (ChoiceDecisionY == 900)
                {
                    DrawString((1920 - TextWidth2) / 2, 900, TextString2, GetColor(255, 255, 255));//セリフ表示
                }
                //ChoiceDecisionY = 750;
            }
            else
            {
                DrawString((342 - NameWidth) / 2, 660, NameString, GetColor(255, 255, 255));//名前表示
                DrawString((1920 - TextWidth1) / 2, 780, TextString1, GetColor(255, 255, 255));//セリフ表示
                DrawString((1920 - TextWidth2) / 2, 930, TextString2, GetColor(255, 255, 255));//セリフ表示
            }
        }
    }

    void Ui::Update()
    {
        Input();
        Draw();
    }
}