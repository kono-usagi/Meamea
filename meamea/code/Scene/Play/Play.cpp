#include"Play.h"
#include"../../Scene/Title/Title.h"
#include"../../Object/GameObjectManager/GemeObjectManager.h"

namespace mea
{
    Play::Play()
    {
        //プレイヤー生成

        //ステージ生成

        //UI生成
    }
    Play::~Play()//コンストラクタ
    {

    }

    SceneBase* Play::Update(float deltaTime)
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

    void Play::Draw()
    {
        //すべてのゲームオブジェクトの描画
        GameObjectManager::Draw();
        DrawFormatString(0, 0, GetColor(255, 255, 255), "play");
        //DrawGrid(3000, 30);
    }
}