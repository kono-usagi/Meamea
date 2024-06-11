#include"Story.h"
#include"DxLib.h"

namespace mea
{
    Story::Story()//コンストラクタ
    {

    }
    Story::~Story()//デストラクタ
    {

    }
    SceneBase* Story::Update(float deltaTime)
    {
        // すべてのゲームオブジェクトの更新
        My3dApp::GameObjectManager::Update(deltaTime);
        My3dApp::GameObjectManager::Collision();
        return this;
    }

    void Story::Draw()
    {
        //すべてのゲームオブジェクトの描画
        My3dApp::GameObjectManager::Draw();
        My3dApp::DrawGrid(3000, 30);
    }
}