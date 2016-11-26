#pragma once
#include <cmath>
#include "stdafx.h"
#include "ObjectHeader.h"
#include <boost\spirit\include\qi.hpp>
#include <boost\lambda\lambda.hpp>
#include <boost\spirit\include\phoenix.hpp>
/*
namespace ScriptParser {
	Memory m(1000, 100);
	using namespace boost::spirit;
	/////////////////////////////////////////////
	//[]ないで関数を使用できるようにbindする。
	/////////////////////////////////////////////

	//Valueをバインド
	template<typename T>
	auto _Value() {
		return boost::phoenix::bind([](T const x)->Object<T>*{return new Value<T>(&m, x); }, _1);
	}
	//Plusをバインド
//	auto _Plus() {
	//	return boost::phoenix::bind([](const Object* o1, const Object* o2)->const Object*{return new Plus(&m, o1,o2); }, _1,_2);
	//}
	//Minusをバインド
	//auto _Minus() {
		//return boost::phoenix::bind([](const Object* o1, const Object* o2)->const Object*{ return new Minus(&m, o1,o2); }, _1, _2);
	//}
	/////////////////////////////////////////
	//グラマーの定義
	/////////////////////////////////////////
	template<typename Iterator>
	struct Script :qi::grammar<Iterator,Object<int>*()> {
		Script() :Script::base_type(intValue) {
			using qi::eps;
			using qi::lit;
			using qi::_val;
			using qi::double_;
			using ascii::char_;
			intValue = int_[_val = _Value<int>()];
			//object = plus[_val = _1]|intValue[_val=_1];
			//plus = (intValue >> '+' >> object)[_val = _Plus()];
			//siki = plus[_val=_1];
		}
//		qi::rule<Iterator, Object*()>siki;
//		qi::rule<Iterator, Object*()>object;
//		qi::rule<Iterator, Object*()>plus;
		qi::rule<Iterator, Object<int>*()>intValue;
	};
	//構文解析実行
	template<typename Iterator>
	bool Compile(Iterator first, Iterator last, const Object<int>* &result) {
		Script<Iterator> script_parser;
		bool r = qi::parse(first, last, script_parser,result);
		if (first != last) // 読み込みしきれてないとき
			return false;
		return r;
	}
}*/