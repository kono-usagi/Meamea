#include "EndData.h"

namespace mea
{
    EndData::EndData(Json json)
    {
        endglobaldata.reset(new EndGlobalData(json["global"]));
        happyenddata.reset(new HappyEndData(json["happyend"]));
        badenddata.reset(new BadEndData(json["badend"]));
    }

    EndGlobalData::EndGlobalData(Json json)
        :mBackgGround(json["backbround"]),
        mLilian(json["lilian"]),
        mLaurence(json["laurence"]),
        mLayla(json["layla"])
    {
    }

    HappyEndData::HappyEndData(Json json)
        :mSteel(json["steel"])
    {
    }

    BadEndData::BadEndData(Json json)
        :mSteel(json["steel"])
    {
    }
}