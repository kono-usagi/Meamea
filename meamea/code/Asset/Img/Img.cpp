#include "Img.h"

namespace mea
{
	Img::Img()
	{
		//Jsonファイルの読み込み
		mJsonFile = "../../Json/ImgData.json";
		LoadJsonFile(mJsonFile);
	}

	Img::~Img()
	{
		//処理なし
	}

	void Img::DeleteHandle()
	{
	}
}
