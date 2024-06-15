#pragma once
#include<Dxlib>

namespace mea
{
    class Stage final
    {
    public:

        /// <summary>
        /// �R���X�g���N�^
        /// </summary>
        Stage();

        /// <summary>
        /// �f�X�g���N�^
        /// </summary>
        ~Stage();

        /// <summary>
        /// �X�V����
        /// </summary>
        void Update()override;

        /// <summary>
        /// �`�揈��
        /// </summary>
        void Draw()override;;

        /// <summary>
        /// �}�b�v����Ԃ�
        /// </summary>
        /// <param name="x">x�l</param>
        /// <param name="y">y�l</param>
        /// <returns></returns>
        int GetMapnumber(int x, int y)const { return mMapnumber[x][y]; }

    private:

        int mMapnumber1[8][8];    //�}�b�v���
        int mMapnumber2[16][16];    //�}�b�v���
        int mMapnumber3[24][24];    //�}�b�v���


        int mMapChip;                  //�}�b�v�摜
        int mCharacterL;               //�����p�摜��
        int mCharacterR;               //�����p�摜�E
    };


}
