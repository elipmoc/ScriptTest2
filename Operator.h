#pragma once
//+演算子 < 左辺オブジェクトの返り値の型,　""型　, このオブジェクトの返り値の型 >
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
		pointer = m->sm.New<RESOULT>();
	}
	virtual void Run() { leftO->Run(); rightO->Run(); *static_cast<RESOULT*>(pointer)=*leftP + *rightP; }
};


/*//-
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

//=
class Equal :public Object {
	const Object* right;
	Object* left;
public:
	Equal(Memory* _m, Object* _left, const Object* _right) :Object(_m), left(_left), right(_right) {}
	virtual Variant& GetVariant() {
		return right->GetVariant().equal(left->GetVariant());
	}
	virtual void Run() {
		right->GetVariant().equal(left->GetVariant());
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

//==
class EqualEqual :public Object {
	Object* right;
	Object* left;
	mutable BoolValue result;
public:
	EqualEqual(Memory* _m, Object* _left, Object* _right) :Object(_m), left(_left), right(_right) ,result(m){}
	virtual const Variant& GetVariant()const{
		result=right->GetVariant().equalequal(left->GetVariant());
		return result;
	}
};

//!=
class NotEqual :public Object {
	const Object* right;
	const Object* left;
	BoolValue result;
public:
	NotEqual(Memory* _m,const Object* _left,const Object* _right) :Object(_m), left(_left), right(_right), result(m) {}
	virtual Variant& GetVariant() {
		result = right->GetVariant().notequal(left->GetVariant());
		return result;
	}
};*/