#include"DxLib.h"
#include"../MapObject/MapObject.h"

namespace mea
{
    class Player
    {
    public:
        Player();//コンストラクタ
        ~Player();//デストラクタ

        virtual void Update();//更新
        virtual void Draw();//描画
        virtual bool IsMove(int keytype);//動けるかどうか
    };
}