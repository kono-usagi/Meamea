#pragma once
#include "../IOUtility/IOUtility.h"

namespace mea
{
    class PlayData final
    {
    public:
        PlayData(Json json);
        ~PlayData();
        Json GetAllData() const { return mAllData; }

        std::string GetLeftSide() const { return globaldata.mLeftSide; }
        std::string GetPlayer() const { return globaldata.mPlayer; }
        std::string GetMoveRock() const { return globaldata.mMoveRock; }

        std::string GetStage_One_BackGround() const { return one.mBackGround; }
        std::string GetStage_One_RightSide() const { return one.mRightSide; }
        std::string GetStage_One_Character() const { return one.mCharacter; }

        std::string GetStage_Two_BackGround() const { return two.mBackGround; }
        std::string GetStage_Two_RightSide() const { return two.mRightSide; }
        std::string GetStage_Two_Character() const { return two.mCharacter; }

        std::string GetStage_Three_BackGround() const { return three.mBackGround; }
        std::string GetStage_Three_RightSide() const { return three.mRightSide; }
        std::string GetStage_Three_Character() const { return three.mCharacter; }

    private:
        Json mAllData;

        struct GlobalData
        {
            std::string mLeftSide;
            std::string mPlayer;
            std::string mMoveRock;
        }globaldata;

        struct StageData
        {
            std::string mBackGround;
            std::string mRightSide;
            std::string mCharacter;
        };
        void SetStageData(StageData& dataname,Json json);

        StageData one;
        StageData two;
        StageData three;
    };
}