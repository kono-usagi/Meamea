#include "Img.h"

namespace mea
{
	Img::Img()
	{
		//Json�t�@�C���̓ǂݍ���
		mJsonFile = "../../Json/ImgData.json";
		LoadJsonFile(mJsonFile);
	}

	Img::~Img()
	{
		//�����Ȃ�
	}

	void Img::DeleteHandle()
	{
	}
}
