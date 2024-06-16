#pragma once

namespace mea
{
	class Fps
	{
	public:

		/// <summary>
		/// コンストラクタ
		/// </summary>
		Fps();

		/// <summary>
		/// デストラクタ
		/// </summary>
		~Fps();

		/// <summary>
		/// 更新処理
		/// </summary>
		void Update();

		/// <summary>
		/// デルタタイム取得
		/// </summary>
		/// <returns>デルタタイム</returns>
		float GetDeltaTime()const { return deltaTime; }

	private:

		float nowTime;		//現在の時間
		float prevTime;		//過去の時間
		float deltaTime;	//デルタタイム
	};
}

