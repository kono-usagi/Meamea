#include"Play.h"
#include"DxLib.h"

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
        return this;
    }

    void Play::Draw()
    {
        //すべてのゲームオブジェクトの描画
        GameObjectManager::Draw();
        DrawGrid(3000, 30);
       
    }
}