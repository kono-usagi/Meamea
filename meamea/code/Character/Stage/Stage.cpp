#include "Stage.h"

Stage::Stage()
{
    //�}�b�v�摜�̓ǂݍ���
    //mMapChip=

    //�}�b�v���̓ǂݍ���
    //mMapnumber=

    //��ʑ����摜�̓ǂݍ���
    //mCharacterL=//���A
    //mCharacterR=//����L�����N�^�[
}

Stage::~Stage()
{
    //������
}

Stage::Update()
{
}

Stage::Draw()
{
    //�}�b�v�摜�̕\��
    DrawGraph(0, 0, mMapChip, FALSE);
    //��ʑ����摜�̕\��
    DrawGraph(0, 0, mCharacterL, FALSE);
    DrawGraph(0, 0, mCharacterR, FALSE);
}
