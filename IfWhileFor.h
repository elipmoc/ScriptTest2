#pragma once
//For��
/*
class For :public Object {
	Object* define;//�錾
	Object* conditions;//������
	Object* count;//�J�E���g
public:
	std::vector<Object*> objects;//�J��Ԃ����s�����Object
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