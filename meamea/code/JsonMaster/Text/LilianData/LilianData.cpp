#include"LilianData.h"

namespace mea
{
	LilianData::LilianData(Json json)
	{
		mTalk = json["Lilian"]["talk"];
		mChoice1A = json["Lilian"]["Choice1A"];
		mChoice1B = json["Lilian"]["Choice1B"];
		mChoice2A = json["Lilian"]["Choice2A"];
		mChoice2B = json["Lilian"]["Choice2B"];
	}
}