#pragma once
#include "stdafx.h"
namespace ByteCode {
	//�X�^�b�N�̈����
	class StackMemory {
		const size_t stackSize;
		unsigned int currentPointer = -1;
		unsigned int nextPointer=0;
		//�X�^�b�N�̈�̐擪�A�h���X
		char* memoryPointer;
	public:
		StackMemory(const size_t _stackSize)
			:stackSize(_stackSize)
		{
			memoryPointer = new char[stackSize];
		};
		//�X�^�b�N�ɐς�
		template<typename T>
		void Stack(T &value) {
			assert(!(nextPointer + sizeof(T) > stackSize));
			CurrentPointer = NextPointer;
			nextPointer += sizeof(T);
			*static_cast<T*>(&memoryPointer[currentPointer])=value;
		};
		//�X�^�b�N����P���o��
		template<typename T>
		T* GetStack() {
			return static_cast<T*>(&memoryPointer[currentPointer]);
		}
		//(���݂̃X�^�b�N�ʒu-offset)�̈ʒu�ɂ���X�^�b�N�����o��
		template<typename T>
		T* GetStack(unsigned int offset) {
			return static_cast<T*>(&memoryPointer[currentPointer - offset]);
		}
	};
}