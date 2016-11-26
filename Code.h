/*#pragma once
class Code :public NonObject {
	NonObject* ob;
public:
	std::vector<NonObject*> objects;
	Code(Memory* _m) :NonObject(_m){}
	virtual void Run() {
		unsigned int i;
		unsigned int size = objects.size();
		for (i = 0; i < size; ++i)objects[i]->Run();
	}
};*/