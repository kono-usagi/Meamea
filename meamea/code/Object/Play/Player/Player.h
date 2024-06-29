#include"DxLib.h"
#include"../MapObject/MapObject.h"

namespace mea
{
    class Player
    {
    public:
        //プレイヤー移動距離　50
        //チップサイズ　50
        //プレイヤー画像
        //プレイヤーの向き　左0　右1
        //プレイヤー画像の種類　5


        Player();//コンストラクタ
        ~Player();//デストラクタ

        virtual void Update();//更新
        virtual void Draw();//描画
        virtual void Move();//移動
    };
}