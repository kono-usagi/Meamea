#include "JsonManager.h"

namespace mea
{
	std::unique_ptr<JsonManager>JsonManager::jsonmanager = nullptr;

	JsonManager::JsonManager()
		:masterimgdata(new MasterImgData)
	{
		//処理なし
	}

	void JsonManager::InitJsonManager()
	{
		//実態が空だったらインスタンス生成
		if (!jsonmanager)
		{
			jsonmanager.reset(new JsonManager);
		}
	}

	JsonManager::~JsonManager()
	{
		//解放
		masterimgdata.release();
	}
}
