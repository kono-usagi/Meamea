#include"DxLib.h"
#include"PlayObjectTag.h"
#include"../GameObjectManager/PlayObjectManager/PlayObjectManager.h"
#include<vector>


namespace mea
{
    /// <summary>
    /// オブジェクトの親クラス
    /// </summary>
    class GameObject
    {
    public:

        /// <summary>
        /// コンストラクタ
        /// </summary>
        /// <param name="tagNasme"></param>
        GameObject(std::string tagNasme);

        //GameObject(PlayObjectTag tag, VECTOR pos);//コンストラクタ

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
        virtual void Input() = 0;

        /// <summary>
        /// タグ名取得
        /// </summary>
        /// <returns></returns>
        std::string GetTagName() { return tagName; }

        /// <summary>
        /// 渡したオブジェクトのタグを返す
        /// </summary>
        /// <returns></returns>
        std::string GetTag();

        /// <summary>
        /// 座標取得
        /// </summary>
        /// <returns></returns>
        const VECTOR& GetPos() const { return mPos; }

    protected:
        std::string tagName;
        VECTOR mPos;    //  オブジェクトの座標
    };
}