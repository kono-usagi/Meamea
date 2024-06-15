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
        GameObjectManager::Update(deltaTime);
        return this;
    }

    void Story::Draw()
    {
        //すべてのゲームオブジェクトの描画
        GameObjectManager::Draw();
        DrawGrid(3000, 30);
    }
}