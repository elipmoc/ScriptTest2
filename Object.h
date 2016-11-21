//　　　<返り値の型>
template<typename RESOULT>
class Object {
protected:
	Memory* m;
	RESOULT* pointer=NULL;//返り値を保存するポインタ
public:
	Object(Memory* _m) :m(_m){}
	//返り値の型を返す
	const Type GetType();
	//返り値をポインタで返す
	RESOULT* GetPointer() { return pointer; };
	//実行
	virtual void Run(){};
	virtual void operator=(const int) { cout << "Object=intErr" << endl; assert(0);exit(0); };
	virtual void operator=(const double) { cout << "Object=doubleErr" << endl; assert(0);exit(0); };
	virtual void operator=(const bool) { cout << "Object=boolErr" << endl; assert(0);exit(0); };
};
const Type Object<int>::GetType() { return Type::_int; }
const Type Object<double>::GetType() { return Type::_double; }
const Type Object<char>::GetType() { return Type::_char; }
const Type Object<bool>::GetType() { return Type::_bool; }
const Type Object<void>::GetType() { return Type::_void; }

