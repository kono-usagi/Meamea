#include"DxLib.h"

namespace mea
{
    /// <summary>
/// マップオブジェクトクラス
/// </summary>
    class MapObject
    {
    public:
        MapObject();//コンストラクタ
        ~MapObject();//デストラクタ
        virtual void Update();//更新
        virtual void Draw();//描画
        virtual bool IsMove(int keytype);//動けるかどうか
    };

}
