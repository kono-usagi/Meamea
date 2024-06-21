#include"DxLib.h"


namespace mea
{
    /// <summary>
    /// オブジェクトの親クラス
    /// </summary>
    class GameObject
    {
    public:
        //vectorに変更の可能性あり
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