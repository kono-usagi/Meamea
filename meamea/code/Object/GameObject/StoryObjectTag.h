#pragma once

#include <vector>
#include <string>

namespace mea
{
    /// <summary>
    /// �Q�[�����̎�ޕʃ^�O
    /// </summary>
    static struct StoryObjectTag
    {
        std::string PLAYER = "player";
        std::string LILIAN = "lilian";
        std::string LAURENCE = "laurence";
        std::string LAYLA = "layla";
        std::string BACKGROUND = "background";
        std::string UI = "ui";
    }StoryObjectTag;


    /// <summary>
    /// ���[�v����p
    /// </summary>
    static std::vector<std::string>StoryObjectTagAll
    {
        StoryObjectTag.PLAYER,
        StoryObjecctTag.LILIAN,
        StoryObjectTag.LAURENCE,
        StoryObjectTag.LAYLA,
        StoryObjectTag.BACKGROUND,
        StoryObjectTag.UI,
    };
}