#include"DxLib.h"
#include"Play.h"
#include"../../Object/GameObjectManager/PlayObjectManager/PlayObjectManager.h"

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
        PlayObjectManager::Update(deltaTime);
        return this;
    }

    void Play::Draw()
    {
        //すべてのゲームオブジェクトの描画
        PlayObjectManager::Draw();
        DrawGrid(3000, 30);
       
    }
}