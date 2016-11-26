/*#pragma once
template<typename type>
class Echo :public NonObject {
	Object<type>* ob;
	type* obp;
public:
	Echo(Memory* _m,Object<type>* _ob) :NonObject(_m),ob(_ob){
		obp = ob->GetPointer();
	}
	virtual void Run() {
		ob->Run();
		cout << *obp << endl;
	}
};*/