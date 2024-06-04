#pragma once

#include<../Rapidjson/istreamwrapper.h>
#include<../Rapidjson/document.h>

#include<fstream>
#include<string.h>
#include<string>

#include<memory>
#include<unordered_map>

namespace mea
{
    /// <summary>
    /// �A�Z�b�g���N���X
    /// </summary>
    class AssetBase
    {
    public:

        /// <summary>
        /// �R���X�g���N�^
        /// </summary>
        AssetBase();

        /// <summary>
        /// �f�X�g���N�^
        /// </summary>
        virtual ~AssetBase();

        /// <summary>
        /// Json�t�@�C���̓ǂݍ���
        /// </summary>
        /// <returns></returns>
        const rapidjson::Value& GetJsonData() { return mDoc[mAssetType.c_str()]; }

        /// <summary>
        /// �n���h���擾����
        /// </summary>
        /// <param name="hndleName"></param>
        /// <returns></returns>
        const int GetHandle(const std::string hndleName);

    protected:

        /// <summary>
        /// Json�t�@�C���ǂݍ��ݏ���
        /// </summary>
        /// <param name="fileName">:�t�@�C����</param>
        void LoadJsonFile(const std::string fileName);

        /// <summary>
        /// �n���h���ǉ�����
        /// </summary>
        virtual void AddHandle(const std::string fileName) = 0;

        /// <summary>
        /// �n���h���폜����
        /// </summary>
        virtual void DeleteHandle() = 0;

        int mHoldHandle;                  //�ꎞ�ۑ��n���h��
        int mDupHandle;                   //�����n���h��

        std::string mAssetType;                              //�A�Z�b�g�^�C�v
        std::unordered_map < std::string, int > mHandledata;     //�擾�����n���h���f�[�^

        std::string mJsonFile;                               //json�t�@�C��
        rapidjson::Document mDoc;
    };
   
}

