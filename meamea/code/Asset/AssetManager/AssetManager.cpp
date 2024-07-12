#include "AssetManager.h"

namespace mea
{
	std::unique_ptr<AssetManager>AssetManager::assetmanager = nullptr;

	AssetManager::AssetManager()
		:imagejson(new ImageJson)
	{
		//処理なし
	}

	void AssetManager::InitAssetManager()
	{
		//実態が空だったらインスタンス生成
		if (!assetmanager)
		{
			assetmanager.reset(new AssetManager);
		}
	}

	AssetManager::~AssetManager()
	{
		//解放
		imagejson->DeleteHandle();
	}
}

