#include "PlayObjectManajer.h"

namespace mea
{
	//実体の中身を空に
	std::unique_ptr<PlayObjectManajer>PlayObjectManajer::mInstance = nullptr;

	PlayObjectManajer::PlayObjectManajer()
		:mObjects()
	{
		mInstance = nullptr;
	}

	void PlayObjectManajer::Initialize()
	{
		//自身の中身が空ならインスタンス生成
		if (!mInstance)
		{
			mInstance.reset(new PlayObjectManajer);
		}
	}

	void PlayObjectManajer::Entry(GameObject* newObj)
	{
		//タグの検索をしてオブジェクト登録
		std::string tag = newObj->GetTag();
		mInstance->mObjects[tag].emplace_back(newObj);

	}

	void PlayObjectManajer::ReleaseAllObj()
	{
		for (std::string& tag : PlayObjectTagAll)
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

	void PlayObjectManajer::Update(float deltaTime)
	{
		for (std::string& tag : PlayObjectTagAll)
		{
			// 該当タグにあるすべてのオブジェクトを更新
			for (auto& obj : mInstance->mObjects[tag])
			{
				//更新
				obj->Update(deltaTime);
			}
		}
	}

	void PlayObjectManajer::Draw()
	{
		for (std::string& tag : PlayObjectTagAll)
		{
			for (auto& obj : mInstance->mObjects[tag])
			{
				obj->Draw();
			}
		}
	}

	void PlayObjectManajer::MoveByKey()
	{
		for (auto& playrnum : mInstance->mObjects[PlayObjectTag.PLAYER])
		{
			//キー入力があれば
			if (CheckHitKeyAll)
			{
				//プレイヤーの位置を取得
				VECTOR plypos = VGet(0, 0, 0);
				plypos=playrnum->GetPos();
				
				//マップ情報を取得
				for (auto& stagenum : mInstance->mObjects[PlayObjectTag.STAGE])
				{
					int mapnum = stagenum->Getnumber(plypos.x, plypos.y);

					//マップになにもなかったら移動処理
					if (mapnum == )
					{
						playrnum->
					}
					else
					{
						//動くオブジェクトか？
						if (mapnum == )
						{
							mapnum = stagenum->Getnumber(plypos.x, plypos.y);

							//動ける状態だったら移動処理
							if (mapnum == )
							{
								GameObject* mapobjnum = GetFirstGameObj(PlayObjectTag.MAPOBJECT);
								mapobjnum->
							}
						}
					}
				}
			}
		}
	}

	GameObject* PlayObjectManajer::GetFirstGameObj(std::string tag)
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