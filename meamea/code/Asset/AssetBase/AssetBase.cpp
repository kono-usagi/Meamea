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
		//処理なし
	}

	AssetBase::~AssetBase()
	{
		//処理なし
	}

	void AssetBase::LoadJsonFile(std::string fileName)
	{
		//ファイル読み込み
		std::ifstream ifs(fileName.c_str());

		//ファイルが存在したら解析
		if (ifs.good())
		{
			rapidjson::IStreamWrapper isw(ifs);
			mDoc.ParseStream(isw);
		}

		ifs.close();

		//アセットタイプ設定
		rapidjson::Value::ConstMemberIterator type = mDoc.MemberBegin();
		mAssetType = type->name.GetString();
	}

	const int AssetBase::GetHandle(std::string handleName)
	{
		//取得したいハンドルをデータ内から検索
		auto iter = mHandledata.find(handleName);

		if (iter != mHandledata.end())
		{
			//見つかったらハンドルを返却
			return  mHandledata[handleName];
		}

		return -1;
	}
}