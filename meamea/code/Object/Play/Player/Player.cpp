#include"Player.h"
#include"DxLib.h"

namespace mea
{
    Player::Player()
        :GameObject(PlayObjTag.PLAYER)//コンストラクタ
    {
        //アニメーション用数値の初期化
        animTimer = 0.0f;
        animNowType = ANIM_LEFT;//左向きアニメーション種類
        animNowPattern = 1;
        animNowIndex = 0;
        //メア(プレイヤー)の画像読み込み
        LoadDivGraph("Mea", ANIM_PATTERN_NUM * ANIM_TYPE_NUM, ANIM_PATTERN_NUM, ANIM_TYPE_NUM, IMAGE_SIZE_X, IMAGE_SIZE_Y, mPlayerHandle);
    }
   
    Player::~Player()//デストラクタ
    {
        //画像削除
        for (int i = 0; i < ANIM_PATTERN_NUM * ANIM_TYPE_NUM; i++)
        {
            DeleteGraph(mPlayerHandle[i]);
        }
    }

    void Player::Update(float deltaTime)//更新
    {
        Animation(1.0f / 60.0f);
        Draw();
    }
    void Player::Draw()//描画
    {
        DrawGraph(mPos.x, mPos.y, mPlayerHandle[animNowIndex], TRUE);
    }

    void Player::Animation(float deltaTime)
    {
        animTimer += deltaTime;
        if (animTimer > 1.0f / ANIM_FPS)
        {
            animTimer = 0.0f;
            animNowPattern++;
            animNowPattern %= ANIM_PATTERN_NUM;
        }
        animNowIndex = animNowPattern + animNowType * ANIM_PATTERN_NUM;
    }

    void Player::Input()
    {
        if (CheckHitKey(KEY_INPUT_UP) == 1)//上
        {
            
        }
        if (CheckHitKey(KEY_INPUT_DOWN) == 1)//下
        {
            
        }
        if (CheckHitKey(KEY_INPUT_RIGHT) == 1)//右+X
        {
            
        }
        if (CheckHitKey(KEY_INPUT_LEFT) == 1)//左-X
        {
            
        }
    }
    
    void Player::Move(int keyType)//動けるかどうか
    {
        if (CheckHitKey(KEY_INPUT_UP)==1)//上-Y
        {
            mPos.y -= PLY_DISTANCE;
        }
        if (CheckHitKey(KEY_INPUT_DOWN) == 1)//下+Y
        {
            mPos.y += PLY_DISTANCE;
        }
        if (CheckHitKey(KEY_INPUT_RIGHT) == 1)//右+X
        {
            animNowType = ANIM_LEFT;//プレイヤー画像を右向きに変更
            mPos.x += PLY_DISTANCE;
        }
        if (CheckHitKey(KEY_INPUT_LEFT) == 1)//左-X
        {
            animNowType = ANIM_RIGHT;//プレイヤー画像を左向きに変更
            mPos.x -= PLY_DISTANCE;
        }
    }
}
