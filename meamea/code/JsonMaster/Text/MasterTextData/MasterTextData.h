#pragma once
#include <memory>
#include "../../IOUtility/IOUtility.h"

#include "../LilianData/LilianData.h"

namespace mea
{
    /// <summary>
    /// JsonTextデータ管理クラス
    /// </summary>
    class MasterTextData final
    {
    public:
        /// <summary>
	    /// インストラクタ
	    /// </summary>
        MasterTextData();

        /// <summary>
        /// デストラクタ
        /// </summary>
        ~MasterTextData();

        /// <summary>
        /// LilianDataインスタンス
        /// </summary>
        /// <returns>Lilianデータ</returns>
        class LilianData* LilianInstance() { return liliandata.get(); }

    private:
        IOUtility ioutility;                            //IOUtilityインスタンス

        std::unique_ptr<class LilianData> liliandata;   //Lilian
    };
}