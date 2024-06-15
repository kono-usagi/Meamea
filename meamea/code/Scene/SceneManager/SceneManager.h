#pragma once
#include<memory>
#include<stack>

namespace mea
{
	class SceneManager final
	{
	public:
		/// <summary>
		/// コンストラクタ
		/// </summary>
		SceneManager();

		/// <summary>
		/// デストラクタ
		/// </summary>
		~SceneManager();

		/// <summary>
		/// ゲームループ
		/// </summary>
		void GameLoop();

		/// <summary>
		/// シーン更新処理
		/// </summary>
		void UpdateScene();

		/// <summary>
		/// シーン描画処理
		/// </summary>
		void DrawScene();

		/// <summary>
		/// シーン切り替え処理
		/// </summary>
		void ChangeScene();

	private:

		std::shared_ptr<class FPS> mFps;							//タイムマネージャー

		std::stack<std::shared_ptr<class SceneBase>> mNowScene;	//現在のシーン
		SceneBase* mHoldScene;									//次のシーン
	};

}


