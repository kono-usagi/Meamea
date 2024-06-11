#pragma once
#include <DxLib.h>
#include <memory>

namespace mea
{
    /// <summary>
    /// ウィンドウ
    /// </summary>
    class Window
    {
    public:
        /// <summary>
        /// デストラクタ
        /// </summary>
        ~Window();

        /// <summary>
        /// 初期化処理
        /// </summary>
        static void Init();

        /// <summary>
        /// ウィンドウサイズ取得処理
        /// </summary>
        /// <returns>ウィンドウサイズ</returns>
        static const VECTOR GetWindowSize() { return mSingleton->WINDOW_SIZE; }

    private:

        /// <summary>
        /// コンストラクタ(シングルトン)
        /// </summary>
        Window();

        const VECTOR WINDOW_SIZE = VGet(1920, 1080, 0);     //ウィンドウサイズ
        static std::unique_ptr<Window> mSingleton;           //自身の実体
        const int COLOR_BIT = 16;                           //カラービット
    };
}
