#include"BackGround.h"

namespace mea
{
    BackGround::BackGround()
    {
        //画像の読み込み
        BackGroundHandle = LoadGraph("ファイル名");
        NameFrameHandle = LoadGraph("ファイル名");
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