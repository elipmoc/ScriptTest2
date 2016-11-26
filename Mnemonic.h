#pragma once
namespace ByteCode {
	//ニーモニック定義
	enum Mnemonic {
		_push_int = 0,//値をスタックに積む
		_push_double,
		_push_float,
		_push_bool,
		_push_char,
		//(現在のスタック位置-値)の場所のデータをスタック
		_push_index,
		//(現在のスタック位置-値)した場所を現在のスタック位置にする
		_moveStack,
		//値の場所へジャンプ
		_jump,
		//スタックから取り出した値でジャンプ
		_return,
		//スタックから取り出した値がtrueならジャンプ
		_if,
		//スタックから二つ取り出し演算してスタックに積む
		_tasu_int,
		_tasu_double,
		_tasu_float,
		_tasu_int,
		_hiku_double,
		_hiku_float,
		_kake_int,
		_kake_double,
		_kake_float,
		_wari_int,
		_wari_double,
		_wari_float,
		//比較演算　スタックから二つ取り出し比較してbool型をスタックに積む
		_equalequal_int,
		_equalequal_double,
		_equalequal_float,
		_equalequal_bool,
		_equalequal_char,
		_equalnot_int,
		_equalnot_double,
		_equalnot_float,
		_equalnot_bool,
		_equalnot_char,
		//(現在のスタック位置-値)のスタック位置に現在のスタック位置の値を代入
		_equal_int,
		_equal_double,
		_equal_float,
		_equal_bool,
		_equal_char,
		//組み込み関数の呼び出し。呼び出す関数は値で識別
		_originFunc
	};
}