#include "MasterImgData.h"

namespace mea
{
	MasterImgData::MasterImgData()
	{
		//ファイルを読み込みインスタンス生成

		Json titleJson = ioutility.Analysis("データパス記入");
		titledata.reset(new TitleData(titleJson["title"]));

		Json playJson = ioutility.Analysis("データパス記入");
		playdata.reset(new PlayData(playJson["play"]));

		Json storyJson= ioutility.Analysis("データパス記入");
		storydata.reset(new StoryData(storyJson["story"]));

		Json endingjson = ioutility.Analysis("データパス記入");
		endingdata.reset(new EndingData(endingjson["ending"]));
	}

	MasterImgData::~MasterImgData()
	{
		//処理なし
	}
}