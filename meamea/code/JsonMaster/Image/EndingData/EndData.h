#pragma once
#include"../IOUtility/IOUtility.h"

namespace mea
{
    class EndData final
    {
    public:
        EndData(Json json);
        ~EndData() {};
        
    private:
       
    };

    class EndGlobalData final
    {
    public:
        EndGlobalData(Json json);
        ~EndGlobalData() {};

        std::string GetBackgGround(int number) { return mBackgGround[number]; }
        std::string GetLilian() { return mLilian; }
        std::string GetLaurence() { return mLaurence; }
        std::string GetLayla() { return mLayla; }
    private:
        std::string mBackgGround[2];
        std::string mLilian;
        std::string mLaurence;
        std::string mLayla;
    };

    class HappyEndData final
    {
    public:
        HappyEndData(Json json);
        ~HappyEndData() {};

        std::string Getsteel(int number) { return mSteel[number]; }
        //int ScaleSet() { return mScale; }
    private:
        const int mScale = 2;
        std::string mSteel[2];
    };

    class BadEndData final
    {
    public:
        BadEndData(Json json);
        ~BadEndData() {};
        std::string Getsteel(int number) { return mSteel[number]; }
    private:
        const int mScale = 3;
        std::string mSteel[3];
    };
}


