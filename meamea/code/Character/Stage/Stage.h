#pragma once
#include<Dxlib>

class Stage final
{
public:

    /// <summary>
    /// コンストラクタ
    /// </summary>
    Stage();

    /// <summary>
    /// デストラクタ
    /// </summary>
    ~Stage();

    /// <summary>
    /// 更新処理
    /// </summary>
    void Update()override;

    /// <summary>
    /// 描画処理
    /// </summary>
    void Draw()override;;

    /// <summary>
    /// マップ情報を返す
    /// </summary>
    /// <param name="x">x値</param>
    /// <param name="y">y値</param>
    /// <returns></returns>
    int GetMapnumber(int x,int y)const { return mMapnumber[x][y]; }

private:

    const int mMapnumber[1][1];    //マップ情報

    int mMapChip;                  //マップ画像
    int mCharacterL;               //装飾用画像左
    int mCharacterR;               //装飾用画像右
};

