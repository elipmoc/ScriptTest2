#pragma once

//�X�^�b�N�̈����
class StackMemory {
	const size_t stackSize;
	unsigned int nextPointer;//���Ɋ��蓖�Ă�v�f
	int currentNest = 0;//���݂̃l�X�g��
	const size_t maxNest=4;//�l�X�g�ő吔
	//nest���ƂɊ��蓖�ĂĂ郁�����̗v�f�̍ŏ���ۑ�
	int* nestMemoryFirst;
	//�X�^�b�N�̈�̐擪�A�h���X
	char* memoryPointer;
public:
	StackMemory(const size_t _stackSize, const size_t _maxNest)
		:stackSize(_stackSize),
		maxNest(_maxNest) {
		memoryPointer = (char*)malloc(stackSize);
		nestMemoryFirst = new int[maxNest];
		nestMemoryFirst[0] = 0;};
	//�l�X�g��[�߂�
	void PlusNest() {
		currentNest++;
		nestMemoryFirst[currentNest]=nextPointer;}
	//�l�X�g���������
	void MinusNest() {
		nextPointer=nestMemoryFirst[currentNest];
		currentNest--;}
	//�������m��
	template<typename T>
	T* New() {
			assert(!(nextPointer + sizeof(T) > stackSize));
		nextPointer += sizeof(T);
		return (T*)&memoryPointer[nextPointer - sizeof(T)];
	};
};