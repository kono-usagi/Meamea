#include "PlayUi.h"

namespace mea
{
    PlayUi::PlayUi()
        :GameObject(playObjectTag.UI)
    {
        //フォントのロード
        //mFontPath = "../../../../asset/Play/Font/castellar.ttf";
        //if (AddFontResourceEx(mFontPath, FR_PRIVATE, NULL) > 0) {}
        //else
        //{
        //    //フォント読み込みエラー表示
        //    MessageBox(NULL, "フォント読み込み失敗", "", MB_OK);
        //}

        //文字サイズ変更
        SetFontSize(100);
    }

    PlayUi::~PlayUi()
    {
        //フォントのアンロード
        //if(RemoveFontResourceEx(mFontPath, FR_PRIVATE, NULL)) { }
        //else
        //{
        //    //フォントのアンロードエラー表示   
        //    MessageBox(NULL, "remove failure", "", MB_OK);
        //}
    }

    void PlayUi::Update(float deltaTime)
    {
        Stage stage;
        //GameObj*player=GameObjectManager::GetFirstGameObj(ObjTag.Player);
        //現在の歩数取得
        step = stage.GetSteps();
    }

    void PlayUi::Draw()
    {
        //歩数の表示
        DrawFormatString(1600, 850, GetColor(255, 255, 255), "%d", step);
    }


}