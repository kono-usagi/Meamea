#pragma once
#include"../../IOUtility/IOUtility.h"

namespace mea
{
	class EndingData
	{
	public:
		EndingData(Json json);
		~EndingData() {};

		std::string GetBackGround(int index) const { return globaldata.mBackGround[index]; }
		std::string GetLilian(int index) const { return globaldata.mLilian[index]; }
		std::string GetLaurence(int index) const { return globaldata.mLaurence[index]; }
		std::string GetLayla(int index) const { return globaldata.mLayla[index]; }

		std::string GetHappyEnd_Steel(int index)const { return happyend.mSteel[index]; }
		std::string GetBadEnd_Steel(int index) const { return badend.mSteel[index]; }

	private:

		struct GlobalData
		{
			std::string mBackGround[2];
			std::string mLilian[2];
			std::string mLaurence[2];
			std::string mLayla[2];
		}globaldata;

		struct SteelData
		{
			std::string mSteel[3];
		};

		void SetGlobalData(GlobalData& dataname, Json json,int i_count);
		void SetSteelData(SteelData& dataname, Json json,int i_count);

		SteelData happyend;
		SteelData badend;
	};
}
