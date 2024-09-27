#pragma once
#include"../../GameObject/GameObject.h"
#include "../../../JsonMaster/JsonManager/JsonManager.h"
#include<vector>
#include<string>

namespace mea
{
    class Character
    {
    public:

        void Init();

        void Finalize();

        void Input(int ChoiceDecisionY);

        void Draw();


    private:
        int mFileHandle;
        std::string mFileName[5];
        std::string mImgName[5];
        int mCharaImage[3];//キャラの画像
        int mMeaImage[2];//メアの画像
        char mCharaFaceName[3][40] = { "img/Normal.PNG" ,"img/Like.PNG","img/Puzzled.PNG" };//キャラの画像ファイル名
        char mMeaFaceName[2][40] = { "img/Mea_Normal.PNG","img/Mea_Puzzled.PNG" };
        char mNowCharaImage[40];//表示するキャラの画像ファイル名が入る
        char mNowMeaImage[40];//表示するメアの画像ファイル名が入る
        char mNextText[40];//次のテキストファイル名が入る

        char mTextFlag[2];

        char mTFlag[2] = "t";
        char mQFlag[2] = "q";


    };

}
