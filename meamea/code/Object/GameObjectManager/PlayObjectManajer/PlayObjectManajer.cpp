#include "PlayObjectManajer.h"

namespace mea
{
	//���̂̒��g�����
	std::unique_ptr<PlayObjectManajer>PlayObjectManajer::mInstance = nullptr;

	PlayObjectManajer::PlayObjectManajer()
		:mObjects()
	{
		mInstance = nullptr;
	}

	void PlayObjectManajer::Initialize()
	{
		//���g�̒��g����Ȃ�C���X�^���X����
		if (!mInstance)
		{
			mInstance.reset(new PlayObjectManajer);
		}
	}

	void PlayObjectManajer::Entry(GameObject* newObj)
	{
		//�^�O�̌��������ăI�u�W�F�N�g�o�^
		std::string tag = newObj->GetTag();
		mInstance->mObjects[tag].emplace_back(newObj);

	}

	void PlayObjectManajer::ReleaseAllObj()
	{
		for (std::string& tag : PlayObjectTagAll)
		{
			//��������A�N�e�B�u�I�u�W�F�N�g�̍폜
			while (!mInstance->mObjects[tag].empty())
			{
				//�v�f���Q�Ƃ��č폜
				delete mInstance->mObjects[tag].back().get();
				mInstance->mObjects[tag].pop_back();
			}
		}
	}

	void PlayObjectManajer::Update(float deltaTime)
	{
		for (std::string& tag : PlayObjectTagAll)
		{
			// �Y���^�O�ɂ��邷�ׂẴI�u�W�F�N�g���X�V
			for (auto& obj : mInstance->mObjects[tag])
			{
				//�X�V
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
			//�L�[���͂������
			if (CheckHitKeyAll)
			{
				//�v���C���[�̈ʒu���擾
				VECTOR plypos = VGet(0, 0, 0);
				plypos=playrnum->GetPos();
				
				//�}�b�v�����擾
				for (auto& stagenum : mInstance->mObjects[PlayObjectTag.STAGE])
				{
					int mapnum = stagenum->Getnumber(plypos.x, plypos.y);

					//�}�b�v�ɂȂɂ��Ȃ�������ړ�����
					if (mapnum == )
					{
						playrnum->
					}
					else
					{
						//�����I�u�W�F�N�g���H
						if (mapnum == )
						{
							mapnum = stagenum->Getnumber(plypos.x, plypos.y);

							//�������Ԃ�������ړ�����
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
		//�A�N�e�B�u���X�g�ɉ��������ĂȂ�������
		if (mInstance->mObjects[tag].size() == 0)
		{
			//nullptr �� �����Ȃ�
			return nullptr;
		}

		//���������Ă�����A�N�e�B�u���X�g�̃I�u�W�F�N�g�̈�Ԗ�(��)��Ԃ�
		return mInstance->mObjects[tag][0].get();
	}
}