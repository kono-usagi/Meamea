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
    } playObjectTag;


    /// <summary>
    /// ループ制御用
    /// </summary>
    static std::vector<std::string>PlayObjectTagAll
    {
        playObjectTag.PLAYER,
        playObjectTag.LILIAN,
        playObjectTag.LAURENCE,
        playObjectTag.LAYLA,
        playObjectTag.MAPOBJECT,
        playObjectTag.STAGE,
        playObjectTag.UI,
    };
}