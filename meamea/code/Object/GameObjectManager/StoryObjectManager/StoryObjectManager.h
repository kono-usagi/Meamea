#pragma once
#include <DxLib.h>
#include <unordered_map>
#include <memory>
#include <vector>

#include"../IfObjectManager.h"
#include"../../GameObject/StoryObjectTag.h"

namespace mea
{
	/// <summary>
	/// StoryObjectManajerクラス
	/// </summary>
	class StoryObjectManager final :public IfObjectManager
	{
	public:
		/// <summary>
		/// 初期化
		/// </summary>
		void Initialize() override;

		/// <summary>
		/// オブジェクト登録
		/// </summary>
		/// <param name="newObj">登録するオブジェクト</param>
		void Entry(GameObject* newObj) override;

		/// <summary>
		/// 全オブジェクトの削除
		/// </summary>
		void ReleaseAllObj() override;

		/// <summary>
		/// 全オブジェクトの更新処理
		/// </summary>
		/// <param name="deltaTime">デルタタイム</param>
		void Update(float deltaTime) override;

		/// <summary>
		/// すべてのオブジェクトの描画
		/// </summary>
		void Draw() override;

		/// <summary>
		/// タグ種類の初めのオブジェクトを返す
		/// </summary>
		/// <param name="tag">オブジェクトの種類</param>
		/// <returns>最初のオブジェクト</returns>
		GameObject* GetFirstGameObj(std::string tag) override;


	private:

		/// <summary>
		/// コンストラクタ シングルトン
		/// </summary>
		StoryObjectManager();

		static std::unique_ptr<StoryObjectManager> mInstance;							    // storyマネージャの実体
		std::unordered_map<std::string, std::vector<std::shared_ptr<GameObject>>> mObjects;	//オブジェクトリスト
	};
}