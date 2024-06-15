#pragma once
#include "../GameObject/GameObject.h"

namespace mea
{
    class StoryPlayer /*final :public GameObject*/
    {
    public:

        /// <summary>
        /// �R���X�g���N�^
        /// </summary>
        StoryPlayer();

        /// <summary>
        /// �f�X�g���N�^
        /// </summary>
        ~StoryPlayer();

        /// <summary>
        /// �X�V����
        /// </summary>
        void Update()/*override*/;

        /// <summary>
        /// �`�揈��
        /// </summary>
        void Draw()/*override*/;

        /// <summary>
        /// �L�[����
        /// </summary>
        void MoveByKey();

    private:

        int mFlameEffect[1];//�I���摜

        int mUp;            //�I���w��
        int mDown;          //�I���w��

        VECTOR mUppos;  //�摜���W
        VECTOR mDownpos;
    };

}