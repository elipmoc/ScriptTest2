// ScriptTest2.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "ByteCode.h"
#include "timeCheck.h"

int main()
{
/*	Memory m(1000, 100);
	MakePlus<int,int>::o(&m, new Value<int>(&m), new Value<int>(&m));
	//double a;
	Value<double> a(&m);
	//double total=0;
	Value<double> total(&m, 0);
	//for(a=0;a!=100;a=a+1)
	For _for(&m,MakeEqual(&m, &a, new Value<double>(&m, 0)),
		MakeNotEqual(&m, &a, new Value<double>(&m, 100000)),
		MakeEqual(&m, &a, new Plus<double, double, double>(&m, &a, new Value < double > (&m, 1)))
	);
	//{ total=total+a;  }
	_for.objects.push_back(new Equal<double,double>(&m,&total,new Plus<double,double,double>(&m,&total,&a)));
	//cout<<a<<endl;
	Echo<double> echo(&m, &total);
	Code code(&m);
	code.objects.push_back(&_for);
	code.objects.push_back(&echo);
	Time t;
	t.Begin();
	code.Run();
	t.End();
	cout << t.GetTime()<<endl;
	/*
	int count;
	int _total = 0;
	t.Begin();
	for (count = 0; count != 10000000; count++) { _total += count; }
	cout << _total << endl;
	t.End();
	cout << t.GetTime() << endl;*/
	

/*	string str = "25+45+10+5+5+5";
	const Object* o = NULL;
	if (ScriptParser::Compile(str.begin(), str.end(), o)) {
		cout << "コンパイル成功" << endl;
	}
	else cout << "エラー" << endl;
	Echo echo(&ScriptParser::m);
	//	echo.objects.push_back(new Plus(&ScriptParser::m, new  const IntValue(&ScriptParser::m, 25), new const IntValue(&ScriptParser::m, 45)));
	echo.objects.push_back(o);
	echo.Run();
	*/

	/*
	Time t;
	Memory m(1000, 100);
	IntValue i(&m, 45);
	IntValue total(&m, 0);
	Equal equal(&m, &i, new const IntValue(&m, 0));
	NotEqual notequal(&m, &i, new const IntValue(&m, 1000000000));
	For FOR(&m, &equal, &notequal, new PlusPlus(&m, &i));
	PlusEqual plusequal(&m, &total, &i);
	FOR.objects.push_back(&plusequal);
	Echo echo(&m);
	echo.objects.push_back(&total);
	int count;
	cout << "start!" << endl;
	t.Begin();
	int _total = 0;
	for (count = 0; count != 1000000000; count++) { _total += count; }
	t.End();
	cout << _total << endl;
	cout<<t.GetTime()<<endl;
	t.Begin();
	FOR.Run();
	t.End();
	echo.Run();
	cout<<t.GetTime()<<endl;*/
	return 0;
}

