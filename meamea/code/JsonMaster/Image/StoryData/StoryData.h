#pragma once
#include"../../IOUtility/IOUtility.h"

namespace mea
{
    class StoryData final
    {
    public:
        StoryData(Json json);
        ~StoryData() {};

        std::string GetBackGround() const { return globaldata.mBackGround; }
        std::string GetSelect() const { return globaldata.mSelect; }
        std::string GetNoselect() const { return globaldata.mNoselect; }

        std::string GetMeaData_Normal() const { return mea.mNormal; }
        std::string GetMeaData_Puzzled() const { return mea.mPuzzled; }

        std::string GetLilianData_Normal() const { return lilian.mNormal; }
        std::string GetLilianData_Puzzled()const { return lilian.mPuzzled; }
        std::string GetLilianData_Like() const { return lilian.mLike; }
        std::string GetLilianData_Impatience() const { return lilian.mImpatience; }

        std::string GetLaurenceData_Normal() const { return laurence.mNormal; }
        std::string GetLaurenceData_Puzzled()const { return laurence.mPuzzled; }
        std::string GetLaurenceData_Like() const { return laurence.mLike; }
        std::string GetLaurenceData_Impatience()const { return laurence.mImpatience; }

        std::string GetLaylaData_Normal() const { return layla.mNormal; }
        std::string GetLaylaData_Puzzled() const { return layla.mPuzzled; }
        std::string GetLaylaData_Like()const { return layla.mLike; }
        std::string GetLaylaData_Impatience()const { return layla.mImpatience; }
    private:

        struct GlobalData
        {
            std::string mBackGround;
            std::string mSelect;
            std::string mNoselect;
        }globaldata;

        struct MeaData
        {
            std::string mNormal;        //í èÌ
            std::string mPuzzled;       //ç¢òf
        }mea;

        struct CharacterData
        {
            std::string mNormal;        //í èÌ
            std::string mPuzzled;       //ç¢òf
            std::string mLike;          //çDä¥
            std::string mImpatience;    //è≈ÇË
        };

        void SetCharacterData(CharacterData& dataname, Json json);

        CharacterData lilian;
        CharacterData laurence;
        CharacterData layla;
    };
}


