#include "Character.h"

namespace mea
{
    void Character::Init()
    {
        //画像読み込み
        mCharaImage[0] = LoadGraph("img/Normal.PNG");
        mCharaImage[1] = LoadGraph("img/Like.PNG");
        mCharaImage[2] = LoadGraph("img/Puzzled.PNG");
        mMeaImage[0] = LoadGraph("img/Mea_Normal.PNG");
        mMeaImage[1] = LoadGraph("img/Mea_Puzzled.PNG");

        //ファイル読み込み
        mFileHandle = FileRead_open(mFileName[0]);

    }

    void Character::Finalize()
    {
        //画像の削除
        for (int i = 0; i < 3; i++)
        {
            DeleteGraph(mCharaImage[i]);
        }
        for (int i = 0; i < 2; i++)
        {
            DeleteGraph(mMeaImage[i]);
        }

        //ファイルを閉じる
        FileRead_close(mFileHandle);
    }

    void Character::Input(int ChoiceDecisionY)
    {
        //テキスト読み込み
        FileRead_gets(mTextFlag, 256, mFileHandle);

        if (strcmp(mTextFlag, mTFlag) == 0)
        {
            FileRead_gets(mNowCharaImage, 256, mFileHandle);
            FileRead_gets(mNowMeaImage, 256, mFileHandle);
        }
        //TextFlagがQになっていたら
        if (strcmp(mTextFlag, mQFlag) == 0)
        {
            //Aルート
            if (ChoiceDecisionY == 750)
            {
                FileRead_gets(mNextText, 256, mFileHandle);
            }
            //Bルート
            else /*if (ChoiceDecisionY == 900)*/
            {
                FileRead_gets(mNextText, 256, mFileHandle);
                FileRead_gets(mNextText, 256, mFileHandle);
            }
            //現在のファイルを閉じる
            FileRead_close(mFileHandle);
            for (int i = 0; i < 3; i++)
            {
                //次のファイル名
                if (strcmp(mNextText, mFileName[i]) == 0)
                {
                    //新しいファイルを開く
                    mFileHandle = FileRead_open(mFileName[i]);
                    //テキスト読み込み
                    FileRead_gets(mTextFlag, 256, mFileHandle);
                    FileRead_gets(mNowCharaImage, 256, mFileHandle);
                    FileRead_gets(mNowMeaImage, 256, mFileHandle);
                }
            }

        }

    }

    void Character::Draw()
    {
        //TextFlagがTのとき
        if (strcmp(mTextFlag, mTFlag) == 0)
        {
            for (int i = 0; i < 3; i++)
            {
                //ファイル名が同じイラストを表示
                if (strcmp(mNowCharaImage, mCharaFaceName[i]) == 0)
                {
                    if (i == 1)
                    {
                        DrawGraph(1200, 40, mCharaImage[i], TRUE);
                    }
                    else
                    {
                        DrawGraph(1000, 100, mCharaImage[i], TRUE);
                    }
                    break;
                }
            }
            for (int i = 0; i < 2; i++)
            {
                //ファイル名が同じイラストを表示
                if (strcmp(mNowMeaImage, mMeaFaceName[i]) == 0)
                {
                    DrawGraph(400, 60, mMeaImage[i], TRUE);
                    break;
                }
            }
        }

    }
}