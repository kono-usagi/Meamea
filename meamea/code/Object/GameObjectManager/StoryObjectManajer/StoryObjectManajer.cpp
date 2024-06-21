#include "StoryObjectManajer.h"

namespace mea
{
	//実体の中身を空に
	std::unique_ptr<StoryObjectManajer>StoryObjectManajer::mInstance = nullptr;

	StoryObjectManajer::StoryObjectManajer()
		:mObjects()
	{
		mInstance = nullptr;
	}

	void StoryObjectManajer::Initialize()
	{
		//自身の中身が空ならインスタンス生成
		if (!mInstance)
		{
			mInstance.reset(new StoryObjectManajer);
		}
	}

	void StoryObjectManajer::Entry(GameObject* newObj)
	{
		//タグの検索をしてオブジェクト登録
		std::string tag = newObj->GetTag();
		mInstance->mObjects[tag].emplace_back(newObj);

	}

	void StoryObjectManajer::ReleaseAllObj()
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

	void StoryObjectManajer::Update(float deltaTime)
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

	void StoryObjectManajer::Draw()
	{
		for (std::string& tag : StoryObjectTagAll)
		{
			for (auto& obj : mInstance->mObjects[tag])
			{
				obj->Draw();
			}
		}
	}

	

	GameObject* StoryObjectManajer::GetFirstGameObj(std::string tag)
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