#include"BackGround.h"
#include"../../../JsonMaster/JsonManager/JsonManager.h"

namespace mea
{
    BackGround::BackGround()
    {
        //画像読み込み
        mImgName[0] = JsonManager::ImgDataInstance()->StoryDataInstance()->GetBackGround();
        mImgName[1] = JsonManager::ImgDataInstance()->StoryDataInstance()->GetNameFlame();
        BackGroundHandle = LoadGraph(mImgName[0].c_str());
        NameFrameHandle = LoadGraph(mImgName[1].c_str());
    }

    BackGround::~BackGround()
    {
        //読み込みデータの削除
        DeleteGraph(BackGroundHandle);
        DeleteGraph(NameFrameHandle);
    }

    void BackGround::Update()
    {
        Draw();
    }

    void BackGround::Draw()
    {
        //背景の表示
        DrawGraph(0, 0, BackGroundHandle, TRUE);
        //名前枠の表示
        DrawGraph(0, 0, NameFrameHandle, TRUE);
    }
}