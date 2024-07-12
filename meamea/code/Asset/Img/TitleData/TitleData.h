#pragma once
#include "../../AssetBase/AssetBase.h"

namespace mea
{
    class TitleData final
    {
    public:

        /// <summary>
        /// コンストラクタ
        /// </summary>
        TitleData(Json json);

        /// <summary>
        /// デストラクタ
        /// </summary>
        ~TitleData();

        /// <summary>
        ///　画像パスを取得
        /// </summary>
        /// <returns>すべての画像パス</returns>
        Json GetAllData() const { return mAllData; }

        /// <summary>
        /// 背景画像パスを取得
        /// </summary>
        /// <returns>画像パス</returns>
        std::string GetBackGround() const { return mBackGround; }

        /// <summary>
        /// 選択肢画像パスを取得
        /// </summary>
        /// <returns>画像パス</returns>
        std::string GetSelect() const { return mSelect; }

    private:

        Json mAllData;           //すべての画像データ
        std::string mBackGround; //背景画像
        std::string mSelect;     //セレクト画像
    };

}

