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
        My3dApp::GameObjectManager::Update(deltaTime);
        My3dApp::GameObjectManager::Collision();
        return this;
    }

    void Play::Draw()
    {
        //すべてのゲームオブジェクトの描画
        My3dApp::GameObjectManager::Draw();
        My3dApp::DrawGrid(3000, 30);

       
    }
}