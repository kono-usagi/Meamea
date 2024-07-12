#pragma once
#include<memory>

#include "../ImageJson/ImageJson.h"

namespace mea
{
    /// <summary>
    /// アセット管理
    /// </summary>
    class AssetManager final
    {
    public:

        /// <summary>
        /// 初期化
        /// </summary>
        static void InitAssetManager();

        /// <summary>
        /// イメージインスタンス
        /// </summary>
        /// <returns></returns>
        static class ImageJson* ImgInstance() { return assetmanager->imagejson.get(); }

        /// <summary>
        /// デストラクタ
        /// </summary>
        ~AssetManager();
    private:

        /// <summary>
        /// コンストラクタ(シングルトン)
        /// </summary>
        AssetManager();

        static std::unique_ptr<class AssetManager> assetmanager;//自身の実態

        std::unique_ptr<class ImageJson> imagejson;//ImgJsonの実態
    }
}
