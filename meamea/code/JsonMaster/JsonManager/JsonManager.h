#pragma once
#include<memory>

#include "../Image/MasterImgData/MasterImgData.h"
#include"../Stage/MasterStageData/MasterStageData.h"
#include "../Text/MasterTextData/MasterTextData.h"

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
		/// <returns>イメージデータ</returns>
		static class MasterImgData* ImgDataInstance() { return jsonmanager->masterimgdata.get(); }

		/// <summary>
		/// ステージインスタンス
		/// </summary>
		/// <returns>ステージデータ</returns>
		static class MasterStageData* StageDataInstance() { return jsonmanager->masterstagedata.get(); }

		/// <summary>
		/// テキストインスタンス
		/// </summary>
		/// <returns>テキストデータ</returns>
		static class MasterTextData* TextDataInstance() { return jsonmanager->mastertextdata.get(); }
		

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
		std::unique_ptr<class MasterStageData> masterstagedata;//StageJsonの実態
		std::unique_ptr<class MasterTextData> mastertextdata;//TextJsonの実態
	};
}