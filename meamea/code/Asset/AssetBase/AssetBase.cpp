#include "AssetBase.h"

#include<DxLib.h>

namespace mea
{
	AssetBase::AssetBase()
		:mHoldHandle(-1)
		,mDupHandle(-1)
		,mAssetType("")
		,mJsonFile("")
	{
		//�����Ȃ�
	}

	AssetBase::~AssetBase()
	{
		//�����Ȃ�
	}

	void AssetBase::LoadJsonFile(std::string fileName)
	{
		//�t�@�C���ǂݍ���
		std::ifstream ifs(fileName.c_str());

		//�t�@�C�������݂�������
		if (ifs.good())
		{
			rapidjson::IStreamWrapper isw(ifs);
			mDoc.ParseStream(isw);
		}

		ifs.close();

		//�A�Z�b�g�^�C�v�ݒ�
		rapidjson::Value::ConstMemberIterator type = mDoc.MemberBegin();
		mAssetType = type->name.GetString();
	}

	const int AssetBase::GetHandle(std::string handleName)
	{
		//�擾�������n���h�����f�[�^�����猟��
		auto iter = mHandledata.find(handleName);

		if (iter != mHandledata.end())
		{
			//����������n���h����ԋp
			return  mHandledata[handleName];
		}

		return -1;
	}
}