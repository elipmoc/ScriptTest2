#pragma once
#include "stdafx.h"



namespace ByteCode {
	//–½—ßƒNƒ‰ƒX
	class Order {
	protected:StackMemory* sm;
		Order(StackMemory* _sm) :sm(_sm){};
	public :virtual void Run() = 0;
	};

	template<typename T>
	class PushValue:Order {
	public:
		T value;
		PushValue(StckMemory* _sm,T _value):Order(_sm),value(_value){}
		virtual void Run() {
			sm->Stack<T>(value);
		}
	};

	class StackMachine {
		StackMemory sm;
		StackMachine(const size_t stackSize) :sm(stackSize) {};
		void ByteCodeRun() {
		};
	};
}