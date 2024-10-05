#ifndef __GAMEOBJECT_H__
#define __GAMEOBJECT_H__

#include<DxLib.h>
#include<vector>

#include"../GameObjectManager/GameObjectManager.h"
#include"../GameObject/StoryObjectTag.h"
#include"../GameObject/PlayObjectTag.h"
#include"../../JsonMaster/JsonManager/JsonManager.h"

namespace mea
{
    /// <summary>
    /// ゲームオブジェクトの基底
    /// </summary>
    class GameObject
    {
    public:

        /// <summary>
        /// コンストラクタ
        /// </summary>
        /// <param name="tagNasme">オブジェクト名</param>
        GameObject(std::string tagNasme);

        /// <summary>
        /// デストラクタ
        /// </summary>
        virtual ~GameObject();

        /// <summary>
        /// 更新
        /// </summary>
        virtual void Update(float deltatime) = 0;

        /// <summary>
        /// 描画
        /// </summary>
        virtual void Draw() = 0;

        /// <summary>
        /// 操作処理
        /// </summary>
        virtual void Input() {};

        /// <summary>
        /// 移動処理
        /// </summary>
        /// <param name="keyType">入力されたキー</param>
        virtual void Move(int keyType) {};


        /// <summary>
        /// タグ名取得
        /// </summary>
        /// <returns>タグ名</returns>
        std::string GetTagName()const { return mTag; }

        /// <summary>
        /// 座標取得
        /// </summary>
        /// <returns>オブジェクトの位置</returns>
        const VECTOR& GetObjPos() const { return mPos; }

        /// <summary>
        /// 指定した場所のマップ情報取得
        /// </summary>
        /// <param name="x">x情報</param>
        /// <param name="y">y情報</param>
        /// <returns>マップ情報</returns>
        const int GetMapInfo(int x, int y) const { return mMapInfo[x][y]; }

        /// <summary>
        /// マップ内の位置情報
        /// </summary>
        /// <returns>x位置</returns>
        const int GetMapX() const { return mMapX; }

        /// <summary>
        /// マップ内の位置情報
        /// </summary>
        /// <returns>y位置</returns>
        const int GetMapY() const { return mMapY; }


        bool mAlive;    // 生死状態
        /// <summary>
        /// ゲームオブジェクト生きているか 
        /// </summary>
        /// <returns></returns>
        bool GetAlive() const { return mAlive; }
        /// <summary>
        /// ゲームオブジェクト生死セット
        /// </summary>
        /// <param name="alive"></param>
        void SetAlive(bool alive) { mAlive = alive; }


    protected:

        int mMapInfo[20][20];   //マップ情報
        int mMapX;
        int mMapY;
        VECTOR mPos;            //オブジェクト位置
        std::string mTag;       //オブジェクト種類
    };
}
#endif __GAMEOBJECT_H__