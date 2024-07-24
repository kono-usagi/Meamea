#include"End.h"
#include"../../Scene/Title/Title.h"

namespace mea
{
    End::End()
    {
        //全オブジェクトの生成
    }
    End::~End()
    {
        //処理なし
    }
    SceneBase* End::Update(float deltaTime)
    {
        // すべてのゲームオブジェクトの更新
        GameObjectManager::Update(deltaTime);

        //以下タイトルに戻る処理 エンディング実装時検討
        /*if ()
        {
            GameObjectManager::ReleaseAllObj();
            return new Title;
        }*/

        return this;
    }

    void End::Draw()
    {
        //すべてのゲームオブジェクトの描画
        GameObjectManager::Draw();
        //DrawGrid(3000, 30);
    }
}