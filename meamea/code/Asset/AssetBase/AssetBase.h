#pragma once

#include"../../IncludeFile/json.hpp"

#include<fstream>
#include<future>
#include<string>
#include<memory>

using Json = nlohmann::json;

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

    protected:

        /// <summary>
        /// jsonファイルの読み込み
        /// </summary>
        /// <param name="fileName">ファイルの名前</param>
        /// <returns>解析済みのjsonファイル</returns>
        Json LoadJsonFile(const std::string fileName);

        /// <summary>
        /// ハンドル削除処理
        /// </summary>
        virtual void DeleteHandle() = 0;

        Json mJsondata;            //jsonデータ
        std::string mJsonFile;     //jsonファイル
    };
}

