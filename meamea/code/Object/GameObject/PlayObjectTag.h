#pragma once
#include <vector>
#include <string>

namespace mea
{
    /// <summary>
    /// �Q�[�����̎�ޕʃ^�O
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
    /// ���[�v����p
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