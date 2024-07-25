#include "PlayUi.h"
#include "Player.h"

namespace mea
{
    PlayUi::PlayUi()
    {
        //画像の読み込み
        //BackGround = LoadGraph("");
        //Stage = LoadGraph("");

        //フォントのロード
        LPCSTR  fontPath = "test";　　//読み込むフォントファイルのパス
        if (AddFontResourceEx(fontPath, FR_PRIVATE, NULL) > 0) {}
        else
        {
            //フォント読み込みエラー表示
            MessegeBox(NULL, "フォント読み込み失敗", "", MB_OK);
        }

        //文字サイズ変更
        SetFontSize(36);
    }

    PlayUi::~PlayUi()
    {
        //画像の削除
        //DeleteGraph(BackGround);
        //DeleteGraph(Stage);

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
        //背景画像の表示
        //DrawGraph(0, 0, BackGround, TRUE);
        //DrawGraph(0, 0, Stage, TRUE);
        // 
        //歩数の表示
        DrawString(0,0,step,GetColor(255,255,255));
    }


}