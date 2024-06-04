#include"DxLib.h"


namespace mea
{
    /// <summary>
    /// オブジェクトの親クラス
    /// </summary>
    class GameObject
    {
    public:
        int mX;//オブジェクトのx座標
        int mY;//オブジェクトのy座標
        GameObject();//コンストラクタ
        ~GameObject();//デストラクタ

        void Update();//更新
        void Draw();//描画
        void Input(float deltatime);//操作処理

    private:


    };
}