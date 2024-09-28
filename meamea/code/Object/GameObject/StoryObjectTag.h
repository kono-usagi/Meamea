#pragma once

#include <vector>
#include <string>

namespace mea
{
    /// <summary>
    /// ゲーム内の種類別タグ
    /// </summary>
    static struct StoryObjectTag
    {
        std::string CHARACTER = "character";
        std::string PLAYER = "player";
        std::string LILIAN = "lilian";
        std::string LAURENCE = "laurence";
        std::string LAYLA = "layla";
        std::string BACKGROUND = "background";
        std::string UI = "ui";
    }storyObjectTag;


    /// <summary>
    /// ループ制御用
    /// </summary>
    static std::vector<std::string>StoryObjectTagAll
    {
        storyObjectTag.CHARACTER,
        storyObjectTag.PLAYER,
        storyObjectTag.LILIAN,
        storyObjectTag.LAURENCE,
        storyObjectTag.LAYLA,
        storyObjectTag.BACKGROUND,
        storyObjectTag.UI,
    };
}