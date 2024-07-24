#include"DxLib.h"
#include"../Window/Window.h"
#include"../GamseSetting/GameSetting.h"
#include"../../Scene/SceneManager/SceneManager.h"

#include<memory>

namespace mea
{
    /// <summary>
    /// ゲーム全体の進行管理クラス
    /// </summary>
    class GameManager
    {
    public:

        /// <summary>
        /// コンストラクタ
        /// </summary>
        GameManager();

        /// <summary>
        /// デストラクタ
        /// </summary>
        ~GameManager();

        /// <summary>
        /// 後処理
        /// </summary>
        void Finalize();

    private:

        //シーンマネージャー
        std::unique_ptr<class SceneManager> sceneManager;
    };
}