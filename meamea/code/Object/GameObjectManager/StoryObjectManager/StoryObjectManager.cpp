#include "StoryObjectManager.h"

namespace mea
{
	//実体の中身を空に
	std::unique_ptr<StoryObjectManager>StoryObjectManager::mInstance = nullptr;

	StoryObjectManager::StoryObjectManager()
		:mObjects()
	{
		mInstance = nullptr;
	}

	void StoryObjectManager::Initialize()
	{
		//自身の中身が空ならインスタンス生成
		if (!mInstance)
		{
			mInstance.reset(new StoryObjectManager);
		}
	}

	void StoryObjectManager::Entry(GameObject* newObj)
	{
		//タグの検索をしてオブジェクト登録
		std::string tag = newObj->GetTag();
		mInstance->mObjects[tag].emplace_back(newObj);

	}

	void StoryObjectManager::ReleaseAllObj()
	{
		for (std::string& tag : StoryObjectTagAll)
		{
			//末尾からアクティブオブジェクトの削除
			while (!mInstance->mObjects[tag].empty())
			{
				//要素を参照して削除
				delete mInstance->mObjects[tag].back().get();
				mInstance->mObjects[tag].pop_back();
			}
		}
	}

	void StoryObjectManager::Update(float deltaTime)
	{
		for (std::string& tag : StoryObjectTagAll)
		{
			// 該当タグにあるすべてのオブジェクトを更新
			for (auto& obj : mInstance->mObjects[tag])
			{
				//更新
				obj->Update(deltaTime);
			}
		}
	}

	void StoryObjectManager::Draw()
	{
		for (std::string& tag : StoryObjectTagAll)
		{
			for (auto& obj : mInstance->mObjects[tag])
			{
				obj->Draw();
			}
		}
	}

	

	GameObject* StoryObjectManager::GetFirstGameObj(std::string tag)
	{
		//アクティブリストに何も入ってなかったら
		if (mInstance->mObjects[tag].size() == 0)
		{
			//nullptr 空 何もない
			return nullptr;
		}

		//もし入っていたらアクティブリストのオブジェクトの一番目(個数)を返す
		return mInstance->mObjects[tag][0].get();
	}
}