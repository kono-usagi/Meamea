#pragma once
#include"../AssetBase/AssetBase.h"

namespace mea
{
	class Img final:public AssetBase
	{
	public:
		/// <summary>
		/// �R���X�g���N�^
		/// </summary>
		Img();

		/// <summary>
		/// �f�X�g���N�^
		/// </summary>
		~Img();

		/// <summary>
		/// �n���h���폜
		/// </summary>
		void DeleteHandle()override;
	};
}

