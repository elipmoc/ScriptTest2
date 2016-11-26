#pragma once
/*

//+演算子 < 左辺オブジェクトの返り値の型,　左辺オブジェクトの返り値の型　, このオブジェクトの返り値の型 >
template<typename Left,typename Right,typename RESOULT>
class Plus:public Object<RESOULT>{
	Left* leftP;
	Right* rightP;
    Object* leftO;
	Object* rightO;
public:
	Plus(Memory* _m, Object* _leftO, Object* _rightO) :Object(_m), leftO(_leftO), rightO(_rightO){
		leftP = leftO->GetPointer();
		rightP = rightO->GetPointer();
	}
	virtual void Run() { leftO->Run(); rightO->Run(); *pointer=*leftP + *rightP; }
};
template<typename Left, typename Right>
struct MakePlus;
template<>
struct MakePlus<int,int> {
	typedef Plus<int, int, int> o;
};


//=演算子 < 左辺オブジェクトの返り値の型,　左辺オブジェクトの返り値の型 >
template<typename Left, typename Right>
class Equal :public NonObject{
	Left* leftP;
	Right* rightP;
	Object<Right>* right;
	Object<Left>* left;
public:
	Equal(Memory* _m, Object<Left>* _left,Object<Right>* _right) :NonObject(_m), left(_left), right(_right) {
		rightP = right->GetPointer();
		leftP = left->GetPointer();
	}
	virtual void Run() {
		right->Run();
		left->Run();
		*leftP = *rightP;
	}
};


//==演算子 < 左辺オブジェクトの返り値の型, 左辺オブジェクトの返り値の型 >
template<typename Left, typename Right>
class EqualEqual :public Object<bool>{
	Left* leftP;
	Right* rightP;
	Object<Left>* left;
	Object<Right>* right;
public:
	EqualEqual(Memory* _m, Object<Left>* _left, Object<Right>* _right)
		:Object(_m), left(_left), right(_right){
		leftP = left->GetPointer();
		rightP=right->GetPointer();
	}
	virtual void Run() { *pointer = *leftP == *rightP; }
};

// !=演算子 < 左辺オブジェクトの返り値の型, 左辺オブジェクトの返り値の型 >
template<typename Left, typename Right>
class NotEqual :public Object<bool> {
	Left* leftP;
	Right* rightP;
	Object<Left>* left;
	Object<Right>* right;
public:
	NotEqual(Memory* _m, Object<Left>* _left, Object<Right>* _right)
		:Object(_m), left(_left), right(_right) {
		leftP = left->GetPointer();
		rightP = right->GetPointer();
	}
	virtual void Run() { *pointer = *leftP != *rightP; }
};

//equal系マクロ
#define _EQUAL(equalType,A)\
if (o2->GetType() == Type::_int)return new equalType<A, int>(m, (Object<A>*)o1, (Object<int>*)o2);\
if (o2->GetType() == Type::_double)return new equalType<A, double>(m, (Object<A>*)o1, (Object<double>*)o2);\
if (o2->GetType() == Type::_char)return new equalType<A, char>(m, (Object<A>*)o1, (Object<char>*)o2);\
if (o2->GetType() == Type::_bool)return new equalType<A, bool>(m, (Object<A>*)o1, (Object<bool>*)o2);

//Equal生成関数
NonObject* MakeEqual(Memory* m, NonObject* o1, NonObject* o2) {
	switch (o1->GetType()) {
	case Type::_int:
		_EQUAL(Equal,int)
			break;
	case Type::_double:
		_EQUAL(Equal,double)
			break;
	case Type::_char:
		_EQUAL(Equal, char)
			break;
	case Type::_bool:
		_EQUAL(Equal, bool)
			break;
	}
	return NULL;
}

//EqualEqual生成関数
Object<bool>* MakeEqualEqual(Memory* m, NonObject* o1, NonObject* o2) {
	switch (o1->GetType()) {
	case Type::_int:
		_EQUAL(EqualEqual, int)
			break;
	case Type::_double:
		_EQUAL(EqualEqual, double)
			break;
	case Type::_char:
		_EQUAL(EqualEqual, char)
			break;
	case Type::_bool:
		_EQUAL(EqualEqual, bool)
			break;
	}
	return NULL;
}

//NotEqual生成関数
Object<bool>* MakeNotEqual(Memory* m, NonObject* o1, NonObject* o2) {
	switch (o1->GetType()) {
	case Type::_int:
		_EQUAL(NotEqual, int)
			break;
	case Type::_double:
		_EQUAL(NotEqual, double)
			break;
	case Type::_char:
		_EQUAL(NotEqual, char)
			break;
	case Type::_bool:
		_EQUAL(NotEqual, bool)
			break;
	}
	return NULL;
}

/* //-
class Minus :public Object {
	const Object* right;
	const Object* left;
public:
	Minus(Memory* _m, const Object* _left, const Object* _right) :Object(_m), left(_left), right(_right) {}
	virtual const Variant& GetVariant()const {
		return right->GetVariant().minus(left->GetVariant());
	}
};

//++
class PlusPlus :public Object {
	Object* left;
public:
	PlusPlus(Memory* _m, Object* _left) :Object(_m), left(_left){}
	virtual Variant& GetVariant() {
		return left->GetVariant()++;
	}
	virtual void Run() {
		left->GetVariant()++;
	}
};



//+=
class PlusEqual :public Object {
	Object* left;
	const Object* right;
public:
	PlusEqual(Memory* _m, Object* _left,const Object* _right) :Object(_m), left(_left),right(_right) {}
	virtual Variant& GetVariant() {
		return right->GetVariant().plusequal(left->GetVariant());
	}
	virtual void Run() {
		right->GetVariant().plusequal(left->GetVariant());
	}
};



*/