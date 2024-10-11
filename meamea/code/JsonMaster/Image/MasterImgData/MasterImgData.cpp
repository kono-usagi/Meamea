#include "MasterImgData.h"

namespace mea
{
	MasterImgData::MasterImgData()
	{
		//ファイルを読み込みインスタンス生成
		//Json titleJson = ioutility.Analysis("../../../JsonFile/Image/TitleData.json");
		//titledata.reset(new TitleData(titleJson["title"]));

		Json playJson = ioutility.Analysis("../../../JsonFile/Image/PlayData.json");
		playdata.reset(new PlayData(playJson["play"]));

		Json storyJson= ioutility.Analysis("../../../JsonFile/Image/StoryData.json");
		storydata.reset(new StoryData(storyJson["story"]));

		//Json endingjson = ioutility.Analysis("../../../JsonFile/Image/EndingData.json");
		//endingdata.reset(new EndingData(endingjson["ending"]));
	}

	MasterImgData::~MasterImgData()
	{
		//処理なし
	}
}