/*#pragma once
template<typename RESOULT>
struct FuncData{
	vector<Type> hiki;//�����^
	vector<NonObject*>objects;//���s�I�u�W�F�N�g
};

template<typename RESOULT>
class Func :public Object<RESOULT> {
	vector<NonObject*>hikiOb;//�������󂯎��p�I�u�W�F�N�g
	vector<NonObject*>hikiSOb;//���������M�p�I�u�W�F�N�g
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