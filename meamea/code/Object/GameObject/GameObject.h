#include"DxLib.h"
#include"PlayObjectTag.h"


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
        GameObject(PlayObjectTag tag);//コンストラクタ
        //GameObject(PlayObjectTag tag, VECTOR pos);//コンストラクタ

        virtual ~GameObject();//デストラクタ

        virtual void Update();//更新
        virtual void Draw();//描画
        virtual void Input(float deltatime);//操作処理

    private:


    };
}