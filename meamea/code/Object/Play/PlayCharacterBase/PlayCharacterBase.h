#pragma once
#include"GameObject.h"

namespace mea
{
	class PlayCharacterBase: public GameObject
	{
	public:
		/// <summary>
		/// コンストラクタ
		/// </summary>
		PlayCharacterBase();

		/// <summary>
		/// デストラクタ
		/// </summary>
		~PlayCharacterBase();

		/// <summary>
		/// 更新
		/// </summary>
		void Update();

		/// <summary>
		/// 描画
		/// </summary>
		void Draw();

		/// <summary>
		/// 操作処理
		/// </summary>
		/// <param name="deltaTime"></param>
		void Input(float deltaTime);

	private:

	};
}