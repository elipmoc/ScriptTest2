/*#pragma once
//For��

class For :public NonObject{
	NonObject* define;//�錾
	Object<bool>* conditions;//������
	bool* conditionsP;//�������̕Ԃ�l
	NonObject* count;//�J�E���g
public:
	std::vector<NonObject*> objects;//�J��Ԃ����s�����Object
	For(Memory* _m, NonObject* _define, Object<bool>* _conditions, NonObject* _count)
		:NonObject(_m), define(_define), conditions(_conditions), count(_count) {
		conditionsP = conditions->GetPointer();
	};
	virtual void Run() {
		auto size=objects.size();
		unsigned int i;
		conditions->Run();
		for (define->Run();*conditionsP;) {
			for (i = 0; i < size; ++i)objects[i]->Run();
			count->Run();
			conditions->Run();
		}
	};
};*/