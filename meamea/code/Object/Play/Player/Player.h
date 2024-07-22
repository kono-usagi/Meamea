#include"DxLib.h"
#include"../../GameObject/GameObject.h"

#include"../Stage/Stage.h"

#include"../../GameObject/PlayObjectTag.h"

namespace mea
{
    class Player:public GameObject
    {
    public:
        const int ANIM_PATTERN_NUM = 2;//アニメーションパターン数　右向きと左向き
        const int ANIM_TYPE_NUM = 5;//アニメーションの種類
       
        /// <summary>
        /// コンストラクタ
        /// </summary>
        Player();
        /// <summary>
        /// デストラクタ
        /// </summary>
        ~Player();

        /// <summary>
        /// 更新
        /// </summary>
        void Update(float deltaTime)override;
        /// <summary>
        /// 描画
        /// </summary>
        void Draw()override;
        /// <summary>
        /// 入力
        /// </summary>
        void Input()override;
        /// <summary>
        /// 動けるかどうか
        /// </summary>
        /// <returns></returns>
        bool isMove(int keyType)override;


        /// <summary>
        /// アニメーション処理
        /// </summary>
        /// <param name="deltaTime"></param>
        void Animation(float deltaTime);
        /// <summary>
        /// 移動
        /// </summary>
        /// <param name="keyType"></param>
        void Move(int keyType)override;

    private:
        //アニメーション定数
        const int ANIM_LEFT = 0;//左
        const int ANIM_RIGHT = 1;//右
        
        const float ANIM_FPS = 6.0f;//秒間6コマのアニメーション
        const int IMAGE_SIZE_X = 50;//画像たてサイズ
        const int IMAGE_SIZE_Y = 50;//画像よこサイズ

        const int PLY_DISTANCE = 50;//プレイヤー移動距離　50


        //アニメーション変数　メンバ変数？
        float animTimer;//アニメーションタイマー
        int animNowPattern;//現在のアニメパターン
        int animNowType;//現在のアニメ種類
        int animNowIndex;//アニメーション画像配列の添え字

        int mPlayerHandle[ANIM_PATTERN_NUM * ANIM_TYPE_NUM];//プレイヤーの画像ハンドル
    };
}