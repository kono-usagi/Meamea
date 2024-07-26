#include"Story.h"

namespace mea
{
    Story::Story()
    {
        //現在のシーン
        GameObjectManager::NowSceneSet(StoryObjectTagAll);
        //全オブジェクト生成
        GameObjectManager::Entry(new BackGround);
        //キャラクター生成
        GameObjectManager::Entry(new Character);
        //プレイヤー生成
        GameObjectManager::Entry(new StoryPlayer);
        //Ui生成
        GameObjectManager::Entry(new Ui);
    }
    Story::~Story()
    {
        //処理なし
    }
    SceneBase* Story::Update(float deltaTime)
    {
        // すべてのゲームオブジェクトの更新
        GameObjectManager::Update(deltaTime);

        //以下プレイ中タイトルに戻る処理　メニュー実装時検討
        /*if ()
        {
            GameObjectManager::ReleaseAllObj();
            return new Title;
        }*/

        return this;
    }

    void Story::Draw()
    {
        //すべてのゲームオブジェクトの描画
        GameObjectManager::Draw();
        DrawFormatString(0, 0, GetColor(255, 255, 255), "story");
        //DrawGrid(3000, 30);
    }
}