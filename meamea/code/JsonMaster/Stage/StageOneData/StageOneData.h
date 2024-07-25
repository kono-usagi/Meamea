#pragma once
#include"../../IOUtility/IOUtility.h"

namespace mea
{
	class StageOneData final
	{
	public:
		StageOneData(Json json);
		~StageOneData();

		int GetNumber(int x_, int y_) { return mMapchip[x_][y_]; }
		int Getx() { return mX; }
		int Gety() { return mY; }

	private:

		void SetMapchip(Json json);

		int mMapchip[50][50];
		int mX;
		int mY;
	};
}

