#include"GameManager.h"


namespace mea
{
    GameManager::GameManager()//コンストラクタ
    {
        //Window初期化
        Window::Init();
        //GameSetting初期化
        GameSetting::Init();
    }
    GameManager::~GameManager()//デストラクタ
    {
        //処理なし
    }
    static void Finalize()//後処理
    {
        SceneManager->GameLoop();
   }
}