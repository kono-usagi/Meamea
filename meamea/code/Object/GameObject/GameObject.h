#include"DxLib.h"
#include"PlayObjectTag.h"


namespace mea
{
    /// <summary>
    /// �I�u�W�F�N�g�̐e�N���X
    /// </summary>
    class GameObject
    {
    public:
        //vector�ɕύX�̉\������
        int mX;//�I�u�W�F�N�g��x���W
        int mY;//�I�u�W�F�N�g��y���W
        GameObject(PlayObjectTag tag);//�R���X�g���N�^
        //GameObject(PlayObjectTag tag, VECTOR pos);//�R���X�g���N�^

        virtual ~GameObject();//�f�X�g���N�^

        virtual void Update();//�X�V
        virtual void Draw();//�`��
        virtual void Input(float deltatime);//���쏈��

    private:


    };
}