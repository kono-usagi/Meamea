#pragma once
#include <DxLib.h>
#include <string>

#include"../GameObject/GameObject.h"

namespace mea
{
	/// <summary>
	/// ObjectManager�C���^�[�t�F�[�X
	/// </summary>
	class IfObjectManager
	{
	public:

		/// <summary>
		/// �f�X�g���N�^
		/// </summary>
		virtual ~IfObjectManager() {};

		/// <summary>
		/// ������
		/// </summary>
		virtual void Initialize()=0;

		/// <summary>
		/// �I�u�W�F�N�g�o�^
		/// </summary>
		/// <param name="newObj">�o�^����I�u�W�F�N�g</param>
		virtual void Entry(GameObject* newObj) = 0;

		/// <summary>
		/// �S�I�u�W�F�N�g�̍폜
		/// </summary>
		virtual void ReleaseAllObj() = 0;

		/// <summary>
		/// �S�I�u�W�F�N�g�̍X�V����
		/// </summary>
		/// <param name="deltaTime">�f���^�^�C��</param>
		virtual void Update(float deltaTime) = 0;

		/// <summary>
		/// ���ׂẴI�u�W�F�N�g�̕`��
		/// </summary>
		virtual void Draw() = 0;

		/// <summary>
		/// �^�O��ނ̏��߂̃I�u�W�F�N�g��Ԃ�
		/// </summary>
		/// <param name="tag">�I�u�W�F�N�g�̎��</param>
		/// <returns>�ŏ��̃I�u�W�F�N�g</returns>
		virtual GameObject* GetFirstGameObj(std::string tag) = 0;
	};
}
