#pragma once
#include <DxLib.h>
#include <string>

#include"../GameObject/GameObject.h"

namespace mea
{
	/// <summary>
	/// ObjectManagerインターフェース
	/// </summary>
	class IfObjectManager
	{
	public:

		/// <summary>
		/// デストラクタ
		/// </summary>
		virtual ~IfObjectManager() {};

		/// <summary>
		/// 初期化
		/// </summary>
		virtual void Initialize()=0;

		/// <summary>
		/// オブジェクト登録
		/// </summary>
		/// <param name="newObj">登録するオブジェクト</param>
		virtual void Entry(GameObject* newObj) = 0;

		/// <summary>
		/// 全オブジェクトの削除
		/// </summary>
		virtual void ReleaseAllObj() = 0;

		/// <summary>
		/// 全オブジェクトの更新処理
		/// </summary>
		/// <param name="deltaTime">デルタタイム</param>
		virtual void Update(float deltaTime) = 0;

		/// <summary>
		/// すべてのオブジェクトの描画
		/// </summary>
		virtual void Draw() = 0;

		/// <summary>
		/// タグ種類の初めのオブジェクトを返す
		/// </summary>
		/// <param name="tag">オブジェクトの種類</param>
		/// <returns>最初のオブジェクト</returns>
		virtual GameObject* GetFirstGameObj(std::string tag) = 0;
	};
}
