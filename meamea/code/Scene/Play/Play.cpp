#include"Play.h"

namespace mea
{
    Play::Play()
    {
        //現在のシーン
        GameObjectManager::NowSceneSet(PlayObjectTagAll);
        //プレイヤー生成
        GameObjectManager::Entry(new Player);
        //ステージ生成
        GameObjectManager::Entry(new Stage);
        //マップオブジェクト生成
        GameObjectManager::Entry(new MapObject);
        //UI生成
        GameObjectManager::Entry(new PlayUi);
    }
    Play::~Play()
    {
    }

    SceneBase* Play::Update(float deltaTime)
    {
        // すべてのゲームオブジェクトの更新
        GameObjectManager::Update(deltaTime);

        GameObjectManager::Draw();

        //歩数0でゲーム終了
        if (GameObjectManager::GetGameOver())
        {
            GameObjectManager::ReleaseAllObj();
            return new Play;
        }

        return this;
    }

    void Play::Draw()
    {
        //すべてのゲームオブジェクトの描画
        GameObjectManager::Draw();
        DrawFormatString(0, 0, GetColor(255, 255, 255), "play");
        //DrawGrid(3000, 30);
    }
}