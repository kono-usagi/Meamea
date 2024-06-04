#pragma once
#include <DxLib.h>
#include <memory>

namespace mea
{
    /// <summary>
    /// ゲームセッティング
    /// </summary>
    class GameSetting
    {
    public:
        /// <summary>
        /// コンストラクタ
        /// </summary>
        GameSetting();

        /// <summary>
        /// デストラクタ
        /// </summary>
        ~GameSetting();

        /// <summary>
        /// 初期化処理
        /// </summary>
        static void Init();

        /// <summary>
        /// ライブラリ初期化前の処理
        /// </summary>
        static void BeforeLibInit();

        /// <summary>
        /// ライブラリ初期化後の処理
        /// </summary>
        static void AfterLibInit();

    private:

        static std::unique_ptr<GameSetting> mSingleton;           //自身の実体

    };
}