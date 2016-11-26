/*#pragma once
//For文

class For :public NonObject{
	NonObject* define;//宣言
	Object<bool>* conditions;//条件式
	bool* conditionsP;//条件式の返り値
	NonObject* count;//カウント
public:
	std::vector<NonObject*> objects;//繰り返し実行されるObject
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