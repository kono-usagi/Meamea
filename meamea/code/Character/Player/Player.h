#include"DxLib.h"

namespace mea
{
    class Player
    {
    public:
        Player();//�R���X�g���N�^
        ~Player();//�f�X�g���N�^

        void Update();//�X�V
        void Draw();//�`��
        bool IsMove(int keytype);//�����邩�ǂ���
    };
}