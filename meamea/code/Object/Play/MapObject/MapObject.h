#include"DxLib.h"
#include"../../GameObject/GameObject.h"

const int MAPOBJECT_DISTANCE = 50;//オブジェクト移動距離


namespace mea
{
    /// <summary>
    /// マップオブジェクトクラス
    /// </summary>
    class MapObject final:public GameObject
    {
    public:
        int mMapObjectHandle;//画像ハンドル
        
        /// <summary>
        /// コンストラクタ
        /// </summary>
        MapObject();
        /// <summary>
        /// デストラクタ
        /// </summary>
        ~MapObject()override;
        /// <summary>
        /// 更新
        /// </summary>
        void Update(float deltaTime)override;
        /// <summary>
        /// 描画
        /// </summary>
        void Draw()override;

        /// <summary>
       /// 移動処理
       /// </summary>
       /// <param name="keyType">入力されたキー</param>
        void Move(int keyType)override;

    private:
        const int FIRST_POS_X = 200;//初期X座標
        const int FIRST_POS_Y = 600;//初期Y座標
    };

}
