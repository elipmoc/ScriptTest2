//�@�@�@<�Ԃ�l�̌^>
template<typename RESOULT>
class Object {
protected:
	Memory* m;
	RESOULT* pointer=NULL;//�Ԃ�l��ۑ�����|�C���^
public:
	Object(Memory* _m) :m(_m){}
	//�Ԃ�l�̌^��Ԃ�
	const Type GetType();
	//�Ԃ�l���|�C���^�ŕԂ�
	RESOULT* GetPointer() { return pointer; };
	//���s
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

