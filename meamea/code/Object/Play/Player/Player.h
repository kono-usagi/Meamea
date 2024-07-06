#include"DxLib.h"
#include"../../GameObject/GameObject.h"

namespace mea
{
    class Player:GameObject
    {
    public:
        const int PlyDistance = 50;//プレイヤー移動距離　50
        //const int ChipSize = 50;//チップサイズ　50
        const int PlyImg = 50;//プレイヤー画像
        const int PlyType = 5;//プレイヤー画像の種類　5
        int PlyDir = 0;//プレイヤーの向き　左0　右1
        


        Player();//コンストラクタ
        ~Player();//デストラクタ

        virtual void Update();//更新
        virtual void Draw();//描画
        virtual void Move(int keyType);//移動
    };
}