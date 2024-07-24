#include "EndingData.h"

namespace mea
{
	EndingData::EndingData(Json json)
	{
		SetGlobalData(globaldata, json["global"], 2);
		SetSteelData(happyend, json["happyend"], 3);
		SetSteelData(badend, json["badend"], 3);
	}

	void EndingData::SetGlobalData(GlobalData& dataname, Json json,int i_count)
	{
		for (int i = 0; i < i_count; i++)
		{
			dataname.mBackGround[i] = json["background"][i];
			dataname.mLilian[i] = json["lilian"][i];
			dataname.mLaurence[i] = json["laurence"][i];
			dataname.mLayla[i] = json["layla"][i];
		}
	}

	void EndingData::SetSteelData(SteelData& dataname, Json json,int i_count)
	{
		for (int i = 0; i < i_count; i++)
		{
			dataname.mSteel[i] = json["steel"][i];
		}
	}
}
