/*#pragma once
#include <cmath>
#include "stdafx.h"
#include "ObjectHeader.h"
#include <boost\spirit\include\qi.hpp>
#include <boost\lambda\lambda.hpp>
#include <boost\spirit\include\phoenix.hpp>

namespace ScriptParser {
	Memory m(1000, 100);
	using namespace boost::spirit;
	/////////////////////////////////////////////
	//[]�Ȃ��Ŋ֐����g�p�ł���悤��bind����B
	/////////////////////////////////////////////

	//IntValue���o�C���h
	auto _IntValue() {
		return boost::phoenix::bind([](int const x)->const Object*{return new IntValue(&m, x); }, _1);
	}
	//Plus���o�C���h
	auto _Plus() {
		return boost::phoenix::bind([](const Object* o1, const Object* o2)->const Object*{return new Plus(&m, o1,o2); }, _1,_2);
	}
	//Minus���o�C���h
	auto _Minus() {
		return boost::phoenix::bind([](const Object* o1, const Object* o2)->const Object*{ return new Minus(&m, o1,o2); }, _1, _2);
	}
	/////////////////////////////////////////
	//�O���}�[�̒�`
	/////////////////////////////////////////
	template<typename Iterator>
	struct Script :qi::grammar<Iterator, const Object*()> {
		Script() :Script::base_type(siki) {
			using qi::eps;
			using qi::lit;
			using qi::_val;
			using qi::double_;
			using ascii::char_;
			intValue = int_[_val = _IntValue()];
			object = plus[_val = _1]|intValue[_val=_1];
			plus = (intValue >> '+' >> object)[_val = _Plus()];
			siki = plus[_val=_1];
		}
		qi::rule<Iterator, const Object*()>siki;
		qi::rule<Iterator, const Object*()>object;
		qi::rule<Iterator, const Object*()>plus;
		qi::rule<Iterator, const Object*()>intValue;
	};
	//�\����͎��s
	template<typename Iterator>
	bool Compile(Iterator first, Iterator last, const Object* &result) {
		Script<Iterator> script_parser;
		bool r = qi::parse(first, last, script_parser,result);
		if (first != last) // �ǂݍ��݂�����ĂȂ��Ƃ�
			return false;
		return r;
	}
}*/