#pragma once

//スタック領域実装
class StackMemory {
	const size_t stackSize;
	unsigned int nextPointer;//次に割り当てる要素
	int currentNest = 0;//現在のネスト数
	const size_t maxNest=4;//ネスト最大数
	//nestごとに割り当ててるメモリの要素の最初を保存
	int* nestMemoryFirst;
	//スタック領域の先頭アドレス
	char* memoryPointer;
public:
	StackMemory(const size_t _stackSize, const size_t _maxNest)
		:stackSize(_stackSize),
		maxNest(_maxNest) {
		memoryPointer = (char*)malloc(stackSize);
		nestMemoryFirst = new int[maxNest];
		nestMemoryFirst[0] = 0;};
	//ネストを深める
	void PlusNest() {
		currentNest++;
		nestMemoryFirst[currentNest]=nextPointer;}
	//ネストを一つ抜ける
	void MinusNest() {
		nextPointer=nestMemoryFirst[currentNest];
		currentNest--;}
	//メモリ確保
	template<typename T>
	void* New() {
			assert(!(nextPointer + sizeof(T) > stackSize));
		nextPointer += sizeof(T);
		return &memoryPointer[nextPointer - sizeof(T)];
	};
};