/*#pragma once
template<typename RESOULT>
struct FuncData{
	vector<Type> hiki;//引数型
	vector<NonObject*>objects;//実行オブジェクト
};

template<typename RESOULT>
class Func :public Object<RESOULT> {
	vector<NonObject*>hikiOb;//引き数受け取り用オブジェクト
	vector<NonObject*>hikiSOb;//引き数送信用オブジェクト
	FuncData<RESOULT> funcD;
public:
	
	Func(Memory* m, FuncData<RESOULT> _funcD, vector<NonObject*>_hikiSOb) :Object(m), funcD(_funcD), hikiSOb(_hikiSOb) {
		for (int i = 0; i < funcD.hiki.size(); i++) {
		}
	}
};

template<typename RESOULT>
Func<RESOULT>* MakeFunc(Memory* m,FuncData<RESOULT> funcD, vector<NonObject*> hikiSOb) {
	return new Func<RESOULT>(m, funcD, hikiSOb);
}*/