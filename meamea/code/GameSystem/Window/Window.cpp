#include "Window.h"

namespace mea
{
    //実体を空に
    std::unique_ptr<Window> Window::mSingleton = nullptr;

    //コンストラクタ
    Window::Window()
    {
        //TRUE ウィンドウモードで起動
        ChangeWindowMode(TRUE);
        // 画面モードを設定
        SetGraphMode(static_cast<int>(WINDOW_SIZE.x), static_cast<int>(WINDOW_SIZE.y), COLOR_BIT);
        //PCの設定でウィンドウサイズの比率を変更してもプログラム内の設定サイズのまま表示される
        SetWindowSizeExtendRate(1.0);
        //ウィンドウのタイトルを変更できる
        SetMainWindowText("MeaMea");
    }

    //デストラクタ
    Window::~Window()
    {
        //処理なし
    }

    //初期化
    void Window::Init()
    {
        //実体に何も入っていなかったら
        if (!mSingleton)
        {
            //実体内にインスタンスを生成
            mSingleton.reset(new Window);
        }
    }
}
