#include"DxLib.h"
#include"../../GameObject/GameObject.h"

const int MAPOBJECT_DISTANCE = 50;//オブジェクト移動距離


namespace mea
{
    /// <summary>
    /// マップオブジェクトクラス
    /// </summary>
    class MapObject:public GameObject
    {
    public:
        int mMapObjectHandle;//画像ハンドル
        
        MapObject();//コンストラクタ
        ~MapObject();//デストラクタ
        void Update();//更新
        void Draw();//描画
        void Move(int keyType);//動かす
    };

}
