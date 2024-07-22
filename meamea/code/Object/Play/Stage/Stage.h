#pragma once
#include<Dxlib.h>
#include"../../GameObject/GameObject.h"



//配列サイズ定数
const int FIRST_SIZE = 30;//マップ情報配列の最初の要素数
const int SECOND_SIZE = 10;//マップ情報配列の二番目の要素数

int mMapInfoArray[FIRST_SIZE][SECOND_SIZE];//マップ情報配列
int mArrayFirst;//マップ情報配列の最初
int mArraySecond;//マップ情報配列の二番目
int mMapInfo;//マップ情報種類


namespace mea
{
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
        void Draw()override;

        /// <summary>
        /// マップ情報を返す
        /// </summary>
        /// <param name="x">x値</param>
        /// <param name="y">y値</param>
        /// <returns></returns>
        int GetMapNumber(int x, int y)const { return mMapNumber[x][y]; }

        /// <summary>
        /// プレイヤーが移動できるか
        /// </summary>
        /// <returns></returns>
        bool isPlayerMove();

        /// <summary>
        /// 動く岩が移動できるか
        /// </summary>
        /// <returns></returns>
        bool isMapObjectMove();

    private:
        //マップ情報定数
        const int MAP_OBJECT_FLOOR = 0;     //床　通行可ダメ無
        const int MAP_OBJECT_WALL = 1;      //岩、壁　通行不可
        const int MAP_OBJECT_TRAP = 2;//罠　通行可ダメ有
        const int MAP_OBJECT_ROCK = 3;//動く岩　通行不可移動可

        //キー入力定数
        const int KEY_UP = 0;
        const int KEY_DOWN = 1;
        const int KEY_RIGHT = 2;
        const int KEY_LEFT = 3;

        int mMapNumber[1][1];    //マップ情報

        int mMapNumber1[8][8];    //マップ情報

        int mMapImage;              //マップ画像
        int mMapBackGround;         //マップ背景画像
    };


}
