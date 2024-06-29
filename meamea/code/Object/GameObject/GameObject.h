#include"DxLib.h"
#include"PlayObjectTag.h"
#include"../GameObjectManager/PlayObjectManager/PlayObjectManager.h"
#include<vector>


namespace mea
{
    /// <summary>
    /// �I�u�W�F�N�g�̐e�N���X
    /// </summary>
    class GameObject
    {
    public:

        /// <summary>
        /// �R���X�g���N�^
        /// </summary>
        /// <param name="tagNasme"></param>
        GameObject(std::string tagNasme);

        //GameObject(PlayObjectTag tag, VECTOR pos);//�R���X�g���N�^

        /// <summary>
        /// �f�X�g���N�^
        /// </summary>
        virtual ~GameObject();

        /// <summary>
        /// �X�V
        /// </summary>
        virtual void Update(float deltatime) = 0;

        /// <summary>
        /// �`��
        /// </summary>
        virtual void Draw() = 0;

        /// <summary>
        /// ���쏈��
        /// </summary>
        virtual void Input() = 0;

        /// <summary>
        /// �^�O���擾
        /// </summary>
        /// <returns></returns>
        std::string GetTagName() { return tagName; }

        /// <summary>
        /// �n�����I�u�W�F�N�g�̃^�O��Ԃ�
        /// </summary>
        /// <returns></returns>
        std::string GetTag();

        /// <summary>
        /// ���W�擾
        /// </summary>
        /// <returns></returns>
        const VECTOR& GetPos() const { return mPos; }

    protected:
        std::string tagName;
        VECTOR mPos;    //  �I�u�W�F�N�g�̍��W
    };
}