#include "ImageJson.h"

namespace mea
{
    ImageJson::ImageJson()
        :AssetBase()
    {
        //jsonファイルの読み込み
        mJsonFile = "../../Json/imgdata.json";
        mJsonData = LoadJsonFile(mJsonFile);

        //インスタンス生成
        titledata.reset(new TitleData(mJsonData["imgdata"]["title"]));
    }

    ImageJson::~ImageJson()
    {
        //処理なし
    }
}
