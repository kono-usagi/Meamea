#include "PlayData.h"

namespace mea
{

    PlayData::PlayData(Json json)
    {
        globaldata.mBackGround = json["global"]["backGround"];
        globaldata.mLeftSide = json["global"]["leftside"];
        globaldata.mMoveRock = json["global"]["moverock"];
        globaldata.mPlayer = json["global"]["player"];

        SetStageData(one, json["stage"]["one"]);
        SetStageData(two, json["stage"]["two"]);
        SetStageData(three, json["stage"]["three"]);
    }

    PlayData::~PlayData()
    {
        //èàóùÇ»Çµ
    }

    void PlayData::SetStageData(StageData& dataname,Json json)
    {
        dataname.mMap = json["map"];
        dataname.mRightSide = json["rightside"];
        dataname.mCharacter = json["character"];
    }
}