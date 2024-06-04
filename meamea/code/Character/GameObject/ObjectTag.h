#pragma once
#include <vector>
#include <string>

namespace mea
{
    /// <summary>
    /// ゲーム内の種類別タグ
    /// </summary>
    static struct ObjectTag
    {
        std::string PLAYER = "player";
        std::string LILIAN = "lilian";
        std::string LAURENCE = "laurence";
        std::string LAYLA = "layla";
        std::string BACKGROUND = "background";
        std::string UI = "ui";
    }ObjectTag;


    /// <summary>
    /// ループ制御用
    /// </summary>
    static std::vector<std::string>ObjectTagAll
    {
        ObjectTag.PLAYER,
        ObjecctTag.LILIAN,
        ObjectTag.LAURENCE,
        ObjectTag.LAYLA,
        ObjectTag.BACKGROUND,
        ObjectTag.UI,
    };
}