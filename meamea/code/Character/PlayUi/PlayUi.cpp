#include "PlayUi.h"
#include "Player.h"

namespace mea
{
    PlayUi::PlayUi()
    {

    }

    PlayUi::~PlayUi()
    {
        //フォントのアンロード
        if(RemoveFontResourceEx(fontPath, FR_PRIVATE, NULL)) { }
        else
        {
            //フォントのアンロードエラー表示   
            MessageBox(NULL, "remove failure", "", MB_OK);
        }
    }

    void PlayUi::Update()
    {
        GameObj*player=GameObjectManager::GetFirstGameObj(ObjTag.Player);
        //現在の歩数取得
        step = player->
    }

    void PlayUi::Draw()
    {
        //歩数の表示
        DrawString(0,0,step,GetColor(255,255,255));
    }

    void PlayUi::LoadFont()
    {
        LPCSTR  fontPath = "test.ttf";　　//読み込むフォントファイルのパス
        if (AddFontResourceEx(fontPath, FR_PRIVATE, NULL) > 0) { }
        else
        {
            //フォント読み込みエラー表示
            MessegeBox(NULL, "フォント読み込み失敗", "", MB_OK);
        }
        //フォント変更
        ChangeFont("フォント名", DX_CHARSET_DEFAULT);
        //文字サイズ変更
        SetFontSize(36);
    }
}