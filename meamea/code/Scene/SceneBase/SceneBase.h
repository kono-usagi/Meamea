#include"DxLib.h"

namespace mea
{
    /// <summary>
    /// シーンの更新処理クラス
    /// </summary>
    class SceneBase
    {
    public:
        SceneBase();//コンストラクタ
        ~SceneBase();//デストラクタ

        /// <summary>
        /// シーン更新処理
        /// </summary>
        /// <param name="deltaTime">:デルタタイム</param>
        virtual SceneBase* Update(float deltaTime) = 0;

        /// <summary>
        /// シーン描画処理
        /// </summary>
        virtual void Draw() = 0;

    private:


    };
}