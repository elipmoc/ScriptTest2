#include "stdafx.h"
#include "boostFomat.h"

void hello()
{
	cout << boost::format("%s\n") % "���ˁI";
	cout << boost::format("%1%\n,%2%%2%\n\n") % "hello!"%"���ˁI";
	cout << boost::format("%1%%2%\n") % "1+5=" % (1 + 5);
}
