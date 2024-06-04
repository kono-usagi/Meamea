#include<DxLib.h>
#include<assert.h>

#include "SceneManager.h"

namespace mea
{
    SceneManager::SceneManager()
        :mHoldScene(nullptr)
        , mFps(new FPS)
    {
        //初期化処理
        GameObjectManager::Initialize();
        AssetManager::InitAssetManager();

        //現在のシーンをタイトルに設定
        mNowScene.emplace(new Title);
    }

    SceneManager::~SceneManager()
    {
        //処理なし
    }

    void SceneManager::GameLoop()
    {
        // エスケープキーが押されるかウインドウが閉じられるまでループ
        while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
        {
            //シーンのフロー
            UpdateScene();    //更新処理
            ChangeScene();    //切り替え処理
            DrawScene();      //描画処理
        }
    }

    void SceneManager::UpdateScene()
    {
        //現在のシーンを更新してmHoldSceneに代入
        mFps->Update();
        mHoldScene = mNowScene.top()->UpdateScene(mFps->GetDeltaTime());
    }

    void SceneManager::DrawScene()
    {
        ClearDrawScreen();					// 画面をクリア
        mNowScene.top()->DrawScene();		// 次のシーンを表示
        ScreenFlip();						// 裏画面の内容を表画面に反映
    }

    void SceneManager::ChangeScene()
    {
        // 次のシーンが同じではなかったら
        if (mNowScene.top().get() != mHoldScene)
        {
            //現在のシーンを削除し、次のシーンに切り替え
            mNowScene.pop();
            mNowScene.emplace(mHoldScene);

            //シーンの中身が空の場合プログラムを強制終了
            assert(!mNowScene.empty());
        }
    }

}

