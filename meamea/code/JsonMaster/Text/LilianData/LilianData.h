#pragma once
#include"../IOUtility/IOUtility.h"

namespace mea
{
	class TextData final
	{
	public:
		TextData(Json json);
		~TextData();

		std::string GetTalk() const { return mTalk; }
		std::string GetChoice1A() const { return mChoice1A; }
		std::string GetChoice1B() const { return mChoice1B; }
		std::string GetChoice2A() const { return mChoice2A; }
		std::string GetChoice2B() const { return mChoice2B; }

	private:
		std::string mTalk;//最初の会話
		std::string mChoice1A;//選択肢一個目Aの会話
		std::string mChoice1B;//選択肢一個目Bの会話
		std::string mChoice2A;//選択肢二個目Aの会話
		std::string mChoice2B;//選択肢二個目Bの会話
	};
}