#include"LilianData.h"

namespace mea
{
	LilianData::LilianData(Json json)
	{
		mTalk1 = json["Lilian"]["Talk1"];
		mTalk1A = json["Lilian"]["Talk1A"];
		mTalk1B = json["Lilian"]["Talk1B"];
		mTalk2A = json["Lilian"]["Talk2A"];
		mTalk2B = json["Lilian"]["Talk2B"];

		mImage1 = json["Lilian"]["Image1"];
		mImage1A = json["Lilian"]["Image1A"];
		mImage1B = json["Lilian"]["Image1B"];
		mImage2A = json["Lilian"]["Image2A"];
		mImage2B = json["Lilian"]["Image2B"];
	}
}