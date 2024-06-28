#include"DxLib.h"
#include"PlayObjectTag.h"
#include<vector>


namespace mea
{
    /// <summary>
    /// オブジェクトの親クラス
    /// </summary>
    class GameObject
    {
    public:
        std::vector<int> mPos = { 0,0 };
        VECTOR mPos;
        /// <summary>
        /// オブジェクトのx座標
        /// </summary>
        int mX;
        /// <summary>
        /// オブジェクトのy座標
        /// </summary>
        int mY;

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
        /// <param name="deltatime"></param>
        virtual void Input() = 0;

        /// <summary>
        /// タグ名取得
        /// </summary>
        /// <returns></returns>
        std::string GetTagName() { return tagName; }

    private:
        std::string tagName;
    };
}