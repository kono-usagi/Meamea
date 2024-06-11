#include"End.h"
#include"DxLib.h"

namespace mea
{
    End::End()
    {

    }
    End::~End()
    {

    }
    SceneBase* End::Update(float deltaTime)
    {
        // すべてのゲームオブジェクトの更新
        My3dApp::GameObjectManager::Update(deltaTime);
        My3dApp::GameObjectManager::Collision();
        return this;
    }

    void End::Draw()
    {
        //すべてのゲームオブジェクトの描画
        My3dApp::GameObjectManager::Draw();
        My3dApp::DrawGrid(3000, 30);
    }
}