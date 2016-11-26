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
	//[]�Ȃ��Ŋ֐����g�p�ł���悤��bind����B
	/////////////////////////////////////////////

	//Value���o�C���h
	template<typename T>
	auto _Value() {
		return boost::phoenix::bind([](T const x)->Object<T>*{return new Value<T>(&m, x); }, _1);
	}
	//Plus���o�C���h
//	auto _Plus() {
	//	return boost::phoenix::bind([](const Object* o1, const Object* o2)->const Object*{return new Plus(&m, o1,o2); }, _1,_2);
	//}
	//Minus���o�C���h
	//auto _Minus() {
		//return boost::phoenix::bind([](const Object* o1, const Object* o2)->const Object*{ return new Minus(&m, o1,o2); }, _1, _2);
	//}
	/////////////////////////////////////////
	//�O���}�[�̒�`
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
	//�\����͎��s
	template<typename Iterator>
	bool Compile(Iterator first, Iterator last, const Object<int>* &result) {
		Script<Iterator> script_parser;
		bool r = qi::parse(first, last, script_parser,result);
		if (first != last) // �ǂݍ��݂�����ĂȂ��Ƃ�
			return false;
		return r;
	}
}*/