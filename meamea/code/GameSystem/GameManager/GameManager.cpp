#include"GameManager.h"

namespace mea
{
    GameManager::GameManager()
    {
        //Log.txt‚ð¶¬‚µ‚È‚¢‚æ‚¤‚ÉÝ’è
        SetOutApplicationLogValidFlag(false);

        //Window‰Šú‰»
        Window::Init();
        //GameSetting‰Šú‰»
        GameSetting::Init();
    }

    GameManager::~GameManager()
    {
        //ˆ—‚È‚µ
    }

    void GameManager::Finalize()
    {
        SceneManager->GameLoop();
    }
}