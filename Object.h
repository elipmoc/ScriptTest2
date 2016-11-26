
/*//Objectで返り値が不定のクラス
class NonObject {
protected:
	Memory* m;
	//実行
public:
	NonObject(Memory* _m) :m(_m) {};
	virtual void Run()=0;
	//返り値の型を返す
	virtual const Type GetType() { return Type::_void; };
};

//　　　<返り値の型>
template<typename RESOULT>
class Object:public NonObject{
protected:
	RESOULT* pointer;//返り値を保存するポインタ
public:
    Object(Memory* _m) :NonObject(_m){ pointer = new(m->sm.New<RESOULT>()) RESOULT();};
	//返り値の型を返す
	const Type GetType() final;
	//返り値をポインタで返す
	RESOULT* GetPointer() { return pointer; };
	//実行
	virtual void Run() {};
	/*virtual void operator=(const int) { cout << "Object=intErr" << endl; assert(0);exit(0); };
	virtual void operator=(const double) { cout << "Object=doubleErr" << endl; assert(0);exit(0); };
	virtual void operator=(const bool) { cout << "Object=boolErr" << endl; assert(0);exit(0); };
};
const Type Object<int>::GetType() { return Type::_int; }
const Type Object<double>::GetType() { return Type::_double; }
const Type Object<char>::GetType() { return Type::_char; }
const Type Object<bool>::GetType() { return Type::_bool; }
const Type Object<void>::GetType() { return Type::_void; }
void* Object<void>::GetPointer() { return NULL; };

*/