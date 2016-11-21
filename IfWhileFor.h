#pragma once
//For文
/*
class For :public Object {
	Object* define;//宣言
	Object* conditions;//条件式
	Object* count;//カウント
public:
	std::vector<Object*> objects;//繰り返し実行されるObject
	For(Memory* _m, Object* _define, Object* _conditions, Object* _count)
		:Object(_m), define(_define), conditions(_conditions), count(_count) {};
	virtual void Run() {
		auto size=objects.size();
		m->sm.PlusNest();
		unsigned int i;
		for (define->Run(); conditions->GetVariant(); count->Run()) {
			m->sm.PlusNest();
			for (i = 0; i < size; ++i)objects[i]->Run();
			m->sm.MinusNest();
		}
		m->sm.MinusNest();
	};
};*/