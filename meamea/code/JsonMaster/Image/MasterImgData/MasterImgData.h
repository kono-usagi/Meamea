#pragma once
#include <memory>
#include"../../IOUtility/IOUtility.h"

#include"../TitleData/TitleData.h"
#include"../PlayData/PlayData.h"
#include"../StoryData/StoryData.h"
#include "../EndingData/EndingData.h"

namespace mea
{
	/// <summary>
	/// JsonImageデータ管理クラス
	/// </summary>
	class MasterImgData final
	{
	public:

		/// <summary>
		/// インスタンス
		/// </summary>
		MasterImgData();

		/// <summary>
		/// デストラクタ
		/// </summary>
		~MasterImgData();

		/// <summary>
		/// TitleDataインスタンス
		/// </summary>
		/// <returns>titleデータ</returns>
		class TitleData* TitleInstance() { return titledata.get(); }

		/// <summary>
		/// PlayDataインスタンス
		/// </summary>
		/// <returns>Playデータ</returns>
		class PlayData* PlayInstance() { return playdata.get(); }

		/// <summary>
		/// StoryDataインスタンス
		/// </summary>
		/// <returns>Storyデータ</returns>
		class StoryData* StoryDataInstance() { return storydata.get(); }

		/// <summary>
		/// EndingDataインスタンス
		/// </summary>
		/// <returns>Endingデータ</returns>
		class EndingData* EndingDataInstance() { return endingdata.get(); }

	private:

		IOUtility ioutility;							//IOUtilityインスタンス

		std::unique_ptr<class TitleData> titledata;     //title
		std::unique_ptr<class PlayData> playdata;		//play
		std::unique_ptr<class StoryData> storydata;		//story
		std::unique_ptr<class EndingData> endingdata;	//ending
	};
}