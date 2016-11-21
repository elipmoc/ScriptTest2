// ScriptTest2.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "ScriptParser.h"
#include "ObjectHeader.h"
#include "timeCheck.h"

int main()
{
	Memory m(1000, 100);
	IntValue leftInt(&m, 10);
	IntValue rightInt(&m, 5);
	Plus<int, int, int> plus(&m, &leftInt, &rightInt);
	plus.Run();
	cout << *plus.GetPointer();
	/*string str = "25+45+10+5+5+5";
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

