#pragma once
#include <DxLib.h>
#include <unordered_map>
#include <memory>
#include <vector>

#include"../IfObjectManager.h"
#include"../../GameObject/StoryObjectTag.h"

namespace mea
{
	/// <summary>
	/// StoryObjectManajer�N���X
	/// </summary>
	class StoryObjectManager final :public IfObjectManager
	{
	public:
		/// <summary>
		/// ������
		/// </summary>
		void Initialize() override;

		/// <summary>
		/// �I�u�W�F�N�g�o�^
		/// </summary>
		/// <param name="newObj">�o�^����I�u�W�F�N�g</param>
		void Entry(GameObject* newObj) override;

		/// <summary>
		/// �S�I�u�W�F�N�g�̍폜
		/// </summary>
		void ReleaseAllObj() override;

		/// <summary>
		/// �S�I�u�W�F�N�g�̍X�V����
		/// </summary>
		/// <param name="deltaTime">�f���^�^�C��</param>
		void Update(float deltaTime) override;

		/// <summary>
		/// ���ׂẴI�u�W�F�N�g�̕`��
		/// </summary>
		void Draw() override;

		/// <summary>
		/// �^�O��ނ̏��߂̃I�u�W�F�N�g��Ԃ�
		/// </summary>
		/// <param name="tag">�I�u�W�F�N�g�̎��</param>
		/// <returns>�ŏ��̃I�u�W�F�N�g</returns>
		GameObject* GetFirstGameObj(std::string tag) override;


	private:

		/// <summary>
		/// �R���X�g���N�^ �V���O���g��
		/// </summary>
		StoryObjectManager();

		static std::unique_ptr<StoryObjectManager> mInstance;							    // story�}�l�[�W���̎���
		std::unordered_map<std::string, std::vector<std::shared_ptr<GameObject>>> mObjects;	//�I�u�W�F�N�g���X�g
	};
}