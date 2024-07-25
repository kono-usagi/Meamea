#include "StageOneData.h"

namespace mea
{
	StageOneData::StageOneData(Json json)
		:mX(json["x"]),
		mY(json["y"])
	{
		SetMapchip(json["mapchip"]);
	}

	StageOneData::~StageOneData()
	{
		//ˆ—‚È‚µ
	}

	void StageOneData::SetMapchip(Json json)
	{
		int x_count = mX - 1;
		int y_count = mY - 1;

		int i_count = 0;
		int j_count = 0;

		for (auto& itr : json)
		{
			if (i_count <= x_count)
			{
				mMapchip[i_count][j_count] = itr;
				if (j_count == y_count)
				{
					j_count = 0;
					i_count++;
				}
				else
				{
					j_count++;
				}
			}
		}
	}
}
