#include "StoryObjectManajer.h"

namespace mea
{
	//���̂̒��g�����
	std::unique_ptr<StoryObjectManajer>StoryObjectManajer::mInstance = nullptr;

	StoryObjectManajer::StoryObjectManajer()
		:mObjects()
	{
		mInstance = nullptr;
	}

	void StoryObjectManajer::Initialize()
	{
		//���g�̒��g����Ȃ�C���X�^���X����
		if (!mInstance)
		{
			mInstance.reset(new StoryObjectManajer);
		}
	}

	void StoryObjectManajer::Entry(GameObject* newObj)
	{
		//�^�O�̌��������ăI�u�W�F�N�g�o�^
		std::string tag = newObj->GetTag();
		mInstance->mObjects[tag].emplace_back(newObj);

	}

	void StoryObjectManajer::ReleaseAllObj()
	{
		for (std::string& tag : StoryObjectTagAll)
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

	void StoryObjectManajer::Update(float deltaTime)
	{
		for (std::string& tag : StoryObjectTagAll)
		{
			// �Y���^�O�ɂ��邷�ׂẴI�u�W�F�N�g���X�V
			for (auto& obj : mInstance->mObjects[tag])
			{
				//�X�V
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