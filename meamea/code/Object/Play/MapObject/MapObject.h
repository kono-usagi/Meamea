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
        ~MapObject();
        /// <summary>
        /// 更新
        /// </summary>
        void Update();
        /// <summary>
        /// 描画
        /// </summary>
        void Draw();
        /// <summary>
        /// 動かす
        /// </summary>
        void Move(int keyType);

    private:
        const int FIRST_POS_X = 200;//初期X座標
        const int FIRST_POS_Y = 600;//初期Y座標
    };

}
