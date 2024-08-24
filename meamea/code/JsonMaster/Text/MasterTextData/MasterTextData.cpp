#include "MasterTextData.h"

namespace mea
{
    MasterTextData::MasterTextData()
    {
        //ファイルを読み込みインスタンス生成
        Json lilianJson = ioutility.Analysis("../../../JsonFile/StoryTextData");
        liliandata.reset(new LilianData(lilianJson["lilian"]));
    }

    MasterTextData::~MasterTextData()
    {
        //処理なし
    }
}