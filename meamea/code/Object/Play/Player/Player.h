#include"DxLib.h"
#include"../MapObject/MapObject.h"

namespace mea
{
    class Player
    {
    public:
        //�v���C���[�ړ������@50
        //�`�b�v�T�C�Y�@50
        //�v���C���[�摜
        //�v���C���[�̌����@��0�@�E1
        //�v���C���[�摜�̎�ށ@5


        Player();//�R���X�g���N�^
        ~Player();//�f�X�g���N�^

        virtual void Update();//�X�V
        virtual void Draw();//�`��
        virtual void Move();//�ړ�
    };
}