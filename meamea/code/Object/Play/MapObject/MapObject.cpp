#include"MapObject.h"

namespace mea
{
    MapObject::MapObject()
        :GameObject(PlayObjTag.MAPOBJECT)
    {
        mMapObjectHandle = LoadGraph("");
    }
    MapObject::~MapObject()
    {
        DeleteGraph(mMapObjectHandle);
    }
    void MapObject::Update()//çXêV
    {

    }
    void MapObject::Draw()//ï`âÊ
    {
        DrawGraph(mPos.x, mPos.y, mMapObjectHandle,FALSE);
    }

    void MapObject::Move(int keyType)//ìÆÇ©Ç∑
    {
        if (keyType == 0)//è„-Y
        {
            mPos.y -= MAPOBJECT_DISTANCE;
        }

        if (keyType == 1)//â∫+Y
        {
            mPos.y += MAPOBJECT_DISTANCE;
        }

        if (keyType == 2)//âE+X
        {
            mPos.x += MAPOBJECT_DISTANCE;
        }
        if (keyType == 3)//ç∂-X
        {
            mPos.x -= MAPOBJECT_DISTANCE;
        }
    }
}