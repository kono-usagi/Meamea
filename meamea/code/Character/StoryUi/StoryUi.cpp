#include "StoryUi.h"

namespace mea
{
    StoryUi::StoryUi()
    {
        //�t�@�C���ǂݍ���
    }

    StoryUi::~StoryUi()
    {
        //�t�@�C���̉��?
    }

    void StoryUi::Update()
    {
        
    }

    void StoryUi::Draw()
    {
        //�t�@�C������1�s�ǂݍ���.
        FileRead_gets(String, 256, "�ǂݍ��񂾃t�@�C��");
        //�ǂݍ��񂾕�����̕\��
        DrawString(0, 0, String, GetColor(255, 255, 255));
    }

    void StoryUi::LoadFont()
    {
        //�t�H���g�̃��[�h
        LPCSTR  fontPath = "�t�H���g�t�@�C����.ttf";
        if (AddFontResourceEx(fontPath, FR_PRIVATE, NULL) > 0){}
        else
        {
            //�t�H���g�ǂݍ��݃G���[�\��
            MassageBox(NULL, "�t�H���g�ǂݍ��ݎ��s", "", MB_OK);
        }
        //�t�H���g�ύX
        ChangeFont("�t�H���g��", DX_CHARSET_DEFAULT);

        //�����T�C�Y�ύX
        SetFontSize(36);
    }
}