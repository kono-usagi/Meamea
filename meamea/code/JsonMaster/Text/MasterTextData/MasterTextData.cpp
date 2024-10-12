#include "MasterTextData.h"

namespace mea
{
    MasterTextData::MasterTextData()
    {
        //ファイルを読み込みインスタンス生成
        Json lilianJson = ioutility.Analysis("../../code/JsonFile/StoryTextData.json");
        liliandata.reset(new LilianData(lilianJson["text"]));
    }

    MasterTextData::~MasterTextData()
    {
        //処理なし
    }
}