#pragma once
/*class Variant:public Object{
public:
	Variant(Memory* _m):Object(_m){}
	//オブジェクトに自身の固有の値を返す
	virtual void equal(Object*)const{ cout << "ObjectEqualErr" << endl; assert(0);exit(0); }
	//Variantに任意の値を+するために使う
	virtual const Variant& plus(const Variant&)const{ cout << "+VariantErr" << endl; assert(0);exit(0); };
	virtual const Variant& operator+(const int)const { cout << "+intErr" << endl; assert(0);exit(0); };
	virtual const Variant& operator+(const double) const{ cout << "+doubleErr" << endl; assert(0);exit(0); };
	virtual const Variant& operator+(const bool) const{ cout << "+boolErr" << endl; assert(0);exit(0); };
	//Variantに任意の値を-するために使う
	virtual const Variant& minus(const Variant&)const { cout << "+VariantErr" << endl; assert(0); exit(0); };
	virtual const Variant& operator-(const int)const { cout << "+intErr" << endl; assert(0); exit(0); };
	virtual const Variant& operator-(const double) const { cout << "+doubleErr" << endl; assert(0); exit(0); };
	virtual const Variant& operator-(const bool) const { cout << "+boolErr" << endl; assert(0); exit(0); };
	//Variantに任意の値を+=するために使う
	virtual Variant& plusequal(Variant&)const { cout << "+=VariantErr" << endl; assert(0); exit(0); };
	virtual void operator+=(const int){ cout << "+=intErr" << endl; assert(0); exit(0); };
	virtual void operator+=(const double){ cout << "+=doubleErr" << endl; assert(0); exit(0); };
	virtual void operator+=(const bool) { cout << "+=boolErr" << endl; assert(0); exit(0); };
	//Variantに任意の値を=するために使う。結果を返す
	virtual Variant& equal(Variant&) const{ cout << "=VariantErr" << endl; assert(0);exit(0); };
	virtual void operator=(const int) { cout << "=intErr" << endl; assert(0);exit(0); };
	virtual void operator=(const double) { cout << "=doubleErr" << endl; assert(0);exit(0); };
	virtual void operator=(const bool) { cout << "=boolErr" << endl; assert(0);exit(0); };
	//Variantに任意の値を==するために使う。結果を返す
	virtual const bool equalequal(const Variant&)const { cout << "==VariantErr" << endl; assert(0);exit(0); };
	virtual const bool notequal(const Variant&) const{ cout << "!=VariantErr" << endl; assert(0);exit(0); };
	virtual const bool operator==(const int) const{ cout << "==intErr" << endl; assert(0);exit(0); };
	virtual const bool operator==(const double) const{ cout << "==doubleErr" << endl; assert(0);exit(0); };
	virtual const bool operator==(const bool)const { cout << "==boolErr" << endl; assert(0);exit(0); };
	//Variantの値を++するために使う。結果を返す
	virtual Variant& operator++(int){ cout << "Variant++Err" << endl; assert(0);exit(0); };
	//キャスト
	 virtual operator const bool()const { cout << "boolCastErr" << endl; assert(0); exit(0); }
};*/
/*
class BoolValue :public Variant {
	bool value;
public:
	BoolValue(Memory* _m, const bool _value=true) :Variant(_m), value(_value) { };
	virtual const Type GetType() { return Type::_bool; }
	//オブジェクトに自身の固有の値を返す
	virtual void equal(Object* o) const{ *o = value; }
	//Variantに任意の値を=するために使う。結果を返す
	virtual Variant& equal(Variant& o) const{ o = value; return o; };
	virtual void operator=(const bool i) { value = i; };
	//Variantに任意の値を==するために使う。結果を返す
	virtual const bool equalequal(const Variant& o)const { return o == value; };
	virtual const bool notequal(const Variant& o) const{ return !(o == value); };
	virtual const bool operator==(const bool i)const { return value == i; };
	//キャスト
	virtual operator const bool() const{ return value; }
};*/

/*
template<typename T>
class Value :public Object<T> {
public:
	Value(Memory* _m, const T value) :Object(_m){
		*pointer = value;
	};
	Value(Memory* _m) :Object(_m) {};
};*/