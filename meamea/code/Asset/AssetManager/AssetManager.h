#pragma once
#include<memory>

#include "../Img/Img.h"
#include "../Sound/Sound.h"

namespace mea
{
    /// <summary>
    /// アセット管理
    /// </summary>
    class AssetManager final
    {
    public:

        /// <summary>
        /// コンストラクタ
        /// </summary>
        AssetManager();

        /// <summary>
        /// デストラクタ
        /// </summary>
        ~AssetManager();
    private:

        std::unique_ptr<class Img> img;         //imgの実態
        std::unique_ptr<class Sound> sound;     //サウンドの実態
    };
}
