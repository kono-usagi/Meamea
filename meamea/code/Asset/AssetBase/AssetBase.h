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
        /// Jsonファイルの読み込み
        /// </summary>
        /// <returns></returns>
        const rapidjson::Value& GetJsonData() { return mDoc[mAssetType.c_str()]; }

        /// <summary>
        /// ハンドル取得処理
        /// </summary>
        /// <param name="hndleName"></param>
        /// <returns></returns>
        const int GetHandle(const std::string hndleName);

    protected:

        /// <summary>
        /// Jsonファイル読み込み処理
        /// </summary>
        /// <param name="fileName">:ファイル名</param>
        void LoadJsonFile(const std::string fileName);

        /// <summary>
        /// ハンドル追加処理
        /// </summary>
        virtual void AddHandle(const std::string fileName) = 0;

        /// <summary>
        /// ハンドル削除処理
        /// </summary>
        virtual void DeleteHandle() = 0;

        int mHoldHandle;                  //一時保存ハンドル
        int mDupHandle;                   //複製ハンドル

        std::string mAssetType;                              //アセットタイプ
        std::unordered_map < std::string, int > mHandledata;     //取得したハンドルデータ

        std::string mJsonFile;                               //jsonファイル
        rapidjson::Document mDoc;
    };
   
}

