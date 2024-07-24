#pragma once
#include <DxLib.h>
#include <unordered_map>
#include <memory>
#include <vector>

#include"../../Object/GameObject/GameObject.h"
#include"../../Object/GameObject/PlayObjectTag.h"
#include"../../Object/GameObject/StoryObjectTag.h"

namespace mea
{
	class GameObjectManager final
	{
	public:

		/// <summary>
		/// 初期化
		/// </summary>
		void Initialize();

		/// <summary>
		/// オブジェクト登録
		/// </summary>
		/// <param name="newObj">登録するオブジェクト</param>
		void Entry(GameObject* newObj);

		/// <summary>
		/// 全オブジェクトの削除
		/// </summary>
		void ReleaseAllObj();

		/// <summary>
		/// 全オブジェクトの更新処理
		/// </summary>
		/// <param name="deltaTime">デルタタイム</param>
		void Update(float deltaTime);

		/// <summary>
		/// すべてのオブジェクトの描画
		/// </summary>
		void Draw();

		/// <summary>
		/// キー入力があったら
		/// </summary>
		//void MoveByKey();

		/// <summary>
		/// タグ種類の初めのオブジェクトを返す
		/// </summary>
		/// <param name="tag">オブジェクトの種類</param>
		/// <returns>最初のオブジェクト</returns>
		GameObject* GetFirstGameObj(std::string tag);

	private:

		/// <summary>
		/// コンストラクタ
		/// </summary>
		GameObjectManager();

		static std::unique_ptr<GameObjectManager> mInstance;							    // playマネージャの実体
		std::unordered_map<std::string, std::vector<std::shared_ptr<GameObject>>> mObjects;	//オブジェクトリスト
	};
}
