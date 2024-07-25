#pragma once
#include <memory>
#include"../../IOUtility/IOUtility.h"

#include"../StageOne/StageOneData.h"
//#include"../StageTwo/StageTwoData.h"
//#include"../StageThree/StageThreeData.h"

namespace mea
{
	/// <summary>
	/// JsonStageデータ管理クラス
	/// </summary>
	class MasterStageData final
	{
	public:

		/// <summary>
		/// コンストラクタ
		/// </summary>
		MasterStageData();

		/// <summary>
		/// デストラクタ
		/// </summary>
		~MasterStageData();

		/// <summary>
		/// StageOneインスタンス
		/// </summary>
		/// <returns>StageOneデータ</returns>
		class StageOne* StageOneInstance() { stageone.get(); }

		/// <summary>
		/// StageTwoインスタンス
		/// </summary>
		/// <returns>StageTwoデータ</returns>
		//class StageTwo* StageTwoInstance() { stagetwo.get(); }

		/// <summary>
		/// StageThreeインスタンス
		/// </summary>
		/// <returns>StageThreeデータ</returns>
		//class StageThree* StageThreeInstance() { stagethree.get(); }

	private:

		IOUtility ioutility;							//IOUtilityインスタンス

		std::unique_ptr<class StageOne> stageone;		  //stageone
		//std::unique_ptr<class StageTwo> stagetwo;		  //stagetwo
		//std::unique_ptr<class StageThree> stagethree;     //stagethree
	};
}
