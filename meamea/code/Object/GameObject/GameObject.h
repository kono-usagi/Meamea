#include"DxLib.h"


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
        GameObject();//�R���X�g���N�^
        ~GameObject();//�f�X�g���N�^

        void Update();//�X�V
        void Draw();//�`��
        void Input(float deltatime);//���쏈��

    private:


    };
}