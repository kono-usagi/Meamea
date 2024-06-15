#include "Stage.h"

Stage::Stage()
{
    //マップ画像の読み込み
    //mMapChip=

    //マップ情報の読み込み
    //mMapnumber=

    //画面装飾画像の読み込み
    //mCharacterL=//メア
    //mCharacterR=//相手キャラクター
}

Stage::~Stage()
{
    //初期化
}

Stage::Update()
{
}

Stage::Draw()
{
    //マップ画像の表示
    DrawGraph(0, 0, mMapChip, FALSE);
    //画面装飾画像の表示
    DrawGraph(0, 0, mCharacterL, FALSE);
    DrawGraph(0, 0, mCharacterR, FALSE);
}
