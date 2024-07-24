#include "StoryData.h"

namespace mea
{
    StoryData::StoryData(Json json)
    {
        globaldata.mBackGround = json["global"]["background"];
        globaldata.mNoselect = json["global"]["noselect"];
        globaldata.mSelect = json["global"]["select"];

        mea.mNormal = json["character"]["mea"];
        mea.mPuzzled = json["character"]["mea"];

        SetCharacterData(lilian, json["character"]["lilian"]);
        SetCharacterData(laurence, json["character"]["laurence"]);
        SetCharacterData(layla, json["character"]["layla"]);
    }

    void StoryData::SetCharacterData(CharacterData& dataname, Json json)
    {
        dataname.mImpatience = json["impatience"];
        dataname.mLike = json["like"];
        dataname.mNormal = json["normal"];
        dataname.mPuzzled = json["puzzled"];
    }
}
