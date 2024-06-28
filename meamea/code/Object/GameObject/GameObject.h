#include"DxLib.h"
#include"PlayObjectTag.h"
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
        /// �v���C���[���W
        /// </summary>
        VECTOR mPos;

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
        /// <param name="deltatime"></param>
        virtual void Input() = 0;

        /// <summary>
        /// �^�O���擾
        /// </summary>
        /// <returns></returns>
        std::string GetTagName() { return tagName; }

    private:
        std::string tagName;
    };
}