#include "Ui.h"

namespace mea
{
    Ui::Ui()
    {
        //ファイル読み込み
        mFileHandle = FileRead_open("File名");
        //フォント読み込み
        mFontPath = "フォントファイル名.ttf";
    }

    Ui::~Ui()
    {
        //ファイルを閉じる
        FileRead_close(mFileHandle);

        //フォントのアンロード
        if (RemoveFontResourceEx(mFontPath, FR_PRIVATE, NULL)) {}
        else
        {
            //フォントのアンロードエラー表示   
            MessageBox(NULL, "フォントのアンロード失敗", "", MB_OK);
        }
    }

    void Ui::Update()
    {
        Draw();
    }

    void Ui::Draw()
    {
        while (FileRead_eof(mFileHandle) == 0)
        {
            if (CheckHitKey(KEY_INPUT_SPACE))
            {
                if (mKeyFlag == 0)
                {
                    if (mFlg == 0)
                    {
                        mFlg = 1;
                    }
                    else//最初の表示以外はここで前回の文字表示を消す
                    {
                        DrawString((342 - mNameWidth) / 2, 660, mNameString, GetColor(0, 0, 0));//前表示した名前を黒で塗りつぶす
                        DrawString((1920 - mTextWidth) / 2, 900, mTextString, GetColor(0, 0, 0));//前表示した文字を黒で塗りつぶす

                    }
                    FileRead_gets(mNameString, 256, mFileHandle);//一行読み込み
                    mNameWidth = GetDrawStringWidth(mNameString, -1);//文字列の幅を取得
                    DrawString((342 - mNameWidth) / 2, 660, mNameString, GetColor(255, 255, 255));//名前表示

                    FileRead_gets(mTextString, 256, mFileHandle);//一行読み込み
                    mTextWidth = GetDrawStringWidth(mTextString, -1);//文字列の幅を取得
                    DrawString((1920 - mTextWidth) / 2, 900, mTextString, GetColor(255, 255, 255));//セリフ表示

                    mKeyFlag = 1;

                }
            }
            else
            {
                mKeyFlag = 0;
            }
        }
        mFlg = 0;
    }

    void Ui::LoadFont()
    {
        //フォントのロード
        if (AddFontResourceEx(mFontPath, FR_PRIVATE, NULL) > 0) {}
        else
        {
            //フォント読み込みエラー表示
            MessageBox(NULL, "フォント読み込み失敗", "", MB_OK);
        }
        //フォント変更
        ChangeFont("フォント名", DX_CHARSET_DEFAULT);

        //文字サイズ変更
        SetFontSize(36);
    }
}