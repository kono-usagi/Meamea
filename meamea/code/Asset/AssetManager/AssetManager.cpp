#include "AssetManager.h"

namespace mea
{
	AssetManager::AssetManager()
	{
		//�����Ȃ�
	}

	AssetManager::~AssetManager()
	{
		//�n���h���̍폜
		img->DeleteHandle();
		sound->DeleteHandle();
	}
}

