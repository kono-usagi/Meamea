#include "GameSetting.h"

namespace mea
{
    //実体の初期化
    std::unique_ptr<GameSetting> GameSetting::mSingleton = nullptr;

    //コンストラクタ
    GameSetting::GameSetting()
    {
        BeforeLibInit();

        //DxLib初期化処理
        if (DxLib_Init() == -1)
        {
            //エラーが起きたら直ちに終了
            DebugBreak();
        }

        AfterLibInit();
    }

    //デストラクタ
    GameSetting::~GameSetting()
    {
        //ライブラリ終了
        DxLib_End();
    }

    //初期化処理
    void GameSetting::Init()
    {
        //実体に何も入っていなかったら
        if (!mSingleton)
        {
            //実体内にインスタンスを生成
            mSingleton.reset(new GameSetting);
        }
    }

    //ライブラリ初期化前の処理
    void GameSetting::BeforeLibInit()
    {
        //アンチエイリアスの設定
        SetFullSceneAntiAliasingMode(4, 2);
    }

    //ライブラリ初期化後の処理
    void GameSetting::AfterLibInit()
    {
        //描画先を裏画面に設定
        SetDrawScreen(DX_SCREEN_BACK);

        SetBackgroundColor(0, 0, 0);   // 背景色設定
    }
}