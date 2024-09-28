#include "Character.h"

namespace mea
{
    Character::Character()
        :GameObject(storyObjectTag.CHARACTER)
    {
        //処理なし
    }
    Character::~Character()
    {
        //処理なし
    }

    void Character::Update(float deltaTime)
    {
        //処理なし
    }

    void Character::Init()
    {
        //テキストファイル読み込み
        mFileName[0] = JsonManager::TextDataInstance()->LilianInstance()->GetImage1();
        mFileName[1] = JsonManager::TextDataInstance()->LilianInstance()->GetImage1A();
        mFileName[2] = JsonManager::TextDataInstance()->LilianInstance()->GetImage1B();
        mFileName[3] = JsonManager::TextDataInstance()->LilianInstance()->GetImage2A();
        mFileName[4] = JsonManager::TextDataInstance()->LilianInstance()->GetImage2B();

        
        //画像読み込み
        mImgName[0] = JsonManager::ImgDataInstance()->StoryDataInstance()->GetLilianData_Normal();
        mImgName[1] = JsonManager::ImgDataInstance()->StoryDataInstance()->GetLilianData_Like();
        mImgName[2] = JsonManager::ImgDataInstance()->StoryDataInstance()->GetLilianData_Puzzled();
        mImgName[3] = JsonManager::ImgDataInstance()->StoryDataInstance()->GetMeaData_Normal();
        mImgName[4] = JsonManager::ImgDataInstance()->StoryDataInstance()->GetMeaData_Puzzled();

        mCharaImage[0] = LoadGraph(mImgName[0].c_str());
        mCharaImage[1] = LoadGraph(mImgName[1].c_str());
        mCharaImage[2] = LoadGraph(mImgName[2].c_str());
        mMeaImage[0] = LoadGraph(mImgName[3].c_str());
        mMeaImage[1] = LoadGraph(mImgName[4].c_str());

        //ファイル読み込み
        mFileHandle = FileRead_open(mFileName[0].c_str());

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
                if (strcmp(mNextText, mFileName[i].c_str()) == 0)
                {
                    //新しいファイルを開く
                    mFileHandle = FileRead_open(mFileName[i].c_str());
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