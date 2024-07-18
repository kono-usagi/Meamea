#include "TitleData.h"

namespace mea
{
    TitleData::TitleData(Json json)
        :mAllData(json),
        mBackGround(json["background"]),
        mSelect(json["select"])
    {
        //ˆ—‚È‚µ
    }

    TitleData::~TitleData()
    {
        //ˆ—‚È‚µ
    }
}
