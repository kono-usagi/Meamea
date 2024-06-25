#pragma once

#include<../Rapidjson/istreamwrapper.h>
#include<../Rapidjson/document.h>

#include<fstream>
#include<string.h>
#include<string>

#include<memory>
#include<unordered_map>

namespace mea
{
    /// <summary>
    /// アセット基底クラス
    /// </summary>
    class AssetBase
    {
    public:

        /// <summary>
        /// コンストラクタ
        /// </summary>
        AssetBase();

        /// <summary>
        /// デストラクタ
        /// </summary>
        virtual ~AssetBase();

        /// <summary>
        /// ハンドル取得処理
        /// </summary>
        /// <param name="handleName">:ハンドル名</param>
        /// <returns>ハンドル</returns>
        const int GetHandle(const std::string handleName);

    protected:

        /// <summary>
        /// Jsonファイル読み込み処理
        /// </summary>
        /// <param name="fileName">:ファイル名</param>
        void LoadJsonFile(const std::string fileName);

        /// <summary>
        /// ハンドル削除処理
        /// </summary>
        virtual void DeleteHandle() = 0;

        std::string mAssetType;                                  //アセットタイプ
        std::unordered_map < std::string, int > mHandledata;     //取得したハンドルデータ

        std::string mJsonFile;                               //jsonファイル
        rapidjson::Document mDoc;
    };
}

