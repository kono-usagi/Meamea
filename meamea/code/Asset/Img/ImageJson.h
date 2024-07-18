#pragma once
#include "../AssetBase/AssetBase.h"

namespace mea
{
    class ImageJson final:public AssetBase
    {
    public:

        /// <summary>
        /// コンストラクタ
        /// </summary>
        ImageJson();

        /// <summary>
        /// デストラクタ
        /// </summary>
        ~ImageJson();

        /// <summary>
        /// titleインスタンス
        /// </summary>
        /// <returns>titleデータ</returns>
        class TitleData* TitleInstance() { return titledata.get(); }

    private:
        std::unique_ptr<class TitleData> titledata;     //title
    };
}

