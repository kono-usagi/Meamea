#include<DxLib.h>
#include "AssetBase.h"

namespace mea
{
	AssetBase::AssetBase()
		:mJsondata("")
		,mJsonFile("")
	{
		//処理なし
	}

	AssetBase::~AssetBase()
	{
		//処理なし
	}

	Json AssetBase::LoadJsonFile(const std::string fileName)
	{
		Json result;
		//ファイル読み込み
		std::ifstream ifs(fileName.c_str());

		//ファイルが存在したら解析
		//if (ifs.good())
		//{
		result = json::parse(ifs);
		//}

		ifs.close();

		return result;
	}
}