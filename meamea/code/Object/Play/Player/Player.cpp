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
    
    bool Player::IsMove(int keytype)//動けるかどうか
    {
        //入力された方向のマップチップを見る
        //上
        //下
        //右
        //左
        
        //動く壁があるときmapobjectの関数呼ぶ
        
        //さらに横を見る
        
        //床または罠のとき移動

        return true;
    }

    //trueのとき動かす

}
