#include "AssetManager.h"

namespace mea
{
	AssetManager::AssetManager()
	{
		//処理なし
	}

	AssetManager::~AssetManager()
	{
		//ハンドルの削除
		img->DeleteHandle();
		sound->DeleteHandle();
	}
}

