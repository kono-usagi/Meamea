#include"MapObject.h"

namespace mea
{
    MapObject::MapObject()
    {

    }
    MapObject::~MapObject()
    {

    }
    void MapObject::Update()//更新
    {

    }
    void MapObject::Draw()//描画
    {

    }

    bool MapObject::IsMove(int keytype)//動けるかどうか
    {
        //入力された方向のマップチップを見る
        //上
        //下
        //右
        //左

        //床または罠のとき移動

        return true;
    }

    //trueのとき動かす
}