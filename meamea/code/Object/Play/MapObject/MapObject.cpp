#include"MapObject.h"

namespace mea
{
    MapObject::MapObject()
        :GameObject(PlayObjTag.MAPOBJECT)
    {
        mPos.x = FIRST_POS_X;
        mPos.y = FIRST_POS_Y;
        mMapObjectHandle = LoadGraph(JsonManager::ImgDataInstance()->PlayInstance()->GetMoveRock().c_str());
    }
    MapObject::~MapObject()
    {
        DeleteGraph(mMapObjectHandle);
    }
    void MapObject::Update()//çXêV
    {
        Draw();
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