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
        GameObjectManager::Update(deltaTime);
        return this;
    }

    void End::Draw()
    {
        //すべてのゲームオブジェクトの描画
        GameObjectManager::Draw();
        DrawGrid(3000, 30);
    }
}