#pragma once
#include"GameObject.h"

namespace mea
{
	class PlayCharacterBase: public GameObject
	{
	public:
		/// <summary>
		/// �R���X�g���N�^
		/// </summary>
		PlayCharacterBase();

		/// <summary>
		/// �f�X�g���N�^
		/// </summary>
		~PlayCharacterBase();

		/// <summary>
		/// �X�V
		/// </summary>
		void Update();

		/// <summary>
		/// �`��
		/// </summary>
		void Draw();

		/// <summary>
		/// ���쏈��
		/// </summary>
		/// <param name="deltaTime"></param>
		void Input(float deltaTime);

	private:

	};
}