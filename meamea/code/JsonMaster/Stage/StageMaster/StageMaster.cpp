#include "StageMaster.h"

namespace mea
{
	StageMaster::StageMaster()
	{
		//ファイルを読み込みインスタンス生成

		Json stagejson= ioutility.Analysis("データパス記入");
		stageone.reset(new StageOne(stagejson["stagedata"]["1"]));
		//stagetwo.reset(new StageTwo(stagejson["stagedata"]["2"]));
		//stagethree.reset(new StageThree(stagejson["stagedata"]["3"]));
	}

	StageMaster::~StageMaster()
	{
		//処理なし
	}
}