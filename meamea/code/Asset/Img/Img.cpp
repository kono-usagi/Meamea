#include "Img.h"

namespace mea
{
	Img::Img()
	{
		//Jsonƒtƒ@ƒCƒ‹‚Ì“Ç‚İ‚İ
		mJsonFile = "../../Json/ImgData.json";
		LoadJsonFile(mJsonFile);
	}

	Img::~Img()
	{
		//ˆ—‚È‚µ
	}

	void Img::DeleteHandle()
	{
	}
}
