#include"../../Scene/SceneBase/SceneBase.h"

#include"../../Object/GameObject/StoryObjectTag.h"
#include"../../Object/GameObjectManager/GameObjectManager.h"

#include"../../Object/Story/BackGround/BackGround.h"
#include"../../Object/Story/Character/Character.h"
#include"../../Object/Story/Player/StoryPlayer.h"
#include"../../Object/Story/UI/Ui.h"

namespace mea
{
    /// <summary>
    /// シナリオパートの進行管理クラス
    /// </summary>
    class Story :public SceneBase
    {
    public:

        /// <summary>
        /// コンストラクタ
        /// </summary>
        Story();

        /// <summary>
        /// デストラクタ
        /// </summary>
        ~Story();

    private:

        /// <summary>
        /// シーン更新処理
        /// </summary>
        /// <param name="deltaTime">デルタタイム</param>
        /// <returns>次のフレームシーン</returns>
        SceneBase* Update(const float deltaTime)override;

        /// <summary>
        /// シーン描画処理
        /// </summary>
        void Draw()override;
    };
}