#include "advent2.h"
class Stack;

#if (defined(__GNUC__) && (__GNUC__) == 4 && ((__GNUC_MINOR__) >= 4 && (__GNUC_MINOR__) <= 6))
#pragma GCC diagnostic ignored "-Wuninitialized"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif

#if (defined(__GNUC__) && ((__GNUC__) > 4 || ((__GNUC__) == 4 && (__GNU_MINOR__) >= 6))) && !defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#if defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#pragma GCC diagnostic ignored "-Wsometimes-uninitialized"
#pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include <tbb/task.h>
#include <tbb/parallel_for.h>
using namespace tbb;
namespace
{
void SequenceL_max_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv);
void SequenceL_min_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv);
void SequenceL_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_s, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_trim_0(::Sequence< char > &_SequenceL__Arg_s, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL_last_2(::Sequence< char > &_SequenceL__Arg_list, char &_SequenceL__resultConv);
void SequenceL_allButLast_2(::Sequence< char > &_SequenceL__Arg_list, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL_split_2(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_delimiter, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv);
void SequenceL_indexesOf_2(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_element, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_multipleIndexes_2(::Sequence< char > &_SequenceL__Arg_list, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_indexes, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv);
void SequenceL_stringToInt_3(::Sequence< char > &_SequenceL__Arg_numString, int &_SequenceL__resultConv);
void SequenceL_trimStart_1(::Sequence< char > &_SequenceL__Arg_input, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL_isWhiteSpace_1(char _SequenceL__Arg_input, bool &_SequenceL__resultConv);
void SequenceL_trimNonNumeric_3(::Sequence< char > &_SequenceL__Arg_numString, int _SequenceL__Arg_i, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL_isDigit_1(char _SequenceL__Arg_char, bool &_SequenceL__resultConv);
void SequenceL_take_2(::Sequence< char > &_SequenceL__Arg_list, int _SequenceL__Arg_n, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL_atoIWorker_3(::Sequence< char > &_SequenceL__Arg_numString, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_charToInt_3(char _SequenceL__Arg_char, int &_SequenceL__resultConv);
void SequenceL_integerPower_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv);
void SequenceL_integerPowerHelper_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int _SequenceL__Arg_val, int &_SequenceL__resultConv);
void SequenceL_vectorMax_2(::Sequence< int > &_SequenceL__Arg_list, int &_SequenceL__resultConv);
void SequenceL_vectorMin_2(::Sequence< int > &_SequenceL__Arg_list, int &_SequenceL__resultConv);
void SequenceL_fold_2(::Sequence< int > &_SequenceL__Arg_inputList, _sl_fun_pointer* _SequenceL__Arg_operator, int &_SequenceL__resultConv);
void SequenceL_applyFold_2(::Sequence< int > &_SequenceL__Arg_inputList, _sl_fun_pointer* _SequenceL__Arg_operator, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_distinctPairs_0(int _SequenceL__Arg_n, ::Sequence< ::Sequence< int > > &_SequenceL__resultConv);
void SequenceL_duplicate_2(int _SequenceL__Arg_element, int _SequenceL__Arg_times, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_dividingPairResults_0(::Sequence< int > &_SequenceL__Arg_r, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_p, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL__parallel_max_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv);
void SequenceL__parallel_min_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv);
void SequenceL__parallel_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_s, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt7_: public NTObj
{
	private:
		::Sequence< ::Sequence< int > > &_SequenceL__Arg_sheet;
		::Sequence< ::Sequence< int > > &_SequenceL__Arg_pairs;
		 ::Sequence< ::Sequence< int > > &_SequenceL__result8;

	public:
		SequenceL__sl_main_nt7_(::Sequence< ::Sequence< int > > &_inp1, ::Sequence< ::Sequence< int > > &_inp2, ::Sequence< ::Sequence< int > > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_sheet(_inp1), _SequenceL__Arg_pairs(_inp2), _SequenceL__result8(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt1_: public NTObj
{
	private:
		::Sequence< ::Sequence< char > > &_SequenceL__Arg_lines;
		 ::Sequence< ::Sequence< ::Sequence< char > > > &_SequenceL__result2;
		 ::Sequence< ::Sequence< int > > &_SequenceL__result3;
		 ::Sequence< int > &_SequenceL__result4;
		 ::Sequence< int > &_SequenceL__result5;
		 ::Sequence< int > &_SequenceL__result6;

	public:
		SequenceL__sl_main_nt1_(::Sequence< ::Sequence< char > > &_inp1, ::Sequence< ::Sequence< ::Sequence< char > > > &_out1, ::Sequence< ::Sequence< int > > &_out2, ::Sequence< int > &_out3, ::Sequence< int > &_out4, ::Sequence< int > &_out5): NTObj(__LINE__,false), _SequenceL__Arg_lines(_inp1), _SequenceL__result2(_out1), _SequenceL__result3(_out2), _SequenceL__result4(_out3), _SequenceL__result5(_out4), _SequenceL__result6(_out5)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_trim_0(::Sequence< char > &_SequenceL__Arg_s, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_last_2(::Sequence< char > &_SequenceL__Arg_list, char &_SequenceL__resultConv);
void SequenceL__parallel_allButLast_2(::Sequence< char > &_SequenceL__Arg_list, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_split_2(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_delimiter, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv);
class SequenceL__sl_main_nt13_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL_tmp418;
		::Sequence< int > &_SequenceL_tmp423;
		 ::Sequence< ::Sequence< int > > &_SequenceL__result14;

	public:
		SequenceL__sl_main_nt13_(::Sequence< int > &_inp1, ::Sequence< int > &_inp2, ::Sequence< ::Sequence< int > > &_out1): NTObj(__LINE__,false), _SequenceL_tmp418(_inp1), _SequenceL_tmp423(_inp2), _SequenceL__result14(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt11_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_indexes;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result12;

	public:
		SequenceL__sl_main_nt11_(::Sequence< int > &_inp1, int _inp2, int _inp3, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_indexes(_inp1), _SequenceL__start(_inp2), _SequenceL__stop(_inp3), _SequenceL__result12(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt9_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_indexes;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result10;

	public:
		SequenceL__sl_main_nt9_(::Sequence< int > &_inp1, int _inp2, int _inp3, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_indexes(_inp1), _SequenceL__start(_inp2), _SequenceL__stop(_inp3), _SequenceL__result10(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_indexesOf_2(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_element, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt15_: public NTObj
{
	private:
		::Sequence< char > &_SequenceL__Arg_list;
		char _SequenceL__Arg_element;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result16;

	public:
		SequenceL__sl_main_nt15_(::Sequence< char > &_inp1, char _inp2, int _inp3, int _inp4, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_list(_inp1), _SequenceL__Arg_element(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result16(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_multipleIndexes_2(::Sequence< char > &_SequenceL__Arg_list, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_indexes, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv);
class SequenceL__sl_main_nt17_: public NTObj
{
	private:
		::Sequence< ::Sequence< int > > &_SequenceL__Arg_indexes;
		::Sequence< char > &_SequenceL__Arg_list;
		 ::Sequence< ::Sequence< char > > &_SequenceL__result18;

	public:
		SequenceL__sl_main_nt17_(::Sequence< ::Sequence< int > > &_inp1, ::Sequence< char > &_inp2, ::Sequence< ::Sequence< char > > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_indexes(_inp1), _SequenceL__Arg_list(_inp2), _SequenceL__result18(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_stringToInt_3(::Sequence< char > &_SequenceL__Arg_numString, int &_SequenceL__resultConv);
void SequenceL__parallel_trimStart_1(::Sequence< char > &_SequenceL__Arg_input, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_isWhiteSpace_1(char _SequenceL__Arg_input, bool &_SequenceL__resultConv);
void SequenceL__parallel_trimNonNumeric_3(::Sequence< char > &_SequenceL__Arg_numString, int _SequenceL__Arg_i, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_isDigit_1(char _SequenceL__Arg_char, bool &_SequenceL__resultConv);
void SequenceL__parallel_take_2(::Sequence< char > &_SequenceL__Arg_list, int _SequenceL__Arg_n, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_atoIWorker_3(::Sequence< char > &_SequenceL__Arg_numString, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt19_: public NTObj
{
	private:
		::Sequence< char > &_SequenceL__Arg_numString;
		 ::Sequence< int > &_SequenceL__result20;

	public:
		SequenceL__sl_main_nt19_(::Sequence< char > &_inp1, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_numString(_inp1), _SequenceL__result20(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_charToInt_3(char _SequenceL__Arg_char, int &_SequenceL__resultConv);
void SequenceL__parallel_integerPower_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv);
void SequenceL__parallel_integerPowerHelper_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int _SequenceL__Arg_val, int &_SequenceL__resultConv);
void SequenceL__parallel_vectorMax_2(::Sequence< int > &_SequenceL__Arg_list, int &_SequenceL__resultConv);
void SequenceL__parallel_vectorMin_2(::Sequence< int > &_SequenceL__Arg_list, int &_SequenceL__resultConv);
void SequenceL__parallel_fold_2(::Sequence< int > &_SequenceL__Arg_inputList, _sl_fun_pointer* _SequenceL__Arg_operator, int &_SequenceL__resultConv);
void SequenceL__parallel_applyFold_2(::Sequence< int > &_SequenceL__Arg_inputList, _sl_fun_pointer* _SequenceL__Arg_operator, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt23_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL_tmp96;
		::Sequence< int > &_SequenceL__Arg_inputList;
		_sl_fun_pointer* _SequenceL__Arg_operator;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result24;

	public:
		SequenceL__sl_main_nt23_(::Sequence< int > &_inp1, ::Sequence< int > &_inp2, _sl_fun_pointer* _inp3, int _inp4, int _inp5, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL_tmp96(_inp1), _SequenceL__Arg_inputList(_inp2), _SequenceL__Arg_operator(_inp3), _SequenceL__start(_inp4), _SequenceL__stop(_inp5), _SequenceL__result24(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt21_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL_tmp93;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result22;

	public:
		SequenceL__sl_main_nt21_(::Sequence< int > &_inp1, int _inp2, int _inp3, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL_tmp93(_inp1), _SequenceL__start(_inp2), _SequenceL__stop(_inp3), _SequenceL__result22(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_distinctPairs_0(int _SequenceL__Arg_n, ::Sequence< ::Sequence< int > > &_SequenceL__resultConv);
void SequenceL__parallel_duplicate_2(int _SequenceL__Arg_element, int _SequenceL__Arg_times, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt25_: public NTObj
{
	private:
		int _SequenceL__Arg_element;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result26;

	public:
		SequenceL__sl_main_nt25_(int _inp1, int _inp2, int _inp3, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_element(_inp1), _SequenceL__start(_inp2), _SequenceL__stop(_inp3), _SequenceL__result26(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_dividingPairResults_0(::Sequence< int > &_SequenceL__Arg_r, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_p, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt27_: public NTObj
{
	private:
		::Sequence< ::Sequence< int > > &_SequenceL__Arg_p;
		::Sequence< int > &_SequenceL__Arg_r;
		 ::Sequence< int > &_SequenceL__result28;

	public:
		SequenceL__sl_main_nt27_(::Sequence< ::Sequence< int > > &_inp1, ::Sequence< int > &_inp2, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_p(_inp1), _SequenceL__Arg_r(_inp2), _SequenceL__result28(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_trim_c_0: public task
{
	private:
		 ::Sequence< char > &_SequenceL__Arg_s;
		 ::Sequence< char > &_SequenceL__resultConv;
::Sequence< char > _SequenceL___Arg_s_tco;
bool _SequenceL_tmp461;
char _SequenceL_tmp460;
::Sequence< char > _SequenceL_tmp463;
bool _SequenceL_tmp466;
char _SequenceL_tmp465;
::Sequence< char > _SequenceL_tmp468;

	public:
		SequenceL__sl_main_trim_c_0(::Sequence< char > &_inp1, ::Sequence< char > &_out1): _SequenceL__Arg_s(_inp1), _SequenceL__resultConv(_out1), _SequenceL___Arg_s_tco(cspace), _SequenceL_tmp463(cspace), _SequenceL_tmp468(cspace)
		{
		}
		task *execute();

};
class SequenceL__sl_main_stringToInt_c_3: public task
{
	private:
		 ::Sequence< char > &_SequenceL__Arg_numString;
		 int &_SequenceL__resultConv;
::Sequence< char > _SequenceL__Arg_trimmed;
char _SequenceL_tmp365;
int _SequenceL_tmp369;
::Sequence< char > _SequenceL_tmp368;
char _SequenceL_tmp371;
::Sequence< char > _SequenceL_tmp374;
::Sequence< int > _SequenceL_tmp376;
::Sequence< char > _SequenceL__Arg_justNumber;

	public:
		SequenceL__sl_main_stringToInt_c_3(::Sequence< char > &_inp1, int &_out1): _SequenceL__Arg_numString(_inp1), _SequenceL__resultConv(_out1), _SequenceL__Arg_trimmed(cspace), _SequenceL_tmp368(cspace), _SequenceL_tmp374(cspace), _SequenceL_tmp376(cspace), _SequenceL__Arg_justNumber(cspace)
		{
		}
		task *execute();

};
class SequenceL__sl_main_distinctPairs_i_0: public task
{
	private:
		int _SequenceL__Arg_n;
		 ::Sequence< ::Sequence< int > > &_SequenceL__resultConv;
::Sequence< ::Sequence< int > > _SequenceL__Arg_npairs;
::Sequence< ::Sequence< int > > _SequenceL_tmp49;
int _SequenceL_tmp51;
::Sequence< ::Sequence< int > > _SequenceL_tmp58;
int _SequenceL_tmp57;

	public:
		SequenceL__sl_main_distinctPairs_i_0(int _inp1, ::Sequence< ::Sequence< int > > &_out1): _SequenceL__Arg_n(_inp1), _SequenceL__resultConv(_out1), _SequenceL__Arg_npairs(cspace), _SequenceL_tmp49(cspace), _SequenceL_tmp58(cspace)
		{
		}
		task *execute();

};

_sl_fun_pointer _PointerSequenceL_min_5[1] = { (_sl_fun_pointer)((void (*)(int,int,int&))SequenceL_min_5)};
_sl_fun_pointer _PointerSequenceL_max_5[1] = { (_sl_fun_pointer)((void (*)(int,int,int&))SequenceL_max_5)};

void _SequenceL_init_sl_main_globals()
{

}

void _SequenceL_delete_sl_main_globals()
{

}

#ifdef _WIN32
::Sequence< ::Sequence< char > > _sl_vc10_advent2_dummy_1(cspace);
::Sequence< int > _sl_vc10_advent2_dummy_2(cspace);
::Sequence< ::Sequence< ::Sequence< char > > > _sl_vc10_advent2_dummy_3(cspace);
::Sequence< ::Sequence< int > > _sl_vc10_advent2_dummy_4(cspace);
::Sequence< char > _sl_vc10_advent2_dummy_5(cspace);
::Sequence< Empty > _sl_vc10_advent2_dummy_6(cspace);
#endif

task *SequenceL__sl_main_distinctPairs_i_0::execute()
{
_SequenceL_tmp49.setSize(2 > 0 ? 2 : 0);	
_SequenceL_tmp51 = (_SequenceL__Arg_n - 1);	/*advent2.sl:11: n-1*/
SequenceL_duplicate_2(_SequenceL__Arg_n, _SequenceL_tmp51, (*(_SequenceL_tmp49.get_ptr(1))));	/*advent2.sl:11: duplicate(n, (n-1))*/
ellipsis(1, (_SequenceL__Arg_n - 1), (*(_SequenceL_tmp49.get_ptr(2))));	/*advent2.sl:11: 1 ... (n - 1)*/
transpose(_SequenceL_tmp49, _SequenceL__Arg_npairs);	/*advent2.sl:11: transpose([duplicate(n, (n-1)), 1 ... (n - 1)])*/
_SequenceL_tmp49.delete_data(true);	
_SequenceL_tmp49.finished();	
if ((_SequenceL__Arg_n == 2))	/*advent2.sl:13: npairs when n = 2  else npairs ++ distinctPairs(n - 1)*/
{
_SequenceL__resultConv = _SequenceL__Arg_npairs;	/*advent2.sl:12: npairs*/
_SequenceL__Arg_npairs.delete_data(true);	
_SequenceL__Arg_npairs.finished();	
}
else
{
_SequenceL_tmp57 = (_SequenceL__Arg_n - 1);	/*advent2.sl:13: n - 1*/
set_ref_count(2);
spawn_and_wait_for_all(*new(allocate_child()) SequenceL__sl_main_distinctPairs_i_0(_SequenceL_tmp57, _SequenceL_tmp58));
append(_SequenceL__Arg_npairs, _SequenceL_tmp58, _SequenceL__resultConv);	/*advent2.sl:13: npairs ++ distinctPairs(n - 1)*/
_SequenceL__Arg_npairs.delete_data(true);	
_SequenceL_tmp58.delete_data(true);	
_SequenceL_tmp58.finished();	
_SequenceL__Arg_npairs.finished();	
}
return NULL;
}
task *SequenceL__sl_main_stringToInt_c_3::execute()
{
SequenceL_trimStart_1(_SequenceL__Arg_numString, _SequenceL__Arg_trimmed);	/*Conversion.sl:36: trimStart(numString)*/
_SequenceL__Arg_numString.delete_data(true);	
if ((_SequenceL__Arg_trimmed.size() == 0))	/*Conversion.sl:45: 0 when size(trimmed) = 0	else		- stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__resultConv = 0;	/*Conversion.sl:39: 0*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
}
else
{
_SequenceL_tmp365 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:41: head(trimmed)*/
if ((_SequenceL_tmp365 == '-'))	/*Conversion.sl:45: - stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp368);	/*Conversion.sl:41: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
set_ref_count(2);
spawn_and_wait_for_all(*new(allocate_child()) SequenceL__sl_main_stringToInt_c_3(_SequenceL_tmp368, _SequenceL_tmp369));
_SequenceL_tmp368.finished();	
_SequenceL__resultConv = (-_SequenceL_tmp369);	/*Conversion.sl:41: - stringToInt(tail(trimmed))*/
}
else
{
_SequenceL_tmp371 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:43: head(trimmed)*/
if ((_SequenceL_tmp371 == '+'))	/*Conversion.sl:45: stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp374);	/*Conversion.sl:43: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
set_ref_count(2);
spawn_and_wait_for_all(*new(allocate_child()) SequenceL__sl_main_stringToInt_c_3(_SequenceL_tmp374, _SequenceL__resultConv));
_SequenceL_tmp374.finished();	
}
else
{
SequenceL_trimNonNumeric_3(_SequenceL__Arg_trimmed, 1, _SequenceL__Arg_justNumber);	/*Conversion.sl:37: trimNonNumeric(trimmed, 1)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
SequenceL_atoIWorker_3(_SequenceL__Arg_justNumber, _SequenceL_tmp376);	/*Conversion.sl:45: atoIWorker(justNumber)*/
_SequenceL__Arg_justNumber.delete_data(true);	
_SequenceL__Arg_justNumber.finished();	
_SequenceL__resultConv = sum(_SequenceL_tmp376);	/*Conversion.sl:45: sum(atoIWorker(justNumber))*/
_SequenceL_tmp376.delete_data(true);	
_SequenceL_tmp376.finished();	
}
}
}
return NULL;
}
task *SequenceL__sl_main_trim_c_0::execute()
{
if (_SequenceL__Arg_s.onlyInstance())	
{
_SequenceL___Arg_s_tco.replaceSequence(_SequenceL__Arg_s);	
_SequenceL__Arg_s.delete_data(true);	
}
else
{
_SequenceL___Arg_s_tco.hard_copy(_SequenceL__Arg_s,__LINE__);	
_SequenceL__Arg_s.delete_data(true);	
}
_sl_main_trim_c_advent2_label_tco:	
_SequenceL_tmp460 = _SequenceL___Arg_s_tco.head();	/*advent2.sl:6: head(s)*/
SequenceL_isWhiteSpace_1(_SequenceL_tmp460, _SequenceL_tmp461);	/*advent2.sl:7: isWhiteSpace(head(s))*/
if (_SequenceL_tmp461)	/*advent2.sl:8: trim(tail(s)) when isWhiteSpace(head(s))  else trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
_SequenceL___Arg_s_tco.tail(_SequenceL_tmp463);	/*advent2.sl:6: tail(s)*/
_swap(_SequenceL___Arg_s_tco, _SequenceL_tmp463);	
goto _sl_main_trim_c_advent2_label_tco;	/*advent2.sl:6: trim(tail(s))*/
}
else
{
SequenceL_last_2(_SequenceL___Arg_s_tco, _SequenceL_tmp465);	/*advent2.sl:7: last(s)*/
SequenceL_isWhiteSpace_1(_SequenceL_tmp465, _SequenceL_tmp466);	/*advent2.sl:8: isWhiteSpace(last(s))*/
if (_SequenceL_tmp466)	/*advent2.sl:8: trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
SequenceL_allButLast_2(_SequenceL___Arg_s_tco, _SequenceL_tmp468);	/*advent2.sl:7: allButLast(s)*/
_swap(_SequenceL___Arg_s_tco, _SequenceL_tmp468);	
goto _sl_main_trim_c_advent2_label_tco;	/*advent2.sl:7: trim(allButLast(s))*/
}
else
{
_SequenceL__resultConv = _SequenceL___Arg_s_tco;	/*advent2.sl:8: s*/
}
}
_SequenceL_tmp463.delete_data(true);	
_SequenceL_tmp468.delete_data(true);	
_SequenceL_tmp468.finished();	
_SequenceL_tmp463.finished();	
return NULL;
}
void SequenceL__sl_main_nt27_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
int _SequenceL__Arg_p1;
::Sequence< int > _SequenceL__Arg_pair(cspace);
int _SequenceL__Arg_p2;

_SequenceL__Arg_pair.setSize((*(_SequenceL__Arg_p.get_ptr(_SequenceL__Index_i))).size());	/*advent2.sl:16: r[p[i]]*/
SIMD_DIRECTIVE
for (int _SequenceL__scope__Index_pair__tmp_index2=1,_stop_val__SequenceL__scope__Index_pair__tmp_index2=_SequenceL__Arg_pair.size(); _SequenceL__scope__Index_pair__tmp_index2<=_stop_val__SequenceL__scope__Index_pair__tmp_index2; _SequenceL__scope__Index_pair__tmp_index2+=1)
{
(*(_SequenceL__Arg_pair.get_ptr(_SequenceL__scope__Index_pair__tmp_index2))) = (*(_SequenceL__Arg_r.get_ptr((*((*(_SequenceL__Arg_p.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__scope__Index_pair__tmp_index2))))));	/*advent2.sl:16: r[p[i]]*/
}
_SequenceL__Arg_p1 = (*(_SequenceL__Arg_pair.get_ptr(1)));	/*advent2.sl:17: pair[1]*/
_SequenceL__Arg_p2 = (*(_SequenceL__Arg_pair.get_ptr(2)));	/*advent2.sl:18: pair[2]*/
if (((_SequenceL__Arg_p1 % _SequenceL__Arg_p2) == 0))	/*advent2.sl:20: p1/p2 when p1 mod p2 = 0  else p2/p1 when p2 mod p1 = 0*/
{
(*(_SequenceL__result28.get_ptr(_SequenceL__Index_i))) = (_SequenceL__Arg_p1 / _SequenceL__Arg_p2);	/*advent2.sl:19: p1/p2*/
_SequenceL__result28.setExistence(_SequenceL__Index_i, true);	
}
else
{
if (((_SequenceL__Arg_p2 % _SequenceL__Arg_p1) == 0))	/*advent2.sl:20: p2/p1 when p2 mod p1 = 0*/
{
(*(_SequenceL__result28.get_ptr(_SequenceL__Index_i))) = (_SequenceL__Arg_p2 / _SequenceL__Arg_p1);	/*advent2.sl:20: p2/p1*/
_SequenceL__result28.setExistence(_SequenceL__Index_i, true);	
}
else
{
_SequenceL__result28.setExistence(_SequenceL__Index_i, false);	
}
}
}
}
void SequenceL__parallel_dividingPairResults_0(::Sequence< int > &_SequenceL__Arg_r, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_p, ::Sequence< int > &_SequenceL__resultConv)
{
int _SequenceL__Arg_p1;
::Sequence< int > _SequenceL__Arg_pair(cspace);
int _SequenceL__Arg_p2;

_SequenceL__resultConv.setSize(_SequenceL__Arg_p.size());	/*advent2.sl:20: p1/p2 when p1 mod p2 = 0  else p2/p1 when p2 mod p1 = 0*/
_SequenceL__resultConv.create_map();	
if (((((SL_FLOAT)(_SequenceL__Arg_p.size() - 1)) * ((0 + ((_SequenceL__Arg_p.size() > 0) ? (*(_SequenceL__Arg_p.get_ptr(1))).size() : 0)) + 7)) > (sl_get_num_units() * ((WORK_SHARE_VALUE * WORK_SHARE_VALUE) * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt27_ SequenceL__sl_main_nt27__val(_SequenceL__Arg_p, _SequenceL__Arg_r, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_p.size() + 1, SequenceL__sl_main_nt27__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_p.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
_SequenceL__Arg_pair.setSize((*(_SequenceL__Arg_p.get_ptr(_SequenceL__Index_i))).size());	/*advent2.sl:16: r[p[i]]*/
SIMD_DIRECTIVE
for (int _SequenceL__scope__Index_pair__tmp_index2=1,_stop_val__SequenceL__scope__Index_pair__tmp_index2=_SequenceL__Arg_pair.size(); _SequenceL__scope__Index_pair__tmp_index2<=_stop_val__SequenceL__scope__Index_pair__tmp_index2; _SequenceL__scope__Index_pair__tmp_index2+=1)
{
(*(_SequenceL__Arg_pair.get_ptr(_SequenceL__scope__Index_pair__tmp_index2))) = (*(_SequenceL__Arg_r.get_ptr((*((*(_SequenceL__Arg_p.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__scope__Index_pair__tmp_index2))))));	/*advent2.sl:16: r[p[i]]*/
}
_SequenceL__Arg_p1 = (*(_SequenceL__Arg_pair.get_ptr(1)));	/*advent2.sl:17: pair[1]*/
_SequenceL__Arg_p2 = (*(_SequenceL__Arg_pair.get_ptr(2)));	/*advent2.sl:18: pair[2]*/
if (((_SequenceL__Arg_p1 % _SequenceL__Arg_p2) == 0))	/*advent2.sl:20: p1/p2 when p1 mod p2 = 0  else p2/p1 when p2 mod p1 = 0*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (_SequenceL__Arg_p1 / _SequenceL__Arg_p2);	/*advent2.sl:19: p1/p2*/
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, true);	
}
else
{
if (((_SequenceL__Arg_p2 % _SequenceL__Arg_p1) == 0))	/*advent2.sl:20: p2/p1 when p2 mod p1 = 0*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (_SequenceL__Arg_p2 / _SequenceL__Arg_p1);	/*advent2.sl:20: p2/p1*/
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, true);	
}
else
{
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, false);	
}
}
}
_SequenceL__Arg_pair.delete_data(false);	
_SequenceL__Arg_pair.finished();	
}
_SequenceL__resultConv.cleanup(false);	
}
void SequenceL__sl_main_nt25_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__Index_i - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__Index_i * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result26.get_ptr(_SequenceL__no_share_iter))) = _SequenceL__Arg_element;	/*Sequence.sl:91: element*/
}
}
}
void SequenceL__parallel_duplicate_2(int _SequenceL__Arg_element, int _SequenceL__Arg_times, ::Sequence< int > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_times > 0 ? _SequenceL__Arg_times : 0);	/*Sequence.sl:91: element*/
if (((((SL_FLOAT)(_SequenceL__Arg_times - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt25_ SequenceL__sl_main_nt25__val(_SequenceL__Arg_element, 1, _SequenceL__Arg_times, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt25__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_times; _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = _SequenceL__Arg_element;	/*Sequence.sl:91: element*/
}
}
}
void SequenceL__parallel_distinctPairs_0(int _SequenceL__Arg_n, ::Sequence< ::Sequence< int > > &_SequenceL__resultConv)
{
::Sequence< ::Sequence< int > > _SequenceL__Arg_npairs(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp49(cspace);
int _SequenceL_tmp51;
::Sequence< ::Sequence< int > > _SequenceL_tmp58(cspace);
int _SequenceL_tmp57;

_SequenceL_tmp49.setSize(2 > 0 ? 2 : 0);	
_SequenceL_tmp51 = (_SequenceL__Arg_n - 1);	/*advent2.sl:11: n-1*/
SequenceL__parallel_duplicate_2(_SequenceL__Arg_n, _SequenceL_tmp51, (*(_SequenceL_tmp49.get_ptr(1))));	/*advent2.sl:11: duplicate(n, (n-1))*/
_SequenceL_parallel__ellipsis(1, (_SequenceL__Arg_n - 1), __LINE__, (*(_SequenceL_tmp49.get_ptr(2))));	/*advent2.sl:11: 1 ... (n - 1)*/
_SequenceL_parallel_transpose(_SequenceL_tmp49, __LINE__, _SequenceL__Arg_npairs);	/*advent2.sl:11: transpose([duplicate(n, (n-1)), 1 ... (n - 1)])*/
_SequenceL_tmp49.delete_data(false);	
_SequenceL_tmp49.finished();	
if ((_SequenceL__Arg_n == 2))	/*advent2.sl:13: npairs when n = 2  else npairs ++ distinctPairs(n - 1)*/
{
_SequenceL__resultConv = _SequenceL__Arg_npairs;	/*advent2.sl:12: npairs*/
_SequenceL__Arg_npairs.delete_data(false);	
_SequenceL__Arg_npairs.finished();	
}
else
{
_SequenceL_tmp57 = (_SequenceL__Arg_n - 1);	/*advent2.sl:13: n - 1*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_distinctPairs_i_0(_SequenceL_tmp57, _SequenceL_tmp58));
append(_SequenceL__Arg_npairs, _SequenceL_tmp58, _SequenceL__resultConv);	/*advent2.sl:13: npairs ++ distinctPairs(n - 1)*/
_SequenceL__Arg_npairs.delete_data(false);	
_SequenceL_tmp58.delete_data(false);	
_SequenceL_tmp58.finished();	
_SequenceL__Arg_npairs.finished();	
}
}
void SequenceL__sl_main_nt21_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i95 = _r.begin(); _SequenceL__i95 < _e; _SequenceL__i95++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__i95 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__i95 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result22.get_ptr(_SequenceL__no_share_iter))) = ((2 * (*(_SequenceL_tmp93.get_ptr(_SequenceL__no_share_iter)))) + 1);	/*Sequence.sl:110: 2 * (0 ... ((size(inputList) - 1) / 2)) + 1*/
}
}
}
void SequenceL__sl_main_nt23_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
int _SequenceL_tmp101;
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__Index_i - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__Index_i * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
if (((*(_SequenceL_tmp96.get_ptr(_SequenceL__no_share_iter))) < _SequenceL__Arg_inputList.size()))	/*Sequence.sl:110: operator(inputList[i], inputList[i + 1]) when i < size(inputList)	else		inputList[i]*/
{
_SequenceL_tmp101 = ((*(_SequenceL_tmp96.get_ptr(_SequenceL__no_share_iter))) + 1);	/*Sequence.sl:107: i + 1*/
((void (*)(int,int,int&))_SequenceL__Arg_operator[0])((*(_SequenceL__Arg_inputList.get_ptr((*(_SequenceL_tmp96.get_ptr(_SequenceL__no_share_iter)))))), (*(_SequenceL__Arg_inputList.get_ptr(_SequenceL_tmp101))), (*(_SequenceL__result24.get_ptr(_SequenceL__no_share_iter))));	/*Sequence.sl:107: operator(inputList[i], inputList[i + 1])*/
}
else
{
(*(_SequenceL__result24.get_ptr(_SequenceL__no_share_iter))) = (*(_SequenceL__Arg_inputList.get_ptr((*(_SequenceL_tmp96.get_ptr(_SequenceL__no_share_iter))))));	/*Sequence.sl:110: inputList[i]*/
}
}
}
}
void SequenceL__parallel_applyFold_2(::Sequence< int > &_SequenceL__Arg_inputList, _sl_fun_pointer* _SequenceL__Arg_operator, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL_tmp93(cspace);
::Sequence< int > _SequenceL_tmp96(cspace);
int _SequenceL_tmp101;

_SequenceL_parallel__ellipsis(0, ((_SequenceL__Arg_inputList.size() - 1) / 2), __LINE__, _SequenceL_tmp93);	/*Sequence.sl:110: 0 ... ((size(inputList) - 1) / 2)*/
_SequenceL_tmp96.setSize(_SequenceL_tmp93.size());	/*Sequence.sl:110: 2 * (0 ... ((size(inputList) - 1) / 2)) + 1*/
if (((((SL_FLOAT)(_SequenceL_tmp93.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt21_ SequenceL__sl_main_nt21__val(_SequenceL_tmp93, 1, _SequenceL_tmp93.size(), _SequenceL_tmp96);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt21__val);
_SequenceL_tmp93.delete_data(false);	
_SequenceL_tmp93.finished();	
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__i95=1,_stop_val__SequenceL__i95=_SequenceL_tmp93.size(); _SequenceL__i95<=_stop_val__SequenceL__i95; _SequenceL__i95+=1)
{
(*(_SequenceL_tmp96.get_ptr(_SequenceL__i95))) = ((2 * (*(_SequenceL_tmp93.get_ptr(_SequenceL__i95)))) + 1);	/*Sequence.sl:110: 2 * (0 ... ((size(inputList) - 1) / 2)) + 1*/
}
_SequenceL_tmp93.delete_data(false);	
_SequenceL_tmp93.finished();	
}
_SequenceL__resultConv.setSize(_SequenceL_tmp96.size());	/*Sequence.sl:110: operator(inputList[i], inputList[i + 1]) when i < size(inputList)	else		inputList[i]*/
if (((((SL_FLOAT)(_SequenceL__resultConv.size() - 1)) * 5) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt23_ SequenceL__sl_main_nt23__val(_SequenceL_tmp96, _SequenceL__Arg_inputList, _SequenceL__Arg_operator, 1, _SequenceL__resultConv.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt23__val);
_SequenceL_tmp96.delete_data(false);	
_SequenceL_tmp96.finished();	
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__resultConv.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
if (((*(_SequenceL_tmp96.get_ptr(_SequenceL__Index_i))) < _SequenceL__Arg_inputList.size()))	/*Sequence.sl:110: operator(inputList[i], inputList[i + 1]) when i < size(inputList)	else		inputList[i]*/
{
_SequenceL_tmp101 = ((*(_SequenceL_tmp96.get_ptr(_SequenceL__Index_i))) + 1);	/*Sequence.sl:107: i + 1*/
((void (*)(int,int,int&))_SequenceL__Arg_operator[0])((*(_SequenceL__Arg_inputList.get_ptr((*(_SequenceL_tmp96.get_ptr(_SequenceL__Index_i)))))), (*(_SequenceL__Arg_inputList.get_ptr(_SequenceL_tmp101))), (*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))));	/*Sequence.sl:107: operator(inputList[i], inputList[i + 1])*/
}
else
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_inputList.get_ptr((*(_SequenceL_tmp96.get_ptr(_SequenceL__Index_i))))));	/*Sequence.sl:110: inputList[i]*/
}
}
_SequenceL_tmp96.delete_data(false);	
_SequenceL_tmp96.finished();	
}
}
void SequenceL__parallel_fold_2(::Sequence< int > &_SequenceL__Arg_inputList, _sl_fun_pointer* _SequenceL__Arg_operator, int &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL___Arg_inputList_tco(cspace);
::Sequence< int > _SequenceL_tmp106(cspace);

if (_SequenceL__Arg_inputList.onlyInstance())	
{
_SequenceL___Arg_inputList_tco.replaceSequence(_SequenceL__Arg_inputList);	
}
else
{
_SequenceL___Arg_inputList_tco.hard_copy(_SequenceL__Arg_inputList,__LINE__);	
}
_parallel_fold_Sequence_label_tco:	
if ((_SequenceL___Arg_inputList_tco.size() == 1))	/*Sequence.sl:103: head(inputList) when size(inputList) = 1	else		fold(applyFold(inputList, operator), operator)*/
{
_SequenceL__resultConv = _SequenceL___Arg_inputList_tco.head();	/*Sequence.sl:101: head(inputList)*/
}
else
{
SequenceL__parallel_applyFold_2(_SequenceL___Arg_inputList_tco, _SequenceL__Arg_operator, _SequenceL_tmp106);	/*Sequence.sl:103: applyFold(inputList, operator)*/
_swap(_SequenceL___Arg_inputList_tco, _SequenceL_tmp106);	
goto _parallel_fold_Sequence_label_tco;	/*Sequence.sl:103: fold(applyFold(inputList, operator), operator)*/
}
_SequenceL_tmp106.delete_data(false);	
_SequenceL_tmp106.finished();	
}
void SequenceL__parallel_vectorMin_2(::Sequence< int > &_SequenceL__Arg_list, int &_SequenceL__resultConv)
{

SequenceL__parallel_fold_2(_SequenceL__Arg_list, _PointerSequenceL_min_5, _SequenceL__resultConv);	/*Sequence.sl:150: fold(list, min)*/
}
void SequenceL__parallel_vectorMax_2(::Sequence< int > &_SequenceL__Arg_list, int &_SequenceL__resultConv)
{

SequenceL__parallel_fold_2(_SequenceL__Arg_list, _PointerSequenceL_max_5, _SequenceL__resultConv);	/*Sequence.sl:158: fold(list, max)*/
}
void SequenceL__parallel_integerPowerHelper_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int _SequenceL__Arg_val, int &_SequenceL__resultConv)
{
int _SequenceL___Arg_y_tco;
int _SequenceL___Arg_val_tco;
int _SequenceL_tmp137;
int _SequenceL_tmp138;

_SequenceL___Arg_y_tco = _SequenceL__Arg_y;	
_SequenceL___Arg_val_tco = _SequenceL__Arg_val;	
_parallel_integerPowerHelper_Math_label_tco:	
if ((_SequenceL___Arg_y_tco < 1))	/*Math.sl:20: val when y < 1	else		integerPowerHelper(x, y - 1, val * x)*/
{
_SequenceL__resultConv = _SequenceL___Arg_val_tco;	/*Math.sl:18: val*/
}
else
{
_SequenceL_tmp137 = (_SequenceL___Arg_y_tco - 1);	/*Math.sl:20: y - 1*/
_SequenceL_tmp138 = (_SequenceL___Arg_val_tco * _SequenceL__Arg_x);	/*Math.sl:20: val * x*/
_SequenceL___Arg_y_tco = _SequenceL_tmp137;	
_SequenceL___Arg_val_tco = _SequenceL_tmp138;	
goto _parallel_integerPowerHelper_Math_label_tco;	/*Math.sl:20: integerPowerHelper(x, y - 1, val * x)*/
}
}
void SequenceL__parallel_integerPower_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv)
{

SequenceL__parallel_integerPowerHelper_5(_SequenceL__Arg_x, _SequenceL__Arg_y, 1, _SequenceL__resultConv);	/*Math.sl:14: integerPowerHelper(x, y, 1)*/
}
void SequenceL__parallel_charToInt_3(char _SequenceL__Arg_char, int &_SequenceL__resultConv)
{

if ((_SequenceL__Arg_char == '0'))	/*Conversion.sl:120: 0 when char = '0'	else		1 when char = '1'	else		2 when char = '2'	else		3 when char = '3'	else		4 when char = '4'	else		5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 0;	/*Conversion.sl:100: 0*/
}
else
{
if ((_SequenceL__Arg_char == '1'))	/*Conversion.sl:120: 1 when char = '1'	else		2 when char = '2'	else		3 when char = '3'	else		4 when char = '4'	else		5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 1;	/*Conversion.sl:102: 1*/
}
else
{
if ((_SequenceL__Arg_char == '2'))	/*Conversion.sl:120: 2 when char = '2'	else		3 when char = '3'	else		4 when char = '4'	else		5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 2;	/*Conversion.sl:104: 2*/
}
else
{
if ((_SequenceL__Arg_char == '3'))	/*Conversion.sl:120: 3 when char = '3'	else		4 when char = '4'	else		5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 3;	/*Conversion.sl:106: 3*/
}
else
{
if ((_SequenceL__Arg_char == '4'))	/*Conversion.sl:120: 4 when char = '4'	else		5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 4;	/*Conversion.sl:108: 4*/
}
else
{
if ((_SequenceL__Arg_char == '5'))	/*Conversion.sl:120: 5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 5;	/*Conversion.sl:110: 5*/
}
else
{
if ((_SequenceL__Arg_char == '6'))	/*Conversion.sl:120: 6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 6;	/*Conversion.sl:112: 6*/
}
else
{
if ((_SequenceL__Arg_char == '7'))	/*Conversion.sl:120: 7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 7;	/*Conversion.sl:114: 7*/
}
else
{
if ((_SequenceL__Arg_char == '8'))	/*Conversion.sl:120: 8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 8;	/*Conversion.sl:116: 8*/
}
else
{
if ((_SequenceL__Arg_char == '9'))	/*Conversion.sl:120: 9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 9;	/*Conversion.sl:118: 9*/
}
else
{
_SequenceL__resultConv = 0;	/*Conversion.sl:120: 0*/
}
}
}
}
}
}
}
}
}
}
}
void SequenceL__sl_main_nt19_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
int _SequenceL_tmp199;
int _SequenceL__Arg_place;
int _SequenceL_tmp200;

SequenceL_charToInt_3((*(_SequenceL__Arg_numString.get_ptr(_SequenceL__Index_i))), _SequenceL_tmp199);	/*Conversion.sl:60: charToInt(numString[i])*/
_SequenceL_tmp200 = (_SequenceL__Arg_numString.size() - _SequenceL__Index_i);	/*Conversion.sl:58: size(numString) - i*/
SequenceL_integerPower_5(10, _SequenceL_tmp200, _SequenceL__Arg_place);	/*Conversion.sl:58: integerPower(10, (size(numString) - i))*/
(*(_SequenceL__result20.get_ptr(_SequenceL__Index_i))) = (_SequenceL_tmp199 * _SequenceL__Arg_place);	/*Conversion.sl:60: charToInt(numString[i]) * place*/
}
}
void SequenceL__parallel_atoIWorker_3(::Sequence< char > &_SequenceL__Arg_numString, ::Sequence< int > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_numString.size());	/*Conversion.sl:60: charToInt(numString[i]) * place*/
SequenceL__sl_main_nt19_ SequenceL__sl_main_nt19__val(_SequenceL__Arg_numString, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_numString.size() + 1, SequenceL__sl_main_nt19__val);
}
void SequenceL__parallel_take_2(::Sequence< char > &_SequenceL__Arg_list, int _SequenceL__Arg_n, ::Sequence< char > &_SequenceL__resultConv)
{

_SequenceL__Arg_list.sub_seq(1, _SequenceL__Arg_n, _SequenceL__resultConv);	/*Sequence.sl:174: list[1 ... n]*/
}
void SequenceL__parallel_isDigit_1(char _SequenceL__Arg_char, bool &_SequenceL__resultConv)
{

_SequenceL__resultConv = ((((((((((_SequenceL__Arg_char == '0') || (_SequenceL__Arg_char == '1')) || (_SequenceL__Arg_char == '2')) || (_SequenceL__Arg_char == '3')) || (_SequenceL__Arg_char == '4')) || (_SequenceL__Arg_char == '5')) || (_SequenceL__Arg_char == '6')) || (_SequenceL__Arg_char == '7')) || (_SequenceL__Arg_char == '8')) || (_SequenceL__Arg_char == '9'));	/*String.sl:20: char = '0' or char = '1' or char = '2' or char = '3' or char = '4' or char = '5' or char = '6' or char = '7' or char = '8' or char = '9'*/
}
void SequenceL__parallel_trimNonNumeric_3(::Sequence< char > &_SequenceL__Arg_numString, int _SequenceL__Arg_i, ::Sequence< char > &_SequenceL__resultConv)
{
int _SequenceL___Arg_i_tco;
bool _SequenceL_tmp276;
int _SequenceL_tmp279;
int _SequenceL_tmp281;

_SequenceL___Arg_i_tco = _SequenceL__Arg_i;	
_parallel_trimNonNumeric_Conversion_label_tco:	
if ((_SequenceL___Arg_i_tco > _SequenceL__Arg_numString.size()))	/*Conversion.sl:53: numString when i > size(numString)	else		take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL__resultConv = _SequenceL__Arg_numString;	/*Conversion.sl:49: numString*/
}
else
{
SequenceL__parallel_isDigit_1((*(_SequenceL__Arg_numString.get_ptr(_SequenceL___Arg_i_tco))), _SequenceL_tmp276);	/*Conversion.sl:52: isDigit(numString[i])*/
if (!_SequenceL_tmp276)	/*Conversion.sl:53: take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL_tmp279 = (_SequenceL___Arg_i_tco - 1);	/*Conversion.sl:51: i-1*/
SequenceL__parallel_take_2(_SequenceL__Arg_numString, _SequenceL_tmp279, _SequenceL__resultConv);	/*Conversion.sl:51: take(numString, i-1)*/
}
else
{
_SequenceL_tmp281 = (_SequenceL___Arg_i_tco + 1);	/*Conversion.sl:53: i + 1*/
_SequenceL___Arg_i_tco = _SequenceL_tmp281;	
goto _parallel_trimNonNumeric_Conversion_label_tco;	/*Conversion.sl:53: trimNonNumeric(numString, i + 1)*/
}
}
}
void SequenceL__parallel_isWhiteSpace_1(char _SequenceL__Arg_input, bool &_SequenceL__resultConv)
{

_SequenceL__resultConv = ((((_SequenceL__Arg_input == ' ') || (_SequenceL__Arg_input == '\n')) || (_SequenceL__Arg_input == '\t')) || (_SequenceL__Arg_input == '\r'));	/*String.sl:16: input = ' ' or input = '\n' or input = '\t' or input = '\r'*/
}
void SequenceL__parallel_trimStart_1(::Sequence< char > &_SequenceL__Arg_input, ::Sequence< char > &_SequenceL__resultConv)
{
::Sequence< char > _SequenceL___Arg_input_tco(cspace);
bool _SequenceL_tmp358;
char _SequenceL_tmp357;
::Sequence< char > _SequenceL_tmp360(cspace);

if (_SequenceL__Arg_input.onlyInstance())	
{
_SequenceL___Arg_input_tco.replaceSequence(_SequenceL__Arg_input);	
}
else
{
_SequenceL___Arg_input_tco.hard_copy(_SequenceL__Arg_input,__LINE__);	
}
_parallel_trimStart_String_label_tco:	
if ((_SequenceL___Arg_input_tco.size() == 0))	/*String.sl:12: input when size(input) = 0	else		trimStart(tail(input)) when isWhiteSpace(head(input))	else		input*/
{
_SequenceL__resultConv = _SequenceL___Arg_input_tco;	/*String.sl:8: input*/
}
else
{
_SequenceL_tmp357 = _SequenceL___Arg_input_tco.head();	/*String.sl:10: head(input)*/
SequenceL__parallel_isWhiteSpace_1(_SequenceL_tmp357, _SequenceL_tmp358);	/*String.sl:11: isWhiteSpace(head(input))*/
if (_SequenceL_tmp358)	/*String.sl:12: trimStart(tail(input)) when isWhiteSpace(head(input))	else		input*/
{
_SequenceL___Arg_input_tco.tail(_SequenceL_tmp360);	/*String.sl:10: tail(input)*/
_swap(_SequenceL___Arg_input_tco, _SequenceL_tmp360);	
goto _parallel_trimStart_String_label_tco;	/*String.sl:10: trimStart(tail(input))*/
}
else
{
_SequenceL__resultConv = _SequenceL___Arg_input_tco;	/*String.sl:12: input*/
}
}
_SequenceL_tmp360.delete_data(false);	
_SequenceL_tmp360.finished();	
}
void SequenceL__parallel_stringToInt_3(::Sequence< char > &_SequenceL__Arg_numString, int &_SequenceL__resultConv)
{
::Sequence< char > _SequenceL__Arg_trimmed(cspace);
char _SequenceL_tmp365;
int _SequenceL_tmp369;
::Sequence< char > _SequenceL_tmp368(cspace);
char _SequenceL_tmp371;
::Sequence< char > _SequenceL_tmp374(cspace);
::Sequence< int > _SequenceL_tmp376(cspace);
::Sequence< char > _SequenceL__Arg_justNumber(cspace);

SequenceL__parallel_trimStart_1(_SequenceL__Arg_numString, _SequenceL__Arg_trimmed);	/*Conversion.sl:36: trimStart(numString)*/
if ((_SequenceL__Arg_trimmed.size() == 0))	/*Conversion.sl:45: 0 when size(trimmed) = 0	else		- stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__resultConv = 0;	/*Conversion.sl:39: 0*/
_SequenceL__Arg_trimmed.delete_data(false);	
_SequenceL__Arg_trimmed.finished();	
}
else
{
_SequenceL_tmp365 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:41: head(trimmed)*/
if ((_SequenceL_tmp365 == '-'))	/*Conversion.sl:45: - stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp368);	/*Conversion.sl:41: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(false);	
_SequenceL__Arg_trimmed.finished();	
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_stringToInt_c_3(_SequenceL_tmp368, _SequenceL_tmp369));
_SequenceL_tmp368.finished();	
_SequenceL__resultConv = (-_SequenceL_tmp369);	/*Conversion.sl:41: - stringToInt(tail(trimmed))*/
}
else
{
_SequenceL_tmp371 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:43: head(trimmed)*/
if ((_SequenceL_tmp371 == '+'))	/*Conversion.sl:45: stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp374);	/*Conversion.sl:43: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(false);	
_SequenceL__Arg_trimmed.finished();	
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_stringToInt_c_3(_SequenceL_tmp374, _SequenceL__resultConv));
_SequenceL_tmp374.finished();	
}
else
{
SequenceL__parallel_trimNonNumeric_3(_SequenceL__Arg_trimmed, 1, _SequenceL__Arg_justNumber);	/*Conversion.sl:37: trimNonNumeric(trimmed, 1)*/
_SequenceL__Arg_trimmed.delete_data(false);	
_SequenceL__Arg_trimmed.finished();	
SequenceL__parallel_atoIWorker_3(_SequenceL__Arg_justNumber, _SequenceL_tmp376);	/*Conversion.sl:45: atoIWorker(justNumber)*/
_SequenceL__Arg_justNumber.delete_data(false);	
_SequenceL__Arg_justNumber.finished();	
_SequenceL__resultConv = _SequenceL_parallel_sum(_SequenceL_tmp376, __LINE__);	/*Conversion.sl:45: sum(atoIWorker(justNumber))*/
_SequenceL_tmp376.delete_data(false);	
_SequenceL_tmp376.finished();	
}
}
}
}
void SequenceL__sl_main_nt17_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{

(*(_SequenceL__result18.get_ptr(_SequenceL__Index_i))).setSize((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__Index_i))).size());	/*Sequence.sl:45: list[indexes[i]]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index2=1,_stop_val__SequenceL__Index__tmp_index2=(*(_SequenceL__result18.get_ptr(_SequenceL__Index_i))).size(); _SequenceL__Index__tmp_index2<=_stop_val__SequenceL__Index__tmp_index2; _SequenceL__Index__tmp_index2+=1)
{
(*((*(_SequenceL__result18.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index__tmp_index2))) = (*(_SequenceL__Arg_list.get_ptr((*((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index__tmp_index2))))));	/*Sequence.sl:45: list[indexes[i]]*/
}
}
}
void SequenceL__parallel_multipleIndexes_2(::Sequence< char > &_SequenceL__Arg_list, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_indexes, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:45: list[indexes[i]]*/
if (((((SL_FLOAT)(_SequenceL__Arg_indexes.size() - 1)) * (-1 + ((_SequenceL__Arg_indexes.size() > 0) ? (*(_SequenceL__Arg_indexes.get_ptr(1))).size() : 0))) > (sl_get_num_units() * ((WORK_SHARE_VALUE * WORK_SHARE_VALUE) * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt17_ SequenceL__sl_main_nt17__val(_SequenceL__Arg_indexes, _SequenceL__Arg_list, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_indexes.size() + 1, SequenceL__sl_main_nt17__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_indexes.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))).setSize((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__Index_i))).size());	/*Sequence.sl:45: list[indexes[i]]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index2=1,_stop_val__SequenceL__Index__tmp_index2=(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))).size(); _SequenceL__Index__tmp_index2<=_stop_val__SequenceL__Index__tmp_index2; _SequenceL__Index__tmp_index2+=1)
{
(*((*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index__tmp_index2))) = (*(_SequenceL__Arg_list.get_ptr((*((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index__tmp_index2))))));	/*Sequence.sl:45: list[indexes[i]]*/
}
}
}
}
void SequenceL__sl_main_nt15_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__Index_i - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__Index_i * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
if (((*(_SequenceL__Arg_list.get_ptr(_SequenceL__no_share_iter))) == _SequenceL__Arg_element))	/*Sequence.sl:41: i when list[i] = element*/
{
(*(_SequenceL__result16.get_ptr(_SequenceL__no_share_iter))) = _SequenceL__no_share_iter;	
_SequenceL__result16.setExistence(_SequenceL__no_share_iter, true);	
}
else
{
_SequenceL__result16.setExistence(_SequenceL__no_share_iter, false);	
}
}
}
}
void SequenceL__parallel_indexesOf_2(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_element, ::Sequence< int > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_list.size());	/*Sequence.sl:41: i when list[i] = element*/
_SequenceL__resultConv.create_map();	
if (((((SL_FLOAT)(_SequenceL__Arg_list.size() - 1)) * 3) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt15_ SequenceL__sl_main_nt15__val(_SequenceL__Arg_list, _SequenceL__Arg_element, 1, _SequenceL__Arg_list.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt15__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_list.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
if (((*(_SequenceL__Arg_list.get_ptr(_SequenceL__Index_i))) == _SequenceL__Arg_element))	/*Sequence.sl:41: i when list[i] = element*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = _SequenceL__Index_i;	
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, true);	
}
else
{
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, false);	
}
}
}
_SequenceL__resultConv.cleanup(false);	
}
void SequenceL__sl_main_nt9_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i417 = _r.begin(); _SequenceL__i417 < _e; _SequenceL__i417++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__i417 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__i417 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result10.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__no_share_iter))) + 1);	/*Sequence.sl:54: indexes + 1*/
}
}
}
void SequenceL__sl_main_nt11_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i420 = _r.begin(); _SequenceL__i420 < _e; _SequenceL__i420++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__i420 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__i420 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result12.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__no_share_iter))) - 1);	/*Sequence.sl:54: indexes - 1*/
}
}
}
void SequenceL__sl_main_nt13_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i425 = _r.begin(); _SequenceL__i425 < _e; _SequenceL__i425++)
{

ellipsis((*(_SequenceL_tmp418.get_ptr(_SequenceL__i425))), (*(_SequenceL_tmp423.get_ptr(_SequenceL__i425))), (*(_SequenceL__result14.get_ptr(_SequenceL__i425))));	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
}
}
void SequenceL__parallel_split_2(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_delimiter, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv)
{
::Sequence< Empty > _SequenceL_tmp412(cspace);
::Sequence< int > _SequenceL_tmp418(cspace);
::Sequence< int > _SequenceL_tmp414(cspace);
::Sequence< int > _SequenceL__Arg_indexes(cspace);
::Sequence< int > _SequenceL_tmp416(cspace);
::Sequence< int > _SequenceL_tmp423(cspace);
::Sequence< int > _SequenceL_tmp419(cspace);
::Sequence< int > _SequenceL_tmp421(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp424(cspace);

if ((_SequenceL__Arg_list.size() == 0))	/*Sequence.sl:54: [] when size(list) = 0	else		multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
{
_SequenceL_tmp412.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp412, _SequenceL__resultConv);	
_SequenceL_tmp412.delete_data(false);	
_SequenceL_tmp412.finished();	
_SequenceL_tmp424.delete_data(false);	
_SequenceL_tmp424.finished();	
}
else
{
_SequenceL_tmp414.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp414.get_ptr(1))) = 1;	/*Sequence.sl:54: 1*/
SequenceL__parallel_indexesOf_2(_SequenceL__Arg_list, _SequenceL__Arg_delimiter, _SequenceL__Arg_indexes);	/*Sequence.sl:50: indexesOf(list, delimiter)*/
_SequenceL_tmp416.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes + 1*/
if (((((SL_FLOAT)(_SequenceL_tmp416.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt9_ SequenceL__sl_main_nt9__val(_SequenceL__Arg_indexes, 1, _SequenceL_tmp416.size(), _SequenceL_tmp416);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt9__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__i417=1,_stop_val__SequenceL__i417=_SequenceL_tmp416.size(); _SequenceL__i417<=_stop_val__SequenceL__i417; _SequenceL__i417+=1)
{
(*(_SequenceL_tmp416.get_ptr(_SequenceL__i417))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i417))) + 1);	/*Sequence.sl:54: indexes + 1*/
}
}
append(_SequenceL_tmp414, _SequenceL_tmp416, _SequenceL_tmp418);	/*Sequence.sl:54: [1] ++ (indexes + 1)*/
_SequenceL_tmp414.delete_data(false);	
_SequenceL_tmp416.delete_data(false);	
_SequenceL_tmp416.finished();	
_SequenceL_tmp414.finished();	
_SequenceL_tmp419.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes - 1*/
if (((((SL_FLOAT)(_SequenceL_tmp419.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt11_ SequenceL__sl_main_nt11__val(_SequenceL__Arg_indexes, 1, _SequenceL_tmp419.size(), _SequenceL_tmp419);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt11__val);
_SequenceL__Arg_indexes.delete_data(false);	
_SequenceL__Arg_indexes.finished();	
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__i420=1,_stop_val__SequenceL__i420=_SequenceL_tmp419.size(); _SequenceL__i420<=_stop_val__SequenceL__i420; _SequenceL__i420+=1)
{
(*(_SequenceL_tmp419.get_ptr(_SequenceL__i420))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i420))) - 1);	/*Sequence.sl:54: indexes - 1*/
}
_SequenceL__Arg_indexes.delete_data(false);	
_SequenceL__Arg_indexes.finished();	
}
_SequenceL_tmp421.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp421.get_ptr(1))) = _SequenceL__Arg_list.size();	/*Sequence.sl:54: size(list)*/
append(_SequenceL_tmp419, _SequenceL_tmp421, _SequenceL_tmp423);	/*Sequence.sl:54: (indexes - 1) ++ [size(list)]*/
_SequenceL_tmp419.delete_data(false);	
_SequenceL_tmp421.delete_data(false);	
_SequenceL_tmp421.finished();	
_SequenceL_tmp419.finished();	
_SequenceL_tmp424.setSize(_SequenceL_tmp418.size());	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
SequenceL__sl_main_nt13_ SequenceL__sl_main_nt13__val(_SequenceL_tmp418, _SequenceL_tmp423, _SequenceL_tmp424);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL_tmp424.size() + 1, SequenceL__sl_main_nt13__val);
_SequenceL_tmp418.delete_data(false);	
_SequenceL_tmp423.delete_data(false);	
_SequenceL_tmp423.finished();	
_SequenceL_tmp418.finished();	
SequenceL__parallel_multipleIndexes_2(_SequenceL__Arg_list, _SequenceL_tmp424, _SequenceL__resultConv);	/*Sequence.sl:54: multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
_SequenceL_tmp424.delete_data(false);	
_SequenceL_tmp424.finished();	
}
}
void SequenceL__parallel_allButLast_2(::Sequence< char > &_SequenceL__Arg_list, ::Sequence< char > &_SequenceL__resultConv)
{

_SequenceL__Arg_list.sub_seq(1, (_SequenceL__Arg_list.size() - 1), _SequenceL__resultConv);	/*Sequence.sl:166: list[1 ... (size(list) - 1)]*/
}
void SequenceL__parallel_last_2(::Sequence< char > &_SequenceL__Arg_list, char &_SequenceL__resultConv)
{

_SequenceL__resultConv = (*(_SequenceL__Arg_list.get_ptr(_SequenceL__Arg_list.size())));	/*Sequence.sl:162: list[size(list)]*/
}
void SequenceL__parallel_trim_0(::Sequence< char > &_SequenceL__Arg_s, ::Sequence< char > &_SequenceL__resultConv)
{
bool _SequenceL_tmp461;
char _SequenceL_tmp460;
::Sequence< char > _SequenceL_tmp463(cspace);
bool _SequenceL_tmp466;
char _SequenceL_tmp465;
::Sequence< char > _SequenceL_tmp468(cspace);

_SequenceL_tmp460 = _SequenceL__Arg_s.head();	/*advent2.sl:6: head(s)*/
SequenceL__parallel_isWhiteSpace_1(_SequenceL_tmp460, _SequenceL_tmp461);	/*advent2.sl:7: isWhiteSpace(head(s))*/
if (_SequenceL_tmp461)	/*advent2.sl:8: trim(tail(s)) when isWhiteSpace(head(s))  else trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
_SequenceL__Arg_s.tail(_SequenceL_tmp463);	/*advent2.sl:6: tail(s)*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_trim_c_0(_SequenceL_tmp463, _SequenceL__resultConv));
_SequenceL_tmp463.finished();	
}
else
{
SequenceL__parallel_last_2(_SequenceL__Arg_s, _SequenceL_tmp465);	/*advent2.sl:7: last(s)*/
SequenceL__parallel_isWhiteSpace_1(_SequenceL_tmp465, _SequenceL_tmp466);	/*advent2.sl:8: isWhiteSpace(last(s))*/
if (_SequenceL_tmp466)	/*advent2.sl:8: trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
SequenceL__parallel_allButLast_2(_SequenceL__Arg_s, _SequenceL_tmp468);	/*advent2.sl:7: allButLast(s)*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_trim_c_0(_SequenceL_tmp468, _SequenceL__resultConv));
_SequenceL_tmp468.finished();	
}
else
{
_SequenceL__resultConv = _SequenceL__Arg_s;	/*advent2.sl:8: s*/
}
}
}
void SequenceL__sl_main_nt1_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i472 = _r.begin(); _SequenceL__i472 < _e; _SequenceL__i472++)
{
::Sequence< char > _SequenceL__delete_opttmp1(cspace);
::Sequence< int > _SequenceL__delete_opttmp2(cspace);
::Sequence< int > _SequenceL__delete_opttmp3(cspace);

SequenceL_split_2((*(_SequenceL__Arg_lines.get_ptr(_SequenceL__i472))), '\t', (*(_SequenceL__result2.get_ptr(_SequenceL__i472))));	/*advent2.sl:25: split(lines, '\t')*/
(*(_SequenceL__result3.get_ptr(_SequenceL__i472))).setSize((*(_SequenceL__result2.get_ptr(_SequenceL__i472))).size());	/*advent2.sl:26: stringToInt(matrix)*/
SIMD_DIRECTIVE
for (int _SequenceL__i474=1,_stop_val__SequenceL__i474=(*(_SequenceL__result3.get_ptr(_SequenceL__i472))).size(); _SequenceL__i474<=_stop_val__SequenceL__i474; _SequenceL__i474+=1)
{
(*((*(_SequenceL__result2.get_ptr(_SequenceL__i472))).get_ptr(_SequenceL__i474))).clone(_SequenceL__delete_opttmp1);	/*advent2.sl:26: stringToInt(matrix)*/
SequenceL_stringToInt_3(_SequenceL__delete_opttmp1, (*((*(_SequenceL__result3.get_ptr(_SequenceL__i472))).get_ptr(_SequenceL__i474))));	/*advent2.sl:26: stringToInt(matrix)*/
_SequenceL__delete_opttmp1.finished();	
}
(*(_SequenceL__result3.get_ptr(_SequenceL__i472))).clone(_SequenceL__delete_opttmp2);	/*advent2.sl:28: vectorMax(sheet)*/
SequenceL_vectorMax_2(_SequenceL__delete_opttmp2, (*(_SequenceL__result4.get_ptr(_SequenceL__i472))));	/*advent2.sl:28: vectorMax(sheet)*/
_SequenceL__delete_opttmp2.delete_data(true);	
_SequenceL__delete_opttmp2.finished();	
(*(_SequenceL__result3.get_ptr(_SequenceL__i472))).clone(_SequenceL__delete_opttmp3);	/*advent2.sl:28: vectorMin(sheet)*/
SequenceL_vectorMin_2(_SequenceL__delete_opttmp3, (*(_SequenceL__result5.get_ptr(_SequenceL__i472))));	/*advent2.sl:28: vectorMin(sheet)*/
_SequenceL__delete_opttmp3.delete_data(true);	
_SequenceL__delete_opttmp3.finished();	
(*(_SequenceL__result6.get_ptr(_SequenceL__i472))) = ((*(_SequenceL__result4.get_ptr(_SequenceL__i472))) - (*(_SequenceL__result5.get_ptr(_SequenceL__i472))));	/*advent2.sl:28: vectorMax(sheet) - vectorMin(sheet)*/
}
}
void SequenceL__sl_main_nt7_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i483 = _r.begin(); _SequenceL__i483 < _e; _SequenceL__i483++)
{

SequenceL_dividingPairResults_0((*(_SequenceL__Arg_sheet.get_ptr(_SequenceL__i483))), _SequenceL__Arg_pairs, (*(_SequenceL__result8.get_ptr(_SequenceL__i483))));	/*advent2.sl:29: dividingPairResults(sheet, pairs)*/
}
}
void SequenceL__parallel_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_s, ::Sequence< int > &_SequenceL__resultConv)
{
int _SequenceL__Arg_checksum;
::Sequence< ::Sequence< char > > _SequenceL__Arg_lines(cspace);
::Sequence< char > _SequenceL_tmp471(cspace);
::Sequence< char > _SequenceL__delete_opttmp1(cspace);
::Sequence< ::Sequence< ::Sequence< char > > > _SequenceL__Arg_matrix(cspace);
::Sequence< ::Sequence< int > > _SequenceL__Arg_sheet(cspace);
::Sequence< int > _SequenceL_tmp475(cspace);
::Sequence< int > _SequenceL_tmp477(cspace);
::Sequence< int > _SequenceL_tmp479(cspace);
::Sequence< int > _SequenceL_tmp484(cspace);
::Sequence< ::Sequence< int > > _SequenceL__Arg_pairs(cspace);
::Sequence< ::Sequence< char > > _SequenceL_tmp482(cspace);
::Sequence< ::Sequence< int > > _SequenceL__Arg_rowPairResults(cspace);

_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
(*(_SequenceL__Arg_s.get_ptr(1))).clone(_SequenceL__delete_opttmp1);	/*advent2.sl:24: trim(s[1])*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_trim_c_0(_SequenceL__delete_opttmp1, _SequenceL_tmp471));
SequenceL__parallel_split_2(_SequenceL_tmp471, '\n', _SequenceL__Arg_lines);	/*advent2.sl:24: split(trim(s[1]), '\n')*/
_SequenceL_tmp471.delete_data(false);	
_SequenceL_tmp471.finished();	
_SequenceL__Arg_matrix.setSize(_SequenceL__Arg_lines.size());	/*advent2.sl:25: split(lines, '\t')*/
_SequenceL__Arg_sheet.setSize(_SequenceL__Arg_matrix.size());	/*advent2.sl:26: stringToInt(matrix)*/
_SequenceL_tmp475.setSize(_SequenceL__Arg_sheet.size());	/*advent2.sl:28: vectorMax(sheet)*/
_SequenceL_tmp477.setSize(_SequenceL__Arg_sheet.size());	/*advent2.sl:28: vectorMin(sheet)*/
_SequenceL_tmp479.setSize(_SequenceL_tmp475.size());	/*advent2.sl:28: vectorMax(sheet) - vectorMin(sheet)*/
SequenceL__sl_main_nt1_ SequenceL__sl_main_nt1__val(_SequenceL__Arg_lines, _SequenceL__Arg_matrix, _SequenceL__Arg_sheet, _SequenceL_tmp475, _SequenceL_tmp477, _SequenceL_tmp479);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_matrix.size() + 1, SequenceL__sl_main_nt1__val);
_SequenceL__Arg_lines.delete_data(false);	
_SequenceL__Arg_lines.finished();	
_SequenceL__Arg_checksum = _SequenceL_parallel_sum(_SequenceL_tmp479, __LINE__);	/*advent2.sl:28: sum(vectorMax(sheet) - vectorMin(sheet))*/
_SequenceL_tmp479.delete_data(false);	
_SequenceL_tmp479.finished();	
(*(_SequenceL__resultConv.get_ptr(1))) = _SequenceL__Arg_checksum;	/*advent2.sl:30: checksum*/
_SequenceL__Arg_matrix.head(_SequenceL_tmp482);	/*advent2.sl:27: head(matrix)*/
_SequenceL__Arg_matrix.delete_data(false);	
_SequenceL__Arg_matrix.finished();	
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_distinctPairs_i_0(_SequenceL_tmp482.size(), _SequenceL__Arg_pairs));
_SequenceL_tmp482.delete_data(false);	
_SequenceL_tmp482.finished();	
_SequenceL__Arg_rowPairResults.setSize(_SequenceL__Arg_sheet.size());	/*advent2.sl:29: dividingPairResults(sheet, pairs)*/
SequenceL__sl_main_nt7_ SequenceL__sl_main_nt7__val(_SequenceL__Arg_sheet, _SequenceL__Arg_pairs, _SequenceL__Arg_rowPairResults);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_rowPairResults.size() + 1, SequenceL__sl_main_nt7__val);
_SequenceL__Arg_sheet.delete_data(false);	
_SequenceL__Arg_pairs.delete_data(false);	
_SequenceL__Arg_pairs.finished();	
_SequenceL__Arg_sheet.finished();	
_SequenceL_parallel_appends(_SequenceL__Arg_rowPairResults, __LINE__, _SequenceL_tmp484);	/*advent2.sl:30: join(rowPairResults)*/
_SequenceL__Arg_rowPairResults.delete_data(false);	
_SequenceL__Arg_rowPairResults.finished();	
(*(_SequenceL__resultConv.get_ptr(2))) = _SequenceL_parallel_sum(_SequenceL_tmp484, __LINE__);	/*advent2.sl:30: sum(join(rowPairResults))*/
_SequenceL_tmp484.delete_data(false);	
_SequenceL_tmp484.finished();	
}
void SequenceL__parallel_min_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv)
{

if ((_SequenceL__Arg_x <= _SequenceL__Arg_y))	/*Math.sl:43: x when x <= y	else		y*/
{
_SequenceL__resultConv = _SequenceL__Arg_x;	/*Math.sl:41: x*/
}
else
{
_SequenceL__resultConv = _SequenceL__Arg_y;	/*Math.sl:43: y*/
}
}
void SequenceL__parallel_max_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv)
{

if ((_SequenceL__Arg_x >= _SequenceL__Arg_y))	/*Math.sl:49: x when x >= y	else		y*/
{
_SequenceL__resultConv = _SequenceL__Arg_x;	/*Math.sl:47: x*/
}
else
{
_SequenceL__resultConv = _SequenceL__Arg_y;	/*Math.sl:49: y*/
}
}
void SequenceL_dividingPairResults_0(::Sequence< int > &_SequenceL__Arg_r, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_p, ::Sequence< int > &_SequenceL__resultConv)
{
int _SequenceL__Arg_p1;
::Sequence< int > _SequenceL__Arg_pair(cspace);
int _SequenceL__Arg_p2;

_SequenceL__resultConv.setSize(_SequenceL__Arg_p.size());	/*advent2.sl:20: p1/p2 when p1 mod p2 = 0  else p2/p1 when p2 mod p1 = 0*/
_SequenceL__resultConv.create_map();	
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_p.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
_SequenceL__Arg_pair.setSize((*(_SequenceL__Arg_p.get_ptr(_SequenceL__Index_i))).size());	/*advent2.sl:16: r[p[i]]*/
SIMD_DIRECTIVE
for (int _SequenceL__scope__Index_pair__tmp_index2=1,_stop_val__SequenceL__scope__Index_pair__tmp_index2=_SequenceL__Arg_pair.size(); _SequenceL__scope__Index_pair__tmp_index2<=_stop_val__SequenceL__scope__Index_pair__tmp_index2; _SequenceL__scope__Index_pair__tmp_index2+=1)
{
(*(_SequenceL__Arg_pair.get_ptr(_SequenceL__scope__Index_pair__tmp_index2))) = (*(_SequenceL__Arg_r.get_ptr((*((*(_SequenceL__Arg_p.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__scope__Index_pair__tmp_index2))))));	/*advent2.sl:16: r[p[i]]*/
}
_SequenceL__Arg_p1 = (*(_SequenceL__Arg_pair.get_ptr(1)));	/*advent2.sl:17: pair[1]*/
_SequenceL__Arg_p2 = (*(_SequenceL__Arg_pair.get_ptr(2)));	/*advent2.sl:18: pair[2]*/
if (((_SequenceL__Arg_p1 % _SequenceL__Arg_p2) == 0))	/*advent2.sl:20: p1/p2 when p1 mod p2 = 0  else p2/p1 when p2 mod p1 = 0*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (_SequenceL__Arg_p1 / _SequenceL__Arg_p2);	/*advent2.sl:19: p1/p2*/
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, true);	
}
else
{
if (((_SequenceL__Arg_p2 % _SequenceL__Arg_p1) == 0))	/*advent2.sl:20: p2/p1 when p2 mod p1 = 0*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (_SequenceL__Arg_p2 / _SequenceL__Arg_p1);	/*advent2.sl:20: p2/p1*/
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, true);	
}
else
{
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, false);	
}
}
}
_SequenceL__Arg_pair.delete_data(true);	
_SequenceL__Arg_pair.finished();	
_SequenceL__resultConv.cleanup(true);	
}
void SequenceL_duplicate_2(int _SequenceL__Arg_element, int _SequenceL__Arg_times, ::Sequence< int > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_times > 0 ? _SequenceL__Arg_times : 0);	/*Sequence.sl:91: element*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_times; _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = _SequenceL__Arg_element;	/*Sequence.sl:91: element*/
}
}
void SequenceL_distinctPairs_0(int _SequenceL__Arg_n, ::Sequence< ::Sequence< int > > &_SequenceL__resultConv)
{
::Sequence< ::Sequence< int > > _SequenceL__Arg_npairs(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp49(cspace);
int _SequenceL_tmp51;
::Sequence< ::Sequence< int > > _SequenceL_tmp58(cspace);
int _SequenceL_tmp57;

_SequenceL_tmp49.setSize(2 > 0 ? 2 : 0);	
_SequenceL_tmp51 = (_SequenceL__Arg_n - 1);	/*advent2.sl:11: n-1*/
SequenceL_duplicate_2(_SequenceL__Arg_n, _SequenceL_tmp51, (*(_SequenceL_tmp49.get_ptr(1))));	/*advent2.sl:11: duplicate(n, (n-1))*/
ellipsis(1, (_SequenceL__Arg_n - 1), (*(_SequenceL_tmp49.get_ptr(2))));	/*advent2.sl:11: 1 ... (n - 1)*/
transpose(_SequenceL_tmp49, _SequenceL__Arg_npairs);	/*advent2.sl:11: transpose([duplicate(n, (n-1)), 1 ... (n - 1)])*/
_SequenceL_tmp49.delete_data(true);	
_SequenceL_tmp49.finished();	
if ((_SequenceL__Arg_n == 2))	/*advent2.sl:13: npairs when n = 2  else npairs ++ distinctPairs(n - 1)*/
{
_SequenceL__resultConv = _SequenceL__Arg_npairs;	/*advent2.sl:12: npairs*/
_SequenceL__Arg_npairs.delete_data(true);	
_SequenceL__Arg_npairs.finished();	
}
else
{
_SequenceL_tmp57 = (_SequenceL__Arg_n - 1);	/*advent2.sl:13: n - 1*/
SequenceL_distinctPairs_0(_SequenceL_tmp57, _SequenceL_tmp58);	/*advent2.sl:13: distinctPairs(n - 1)*/
append(_SequenceL__Arg_npairs, _SequenceL_tmp58, _SequenceL__resultConv);	/*advent2.sl:13: npairs ++ distinctPairs(n - 1)*/
_SequenceL__Arg_npairs.delete_data(true);	
_SequenceL_tmp58.delete_data(true);	
_SequenceL_tmp58.finished();	
_SequenceL__Arg_npairs.finished();	
}
}
void SequenceL_applyFold_2(::Sequence< int > &_SequenceL__Arg_inputList, _sl_fun_pointer* _SequenceL__Arg_operator, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL_tmp93(cspace);
::Sequence< int > _SequenceL_tmp96(cspace);
int _SequenceL_tmp101;

ellipsis(0, ((_SequenceL__Arg_inputList.size() - 1) / 2), _SequenceL_tmp93);	/*Sequence.sl:110: 0 ... ((size(inputList) - 1) / 2)*/
_SequenceL_tmp96.setSize(_SequenceL_tmp93.size());	/*Sequence.sl:110: 2 * (0 ... ((size(inputList) - 1) / 2)) + 1*/
SIMD_DIRECTIVE
for (int _SequenceL__i95=1,_stop_val__SequenceL__i95=_SequenceL_tmp93.size(); _SequenceL__i95<=_stop_val__SequenceL__i95; _SequenceL__i95+=1)
{
(*(_SequenceL_tmp96.get_ptr(_SequenceL__i95))) = ((2 * (*(_SequenceL_tmp93.get_ptr(_SequenceL__i95)))) + 1);	/*Sequence.sl:110: 2 * (0 ... ((size(inputList) - 1) / 2)) + 1*/
}
_SequenceL_tmp93.delete_data(true);	
_SequenceL_tmp93.finished();	
_SequenceL__resultConv.setSize(_SequenceL_tmp96.size());	/*Sequence.sl:110: operator(inputList[i], inputList[i + 1]) when i < size(inputList)	else		inputList[i]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__resultConv.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
if (((*(_SequenceL_tmp96.get_ptr(_SequenceL__Index_i))) < _SequenceL__Arg_inputList.size()))	/*Sequence.sl:110: operator(inputList[i], inputList[i + 1]) when i < size(inputList)	else		inputList[i]*/
{
_SequenceL_tmp101 = ((*(_SequenceL_tmp96.get_ptr(_SequenceL__Index_i))) + 1);	/*Sequence.sl:107: i + 1*/
((void (*)(int,int,int&))_SequenceL__Arg_operator[0])((*(_SequenceL__Arg_inputList.get_ptr((*(_SequenceL_tmp96.get_ptr(_SequenceL__Index_i)))))), (*(_SequenceL__Arg_inputList.get_ptr(_SequenceL_tmp101))), (*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))));	/*Sequence.sl:107: operator(inputList[i], inputList[i + 1])*/
}
else
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_inputList.get_ptr((*(_SequenceL_tmp96.get_ptr(_SequenceL__Index_i))))));	/*Sequence.sl:110: inputList[i]*/
}
}
_SequenceL_tmp96.delete_data(true);	
_SequenceL_tmp96.finished();	
}
void SequenceL_fold_2(::Sequence< int > &_SequenceL__Arg_inputList, _sl_fun_pointer* _SequenceL__Arg_operator, int &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL___Arg_inputList_tco(cspace);
::Sequence< int > _SequenceL_tmp106(cspace);

if (_SequenceL__Arg_inputList.onlyInstance())	
{
_SequenceL___Arg_inputList_tco.replaceSequence(_SequenceL__Arg_inputList);	
}
else
{
_SequenceL___Arg_inputList_tco.hard_copy(_SequenceL__Arg_inputList,__LINE__);	
}
fold_Sequence_label_tco:	
if ((_SequenceL___Arg_inputList_tco.size() == 1))	/*Sequence.sl:103: head(inputList) when size(inputList) = 1	else		fold(applyFold(inputList, operator), operator)*/
{
_SequenceL__resultConv = _SequenceL___Arg_inputList_tco.head();	/*Sequence.sl:101: head(inputList)*/
}
else
{
SequenceL_applyFold_2(_SequenceL___Arg_inputList_tco, _SequenceL__Arg_operator, _SequenceL_tmp106);	/*Sequence.sl:103: applyFold(inputList, operator)*/
_swap(_SequenceL___Arg_inputList_tco, _SequenceL_tmp106);	
goto fold_Sequence_label_tco;	/*Sequence.sl:103: fold(applyFold(inputList, operator), operator)*/
}
_SequenceL_tmp106.delete_data(true);	
_SequenceL_tmp106.finished();	
}
void SequenceL_vectorMin_2(::Sequence< int > &_SequenceL__Arg_list, int &_SequenceL__resultConv)
{

SequenceL_fold_2(_SequenceL__Arg_list, _PointerSequenceL_min_5, _SequenceL__resultConv);	/*Sequence.sl:150: fold(list, min)*/
}
void SequenceL_vectorMax_2(::Sequence< int > &_SequenceL__Arg_list, int &_SequenceL__resultConv)
{

SequenceL_fold_2(_SequenceL__Arg_list, _PointerSequenceL_max_5, _SequenceL__resultConv);	/*Sequence.sl:158: fold(list, max)*/
}
void SequenceL_integerPowerHelper_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int _SequenceL__Arg_val, int &_SequenceL__resultConv)
{
int _SequenceL___Arg_y_tco;
int _SequenceL___Arg_val_tco;
int _SequenceL_tmp137;
int _SequenceL_tmp138;

_SequenceL___Arg_y_tco = _SequenceL__Arg_y;	
_SequenceL___Arg_val_tco = _SequenceL__Arg_val;	
integerPowerHelper_Math_label_tco:	
if ((_SequenceL___Arg_y_tco < 1))	/*Math.sl:20: val when y < 1	else		integerPowerHelper(x, y - 1, val * x)*/
{
_SequenceL__resultConv = _SequenceL___Arg_val_tco;	/*Math.sl:18: val*/
}
else
{
_SequenceL_tmp137 = (_SequenceL___Arg_y_tco - 1);	/*Math.sl:20: y - 1*/
_SequenceL_tmp138 = (_SequenceL___Arg_val_tco * _SequenceL__Arg_x);	/*Math.sl:20: val * x*/
_SequenceL___Arg_y_tco = _SequenceL_tmp137;	
_SequenceL___Arg_val_tco = _SequenceL_tmp138;	
goto integerPowerHelper_Math_label_tco;	/*Math.sl:20: integerPowerHelper(x, y - 1, val * x)*/
}
}
void SequenceL_integerPower_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv)
{

SequenceL_integerPowerHelper_5(_SequenceL__Arg_x, _SequenceL__Arg_y, 1, _SequenceL__resultConv);	/*Math.sl:14: integerPowerHelper(x, y, 1)*/
}
void SequenceL_charToInt_3(char _SequenceL__Arg_char, int &_SequenceL__resultConv)
{

if ((_SequenceL__Arg_char == '0'))	/*Conversion.sl:120: 0 when char = '0'	else		1 when char = '1'	else		2 when char = '2'	else		3 when char = '3'	else		4 when char = '4'	else		5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 0;	/*Conversion.sl:100: 0*/
}
else
{
if ((_SequenceL__Arg_char == '1'))	/*Conversion.sl:120: 1 when char = '1'	else		2 when char = '2'	else		3 when char = '3'	else		4 when char = '4'	else		5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 1;	/*Conversion.sl:102: 1*/
}
else
{
if ((_SequenceL__Arg_char == '2'))	/*Conversion.sl:120: 2 when char = '2'	else		3 when char = '3'	else		4 when char = '4'	else		5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 2;	/*Conversion.sl:104: 2*/
}
else
{
if ((_SequenceL__Arg_char == '3'))	/*Conversion.sl:120: 3 when char = '3'	else		4 when char = '4'	else		5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 3;	/*Conversion.sl:106: 3*/
}
else
{
if ((_SequenceL__Arg_char == '4'))	/*Conversion.sl:120: 4 when char = '4'	else		5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 4;	/*Conversion.sl:108: 4*/
}
else
{
if ((_SequenceL__Arg_char == '5'))	/*Conversion.sl:120: 5 when char = '5'	else		6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 5;	/*Conversion.sl:110: 5*/
}
else
{
if ((_SequenceL__Arg_char == '6'))	/*Conversion.sl:120: 6 when char = '6'	else		7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 6;	/*Conversion.sl:112: 6*/
}
else
{
if ((_SequenceL__Arg_char == '7'))	/*Conversion.sl:120: 7 when char = '7'	else		8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 7;	/*Conversion.sl:114: 7*/
}
else
{
if ((_SequenceL__Arg_char == '8'))	/*Conversion.sl:120: 8 when char = '8'	else		9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 8;	/*Conversion.sl:116: 8*/
}
else
{
if ((_SequenceL__Arg_char == '9'))	/*Conversion.sl:120: 9 when char = '9'	else		0*/
{
_SequenceL__resultConv = 9;	/*Conversion.sl:118: 9*/
}
else
{
_SequenceL__resultConv = 0;	/*Conversion.sl:120: 0*/
}
}
}
}
}
}
}
}
}
}
}
void SequenceL_atoIWorker_3(::Sequence< char > &_SequenceL__Arg_numString, ::Sequence< int > &_SequenceL__resultConv)
{
int _SequenceL_tmp199;
int _SequenceL__Arg_place;
int _SequenceL_tmp200;

_SequenceL__resultConv.setSize(_SequenceL__Arg_numString.size());	/*Conversion.sl:60: charToInt(numString[i]) * place*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_numString.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
SequenceL_charToInt_3((*(_SequenceL__Arg_numString.get_ptr(_SequenceL__Index_i))), _SequenceL_tmp199);	/*Conversion.sl:60: charToInt(numString[i])*/
_SequenceL_tmp200 = (_SequenceL__Arg_numString.size() - _SequenceL__Index_i);	/*Conversion.sl:58: size(numString) - i*/
SequenceL_integerPower_5(10, _SequenceL_tmp200, _SequenceL__Arg_place);	/*Conversion.sl:58: integerPower(10, (size(numString) - i))*/
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (_SequenceL_tmp199 * _SequenceL__Arg_place);	/*Conversion.sl:60: charToInt(numString[i]) * place*/
}
}
void SequenceL_take_2(::Sequence< char > &_SequenceL__Arg_list, int _SequenceL__Arg_n, ::Sequence< char > &_SequenceL__resultConv)
{

_SequenceL__Arg_list.sub_seq(1, _SequenceL__Arg_n, _SequenceL__resultConv);	/*Sequence.sl:174: list[1 ... n]*/
}
void SequenceL_isDigit_1(char _SequenceL__Arg_char, bool &_SequenceL__resultConv)
{

_SequenceL__resultConv = ((((((((((_SequenceL__Arg_char == '0') || (_SequenceL__Arg_char == '1')) || (_SequenceL__Arg_char == '2')) || (_SequenceL__Arg_char == '3')) || (_SequenceL__Arg_char == '4')) || (_SequenceL__Arg_char == '5')) || (_SequenceL__Arg_char == '6')) || (_SequenceL__Arg_char == '7')) || (_SequenceL__Arg_char == '8')) || (_SequenceL__Arg_char == '9'));	/*String.sl:20: char = '0' or char = '1' or char = '2' or char = '3' or char = '4' or char = '5' or char = '6' or char = '7' or char = '8' or char = '9'*/
}
void SequenceL_trimNonNumeric_3(::Sequence< char > &_SequenceL__Arg_numString, int _SequenceL__Arg_i, ::Sequence< char > &_SequenceL__resultConv)
{
int _SequenceL___Arg_i_tco;
bool _SequenceL_tmp276;
int _SequenceL_tmp279;
int _SequenceL_tmp281;

_SequenceL___Arg_i_tco = _SequenceL__Arg_i;	
trimNonNumeric_Conversion_label_tco:	
if ((_SequenceL___Arg_i_tco > _SequenceL__Arg_numString.size()))	/*Conversion.sl:53: numString when i > size(numString)	else		take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL__resultConv = _SequenceL__Arg_numString;	/*Conversion.sl:49: numString*/
}
else
{
SequenceL_isDigit_1((*(_SequenceL__Arg_numString.get_ptr(_SequenceL___Arg_i_tco))), _SequenceL_tmp276);	/*Conversion.sl:52: isDigit(numString[i])*/
if (!_SequenceL_tmp276)	/*Conversion.sl:53: take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL_tmp279 = (_SequenceL___Arg_i_tco - 1);	/*Conversion.sl:51: i-1*/
SequenceL_take_2(_SequenceL__Arg_numString, _SequenceL_tmp279, _SequenceL__resultConv);	/*Conversion.sl:51: take(numString, i-1)*/
}
else
{
_SequenceL_tmp281 = (_SequenceL___Arg_i_tco + 1);	/*Conversion.sl:53: i + 1*/
_SequenceL___Arg_i_tco = _SequenceL_tmp281;	
goto trimNonNumeric_Conversion_label_tco;	/*Conversion.sl:53: trimNonNumeric(numString, i + 1)*/
}
}
}
void SequenceL_isWhiteSpace_1(char _SequenceL__Arg_input, bool &_SequenceL__resultConv)
{

_SequenceL__resultConv = ((((_SequenceL__Arg_input == ' ') || (_SequenceL__Arg_input == '\n')) || (_SequenceL__Arg_input == '\t')) || (_SequenceL__Arg_input == '\r'));	/*String.sl:16: input = ' ' or input = '\n' or input = '\t' or input = '\r'*/
}
void SequenceL_trimStart_1(::Sequence< char > &_SequenceL__Arg_input, ::Sequence< char > &_SequenceL__resultConv)
{
::Sequence< char > _SequenceL___Arg_input_tco(cspace);
bool _SequenceL_tmp358;
char _SequenceL_tmp357;
::Sequence< char > _SequenceL_tmp360(cspace);

if (_SequenceL__Arg_input.onlyInstance())	
{
_SequenceL___Arg_input_tco.replaceSequence(_SequenceL__Arg_input);	
}
else
{
_SequenceL___Arg_input_tco.hard_copy(_SequenceL__Arg_input,__LINE__);	
}
trimStart_String_label_tco:	
if ((_SequenceL___Arg_input_tco.size() == 0))	/*String.sl:12: input when size(input) = 0	else		trimStart(tail(input)) when isWhiteSpace(head(input))	else		input*/
{
_SequenceL__resultConv = _SequenceL___Arg_input_tco;	/*String.sl:8: input*/
}
else
{
_SequenceL_tmp357 = _SequenceL___Arg_input_tco.head();	/*String.sl:10: head(input)*/
SequenceL_isWhiteSpace_1(_SequenceL_tmp357, _SequenceL_tmp358);	/*String.sl:11: isWhiteSpace(head(input))*/
if (_SequenceL_tmp358)	/*String.sl:12: trimStart(tail(input)) when isWhiteSpace(head(input))	else		input*/
{
_SequenceL___Arg_input_tco.tail(_SequenceL_tmp360);	/*String.sl:10: tail(input)*/
_swap(_SequenceL___Arg_input_tco, _SequenceL_tmp360);	
goto trimStart_String_label_tco;	/*String.sl:10: trimStart(tail(input))*/
}
else
{
_SequenceL__resultConv = _SequenceL___Arg_input_tco;	/*String.sl:12: input*/
}
}
_SequenceL_tmp360.delete_data(true);	
_SequenceL_tmp360.finished();	
}
void SequenceL_stringToInt_3(::Sequence< char > &_SequenceL__Arg_numString, int &_SequenceL__resultConv)
{
::Sequence< char > _SequenceL__Arg_trimmed(cspace);
char _SequenceL_tmp365;
int _SequenceL_tmp369;
::Sequence< char > _SequenceL_tmp368(cspace);
char _SequenceL_tmp371;
::Sequence< char > _SequenceL_tmp374(cspace);
::Sequence< int > _SequenceL_tmp376(cspace);
::Sequence< char > _SequenceL__Arg_justNumber(cspace);

SequenceL_trimStart_1(_SequenceL__Arg_numString, _SequenceL__Arg_trimmed);	/*Conversion.sl:36: trimStart(numString)*/
_SequenceL__Arg_numString.delete_data(true);	
if ((_SequenceL__Arg_trimmed.size() == 0))	/*Conversion.sl:45: 0 when size(trimmed) = 0	else		- stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__resultConv = 0;	/*Conversion.sl:39: 0*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
}
else
{
_SequenceL_tmp365 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:41: head(trimmed)*/
if ((_SequenceL_tmp365 == '-'))	/*Conversion.sl:45: - stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp368);	/*Conversion.sl:41: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
SequenceL_stringToInt_3(_SequenceL_tmp368, _SequenceL_tmp369);	/*Conversion.sl:41: stringToInt(tail(trimmed))*/
_SequenceL_tmp368.finished();	
_SequenceL__resultConv = (-_SequenceL_tmp369);	/*Conversion.sl:41: - stringToInt(tail(trimmed))*/
}
else
{
_SequenceL_tmp371 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:43: head(trimmed)*/
if ((_SequenceL_tmp371 == '+'))	/*Conversion.sl:45: stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp374);	/*Conversion.sl:43: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
SequenceL_stringToInt_3(_SequenceL_tmp374, _SequenceL__resultConv);	/*Conversion.sl:43: stringToInt(tail(trimmed))*/
_SequenceL_tmp374.finished();	
}
else
{
SequenceL_trimNonNumeric_3(_SequenceL__Arg_trimmed, 1, _SequenceL__Arg_justNumber);	/*Conversion.sl:37: trimNonNumeric(trimmed, 1)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
SequenceL_atoIWorker_3(_SequenceL__Arg_justNumber, _SequenceL_tmp376);	/*Conversion.sl:45: atoIWorker(justNumber)*/
_SequenceL__Arg_justNumber.delete_data(true);	
_SequenceL__Arg_justNumber.finished();	
_SequenceL__resultConv = sum(_SequenceL_tmp376);	/*Conversion.sl:45: sum(atoIWorker(justNumber))*/
_SequenceL_tmp376.delete_data(true);	
_SequenceL_tmp376.finished();	
}
}
}
}
void SequenceL_multipleIndexes_2(::Sequence< char > &_SequenceL__Arg_list, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_indexes, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:45: list[indexes[i]]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_indexes.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))).setSize((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__Index_i))).size());	/*Sequence.sl:45: list[indexes[i]]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index2=1,_stop_val__SequenceL__Index__tmp_index2=(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))).size(); _SequenceL__Index__tmp_index2<=_stop_val__SequenceL__Index__tmp_index2; _SequenceL__Index__tmp_index2+=1)
{
(*((*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index__tmp_index2))) = (*(_SequenceL__Arg_list.get_ptr((*((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index__tmp_index2))))));	/*Sequence.sl:45: list[indexes[i]]*/
}
}
}
void SequenceL_indexesOf_2(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_element, ::Sequence< int > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_list.size());	/*Sequence.sl:41: i when list[i] = element*/
_SequenceL__resultConv.create_map();	
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_list.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
if (((*(_SequenceL__Arg_list.get_ptr(_SequenceL__Index_i))) == _SequenceL__Arg_element))	/*Sequence.sl:41: i when list[i] = element*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = _SequenceL__Index_i;	
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, true);	
}
else
{
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, false);	
}
}
_SequenceL__resultConv.cleanup(true);	
}
void SequenceL_split_2(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_delimiter, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv)
{
::Sequence< Empty > _SequenceL_tmp412(cspace);
::Sequence< int > _SequenceL_tmp418(cspace);
::Sequence< int > _SequenceL_tmp414(cspace);
::Sequence< int > _SequenceL__Arg_indexes(cspace);
::Sequence< int > _SequenceL_tmp416(cspace);
::Sequence< int > _SequenceL_tmp423(cspace);
::Sequence< int > _SequenceL_tmp419(cspace);
::Sequence< int > _SequenceL_tmp421(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp424(cspace);

if ((_SequenceL__Arg_list.size() == 0))	/*Sequence.sl:54: [] when size(list) = 0	else		multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
{
_SequenceL_tmp412.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp412, _SequenceL__resultConv);	
_SequenceL_tmp412.delete_data(true);	
_SequenceL_tmp412.finished();	
}
else
{
_SequenceL_tmp414.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp414.get_ptr(1))) = 1;	/*Sequence.sl:54: 1*/
SequenceL_indexesOf_2(_SequenceL__Arg_list, _SequenceL__Arg_delimiter, _SequenceL__Arg_indexes);	/*Sequence.sl:50: indexesOf(list, delimiter)*/
_SequenceL_tmp416.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes + 1*/
SIMD_DIRECTIVE
for (int _SequenceL__i417=1,_stop_val__SequenceL__i417=_SequenceL_tmp416.size(); _SequenceL__i417<=_stop_val__SequenceL__i417; _SequenceL__i417+=1)
{
(*(_SequenceL_tmp416.get_ptr(_SequenceL__i417))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i417))) + 1);	/*Sequence.sl:54: indexes + 1*/
}
append(_SequenceL_tmp414, _SequenceL_tmp416, _SequenceL_tmp418);	/*Sequence.sl:54: [1] ++ (indexes + 1)*/
_SequenceL_tmp414.delete_data(true);	
_SequenceL_tmp416.delete_data(true);	
_SequenceL_tmp416.finished();	
_SequenceL_tmp414.finished();	
_SequenceL_tmp419.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes - 1*/
SIMD_DIRECTIVE
for (int _SequenceL__i420=1,_stop_val__SequenceL__i420=_SequenceL_tmp419.size(); _SequenceL__i420<=_stop_val__SequenceL__i420; _SequenceL__i420+=1)
{
(*(_SequenceL_tmp419.get_ptr(_SequenceL__i420))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i420))) - 1);	/*Sequence.sl:54: indexes - 1*/
}
_SequenceL__Arg_indexes.delete_data(true);	
_SequenceL__Arg_indexes.finished();	
_SequenceL_tmp421.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp421.get_ptr(1))) = _SequenceL__Arg_list.size();	/*Sequence.sl:54: size(list)*/
append(_SequenceL_tmp419, _SequenceL_tmp421, _SequenceL_tmp423);	/*Sequence.sl:54: (indexes - 1) ++ [size(list)]*/
_SequenceL_tmp419.delete_data(true);	
_SequenceL_tmp421.delete_data(true);	
_SequenceL_tmp421.finished();	
_SequenceL_tmp419.finished();	
_SequenceL_tmp424.setSize(_SequenceL_tmp418.size());	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
SIMD_DIRECTIVE
for (int _SequenceL__i425=1,_stop_val__SequenceL__i425=_SequenceL_tmp424.size(); _SequenceL__i425<=_stop_val__SequenceL__i425; _SequenceL__i425+=1)
{
ellipsis((*(_SequenceL_tmp418.get_ptr(_SequenceL__i425))), (*(_SequenceL_tmp423.get_ptr(_SequenceL__i425))), (*(_SequenceL_tmp424.get_ptr(_SequenceL__i425))));	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
}
_SequenceL_tmp418.delete_data(true);	
_SequenceL_tmp423.delete_data(true);	
_SequenceL_tmp423.finished();	
_SequenceL_tmp418.finished();	
SequenceL_multipleIndexes_2(_SequenceL__Arg_list, _SequenceL_tmp424, _SequenceL__resultConv);	/*Sequence.sl:54: multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
_SequenceL_tmp424.delete_data(true);	
_SequenceL_tmp424.finished();	
}
}
void SequenceL_allButLast_2(::Sequence< char > &_SequenceL__Arg_list, ::Sequence< char > &_SequenceL__resultConv)
{

_SequenceL__Arg_list.sub_seq(1, (_SequenceL__Arg_list.size() - 1), _SequenceL__resultConv);	/*Sequence.sl:166: list[1 ... (size(list) - 1)]*/
}
void SequenceL_last_2(::Sequence< char > &_SequenceL__Arg_list, char &_SequenceL__resultConv)
{

_SequenceL__resultConv = (*(_SequenceL__Arg_list.get_ptr(_SequenceL__Arg_list.size())));	/*Sequence.sl:162: list[size(list)]*/
}
void SequenceL_trim_0(::Sequence< char > &_SequenceL__Arg_s, ::Sequence< char > &_SequenceL__resultConv)
{
::Sequence< char > _SequenceL___Arg_s_tco(cspace);
bool _SequenceL_tmp461;
char _SequenceL_tmp460;
::Sequence< char > _SequenceL_tmp463(cspace);
bool _SequenceL_tmp466;
char _SequenceL_tmp465;
::Sequence< char > _SequenceL_tmp468(cspace);

if (_SequenceL__Arg_s.onlyInstance())	
{
_SequenceL___Arg_s_tco.replaceSequence(_SequenceL__Arg_s);	
}
else
{
_SequenceL___Arg_s_tco.hard_copy(_SequenceL__Arg_s,__LINE__);	
}
trim_advent2_label_tco:	
_SequenceL_tmp460 = _SequenceL___Arg_s_tco.head();	/*advent2.sl:6: head(s)*/
SequenceL_isWhiteSpace_1(_SequenceL_tmp460, _SequenceL_tmp461);	/*advent2.sl:7: isWhiteSpace(head(s))*/
if (_SequenceL_tmp461)	/*advent2.sl:8: trim(tail(s)) when isWhiteSpace(head(s))  else trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
_SequenceL___Arg_s_tco.tail(_SequenceL_tmp463);	/*advent2.sl:6: tail(s)*/
_swap(_SequenceL___Arg_s_tco, _SequenceL_tmp463);	
goto trim_advent2_label_tco;	/*advent2.sl:6: trim(tail(s))*/
}
else
{
SequenceL_last_2(_SequenceL___Arg_s_tco, _SequenceL_tmp465);	/*advent2.sl:7: last(s)*/
SequenceL_isWhiteSpace_1(_SequenceL_tmp465, _SequenceL_tmp466);	/*advent2.sl:8: isWhiteSpace(last(s))*/
if (_SequenceL_tmp466)	/*advent2.sl:8: trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
SequenceL_allButLast_2(_SequenceL___Arg_s_tco, _SequenceL_tmp468);	/*advent2.sl:7: allButLast(s)*/
_swap(_SequenceL___Arg_s_tco, _SequenceL_tmp468);	
goto trim_advent2_label_tco;	/*advent2.sl:7: trim(allButLast(s))*/
}
else
{
_SequenceL__resultConv = _SequenceL___Arg_s_tco;	/*advent2.sl:8: s*/
}
}
_SequenceL_tmp463.delete_data(true);	
_SequenceL_tmp468.delete_data(true);	
_SequenceL_tmp468.finished();	
_SequenceL_tmp463.finished();	
}
void SequenceL_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_s, ::Sequence< int > &_SequenceL__resultConv)
{
int _SequenceL__Arg_checksum;
::Sequence< ::Sequence< char > > _SequenceL__Arg_lines(cspace);
::Sequence< char > _SequenceL_tmp471(cspace);
::Sequence< ::Sequence< ::Sequence< char > > > _SequenceL__Arg_matrix(cspace);
::Sequence< ::Sequence< int > > _SequenceL__Arg_sheet(cspace);
::Sequence< int > _SequenceL_tmp475(cspace);
::Sequence< int > _SequenceL_tmp477(cspace);
::Sequence< int > _SequenceL_tmp479(cspace);
::Sequence< char > _SequenceL__delete_opttmp1(cspace);
::Sequence< int > _SequenceL__delete_opttmp2(cspace);
::Sequence< int > _SequenceL__delete_opttmp3(cspace);
::Sequence< int > _SequenceL_tmp484(cspace);
::Sequence< ::Sequence< int > > _SequenceL__Arg_pairs(cspace);
::Sequence< ::Sequence< char > > _SequenceL_tmp482(cspace);
::Sequence< ::Sequence< int > > _SequenceL__Arg_rowPairResults(cspace);

_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
SequenceL_trim_0((*(_SequenceL__Arg_s.get_ptr(1))), _SequenceL_tmp471);	/*advent2.sl:24: trim(s[1])*/
SequenceL_split_2(_SequenceL_tmp471, '\n', _SequenceL__Arg_lines);	/*advent2.sl:24: split(trim(s[1]), '\n')*/
_SequenceL_tmp471.delete_data(true);	
_SequenceL_tmp471.finished();	
_SequenceL__Arg_matrix.setSize(_SequenceL__Arg_lines.size());	/*advent2.sl:25: split(lines, '\t')*/
_SequenceL__Arg_sheet.setSize(_SequenceL__Arg_matrix.size());	/*advent2.sl:26: stringToInt(matrix)*/
_SequenceL_tmp475.setSize(_SequenceL__Arg_sheet.size());	/*advent2.sl:28: vectorMax(sheet)*/
_SequenceL_tmp477.setSize(_SequenceL__Arg_sheet.size());	/*advent2.sl:28: vectorMin(sheet)*/
_SequenceL_tmp479.setSize(_SequenceL_tmp475.size());	/*advent2.sl:28: vectorMax(sheet) - vectorMin(sheet)*/
SIMD_DIRECTIVE
for (int _SequenceL__i472=1,_stop_val__SequenceL__i472=_SequenceL__Arg_matrix.size(); _SequenceL__i472<=_stop_val__SequenceL__i472; _SequenceL__i472+=1)
{
SequenceL_split_2((*(_SequenceL__Arg_lines.get_ptr(_SequenceL__i472))), '\t', (*(_SequenceL__Arg_matrix.get_ptr(_SequenceL__i472))));	/*advent2.sl:25: split(lines, '\t')*/
(*(_SequenceL__Arg_sheet.get_ptr(_SequenceL__i472))).setSize((*(_SequenceL__Arg_matrix.get_ptr(_SequenceL__i472))).size());	/*advent2.sl:26: stringToInt(matrix)*/
SIMD_DIRECTIVE
for (int _SequenceL__i474=1,_stop_val__SequenceL__i474=(*(_SequenceL__Arg_sheet.get_ptr(_SequenceL__i472))).size(); _SequenceL__i474<=_stop_val__SequenceL__i474; _SequenceL__i474+=1)
{
(*((*(_SequenceL__Arg_matrix.get_ptr(_SequenceL__i472))).get_ptr(_SequenceL__i474))).clone(_SequenceL__delete_opttmp1);	/*advent2.sl:26: stringToInt(matrix)*/
SequenceL_stringToInt_3(_SequenceL__delete_opttmp1, (*((*(_SequenceL__Arg_sheet.get_ptr(_SequenceL__i472))).get_ptr(_SequenceL__i474))));	/*advent2.sl:26: stringToInt(matrix)*/
_SequenceL__delete_opttmp1.finished();	
}
(*(_SequenceL__Arg_sheet.get_ptr(_SequenceL__i472))).clone(_SequenceL__delete_opttmp2);	/*advent2.sl:28: vectorMax(sheet)*/
SequenceL_vectorMax_2(_SequenceL__delete_opttmp2, (*(_SequenceL_tmp475.get_ptr(_SequenceL__i472))));	/*advent2.sl:28: vectorMax(sheet)*/
_SequenceL__delete_opttmp2.delete_data(true);	
_SequenceL__delete_opttmp2.finished();	
(*(_SequenceL__Arg_sheet.get_ptr(_SequenceL__i472))).clone(_SequenceL__delete_opttmp3);	/*advent2.sl:28: vectorMin(sheet)*/
SequenceL_vectorMin_2(_SequenceL__delete_opttmp3, (*(_SequenceL_tmp477.get_ptr(_SequenceL__i472))));	/*advent2.sl:28: vectorMin(sheet)*/
_SequenceL__delete_opttmp3.delete_data(true);	
_SequenceL__delete_opttmp3.finished();	
(*(_SequenceL_tmp479.get_ptr(_SequenceL__i472))) = ((*(_SequenceL_tmp475.get_ptr(_SequenceL__i472))) - (*(_SequenceL_tmp477.get_ptr(_SequenceL__i472))));	/*advent2.sl:28: vectorMax(sheet) - vectorMin(sheet)*/
}
_SequenceL__Arg_lines.delete_data(true);	
_SequenceL_tmp475.delete_data(true);	
_SequenceL_tmp477.delete_data(true);	
_SequenceL_tmp477.finished();	
_SequenceL_tmp475.finished();	
_SequenceL__Arg_lines.finished();	
_SequenceL__Arg_checksum = sum(_SequenceL_tmp479);	/*advent2.sl:28: sum(vectorMax(sheet) - vectorMin(sheet))*/
_SequenceL_tmp479.delete_data(true);	
_SequenceL_tmp479.finished();	
(*(_SequenceL__resultConv.get_ptr(1))) = _SequenceL__Arg_checksum;	/*advent2.sl:30: checksum*/
_SequenceL__Arg_matrix.head(_SequenceL_tmp482);	/*advent2.sl:27: head(matrix)*/
_SequenceL__Arg_matrix.delete_data(true);	
_SequenceL__Arg_matrix.finished();	
SequenceL_distinctPairs_0(_SequenceL_tmp482.size(), _SequenceL__Arg_pairs);	/*advent2.sl:27: distinctPairs(size(head(matrix)))*/
_SequenceL_tmp482.delete_data(true);	
_SequenceL_tmp482.finished();	
_SequenceL__Arg_rowPairResults.setSize(_SequenceL__Arg_sheet.size());	/*advent2.sl:29: dividingPairResults(sheet, pairs)*/
SIMD_DIRECTIVE
for (int _SequenceL__i483=1,_stop_val__SequenceL__i483=_SequenceL__Arg_rowPairResults.size(); _SequenceL__i483<=_stop_val__SequenceL__i483; _SequenceL__i483+=1)
{
SequenceL_dividingPairResults_0((*(_SequenceL__Arg_sheet.get_ptr(_SequenceL__i483))), _SequenceL__Arg_pairs, (*(_SequenceL__Arg_rowPairResults.get_ptr(_SequenceL__i483))));	/*advent2.sl:29: dividingPairResults(sheet, pairs)*/
}
_SequenceL__Arg_sheet.delete_data(true);	
_SequenceL__Arg_pairs.delete_data(true);	
_SequenceL__Arg_pairs.finished();	
_SequenceL__Arg_sheet.finished();	
appends(_SequenceL__Arg_rowPairResults, _SequenceL_tmp484);	/*advent2.sl:30: join(rowPairResults)*/
_SequenceL__Arg_rowPairResults.delete_data(true);	
_SequenceL__Arg_rowPairResults.finished();	
(*(_SequenceL__resultConv.get_ptr(2))) = sum(_SequenceL_tmp484);	/*advent2.sl:30: sum(join(rowPairResults))*/
_SequenceL_tmp484.delete_data(true);	
_SequenceL_tmp484.finished();	
}
void SequenceL_min_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv)
{

if ((_SequenceL__Arg_x <= _SequenceL__Arg_y))	/*Math.sl:43: x when x <= y	else		y*/
{
_SequenceL__resultConv = _SequenceL__Arg_x;	/*Math.sl:41: x*/
}
else
{
_SequenceL__resultConv = _SequenceL__Arg_y;	/*Math.sl:43: y*/
}
}
void SequenceL_max_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv)
{

if ((_SequenceL__Arg_x >= _SequenceL__Arg_y))	/*Math.sl:49: x when x >= y	else		y*/
{
_SequenceL__resultConv = _SequenceL__Arg_x;	/*Math.sl:47: x*/
}
else
{
_SequenceL__resultConv = _SequenceL__Arg_y;	/*Math.sl:49: y*/
}
}

}
void sl_main(::Sequence< ::Sequence< char > > &_SequenceL__Arg_arg1, int _n, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< ::Sequence< char > > _SequenceL__delete_opttmp1(cspace);

bool tag = !sl_active_controller();
if (tag)
{
sl_init(_n);
}
_SequenceL_init_sl_main_globals();
_SequenceL__Arg_arg1.clone(_SequenceL__delete_opttmp1);	
SequenceL__parallel_main_0(_SequenceL__delete_opttmp1, _SequenceL__resultConv);	
_SequenceL__delete_opttmp1.delete_data(true);	
_SequenceL__delete_opttmp1.finished();	
_SequenceL_delete_sl_main_globals();

if (tag)
{
sl_done();
}
}
#if (defined(__GNUC__) && (__GNUC__) >= 4 && (__GNU_MINOR__) >= 6) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
#include <iostream>
#include <fstream>
#include <stdlib.h>
int main(int argc, char** argv)
{
::Sequence< int > result;
int threads = 0;
bool timer = false;
SLTimer t;
Sequence< Sequence< char > > args;
int argi = 1;
int seqi = 1;
int dims[2] = {0, 0};
args.setSize(argc - 1);
try
{
while (argi <= args.size())
{
if (strcmp(argv[argi], "--sl_threads") == 0)
{
if (argi + 1 > args.size())
{
cerr << "Error: number of threads must be provided after --sl_threads" << endl;
return 1;
}
argi++;
threads = atoi(argv[argi]);
}
else if (strcmp(argv[argi], "--sl_input") == 0)
{
if (argi + 1 > args.size())
{
cerr << "Error: input file name must be provided after --sl_input" << endl;
return 1;
}
argi++;
std::ifstream in(argv[argi], std::ios::in | std::ios::binary);
if (in)
{
in.seekg(0, std::ios::end);
args[seqi].setSize(in.tellg());
in.seekg(0, std::ios::beg);
in.read(&(args[seqi][1]), args[seqi].size());
in.close();
seqi++;
}
else
{
cerr << "Error: error opening input file '" << argv[argi] << "'" << endl;
return 1;
}
}
else if (strcmp(argv[argi], "--sl_timer") == 0)
{
timer = true;
}
else
{
dims[0] = strlen(argv[argi]);
Sequence<char> tmp(argv[argi], dims);
args[seqi] = tmp;
seqi++;
}
argi++;
}
}
catch (exception *e)
{
cout << "Exception Processing Input:" << endl;
cout << e->what() << endl;
return 1;
}
args.setSizeSoft(seqi - 1);
sl_init(threads);
try
{
t.start();
sl_main(args, 0, result);
t.stop();
}
catch (SLException e)
{
cout<<"Runtime Exception:"<<endl;
cout<<e.what()<<endl;
return 1;
}
cout<<result<<endl;
if (timer) cout<<"Total Time:"<<t.getTime()<<endl;sl_done();
return 0;
}
