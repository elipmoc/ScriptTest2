#pragma once
#include "stdafx.h"
namespace ByteCode {
	//スタック領域実装
	class StackMemory {
		const size_t stackSize;
		unsigned int currentPointer = -1;
		unsigned int nextPointer=0;
		//スタック領域の先頭アドレス
		char* memoryPointer;
	public:
		StackMemory(const size_t _stackSize)
			:stackSize(_stackSize)
		{
			memoryPointer = new char[stackSize];
		};
		//スタックに積む
		template<typename T>
		void Stack(T &value) {
			assert(!(nextPointer + sizeof(T) > stackSize));
			CurrentPointer = NextPointer;
			nextPointer += sizeof(T);
			*static_cast<T*>(&memoryPointer[currentPointer])=value;
		};
		//スタックから１つ取り出す
		template<typename T>
		T* GetStack() {
			return static_cast<T*>(&memoryPointer[currentPointer]);
		}
		//(現在のスタック位置-offset)の位置にあるスタックを取り出す
		template<typename T>
		T* GetStack(unsigned int offset) {
			return static_cast<T*>(&memoryPointer[currentPointer - offset]);
		}
	};
}