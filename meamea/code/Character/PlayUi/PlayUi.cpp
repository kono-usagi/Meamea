#include "PlayUi.h"
#include "Player.h"

namespace mea
{
    PlayUi::PlayUi()
    {

    }

    PlayUi::~PlayUi()
    {
        //�t�H���g�̃A�����[�h
        if(RemoveFontResourceEx(fontPath, FR_PRIVATE, NULL)) { }
        else
        {
            //�t�H���g�̃A�����[�h�G���[�\��   
            MessageBox(NULL, "remove failure", "", MB_OK);
        }
    }

    void PlayUi::Update()
    {
        GameObj*player=GameObjectManager::GetFirstGameObj(ObjTag.Player);
        //���݂̕����擾
        step = player->
    }

    void PlayUi::Draw()
    {
        //�����̕\��
        DrawString(0,0,step,GetColor(255,255,255));
    }

    void PlayUi::LoadFont()
    {
        LPCSTR  fontPath = "test.ttf";�@�@//�ǂݍ��ރt�H���g�t�@�C���̃p�X
        if (AddFontResourceEx(fontPath, FR_PRIVATE, NULL) > 0) { }
        else
        {
            //�t�H���g�ǂݍ��݃G���[�\��
            MessegeBox(NULL, "�t�H���g�ǂݍ��ݎ��s", "", MB_OK);
        }
        //�t�H���g�ύX
        ChangeFont("�t�H���g��", DX_CHARSET_DEFAULT);
        //�����T�C�Y�ύX
        SetFontSize(36);
    }
}