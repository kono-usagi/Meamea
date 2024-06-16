#pragma once
#include <vector>
#include <string>

namespace mea
{
    /// <summary>
    /// ゲーム内の種類別タグ
    /// </summary>
    static struct PlayObjectTag
    {
        std::string PLAYER = "player";
        std::string LILIAN = "lilian";
        std::string LAURENCE = "laurence";
        std::string LAYLA = "layla";
        std::string STAGE = "stage";
        std::string MAPOBJECT = "mapobject";
        std::string UI = "ui";
    }PlayObjectTag;


    /// <summary>
    /// ループ制御用
    /// </summary>
    static std::vector<std::string>PlayObjectTagAll
    {
        PlayObjectTag.PLAYER,
        PlayObjectTag.LILIAN,
        PlayObjectTag.LAURENCE,
        PlayObjectTag.LAYLA,
        PlayObjectTag.MAPOBJECT,
        PlayObjectTag.STAGE,
        PlayObjectTag.UI,
    };
}