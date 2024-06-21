#include <DxLib.h>
#include "Fps.h"

namespace mea
{
	Fps::Fps()
		:nowTime(static_cast<float>(GetNowCount()))
		, prevTime(nowTime)
		, deltaTime(0.0f)
	{
		//処理なし
	}

	Fps::~Fps()
	{
		//処理なし
	}

	void Fps::Update()
	{
		//フレームルート算出
		nowTime = static_cast<float>(GetNowCount());
		deltaTime = (nowTime - prevTime) / 1000.0f;
		prevTime = nowTime;
	}
}
