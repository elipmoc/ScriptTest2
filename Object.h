class Variant;
class Object {
protected:
	Memory* m;
public:
	Object(Memory* _m) :m(_m){}
	virtual Variant& GetVariant() { cout << "GetVariantErr" << endl; assert(0); exit(0); };
	virtual const Variant& GetVariant() const{ cout << "ConstGetVariantErr" << endl; assert(0);exit(0);};
	virtual void Run(){ cout << "RunErr" << endl; assert(0);exit(0);};
	virtual void operator=(const int) { cout << "Object=intErr" << endl; assert(0);exit(0); };
	virtual void operator=(const double) { cout << "Object=doubleErr" << endl; assert(0);exit(0); };
	virtual void operator=(const bool) { cout << "Object=boolErr" << endl; assert(0);exit(0); };
};