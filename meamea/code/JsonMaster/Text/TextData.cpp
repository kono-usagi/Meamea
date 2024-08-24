#include"TextData.h"

namespace mea
{
	TextData::TextData(Json json)
	{
		lilianData.mTalk = json["Lilian"]["talk"];
		lilianData.mChoice1A = json["Lilian"]["Choice1A"];
		lilianData.mChoice1B = json["Lilian"]["Choice1B"];
		lilianData.mChoice2A = json["Lilian"]["Choice2A"];
		lilianData.mChoice2B = json["Lilian"]["Choice2B"];
	}
}