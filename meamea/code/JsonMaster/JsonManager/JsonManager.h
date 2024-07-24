#pragma once
#include<memory>

#include "../MasterImgData/MasterImgData.h"

namespace mea
{
	/// <summary>
	/// Jsonデータ管理クラス
	/// </summary>
	class JsonManager final
	{
	public:

		/// <summary>
		/// 初期化
		/// </summary>
		static void InitJsonManager();

		/// <summary>
		/// イメージインスタンス
		/// </summary>
		/// <returns></returns>
		static class MasterImgData* ImgDataInstance() { return jsonmanager->masterimgdata.get(); }

		/// <summary>
		/// デストラクタ
		/// </summary>
		~JsonManager();

	private:

		/// <summary>
		/// コンストラクタ
		/// </summary>
		JsonManager();

		static std::unique_ptr<class JsonManager> jsonmanager;//自身の実態

		std::unique_ptr<class MasterImgData> masterimgdata;//ImgJsonの実態
	};
}