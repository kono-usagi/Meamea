#include"DxLib.h"
#include"../MapObject/MapObject.h"

namespace mea
{
    class Player
    {
    public:
        Player();//�R���X�g���N�^
        ~Player();//�f�X�g���N�^

        virtual void Update();//�X�V
        virtual void Draw();//�`��
        virtual bool IsMove(int keytype);//�����邩�ǂ���
    };
}