#pragma once
#include "../MasterTextData/MasterTextData.h"

namespace mea
{
	class LilianData final
	{
	public:
		LilianData(Json json);
		~LilianData();

		std::string GetTalk1() const { return mTalk1; }
		std::string GetTalk1A() const { return mTalk1A; }
		std::string GetTalk1B() const { return mTalk1B; }
		std::string GetTalk2A() const { return mTalk2A; }
		std::string GetTalk2B() const { return mTalk2B; }

		std::string GetImage1() const { return mImage1; }
		std::string GetImage1A() const { return mImage1A; }
		std::string GetImage1B() const { return mImage1B; }
		std::string GetImage2A() const { return mImage2A; }
		std::string GetImage2B() const { return mImage2B; }

	private:
		std::string mTalk1;//最初の会話
		std::string mTalk1A;//選択肢一個目Aの会話
		std::string mTalk1B;//選択肢一個目Bの会話
		std::string mTalk2A;//選択肢二個目Aの会話
		std::string mTalk2B;//選択肢二個目Bの会話

		std::string mImage1;//mTalk1でのイラスト
		std::string mImage1A;//mTalk1Aでのイラスト
		std::string mImage1B;//mTalk1Bでのイラスト
		std::string mImage2A;//mTalk2Aでのイラスト
		std::string mImage2B;//mTalk2Bでのイラスト
	};
}