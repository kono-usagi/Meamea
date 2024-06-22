#include "AssetManager.h"

namespace mea
{
	AssetManager::AssetManager()
	{
		//ˆ—‚È‚µ
	}

	AssetManager::~AssetManager()
	{
		//ƒnƒ“ƒhƒ‹‚Ìíœ
		img->DeleteHandle();
		sound->DeleteHandle();
	}
}

