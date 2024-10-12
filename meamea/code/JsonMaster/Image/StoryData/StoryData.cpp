#include "StoryData.h"

namespace mea
{
    StoryData::StoryData(Json json)
    {
        globaldata.mBackGround = json["global"]["background"];
        globaldata.mNoselect = json["global"]["noselect"];
        globaldata.mSelect = json["global"]["select"];
        globaldata.mNameFlame = json["global"]["nameflame"];

        mea.mNormal = json["character"]["mea"]["normal"];
        mea.mPuzzled = json["character"]["mea"]["puzzled"];

        SetCharacterData(lilian, json["character"]["Lilian"]);
       // SetCharacterData(laurence, json["character"]["laurence"]);
        //SetCharacterData(layla, json["character"]["layla"]);
    }

    void StoryData::SetCharacterData(CharacterData& dataname, Json json)
    {
        dataname.mImpatience = json["impatience"];
        dataname.mLike = json["like"];
        dataname.mNormal = json["normal"];
        dataname.mPuzzled = json["puzzled"];
    }
}
