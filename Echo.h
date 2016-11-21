#pragma once
/*
class Echo :public Object {
public:
	vector<const Object*> objects;
	virtual void operator=(const bool i) { cout << i; }
	virtual void operator=(const int i) { cout << i; }
	virtual void operator=(const double i) { cout << i; }
	Echo(Memory* _m) :Object(_m){}
	virtual void Run() {
		for (unsigned int i = 0; i < objects.size(); i++) {
			objects[i]->GetVariant().equal(this);
			cout << endl;
		}
	}
};*/