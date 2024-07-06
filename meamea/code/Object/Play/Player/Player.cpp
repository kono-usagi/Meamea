#include"Player.h"
#include"DxLib.h"

namespace mea
{
    Player::Player()//コンストラクタ
    {

    }
    Player::~Player()//デストラクタ
    {

    }

    void Player::Update()//更新
    {

    }
    void Player::Draw()//描画
    {
        
    }
    
    void Player::Move(int keyType)//動けるかどうか
    {
        if (keyType == 0)//上-Y
        {
            mPos.y -= PlyDistance;
        }
        
        if (keyType == 1)//下+Y
        {
            mPos.y += PlyDistance;
        }
        
        if (keyType == 2)//右+X
        {
            PlyDir = 1;//プレイヤー画像を右向きに変更
            mPos.x += PlyDistance;
        }
        if (keyType == 3)//左-X
        {
            PlyDir = 0;//プレイヤー画像を左向きに変更
            mPos.x -= PlyDistance;
        }
    }
}
