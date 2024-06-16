#include"DxLib.h"

namespace mea
{
    class Player
    {
    public:
        Player();//コンストラクタ
        ~Player();//デストラクタ

        void Update();//更新
        void Draw();//描画
        bool IsMove(int keytype);//動けるかどうか
    };
}