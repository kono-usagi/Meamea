#pragma once
#include"../AssetBase/AssetBase.h"

namespace mea
{
	class Img final:public AssetBase
	{
	public:
		/// <summary>
		/// コンストラクタ
		/// </summary>
		Img();

		/// <summary>
		/// デストラクタ
		/// </summary>
		~Img();

		/// <summary>
		/// ハンドル削除
		/// </summary>
		void DeleteHandle()override;
	};
}

