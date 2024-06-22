#include "StoryUi.h"

namespace mea
{
    StoryUi::StoryUi()
    {
        //ファイル読み込み
    }

    StoryUi::~StoryUi()
    {
        //ファイルの解放?
    }

    void StoryUi::Update()
    {
        
    }

    void StoryUi::Draw()
    {
        //ファイルから1行読み込む.
        FileRead_gets(String, 256, "読み込んだファイル");
        //読み込んだ文字列の表示
        DrawString(0, 0, String, GetColor(255, 255, 255));
    }

    void StoryUi::LoadFont()
    {
        //フォントのロード
        LPCSTR  fontPath = "フォントファイル名.ttf";
        if (AddFontResourceEx(fontPath, FR_PRIVATE, NULL) > 0){}
        else
        {
            //フォント読み込みエラー表示
            MassageBox(NULL, "フォント読み込み失敗", "", MB_OK);
        }
        //フォント変更
        ChangeFont("フォント名", DX_CHARSET_DEFAULT);

        //文字サイズ変更
        SetFontSize(36);
    }
}