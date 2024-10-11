#include "IOUtility.h"

namespace mea
{
	IOUtility::IOUtility()
	{
	}

	IOUtility::~IOUtility()
	{
	}

	Json IOUtility::Analysis(std::string fileName)
	{
		Json result;

		//ファイル読み込み
		std::ifstream ifs(fileName.c_str());
		//ファイルの解析
		result = Json::parse(ifs);
		Json j= Json::parse(ifs);

		ifs.close();
		return result;
	}
}