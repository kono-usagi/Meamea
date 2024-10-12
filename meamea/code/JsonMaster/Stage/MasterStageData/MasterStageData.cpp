#include "MasterStageData.h"

namespace mea
{
	MasterStageData::MasterStageData()
	{
		//ファイルを読み込みインスタンス生成

		Json stagejson= ioutility.Analysis("../../code/JsonFile/StageData.json");
		stageone.reset(new StageOneData(stagejson["Stage"]["one"]));
		//stagetwo.reset(new StageTwo(stagejson["stagedata"]["2"]));
		//stagethree.reset(new StageThree(stagejson["stagedata"]["3"]));
	}

	MasterStageData::~MasterStageData()
	{
		//処理なし
	}
}