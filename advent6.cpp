#include "advent6.h"
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
ostream &operator<<(ostream &stream, const _sl_StepRecord_0& s)
{
return s._toString(stream);
}

bool operator==(const _sl_StepRecord_0&_lhs, const _sl_StepRecord_0&_rhs)
{
return ((_lhs.steps == _rhs.steps)&&(_lhs.state == _rhs.state));
}
bool operator!=(const _sl_StepRecord_0&_lhs, const _sl_StepRecord_0&_rhs)
{
 return ((_lhs.steps != _rhs.steps)||(_lhs.state != _rhs.state));
}
namespace
{
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
void SequenceL_findStartOfCycle_0(::Sequence< int > &_SequenceL__Arg_a, ::_sl_StepRecord_0 &_SequenceL__resultConv);
void SequenceL_floyd_0(::Sequence< int > &_SequenceL__Arg_tortoise, ::Sequence< int > &_SequenceL__Arg_hare, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_moveToMeet_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__Arg_b, ::_sl_StepRecord_0 &_SequenceL__resultConv);
void SequenceL_moveToMeetHelper_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__Arg_b, int _SequenceL__Arg_count, ::_sl_StepRecord_0 &_SequenceL__resultConv);
void SequenceL_copy_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_countCycle_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__Arg_start, int _SequenceL__Arg_count, int &_SequenceL__resultConv);
void SequenceL_redistribute_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_maxIndex_0(::Sequence< int > &_SequenceL__Arg_a, int &_SequenceL__resultConv);
void SequenceL_applyMaxIndex_0(::Sequence< int > &_SequenceL__Arg_indexList, ::Sequence< int > &_SequenceL__Arg_inputList, int &_SequenceL__resultConv);
void SequenceL_foldMaxIndex_0(::Sequence< int > &_SequenceL__Arg_indexList, ::Sequence< int > &_SequenceL__Arg_inputList, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_redistribution_0(::Sequence< int > &_SequenceL__Arg_a, int _SequenceL__Arg_m, int _SequenceL__Arg_toEach, int _SequenceL__Arg_extra, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL__parallel_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_s, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt1_: public NTObj
{
	private:
		::Sequence< ::Sequence< char > > &_SequenceL_tmp501;
		 ::Sequence< int > &_SequenceL__result2;

	public:
		SequenceL__sl_main_nt1_(::Sequence< ::Sequence< char > > &_inp1, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL_tmp501(_inp1), _SequenceL__result2(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_trim_0(::Sequence< char > &_SequenceL__Arg_s, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_last_2(::Sequence< char > &_SequenceL__Arg_list, char &_SequenceL__resultConv);
void SequenceL__parallel_allButLast_2(::Sequence< char > &_SequenceL__Arg_list, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_split_2(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_delimiter, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv);
class SequenceL__sl_main_nt7_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL_tmp447;
		::Sequence< int > &_SequenceL_tmp452;
		 ::Sequence< ::Sequence< int > > &_SequenceL__result8;

	public:
		SequenceL__sl_main_nt7_(::Sequence< int > &_inp1, ::Sequence< int > &_inp2, ::Sequence< ::Sequence< int > > &_out1): NTObj(__LINE__,false), _SequenceL_tmp447(_inp1), _SequenceL_tmp452(_inp2), _SequenceL__result8(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt5_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_indexes;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result6;

	public:
		SequenceL__sl_main_nt5_(::Sequence< int > &_inp1, int _inp2, int _inp3, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_indexes(_inp1), _SequenceL__start(_inp2), _SequenceL__stop(_inp3), _SequenceL__result6(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt3_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_indexes;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result4;

	public:
		SequenceL__sl_main_nt3_(::Sequence< int > &_inp1, int _inp2, int _inp3, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_indexes(_inp1), _SequenceL__start(_inp2), _SequenceL__stop(_inp3), _SequenceL__result4(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_indexesOf_2(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_element, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt9_: public NTObj
{
	private:
		::Sequence< char > &_SequenceL__Arg_list;
		char _SequenceL__Arg_element;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result10;

	public:
		SequenceL__sl_main_nt9_(::Sequence< char > &_inp1, char _inp2, int _inp3, int _inp4, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_list(_inp1), _SequenceL__Arg_element(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result10(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_multipleIndexes_2(::Sequence< char > &_SequenceL__Arg_list, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_indexes, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv);
class SequenceL__sl_main_nt11_: public NTObj
{
	private:
		::Sequence< ::Sequence< int > > &_SequenceL__Arg_indexes;
		::Sequence< char > &_SequenceL__Arg_list;
		 ::Sequence< ::Sequence< char > > &_SequenceL__result12;

	public:
		SequenceL__sl_main_nt11_(::Sequence< ::Sequence< int > > &_inp1, ::Sequence< char > &_inp2, ::Sequence< ::Sequence< char > > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_indexes(_inp1), _SequenceL__Arg_list(_inp2), _SequenceL__result12(_out1)
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
class SequenceL__sl_main_nt13_: public NTObj
{
	private:
		::Sequence< char > &_SequenceL__Arg_numString;
		 ::Sequence< int > &_SequenceL__result14;

	public:
		SequenceL__sl_main_nt13_(::Sequence< char > &_inp1, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_numString(_inp1), _SequenceL__result14(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_charToInt_3(char _SequenceL__Arg_char, int &_SequenceL__resultConv);
void SequenceL__parallel_integerPower_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv);
void SequenceL__parallel_integerPowerHelper_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int _SequenceL__Arg_val, int &_SequenceL__resultConv);
void SequenceL__parallel_findStartOfCycle_0(::Sequence< int > &_SequenceL__Arg_a, ::_sl_StepRecord_0 &_SequenceL__resultConv);
void SequenceL__parallel_floyd_0(::Sequence< int > &_SequenceL__Arg_tortoise, ::Sequence< int > &_SequenceL__Arg_hare, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL__parallel_moveToMeet_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__Arg_b, ::_sl_StepRecord_0 &_SequenceL__resultConv);
void SequenceL__parallel_moveToMeetHelper_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__Arg_b, int _SequenceL__Arg_count, ::_sl_StepRecord_0 &_SequenceL__resultConv);
void SequenceL__parallel_copy_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt15_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_a;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result16;

	public:
		SequenceL__sl_main_nt15_(::Sequence< int > &_inp1, int _inp2, int _inp3, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_a(_inp1), _SequenceL__start(_inp2), _SequenceL__stop(_inp3), _SequenceL__result16(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_countCycle_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__Arg_start, int _SequenceL__Arg_count, int &_SequenceL__resultConv);
void SequenceL__parallel_redistribute_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL__parallel_maxIndex_0(::Sequence< int > &_SequenceL__Arg_a, int &_SequenceL__resultConv);
void SequenceL__parallel_applyMaxIndex_0(::Sequence< int > &_SequenceL__Arg_indexList, ::Sequence< int > &_SequenceL__Arg_inputList, int &_SequenceL__resultConv);
void SequenceL__parallel_foldMaxIndex_0(::Sequence< int > &_SequenceL__Arg_indexList, ::Sequence< int > &_SequenceL__Arg_inputList, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt19_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL_tmp101;
		::Sequence< int > &_SequenceL__Arg_inputList;
		::Sequence< int > &_SequenceL__Arg_indexList;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result20;

	public:
		SequenceL__sl_main_nt19_(::Sequence< int > &_inp1, ::Sequence< int > &_inp2, ::Sequence< int > &_inp3, int _inp4, int _inp5, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL_tmp101(_inp1), _SequenceL__Arg_inputList(_inp2), _SequenceL__Arg_indexList(_inp3), _SequenceL__start(_inp4), _SequenceL__stop(_inp5), _SequenceL__result20(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt17_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL_tmp98;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result18;

	public:
		SequenceL__sl_main_nt17_(::Sequence< int > &_inp1, int _inp2, int _inp3, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL_tmp98(_inp1), _SequenceL__start(_inp2), _SequenceL__stop(_inp3), _SequenceL__result18(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_redistribution_0(::Sequence< int > &_SequenceL__Arg_a, int _SequenceL__Arg_m, int _SequenceL__Arg_toEach, int _SequenceL__Arg_extra, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt39_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_a;
		int _SequenceL__Arg_toEach;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result40;

	public:
		SequenceL__sl_main_nt39_(::Sequence< int > &_inp1, int _inp2, int _inp3, int _inp4, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_a(_inp1), _SequenceL__Arg_toEach(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result40(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt37_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_a;
		int _SequenceL__Arg_toEach;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result38;

	public:
		SequenceL__sl_main_nt37_(::Sequence< int > &_inp1, int _inp2, int _inp3, int _inp4, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_a(_inp1), _SequenceL__Arg_toEach(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result38(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt35_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_a;
		int _SequenceL__Arg_toEach;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result36;

	public:
		SequenceL__sl_main_nt35_(::Sequence< int > &_inp1, int _inp2, int _inp3, int _inp4, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_a(_inp1), _SequenceL__Arg_toEach(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result36(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt33_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_a;
		int _SequenceL__Arg_toEach;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result34;

	public:
		SequenceL__sl_main_nt33_(::Sequence< int > &_inp1, int _inp2, int _inp3, int _inp4, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_a(_inp1), _SequenceL__Arg_toEach(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result34(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt31_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_a;
		int _SequenceL__Arg_toEach;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result32;

	public:
		SequenceL__sl_main_nt31_(::Sequence< int > &_inp1, int _inp2, int _inp3, int _inp4, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_a(_inp1), _SequenceL__Arg_toEach(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result32(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt29_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_a;
		int _SequenceL__Arg_toEach;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result30;

	public:
		SequenceL__sl_main_nt29_(::Sequence< int > &_inp1, int _inp2, int _inp3, int _inp4, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_a(_inp1), _SequenceL__Arg_toEach(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result30(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt27_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_a;
		int _SequenceL__Arg_toEach;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result28;

	public:
		SequenceL__sl_main_nt27_(::Sequence< int > &_inp1, int _inp2, int _inp3, int _inp4, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_a(_inp1), _SequenceL__Arg_toEach(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result28(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt25_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_a;
		int _SequenceL__Arg_toEach;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result26;

	public:
		SequenceL__sl_main_nt25_(::Sequence< int > &_inp1, int _inp2, int _inp3, int _inp4, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_a(_inp1), _SequenceL__Arg_toEach(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result26(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt23_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_a;
		int _SequenceL__Arg_toEach;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result24;

	public:
		SequenceL__sl_main_nt23_(::Sequence< int > &_inp1, int _inp2, int _inp3, int _inp4, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_a(_inp1), _SequenceL__Arg_toEach(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result24(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt21_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_a;
		int _SequenceL__Arg_toEach;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result22;

	public:
		SequenceL__sl_main_nt21_(::Sequence< int > &_inp1, int _inp2, int _inp3, int _inp4, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_a(_inp1), _SequenceL__Arg_toEach(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result22(_out1)
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
bool _SequenceL_tmp490;
char _SequenceL_tmp489;
::Sequence< char > _SequenceL_tmp492;
bool _SequenceL_tmp495;
char _SequenceL_tmp494;
::Sequence< char > _SequenceL_tmp497;

	public:
		SequenceL__sl_main_trim_c_0(::Sequence< char > &_inp1, ::Sequence< char > &_out1): _SequenceL__Arg_s(_inp1), _SequenceL__resultConv(_out1), _SequenceL___Arg_s_tco(cspace), _SequenceL_tmp492(cspace), _SequenceL_tmp497(cspace)
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
char _SequenceL_tmp410;
int _SequenceL_tmp414;
::Sequence< char > _SequenceL_tmp413;
char _SequenceL_tmp416;
::Sequence< char > _SequenceL_tmp419;
::Sequence< int > _SequenceL_tmp421;
::Sequence< char > _SequenceL__Arg_justNumber;

	public:
		SequenceL__sl_main_stringToInt_c_3(::Sequence< char > &_inp1, int &_out1): _SequenceL__Arg_numString(_inp1), _SequenceL__resultConv(_out1), _SequenceL__Arg_trimmed(cspace), _SequenceL_tmp413(cspace), _SequenceL_tmp419(cspace), _SequenceL_tmp421(cspace), _SequenceL__Arg_justNumber(cspace)
		{
		}
		task *execute();

};
class SequenceL__sl_main_countCycle_i_i_i_0: public task
{
	private:
		 ::Sequence< int > &_SequenceL__Arg_a;
		 ::Sequence< int > &_SequenceL__Arg_start;
		int _SequenceL__Arg_count;
		 int &_SequenceL__resultConv;
::Sequence< int > _SequenceL___Arg_a_tco;
int _SequenceL___Arg_count_tco;
::Sequence< int > _SequenceL__Arg_newA;
bool _SequenceL_tmp119;
int _SequenceL_tmp122;

	public:
		SequenceL__sl_main_countCycle_i_i_i_0(::Sequence< int > &_inp1, ::Sequence< int > &_inp2, int _inp3, int &_out1): _SequenceL__Arg_a(_inp1), _SequenceL__Arg_start(_inp2), _SequenceL__Arg_count(_inp3), _SequenceL__resultConv(_out1), _SequenceL___Arg_a_tco(cspace), _SequenceL__Arg_newA(cspace)
		{
		}
		task *execute();

};


void _SequenceL_init_sl_main_globals()
{

}

void _SequenceL_delete_sl_main_globals()
{

}

#ifdef _WIN32
::Sequence< ::Sequence< char > > _sl_vc10_advent6_dummy_1(cspace);
::Sequence< int > _sl_vc10_advent6_dummy_2(cspace);
::Sequence< char > _sl_vc10_advent6_dummy_3(cspace);
::Sequence< Empty > _sl_vc10_advent6_dummy_4(cspace);
::Sequence< ::Sequence< int > > _sl_vc10_advent6_dummy_5(cspace);
#endif

task *SequenceL__sl_main_countCycle_i_i_i_0::execute()
{
if (_SequenceL__Arg_a.onlyInstance())	
{
_SequenceL___Arg_a_tco.replaceSequence(_SequenceL__Arg_a);	
_SequenceL__Arg_a.delete_data(true);	
}
else
{
_SequenceL___Arg_a_tco.hard_copy(_SequenceL__Arg_a,__LINE__);	
_SequenceL__Arg_a.delete_data(true);	
}
_SequenceL___Arg_count_tco = _SequenceL__Arg_count;	
_sl_main_countCycle_i_i_i_advent6_label_tco:	
SequenceL_redistribute_0(_SequenceL___Arg_a_tco, _SequenceL__Arg_newA);	/*advent6.sl:62: redistribute(a)*/
_SequenceL_tmp119 = eq_list(_SequenceL__Arg_newA, _SequenceL__Arg_start);	/*advent6.sl:64: equalList(newA, start)*/
if (_SequenceL_tmp119)	/*advent6.sl:64: (count + 1) when equalList(newA, start)  else countCycle(newA, start, (count + 1))*/
{
_SequenceL__resultConv = (_SequenceL___Arg_count_tco + 1);	/*advent6.sl:63: count + 1*/
}
else
{
_SequenceL_tmp122 = (_SequenceL___Arg_count_tco + 1);	/*advent6.sl:64: count + 1*/
_swap(_SequenceL___Arg_a_tco, _SequenceL__Arg_newA);	
_SequenceL___Arg_count_tco = _SequenceL_tmp122;	
goto _sl_main_countCycle_i_i_i_advent6_label_tco;	/*advent6.sl:64: countCycle(newA, start, (count + 1))*/
}
_SequenceL__Arg_newA.delete_data(true);	
_SequenceL__Arg_newA.finished();	
_SequenceL__Arg_start.delete_data(true);	
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
_SequenceL_tmp410 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:41: head(trimmed)*/
if ((_SequenceL_tmp410 == '-'))	/*Conversion.sl:45: - stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp413);	/*Conversion.sl:41: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
set_ref_count(2);
spawn_and_wait_for_all(*new(allocate_child()) SequenceL__sl_main_stringToInt_c_3(_SequenceL_tmp413, _SequenceL_tmp414));
_SequenceL_tmp413.finished();	
_SequenceL__resultConv = (-_SequenceL_tmp414);	/*Conversion.sl:41: - stringToInt(tail(trimmed))*/
}
else
{
_SequenceL_tmp416 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:43: head(trimmed)*/
if ((_SequenceL_tmp416 == '+'))	/*Conversion.sl:45: stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp419);	/*Conversion.sl:43: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
set_ref_count(2);
spawn_and_wait_for_all(*new(allocate_child()) SequenceL__sl_main_stringToInt_c_3(_SequenceL_tmp419, _SequenceL__resultConv));
_SequenceL_tmp419.finished();	
}
else
{
SequenceL_trimNonNumeric_3(_SequenceL__Arg_trimmed, 1, _SequenceL__Arg_justNumber);	/*Conversion.sl:37: trimNonNumeric(trimmed, 1)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
SequenceL_atoIWorker_3(_SequenceL__Arg_justNumber, _SequenceL_tmp421);	/*Conversion.sl:45: atoIWorker(justNumber)*/
_SequenceL__Arg_justNumber.delete_data(true);	
_SequenceL__Arg_justNumber.finished();	
_SequenceL__resultConv = sum(_SequenceL_tmp421);	/*Conversion.sl:45: sum(atoIWorker(justNumber))*/
_SequenceL_tmp421.delete_data(true);	
_SequenceL_tmp421.finished();	
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
_sl_main_trim_c_advent6_label_tco:	
_SequenceL_tmp489 = _SequenceL___Arg_s_tco.head();	/*advent6.sl:6: head(s)*/
SequenceL_isWhiteSpace_1(_SequenceL_tmp489, _SequenceL_tmp490);	/*advent6.sl:7: isWhiteSpace(head(s))*/
if (_SequenceL_tmp490)	/*advent6.sl:8: trim(tail(s)) when isWhiteSpace(head(s))  else trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
_SequenceL___Arg_s_tco.tail(_SequenceL_tmp492);	/*advent6.sl:6: tail(s)*/
_swap(_SequenceL___Arg_s_tco, _SequenceL_tmp492);	
goto _sl_main_trim_c_advent6_label_tco;	/*advent6.sl:6: trim(tail(s))*/
}
else
{
SequenceL_last_2(_SequenceL___Arg_s_tco, _SequenceL_tmp494);	/*advent6.sl:7: last(s)*/
SequenceL_isWhiteSpace_1(_SequenceL_tmp494, _SequenceL_tmp495);	/*advent6.sl:8: isWhiteSpace(last(s))*/
if (_SequenceL_tmp495)	/*advent6.sl:8: trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
SequenceL_allButLast_2(_SequenceL___Arg_s_tco, _SequenceL_tmp497);	/*advent6.sl:7: allButLast(s)*/
_swap(_SequenceL___Arg_s_tco, _SequenceL_tmp497);	
goto _sl_main_trim_c_advent6_label_tco;	/*advent6.sl:7: trim(allButLast(s))*/
}
else
{
_SequenceL__resultConv = _SequenceL___Arg_s_tco;	/*advent6.sl:8: s*/
}
}
_SequenceL_tmp492.delete_data(true);	
_SequenceL_tmp497.delete_data(true);	
_SequenceL_tmp497.finished();	
_SequenceL_tmp492.finished();	
return NULL;
}
void SequenceL__sl_main_nt21_::operator() (const blocked_range<int>& _r) const {
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
(*(_SequenceL__result22.get_ptr(_SequenceL__no_share_iter))) = (((*(_SequenceL__Arg_a.get_ptr(_SequenceL__no_share_iter))) + _SequenceL__Arg_toEach) + 1);	/*advent6.sl:28: a[i] + toEach + 1*/
}
}
}
void SequenceL__sl_main_nt23_::operator() (const blocked_range<int>& _r) const {
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
(*(_SequenceL__result24.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL__Arg_a.get_ptr(_SequenceL__no_share_iter))) + _SequenceL__Arg_toEach);	/*advent6.sl:30: a[i] + toEach*/
}
}
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
(*(_SequenceL__result26.get_ptr(_SequenceL__no_share_iter))) = (((*(_SequenceL__Arg_a.get_ptr(_SequenceL__no_share_iter))) + _SequenceL__Arg_toEach) + 1);	/*advent6.sl:29: a[i] + toEach + 1*/
}
}
}
void SequenceL__sl_main_nt27_::operator() (const blocked_range<int>& _r) const {
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
(*(_SequenceL__result28.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL__Arg_a.get_ptr(_SequenceL__no_share_iter))) + _SequenceL__Arg_toEach);	/*advent6.sl:30: a[i] + toEach*/
}
}
}
void SequenceL__sl_main_nt29_::operator() (const blocked_range<int>& _r) const {
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
(*(_SequenceL__result30.get_ptr(_SequenceL__no_share_iter))) = (((*(_SequenceL__Arg_a.get_ptr(_SequenceL__no_share_iter))) + _SequenceL__Arg_toEach) + 1);	/*advent6.sl:29: a[i] + toEach + 1*/
}
}
}
void SequenceL__sl_main_nt31_::operator() (const blocked_range<int>& _r) const {
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
(*(_SequenceL__result32.get_ptr(_SequenceL__no_share_iter))) = (((*(_SequenceL__Arg_a.get_ptr(_SequenceL__no_share_iter))) + _SequenceL__Arg_toEach) + 1);	/*advent6.sl:28: a[i] + toEach + 1*/
}
}
}
void SequenceL__sl_main_nt33_::operator() (const blocked_range<int>& _r) const {
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
(*(_SequenceL__result34.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL__Arg_a.get_ptr(_SequenceL__no_share_iter))) + _SequenceL__Arg_toEach);	/*advent6.sl:30: a[i] + toEach*/
}
}
}
void SequenceL__sl_main_nt35_::operator() (const blocked_range<int>& _r) const {
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
(*(_SequenceL__result36.get_ptr(_SequenceL__no_share_iter))) = (((*(_SequenceL__Arg_a.get_ptr(_SequenceL__no_share_iter))) + _SequenceL__Arg_toEach) + 1);	/*advent6.sl:29: a[i] + toEach + 1*/
}
}
}
void SequenceL__sl_main_nt37_::operator() (const blocked_range<int>& _r) const {
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
(*(_SequenceL__result38.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL__Arg_a.get_ptr(_SequenceL__no_share_iter))) + _SequenceL__Arg_toEach);	/*advent6.sl:30: a[i] + toEach*/
}
}
}
void SequenceL__sl_main_nt39_::operator() (const blocked_range<int>& _r) const {
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
(*(_SequenceL__result40.get_ptr(_SequenceL__no_share_iter))) = (((*(_SequenceL__Arg_a.get_ptr(_SequenceL__no_share_iter))) + _SequenceL__Arg_toEach) + 1);	/*advent6.sl:29: a[i] + toEach + 1*/
}
}
}
void SequenceL__parallel_redistribution_0(::Sequence< int > &_SequenceL__Arg_a, int _SequenceL__Arg_m, int _SequenceL__Arg_toEach, int _SequenceL__Arg_extra, ::Sequence< int > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_a.size());	/*advent6.sl:30: toEach when i = m  else a[i] + toEach + 1 when i > m and i <= (m + extra)  else a[i] + toEach + 1 when i <= (m + extra - size(a))  else a[i] + toEach*/
if (((_SequenceL__Arg_m >= 1) && (_SequenceL__Arg_m <= _SequenceL__Arg_a.size())))	/*advent6.sl:30: toEach when i = m  else a[i] + toEach + 1 when i > m and i <= (m + extra)  else a[i] + toEach + 1 when i <= (m + extra - size(a))  else a[i] + toEach*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Arg_m))) = _SequenceL__Arg_toEach;	/*advent6.sl:27: toEach*/
}
if (((((SL_FLOAT)(SequenceL_min(SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m - 1)), (_SequenceL__Arg_m + _SequenceL__Arg_extra)) - SequenceL_max(1, (_SequenceL__Arg_m + 1)))) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt21_ SequenceL__sl_main_nt21__val(_SequenceL__Arg_a, _SequenceL__Arg_toEach, SequenceL_max(1, (_SequenceL__Arg_m + 1)), SequenceL_min(SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m - 1)), (_SequenceL__Arg_m + _SequenceL__Arg_extra)), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt21__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=SequenceL_max(1, (_SequenceL__Arg_m + 1)),_stop_val__SequenceL__Index_i=SequenceL_min(SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m - 1)), (_SequenceL__Arg_m + _SequenceL__Arg_extra)); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) + _SequenceL__Arg_toEach) + 1);	/*advent6.sl:28: a[i] + toEach + 1*/
}
}
if (((((SL_FLOAT)(SequenceL_min(SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m - 1)), _SequenceL__Arg_m) - SequenceL_max(1, (((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size()) + 1)))) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt23_ SequenceL__sl_main_nt23__val(_SequenceL__Arg_a, _SequenceL__Arg_toEach, SequenceL_max(1, (((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size()) + 1)), SequenceL_min(SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m - 1)), _SequenceL__Arg_m), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt23__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=SequenceL_max(1, (((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size()) + 1)),_stop_val__SequenceL__Index_i=SequenceL_min(SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m - 1)), _SequenceL__Arg_m); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = ((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) + _SequenceL__Arg_toEach);	/*advent6.sl:30: a[i] + toEach*/
}
}
if (((((SL_FLOAT)(SequenceL_min(SequenceL_min(SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m - 1)), _SequenceL__Arg_m), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size())) - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt25_ SequenceL__sl_main_nt25__val(_SequenceL__Arg_a, _SequenceL__Arg_toEach, 1, SequenceL_min(SequenceL_min(SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m - 1)), _SequenceL__Arg_m), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size())), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt25__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=SequenceL_min(SequenceL_min(SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m - 1)), _SequenceL__Arg_m), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size())); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) + _SequenceL__Arg_toEach) + 1);	/*advent6.sl:29: a[i] + toEach + 1*/
}
}
if (((((SL_FLOAT)(SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m - 1)) - SequenceL_max(SequenceL_max(1, ((_SequenceL__Arg_m + _SequenceL__Arg_extra) + 1)), (((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size()) + 1)))) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt27_ SequenceL__sl_main_nt27__val(_SequenceL__Arg_a, _SequenceL__Arg_toEach, SequenceL_max(SequenceL_max(1, ((_SequenceL__Arg_m + _SequenceL__Arg_extra) + 1)), (((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size()) + 1)), SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m - 1)), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt27__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=SequenceL_max(SequenceL_max(1, ((_SequenceL__Arg_m + _SequenceL__Arg_extra) + 1)), (((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size()) + 1)),_stop_val__SequenceL__Index_i=SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m - 1)); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = ((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) + _SequenceL__Arg_toEach);	/*advent6.sl:30: a[i] + toEach*/
}
}
if (((((SL_FLOAT)(SequenceL_min(SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m - 1)), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size())) - SequenceL_max(1, ((_SequenceL__Arg_m + _SequenceL__Arg_extra) + 1)))) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt29_ SequenceL__sl_main_nt29__val(_SequenceL__Arg_a, _SequenceL__Arg_toEach, SequenceL_max(1, ((_SequenceL__Arg_m + _SequenceL__Arg_extra) + 1)), SequenceL_min(SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m - 1)), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size())), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt29__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=SequenceL_max(1, ((_SequenceL__Arg_m + _SequenceL__Arg_extra) + 1)),_stop_val__SequenceL__Index_i=SequenceL_min(SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m - 1)), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size())); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) + _SequenceL__Arg_toEach) + 1);	/*advent6.sl:29: a[i] + toEach + 1*/
}
}
if (((((SL_FLOAT)(SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m + _SequenceL__Arg_extra)) - SequenceL_max(SequenceL_max(1, (_SequenceL__Arg_m + 1)), (_SequenceL__Arg_m + 1)))) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt31_ SequenceL__sl_main_nt31__val(_SequenceL__Arg_a, _SequenceL__Arg_toEach, SequenceL_max(SequenceL_max(1, (_SequenceL__Arg_m + 1)), (_SequenceL__Arg_m + 1)), SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m + _SequenceL__Arg_extra)), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt31__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=SequenceL_max(SequenceL_max(1, (_SequenceL__Arg_m + 1)), (_SequenceL__Arg_m + 1)),_stop_val__SequenceL__Index_i=SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m + _SequenceL__Arg_extra)); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) + _SequenceL__Arg_toEach) + 1);	/*advent6.sl:28: a[i] + toEach + 1*/
}
}
if (((((SL_FLOAT)(SequenceL_min(_SequenceL__Arg_a.size(), _SequenceL__Arg_m) - SequenceL_max(SequenceL_max(1, (_SequenceL__Arg_m + 1)), (((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size()) + 1)))) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt33_ SequenceL__sl_main_nt33__val(_SequenceL__Arg_a, _SequenceL__Arg_toEach, SequenceL_max(SequenceL_max(1, (_SequenceL__Arg_m + 1)), (((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size()) + 1)), SequenceL_min(_SequenceL__Arg_a.size(), _SequenceL__Arg_m), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt33__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=SequenceL_max(SequenceL_max(1, (_SequenceL__Arg_m + 1)), (((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size()) + 1)),_stop_val__SequenceL__Index_i=SequenceL_min(_SequenceL__Arg_a.size(), _SequenceL__Arg_m); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = ((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) + _SequenceL__Arg_toEach);	/*advent6.sl:30: a[i] + toEach*/
}
}
if (((((SL_FLOAT)(SequenceL_min(SequenceL_min(_SequenceL__Arg_a.size(), _SequenceL__Arg_m), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size())) - SequenceL_max(1, (_SequenceL__Arg_m + 1)))) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt35_ SequenceL__sl_main_nt35__val(_SequenceL__Arg_a, _SequenceL__Arg_toEach, SequenceL_max(1, (_SequenceL__Arg_m + 1)), SequenceL_min(SequenceL_min(_SequenceL__Arg_a.size(), _SequenceL__Arg_m), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size())), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt35__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=SequenceL_max(1, (_SequenceL__Arg_m + 1)),_stop_val__SequenceL__Index_i=SequenceL_min(SequenceL_min(_SequenceL__Arg_a.size(), _SequenceL__Arg_m), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size())); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) + _SequenceL__Arg_toEach) + 1);	/*advent6.sl:29: a[i] + toEach + 1*/
}
}
if (((((SL_FLOAT)(_SequenceL__Arg_a.size() - SequenceL_max(SequenceL_max(SequenceL_max(1, (_SequenceL__Arg_m + 1)), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) + 1)), (((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size()) + 1)))) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt37_ SequenceL__sl_main_nt37__val(_SequenceL__Arg_a, _SequenceL__Arg_toEach, SequenceL_max(SequenceL_max(SequenceL_max(1, (_SequenceL__Arg_m + 1)), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) + 1)), (((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size()) + 1)), _SequenceL__Arg_a.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt37__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=SequenceL_max(SequenceL_max(SequenceL_max(1, (_SequenceL__Arg_m + 1)), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) + 1)), (((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size()) + 1)),_stop_val__SequenceL__Index_i=_SequenceL__Arg_a.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = ((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) + _SequenceL__Arg_toEach);	/*advent6.sl:30: a[i] + toEach*/
}
}
if (((((SL_FLOAT)(SequenceL_min(_SequenceL__Arg_a.size(), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size())) - SequenceL_max(SequenceL_max(1, (_SequenceL__Arg_m + 1)), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) + 1)))) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt39_ SequenceL__sl_main_nt39__val(_SequenceL__Arg_a, _SequenceL__Arg_toEach, SequenceL_max(SequenceL_max(1, (_SequenceL__Arg_m + 1)), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) + 1)), SequenceL_min(_SequenceL__Arg_a.size(), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size())), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt39__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=SequenceL_max(SequenceL_max(1, (_SequenceL__Arg_m + 1)), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) + 1)),_stop_val__SequenceL__Index_i=SequenceL_min(_SequenceL__Arg_a.size(), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size())); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) + _SequenceL__Arg_toEach) + 1);	/*advent6.sl:29: a[i] + toEach + 1*/
}
}
}
void SequenceL__sl_main_nt17_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i100 = _r.begin(); _SequenceL__i100 < _e; _SequenceL__i100++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__i100 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__i100 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result18.get_ptr(_SequenceL__no_share_iter))) = ((2 * (*(_SequenceL_tmp98.get_ptr(_SequenceL__no_share_iter)))) + 1);	/*advent6.sl:15: 2 * (0 ... ((size(indexList) - 1) / 2)) + 1*/
}
}
}
void SequenceL__sl_main_nt19_::operator() (const blocked_range<int>& _r) const {
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
if ((((*(_SequenceL_tmp101.get_ptr(_SequenceL__no_share_iter))) == _SequenceL__Arg_inputList.size()) || ((*(_SequenceL__Arg_inputList.get_ptr((*(_SequenceL__Arg_indexList.get_ptr((*(_SequenceL_tmp101.get_ptr(_SequenceL__no_share_iter))))))))) >= (*(_SequenceL__Arg_inputList.get_ptr((*(_SequenceL__Arg_indexList.get_ptr(((*(_SequenceL_tmp101.get_ptr(_SequenceL__no_share_iter))) + 1))))))))))	/*advent6.sl:15: indexList[i] when i = size(inputList) or inputList[indexList[i]] >= inputList[indexList[i + 1]]        else                indexList[i + 1]*/
{
(*(_SequenceL__result20.get_ptr(_SequenceL__no_share_iter))) = (*(_SequenceL__Arg_indexList.get_ptr((*(_SequenceL_tmp101.get_ptr(_SequenceL__no_share_iter))))));	/*advent6.sl:12: indexList[i]*/
}
else
{
(*(_SequenceL__result20.get_ptr(_SequenceL__no_share_iter))) = (*(_SequenceL__Arg_indexList.get_ptr(((*(_SequenceL_tmp101.get_ptr(_SequenceL__no_share_iter))) + 1))));	/*advent6.sl:15: indexList[i + 1]*/
}
}
}
}
void SequenceL__parallel_foldMaxIndex_0(::Sequence< int > &_SequenceL__Arg_indexList, ::Sequence< int > &_SequenceL__Arg_inputList, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL_tmp98(cspace);
::Sequence< int > _SequenceL_tmp101(cspace);

_SequenceL_parallel__ellipsis(0, ((_SequenceL__Arg_indexList.size() - 1) / 2), __LINE__, _SequenceL_tmp98);	/*advent6.sl:15: 0 ... ((size(indexList) - 1) / 2)*/
_SequenceL_tmp101.setSize(_SequenceL_tmp98.size());	/*advent6.sl:15: 2 * (0 ... ((size(indexList) - 1) / 2)) + 1*/
if (((((SL_FLOAT)(_SequenceL_tmp98.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt17_ SequenceL__sl_main_nt17__val(_SequenceL_tmp98, 1, _SequenceL_tmp98.size(), _SequenceL_tmp101);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt17__val);
_SequenceL_tmp98.delete_data(false);	
_SequenceL_tmp98.finished();	
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__i100=1,_stop_val__SequenceL__i100=_SequenceL_tmp98.size(); _SequenceL__i100<=_stop_val__SequenceL__i100; _SequenceL__i100+=1)
{
(*(_SequenceL_tmp101.get_ptr(_SequenceL__i100))) = ((2 * (*(_SequenceL_tmp98.get_ptr(_SequenceL__i100)))) + 1);	/*advent6.sl:15: 2 * (0 ... ((size(indexList) - 1) / 2)) + 1*/
}
_SequenceL_tmp98.delete_data(false);	
_SequenceL_tmp98.finished();	
}
_SequenceL__resultConv.setSize(_SequenceL_tmp101.size());	/*advent6.sl:15: indexList[i] when i = size(inputList) or inputList[indexList[i]] >= inputList[indexList[i + 1]]        else                indexList[i + 1]*/
if (((((SL_FLOAT)(_SequenceL__resultConv.size() - 1)) * 4) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt19_ SequenceL__sl_main_nt19__val(_SequenceL_tmp101, _SequenceL__Arg_inputList, _SequenceL__Arg_indexList, 1, _SequenceL__resultConv.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt19__val);
_SequenceL_tmp101.delete_data(false);	
_SequenceL_tmp101.finished();	
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__resultConv.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
if ((((*(_SequenceL_tmp101.get_ptr(_SequenceL__Index_i))) == _SequenceL__Arg_inputList.size()) || ((*(_SequenceL__Arg_inputList.get_ptr((*(_SequenceL__Arg_indexList.get_ptr((*(_SequenceL_tmp101.get_ptr(_SequenceL__Index_i))))))))) >= (*(_SequenceL__Arg_inputList.get_ptr((*(_SequenceL__Arg_indexList.get_ptr(((*(_SequenceL_tmp101.get_ptr(_SequenceL__Index_i))) + 1))))))))))	/*advent6.sl:15: indexList[i] when i = size(inputList) or inputList[indexList[i]] >= inputList[indexList[i + 1]]        else                indexList[i + 1]*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_indexList.get_ptr((*(_SequenceL_tmp101.get_ptr(_SequenceL__Index_i))))));	/*advent6.sl:12: indexList[i]*/
}
else
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_indexList.get_ptr(((*(_SequenceL_tmp101.get_ptr(_SequenceL__Index_i))) + 1))));	/*advent6.sl:15: indexList[i + 1]*/
}
}
_SequenceL_tmp101.delete_data(false);	
_SequenceL_tmp101.finished();	
}
}
void SequenceL__parallel_applyMaxIndex_0(::Sequence< int > &_SequenceL__Arg_indexList, ::Sequence< int > &_SequenceL__Arg_inputList, int &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL___Arg_indexList_tco(cspace);
::Sequence< int > _SequenceL_tmp117(cspace);

if (_SequenceL__Arg_indexList.onlyInstance())	
{
_SequenceL___Arg_indexList_tco.replaceSequence(_SequenceL__Arg_indexList);	
}
else
{
_SequenceL___Arg_indexList_tco.hard_copy(_SequenceL__Arg_indexList,__LINE__);	
}
_parallel_applyMaxIndex_advent6_label_tco:	
if ((_SequenceL___Arg_indexList_tco.size() == 1))	/*advent6.sl:21: head(indexList) when size(indexList) = 1        else                applyMaxIndex(foldMaxIndex(indexList, inputList), inputList)*/
{
_SequenceL__resultConv = _SequenceL___Arg_indexList_tco.head();	/*advent6.sl:19: head(indexList)*/
}
else
{
SequenceL__parallel_foldMaxIndex_0(_SequenceL___Arg_indexList_tco, _SequenceL__Arg_inputList, _SequenceL_tmp117);	/*advent6.sl:21: foldMaxIndex(indexList, inputList)*/
_swap(_SequenceL___Arg_indexList_tco, _SequenceL_tmp117);	
goto _parallel_applyMaxIndex_advent6_label_tco;	/*advent6.sl:21: applyMaxIndex(foldMaxIndex(indexList, inputList), inputList)*/
}
_SequenceL_tmp117.delete_data(false);	
_SequenceL_tmp117.finished();	
}
void SequenceL__parallel_maxIndex_0(::Sequence< int > &_SequenceL__Arg_a, int &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL_tmp118(cspace);

_SequenceL_parallel__ellipsis(1, _SequenceL__Arg_a.size(), __LINE__, _SequenceL_tmp118);	/*advent6.sl:24: 1 ... size(a)*/
SequenceL__parallel_applyMaxIndex_0(_SequenceL_tmp118, _SequenceL__Arg_a, _SequenceL__resultConv);	/*advent6.sl:24: applyMaxIndex(1 ... size(a), a)*/
_SequenceL_tmp118.delete_data(false);	
_SequenceL_tmp118.finished();	
}
void SequenceL__parallel_redistribute_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__resultConv)
{
int _SequenceL__Arg_m;
::Sequence< int > _SequenceL__delete_opttmp1(cspace);
int _SequenceL__Arg_toEach;
int _SequenceL__Arg_toDistribute;
int _SequenceL__Arg_extra;

_SequenceL__Arg_a.clone(_SequenceL__delete_opttmp1);	/*advent6.sl:33: maxIndex(a)*/
SequenceL__parallel_maxIndex_0(_SequenceL__delete_opttmp1, _SequenceL__Arg_m);	/*advent6.sl:33: maxIndex(a)*/
_SequenceL__delete_opttmp1.delete_data(false);	
_SequenceL__delete_opttmp1.finished();	
_SequenceL__Arg_toDistribute = (*(_SequenceL__Arg_a.get_ptr(_SequenceL__Arg_m)));	/*advent6.sl:34: a[m]*/
_SequenceL__Arg_toEach = (_SequenceL__Arg_toDistribute / _SequenceL__Arg_a.size());	/*advent6.sl:35: toDistribute / size(a)*/
_SequenceL__Arg_extra = (_SequenceL__Arg_toDistribute % _SequenceL__Arg_a.size());	/*advent6.sl:36: toDistribute mod size(a)*/
SequenceL__parallel_redistribution_0(_SequenceL__Arg_a, _SequenceL__Arg_m, _SequenceL__Arg_toEach, _SequenceL__Arg_extra, _SequenceL__resultConv);	/*advent6.sl:37: redistribution(a, m, toEach, extra)*/
}
void SequenceL__parallel_countCycle_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__Arg_start, int _SequenceL__Arg_count, int &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL__Arg_newA(cspace);
bool _SequenceL_tmp119;
::Sequence< int > _SequenceL__delete_opttmp1(cspace);
int _SequenceL_tmp122;

SequenceL__parallel_redistribute_0(_SequenceL__Arg_a, _SequenceL__Arg_newA);	/*advent6.sl:62: redistribute(a)*/
_SequenceL_tmp119 = eq_list(_SequenceL__Arg_newA, _SequenceL__Arg_start);	/*advent6.sl:64: equalList(newA, start)*/
if (_SequenceL_tmp119)	/*advent6.sl:64: (count + 1) when equalList(newA, start)  else countCycle(newA, start, (count + 1))*/
{
_SequenceL__resultConv = (_SequenceL__Arg_count + 1);	/*advent6.sl:63: count + 1*/
_SequenceL__Arg_newA.delete_data(false);	
_SequenceL__Arg_newA.finished();	
}
else
{
_SequenceL__Arg_start.clone(_SequenceL__delete_opttmp1);	/*advent6.sl:64: countCycle(newA, start, (count + 1))*/
_SequenceL_tmp122 = (_SequenceL__Arg_count + 1);	/*advent6.sl:64: count + 1*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_countCycle_i_i_i_0(_SequenceL__Arg_newA, _SequenceL__delete_opttmp1, _SequenceL_tmp122, _SequenceL__resultConv));
_SequenceL__Arg_newA.finished();	
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
(*(_SequenceL__result16.get_ptr(_SequenceL__no_share_iter))) = (*(_SequenceL__Arg_a.get_ptr(_SequenceL__no_share_iter)));	/*advent6.sl:66: a[i]*/
}
}
}
void SequenceL__parallel_copy_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__resultConv)
{

if (_SequenceL__Arg_a.onlyInstance())	/*advent6.sl:66: a[i]*/
{
_SequenceL__resultConv.replaceSequence(_SequenceL__Arg_a);	/*advent6.sl:66: a[i]*/
}
else
{
_SequenceL__resultConv.setSize(_SequenceL__Arg_a.size());	/*advent6.sl:66: a[i]*/
if (((((SL_FLOAT)(_SequenceL__Arg_a.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt15_ SequenceL__sl_main_nt15__val(_SequenceL__Arg_a, 1, _SequenceL__Arg_a.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt15__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_a.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i)));	/*advent6.sl:66: a[i]*/
}
}
}
}
void SequenceL__parallel_moveToMeetHelper_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__Arg_b, int _SequenceL__Arg_count, ::_sl_StepRecord_0 &_SequenceL__resultConv)
{
bool _SequenceL_tmp134;
::Sequence< int > _SequenceL__Arg_newA(cspace);
::Sequence< int > _SequenceL__Arg_newB(cspace);
int _SequenceL_tmp138;

_SequenceL_tmp134 = eq_list(_SequenceL__Arg_a, _SequenceL__Arg_b);	/*advent6.sl:52: equalList(a,b)*/
if (_SequenceL_tmp134)	/*advent6.sl:52: (steps: count, state: copy(a)) when equalList(a,b)  else moveToMeetHelper(newA, newB, (count + 1))*/
{
_SequenceL__resultConv.steps = _SequenceL__Arg_count;	/*advent6.sl:51: count*/
SequenceL__parallel_copy_0(_SequenceL__Arg_a, _SequenceL__resultConv.state);	/*advent6.sl:51: copy(a)*/
_SequenceL__Arg_a.delete_data(false);	
_SequenceL__Arg_b.delete_data(false);	
}
else
{
SequenceL__parallel_redistribute_0(_SequenceL__Arg_a, _SequenceL__Arg_newA);	/*advent6.sl:49: redistribute(a)*/
_SequenceL__Arg_a.delete_data(false);	
SequenceL__parallel_redistribute_0(_SequenceL__Arg_b, _SequenceL__Arg_newB);	/*advent6.sl:50: redistribute(b)*/
_SequenceL__Arg_b.delete_data(false);	
_SequenceL_tmp138 = (_SequenceL__Arg_count + 1);	/*advent6.sl:52: count + 1*/
SequenceL__parallel_moveToMeetHelper_0(_SequenceL__Arg_newA, _SequenceL__Arg_newB, _SequenceL_tmp138, _SequenceL__resultConv);	/*advent6.sl:52: moveToMeetHelper(newA, newB, (count + 1))*/
_SequenceL__Arg_newB.finished();	
_SequenceL__Arg_newA.finished();	
}
}
void SequenceL__parallel_moveToMeet_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__Arg_b, ::_sl_StepRecord_0 &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL__delete_opttmp1(cspace);
::Sequence< int > _SequenceL__delete_opttmp2(cspace);

_SequenceL__Arg_a.clone(_SequenceL__delete_opttmp1);	/*advent6.sl:55: moveToMeetHelper(a,b,0)*/
_SequenceL__Arg_b.clone(_SequenceL__delete_opttmp2);	/*advent6.sl:55: moveToMeetHelper(a,b,0)*/
SequenceL__parallel_moveToMeetHelper_0(_SequenceL__delete_opttmp1, _SequenceL__delete_opttmp2, 0, _SequenceL__resultConv);	/*advent6.sl:55: moveToMeetHelper(a,b,0)*/
_SequenceL__delete_opttmp2.finished();	
_SequenceL__delete_opttmp1.finished();	
}
void SequenceL__parallel_floyd_0(::Sequence< int > &_SequenceL__Arg_tortoise, ::Sequence< int > &_SequenceL__Arg_hare, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL___Arg_tortoise_tco(cspace);
::Sequence< int > _SequenceL___Arg_hare_tco(cspace);
::Sequence< int > _SequenceL__Arg_newTortoise(cspace);
::Sequence< int > _SequenceL__Arg_newHare(cspace);
::Sequence< int > _SequenceL_tmp147(cspace);
bool _SequenceL_tmp148;

if (_SequenceL__Arg_tortoise.onlyInstance())	
{
_SequenceL___Arg_tortoise_tco.replaceSequence(_SequenceL__Arg_tortoise);	
}
else
{
_SequenceL___Arg_tortoise_tco.hard_copy(_SequenceL__Arg_tortoise,__LINE__);	
}
if (_SequenceL__Arg_hare.onlyInstance())	
{
_SequenceL___Arg_hare_tco.replaceSequence(_SequenceL__Arg_hare);	
}
else
{
_SequenceL___Arg_hare_tco.hard_copy(_SequenceL__Arg_hare,__LINE__);	
}
_parallel_floyd_advent6_label_tco:	
SequenceL__parallel_redistribute_0(_SequenceL___Arg_tortoise_tco, _SequenceL__Arg_newTortoise);	/*advent6.sl:40: redistribute(tortoise)*/
SequenceL__parallel_redistribute_0(_SequenceL___Arg_hare_tco, _SequenceL_tmp147);	/*advent6.sl:41: redistribute(hare)*/
SequenceL__parallel_redistribute_0(_SequenceL_tmp147, _SequenceL__Arg_newHare);	/*advent6.sl:41: redistribute(redistribute(hare))*/
_SequenceL_tmp148 = eq_list(_SequenceL__Arg_newTortoise, _SequenceL__Arg_newHare);	/*advent6.sl:43: equalList(newTortoise, newHare)*/
if (_SequenceL_tmp148)	/*advent6.sl:43: newHare when equalList(newTortoise, newHare)  else floyd(newTortoise, newHare)*/
{
_SequenceL__resultConv = _SequenceL__Arg_newHare;	/*advent6.sl:42: newHare*/
}
else
{
_swap(_SequenceL___Arg_tortoise_tco, _SequenceL__Arg_newTortoise);	
_swap(_SequenceL___Arg_hare_tco, _SequenceL__Arg_newHare);	
goto _parallel_floyd_advent6_label_tco;	/*advent6.sl:43: floyd(newTortoise, newHare)*/
}
_SequenceL__Arg_newTortoise.delete_data(false);	
_SequenceL__Arg_newHare.delete_data(false);	
_SequenceL_tmp147.delete_data(false);	
_SequenceL_tmp147.finished();	
_SequenceL__Arg_newHare.finished();	
_SequenceL__Arg_newTortoise.finished();	
}
void SequenceL__parallel_findStartOfCycle_0(::Sequence< int > &_SequenceL__Arg_a, ::_sl_StepRecord_0 &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL__Arg_hare(cspace);
::Sequence< int > _SequenceL__delete_opttmp1(cspace);
::Sequence< int > _SequenceL_tmp151(cspace);
::Sequence< int > _SequenceL__delete_opttmp2(cspace);

_SequenceL__Arg_a.clone(_SequenceL__delete_opttmp1);	/*advent6.sl:58: floyd(a, copy(a))*/
_SequenceL__Arg_a.clone(_SequenceL__delete_opttmp2);	/*advent6.sl:58: copy(a)*/
SequenceL__parallel_copy_0(_SequenceL__delete_opttmp2, _SequenceL_tmp151);	/*advent6.sl:58: copy(a)*/
_SequenceL__delete_opttmp2.delete_data(false);	
_SequenceL__delete_opttmp2.finished();	
SequenceL__parallel_floyd_0(_SequenceL__delete_opttmp1, _SequenceL_tmp151, _SequenceL__Arg_hare);	/*advent6.sl:58: floyd(a, copy(a))*/
_SequenceL__delete_opttmp1.delete_data(false);	
_SequenceL_tmp151.delete_data(false);	
_SequenceL_tmp151.finished();	
_SequenceL__delete_opttmp1.finished();	
SequenceL__parallel_moveToMeet_0(_SequenceL__Arg_a, _SequenceL__Arg_hare, _SequenceL__resultConv);	/*advent6.sl:59: moveToMeet(a, hare)*/
_SequenceL__Arg_hare.delete_data(false);	
_SequenceL__Arg_hare.finished();	
}
void SequenceL__parallel_integerPowerHelper_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int _SequenceL__Arg_val, int &_SequenceL__resultConv)
{
int _SequenceL___Arg_y_tco;
int _SequenceL___Arg_val_tco;
int _SequenceL_tmp182;
int _SequenceL_tmp183;

_SequenceL___Arg_y_tco = _SequenceL__Arg_y;	
_SequenceL___Arg_val_tco = _SequenceL__Arg_val;	
_parallel_integerPowerHelper_Math_label_tco:	
if ((_SequenceL___Arg_y_tco < 1))	/*Math.sl:20: val when y < 1	else		integerPowerHelper(x, y - 1, val * x)*/
{
_SequenceL__resultConv = _SequenceL___Arg_val_tco;	/*Math.sl:18: val*/
}
else
{
_SequenceL_tmp182 = (_SequenceL___Arg_y_tco - 1);	/*Math.sl:20: y - 1*/
_SequenceL_tmp183 = (_SequenceL___Arg_val_tco * _SequenceL__Arg_x);	/*Math.sl:20: val * x*/
_SequenceL___Arg_y_tco = _SequenceL_tmp182;	
_SequenceL___Arg_val_tco = _SequenceL_tmp183;	
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
void SequenceL__sl_main_nt13_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
int _SequenceL_tmp244;
int _SequenceL__Arg_place;
int _SequenceL_tmp245;

SequenceL_charToInt_3((*(_SequenceL__Arg_numString.get_ptr(_SequenceL__Index_i))), _SequenceL_tmp244);	/*Conversion.sl:60: charToInt(numString[i])*/
_SequenceL_tmp245 = (_SequenceL__Arg_numString.size() - _SequenceL__Index_i);	/*Conversion.sl:58: size(numString) - i*/
SequenceL_integerPower_5(10, _SequenceL_tmp245, _SequenceL__Arg_place);	/*Conversion.sl:58: integerPower(10, (size(numString) - i))*/
(*(_SequenceL__result14.get_ptr(_SequenceL__Index_i))) = (_SequenceL_tmp244 * _SequenceL__Arg_place);	/*Conversion.sl:60: charToInt(numString[i]) * place*/
}
}
void SequenceL__parallel_atoIWorker_3(::Sequence< char > &_SequenceL__Arg_numString, ::Sequence< int > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_numString.size());	/*Conversion.sl:60: charToInt(numString[i]) * place*/
SequenceL__sl_main_nt13_ SequenceL__sl_main_nt13__val(_SequenceL__Arg_numString, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_numString.size() + 1, SequenceL__sl_main_nt13__val);
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
bool _SequenceL_tmp321;
int _SequenceL_tmp324;
int _SequenceL_tmp326;

_SequenceL___Arg_i_tco = _SequenceL__Arg_i;	
_parallel_trimNonNumeric_Conversion_label_tco:	
if ((_SequenceL___Arg_i_tco > _SequenceL__Arg_numString.size()))	/*Conversion.sl:53: numString when i > size(numString)	else		take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL__resultConv = _SequenceL__Arg_numString;	/*Conversion.sl:49: numString*/
}
else
{
SequenceL__parallel_isDigit_1((*(_SequenceL__Arg_numString.get_ptr(_SequenceL___Arg_i_tco))), _SequenceL_tmp321);	/*Conversion.sl:52: isDigit(numString[i])*/
if (!_SequenceL_tmp321)	/*Conversion.sl:53: take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL_tmp324 = (_SequenceL___Arg_i_tco - 1);	/*Conversion.sl:51: i-1*/
SequenceL__parallel_take_2(_SequenceL__Arg_numString, _SequenceL_tmp324, _SequenceL__resultConv);	/*Conversion.sl:51: take(numString, i-1)*/
}
else
{
_SequenceL_tmp326 = (_SequenceL___Arg_i_tco + 1);	/*Conversion.sl:53: i + 1*/
_SequenceL___Arg_i_tco = _SequenceL_tmp326;	
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
bool _SequenceL_tmp403;
char _SequenceL_tmp402;
::Sequence< char > _SequenceL_tmp405(cspace);

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
_SequenceL_tmp402 = _SequenceL___Arg_input_tco.head();	/*String.sl:10: head(input)*/
SequenceL__parallel_isWhiteSpace_1(_SequenceL_tmp402, _SequenceL_tmp403);	/*String.sl:11: isWhiteSpace(head(input))*/
if (_SequenceL_tmp403)	/*String.sl:12: trimStart(tail(input)) when isWhiteSpace(head(input))	else		input*/
{
_SequenceL___Arg_input_tco.tail(_SequenceL_tmp405);	/*String.sl:10: tail(input)*/
_swap(_SequenceL___Arg_input_tco, _SequenceL_tmp405);	
goto _parallel_trimStart_String_label_tco;	/*String.sl:10: trimStart(tail(input))*/
}
else
{
_SequenceL__resultConv = _SequenceL___Arg_input_tco;	/*String.sl:12: input*/
}
}
_SequenceL_tmp405.delete_data(false);	
_SequenceL_tmp405.finished();	
}
void SequenceL__parallel_stringToInt_3(::Sequence< char > &_SequenceL__Arg_numString, int &_SequenceL__resultConv)
{
::Sequence< char > _SequenceL__Arg_trimmed(cspace);
char _SequenceL_tmp410;
int _SequenceL_tmp414;
::Sequence< char > _SequenceL_tmp413(cspace);
char _SequenceL_tmp416;
::Sequence< char > _SequenceL_tmp419(cspace);
::Sequence< int > _SequenceL_tmp421(cspace);
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
_SequenceL_tmp410 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:41: head(trimmed)*/
if ((_SequenceL_tmp410 == '-'))	/*Conversion.sl:45: - stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp413);	/*Conversion.sl:41: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(false);	
_SequenceL__Arg_trimmed.finished();	
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_stringToInt_c_3(_SequenceL_tmp413, _SequenceL_tmp414));
_SequenceL_tmp413.finished();	
_SequenceL__resultConv = (-_SequenceL_tmp414);	/*Conversion.sl:41: - stringToInt(tail(trimmed))*/
}
else
{
_SequenceL_tmp416 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:43: head(trimmed)*/
if ((_SequenceL_tmp416 == '+'))	/*Conversion.sl:45: stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp419);	/*Conversion.sl:43: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(false);	
_SequenceL__Arg_trimmed.finished();	
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_stringToInt_c_3(_SequenceL_tmp419, _SequenceL__resultConv));
_SequenceL_tmp419.finished();	
}
else
{
SequenceL__parallel_trimNonNumeric_3(_SequenceL__Arg_trimmed, 1, _SequenceL__Arg_justNumber);	/*Conversion.sl:37: trimNonNumeric(trimmed, 1)*/
_SequenceL__Arg_trimmed.delete_data(false);	
_SequenceL__Arg_trimmed.finished();	
SequenceL__parallel_atoIWorker_3(_SequenceL__Arg_justNumber, _SequenceL_tmp421);	/*Conversion.sl:45: atoIWorker(justNumber)*/
_SequenceL__Arg_justNumber.delete_data(false);	
_SequenceL__Arg_justNumber.finished();	
_SequenceL__resultConv = _SequenceL_parallel_sum(_SequenceL_tmp421, __LINE__);	/*Conversion.sl:45: sum(atoIWorker(justNumber))*/
_SequenceL_tmp421.delete_data(false);	
_SequenceL_tmp421.finished();	
}
}
}
}
void SequenceL__sl_main_nt11_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{

(*(_SequenceL__result12.get_ptr(_SequenceL__Index_i))).setSize((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__Index_i))).size());	/*Sequence.sl:45: list[indexes[i]]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index2=1,_stop_val__SequenceL__Index__tmp_index2=(*(_SequenceL__result12.get_ptr(_SequenceL__Index_i))).size(); _SequenceL__Index__tmp_index2<=_stop_val__SequenceL__Index__tmp_index2; _SequenceL__Index__tmp_index2+=1)
{
(*((*(_SequenceL__result12.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index__tmp_index2))) = (*(_SequenceL__Arg_list.get_ptr((*((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index__tmp_index2))))));	/*Sequence.sl:45: list[indexes[i]]*/
}
}
}
void SequenceL__parallel_multipleIndexes_2(::Sequence< char > &_SequenceL__Arg_list, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_indexes, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:45: list[indexes[i]]*/
if (((((SL_FLOAT)(_SequenceL__Arg_indexes.size() - 1)) * (-1 + ((_SequenceL__Arg_indexes.size() > 0) ? (*(_SequenceL__Arg_indexes.get_ptr(1))).size() : 0))) > (sl_get_num_units() * ((WORK_SHARE_VALUE * WORK_SHARE_VALUE) * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt11_ SequenceL__sl_main_nt11__val(_SequenceL__Arg_indexes, _SequenceL__Arg_list, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_indexes.size() + 1, SequenceL__sl_main_nt11__val);
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
void SequenceL__sl_main_nt9_::operator() (const blocked_range<int>& _r) const {
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
(*(_SequenceL__result10.get_ptr(_SequenceL__no_share_iter))) = _SequenceL__no_share_iter;	
_SequenceL__result10.setExistence(_SequenceL__no_share_iter, true);	
}
else
{
_SequenceL__result10.setExistence(_SequenceL__no_share_iter, false);	
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
SequenceL__sl_main_nt9_ SequenceL__sl_main_nt9__val(_SequenceL__Arg_list, _SequenceL__Arg_element, 1, _SequenceL__Arg_list.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt9__val);
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
void SequenceL__sl_main_nt3_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i446 = _r.begin(); _SequenceL__i446 < _e; _SequenceL__i446++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__i446 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__i446 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result4.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__no_share_iter))) + 1);	/*Sequence.sl:54: indexes + 1*/
}
}
}
void SequenceL__sl_main_nt5_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i449 = _r.begin(); _SequenceL__i449 < _e; _SequenceL__i449++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__i449 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__i449 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result6.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__no_share_iter))) - 1);	/*Sequence.sl:54: indexes - 1*/
}
}
}
void SequenceL__sl_main_nt7_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i454 = _r.begin(); _SequenceL__i454 < _e; _SequenceL__i454++)
{

ellipsis((*(_SequenceL_tmp447.get_ptr(_SequenceL__i454))), (*(_SequenceL_tmp452.get_ptr(_SequenceL__i454))), (*(_SequenceL__result8.get_ptr(_SequenceL__i454))));	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
}
}
void SequenceL__parallel_split_2(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_delimiter, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv)
{
::Sequence< Empty > _SequenceL_tmp441(cspace);
::Sequence< int > _SequenceL_tmp447(cspace);
::Sequence< int > _SequenceL_tmp443(cspace);
::Sequence< int > _SequenceL__Arg_indexes(cspace);
::Sequence< int > _SequenceL_tmp445(cspace);
::Sequence< int > _SequenceL_tmp452(cspace);
::Sequence< int > _SequenceL_tmp448(cspace);
::Sequence< int > _SequenceL_tmp450(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp453(cspace);

if ((_SequenceL__Arg_list.size() == 0))	/*Sequence.sl:54: [] when size(list) = 0	else		multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
{
_SequenceL_tmp441.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp441, _SequenceL__resultConv);	
_SequenceL_tmp441.delete_data(false);	
_SequenceL_tmp441.finished();	
_SequenceL_tmp453.delete_data(false);	
_SequenceL_tmp453.finished();	
}
else
{
_SequenceL_tmp443.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp443.get_ptr(1))) = 1;	/*Sequence.sl:54: 1*/
SequenceL__parallel_indexesOf_2(_SequenceL__Arg_list, _SequenceL__Arg_delimiter, _SequenceL__Arg_indexes);	/*Sequence.sl:50: indexesOf(list, delimiter)*/
_SequenceL_tmp445.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes + 1*/
if (((((SL_FLOAT)(_SequenceL_tmp445.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt3_ SequenceL__sl_main_nt3__val(_SequenceL__Arg_indexes, 1, _SequenceL_tmp445.size(), _SequenceL_tmp445);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt3__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__i446=1,_stop_val__SequenceL__i446=_SequenceL_tmp445.size(); _SequenceL__i446<=_stop_val__SequenceL__i446; _SequenceL__i446+=1)
{
(*(_SequenceL_tmp445.get_ptr(_SequenceL__i446))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i446))) + 1);	/*Sequence.sl:54: indexes + 1*/
}
}
append(_SequenceL_tmp443, _SequenceL_tmp445, _SequenceL_tmp447);	/*Sequence.sl:54: [1] ++ (indexes + 1)*/
_SequenceL_tmp443.delete_data(false);	
_SequenceL_tmp445.delete_data(false);	
_SequenceL_tmp445.finished();	
_SequenceL_tmp443.finished();	
_SequenceL_tmp448.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes - 1*/
if (((((SL_FLOAT)(_SequenceL_tmp448.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt5_ SequenceL__sl_main_nt5__val(_SequenceL__Arg_indexes, 1, _SequenceL_tmp448.size(), _SequenceL_tmp448);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt5__val);
_SequenceL__Arg_indexes.delete_data(false);	
_SequenceL__Arg_indexes.finished();	
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__i449=1,_stop_val__SequenceL__i449=_SequenceL_tmp448.size(); _SequenceL__i449<=_stop_val__SequenceL__i449; _SequenceL__i449+=1)
{
(*(_SequenceL_tmp448.get_ptr(_SequenceL__i449))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i449))) - 1);	/*Sequence.sl:54: indexes - 1*/
}
_SequenceL__Arg_indexes.delete_data(false);	
_SequenceL__Arg_indexes.finished();	
}
_SequenceL_tmp450.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp450.get_ptr(1))) = _SequenceL__Arg_list.size();	/*Sequence.sl:54: size(list)*/
append(_SequenceL_tmp448, _SequenceL_tmp450, _SequenceL_tmp452);	/*Sequence.sl:54: (indexes - 1) ++ [size(list)]*/
_SequenceL_tmp448.delete_data(false);	
_SequenceL_tmp450.delete_data(false);	
_SequenceL_tmp450.finished();	
_SequenceL_tmp448.finished();	
_SequenceL_tmp453.setSize(_SequenceL_tmp447.size());	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
SequenceL__sl_main_nt7_ SequenceL__sl_main_nt7__val(_SequenceL_tmp447, _SequenceL_tmp452, _SequenceL_tmp453);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL_tmp453.size() + 1, SequenceL__sl_main_nt7__val);
_SequenceL_tmp447.delete_data(false);	
_SequenceL_tmp452.delete_data(false);	
_SequenceL_tmp452.finished();	
_SequenceL_tmp447.finished();	
SequenceL__parallel_multipleIndexes_2(_SequenceL__Arg_list, _SequenceL_tmp453, _SequenceL__resultConv);	/*Sequence.sl:54: multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
_SequenceL_tmp453.delete_data(false);	
_SequenceL_tmp453.finished();	
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
bool _SequenceL_tmp490;
char _SequenceL_tmp489;
::Sequence< char > _SequenceL_tmp492(cspace);
bool _SequenceL_tmp495;
char _SequenceL_tmp494;
::Sequence< char > _SequenceL_tmp497(cspace);

_SequenceL_tmp489 = _SequenceL__Arg_s.head();	/*advent6.sl:6: head(s)*/
SequenceL__parallel_isWhiteSpace_1(_SequenceL_tmp489, _SequenceL_tmp490);	/*advent6.sl:7: isWhiteSpace(head(s))*/
if (_SequenceL_tmp490)	/*advent6.sl:8: trim(tail(s)) when isWhiteSpace(head(s))  else trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
_SequenceL__Arg_s.tail(_SequenceL_tmp492);	/*advent6.sl:6: tail(s)*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_trim_c_0(_SequenceL_tmp492, _SequenceL__resultConv));
_SequenceL_tmp492.finished();	
}
else
{
SequenceL__parallel_last_2(_SequenceL__Arg_s, _SequenceL_tmp494);	/*advent6.sl:7: last(s)*/
SequenceL__parallel_isWhiteSpace_1(_SequenceL_tmp494, _SequenceL_tmp495);	/*advent6.sl:8: isWhiteSpace(last(s))*/
if (_SequenceL_tmp495)	/*advent6.sl:8: trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
SequenceL__parallel_allButLast_2(_SequenceL__Arg_s, _SequenceL_tmp497);	/*advent6.sl:7: allButLast(s)*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_trim_c_0(_SequenceL_tmp497, _SequenceL__resultConv));
_SequenceL_tmp497.finished();	
}
else
{
_SequenceL__resultConv = _SequenceL__Arg_s;	/*advent6.sl:8: s*/
}
}
}
void SequenceL__sl_main_nt1_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i502 = _r.begin(); _SequenceL__i502 < _e; _SequenceL__i502++)
{
::Sequence< char > _SequenceL__delete_opttmp1(cspace);

(*(_SequenceL_tmp501.get_ptr(_SequenceL__i502))).clone(_SequenceL__delete_opttmp1);	/*advent6.sl:70: stringToInt(split(trim(s[1]), '\t'))*/
SequenceL_stringToInt_3(_SequenceL__delete_opttmp1, (*(_SequenceL__result2.get_ptr(_SequenceL__i502))));	/*advent6.sl:70: stringToInt(split(trim(s[1]), '\t'))*/
_SequenceL__delete_opttmp1.finished();	
}
}
void SequenceL__parallel_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_s, ::Sequence< int > &_SequenceL__resultConv)
{
::_sl_StepRecord_0 _SequenceL__Arg_start(cspace);
::Sequence< ::Sequence< char > > _SequenceL_tmp501(cspace);
::Sequence< char > _SequenceL_tmp500(cspace);
::Sequence< char > _SequenceL__delete_opttmp1(cspace);
::Sequence< int > _SequenceL__Arg_regs(cspace);
int _SequenceL__Arg_cycle;
::Sequence< int > _SequenceL__delete_opttmp2(cspace);
::Sequence< int > _SequenceL_tmp506(cspace);
::Sequence< int > _SequenceL__delete_opttmp3(cspace);

_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
(*(_SequenceL__Arg_s.get_ptr(1))).clone(_SequenceL__delete_opttmp1);	/*advent6.sl:70: trim(s[1])*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_trim_c_0(_SequenceL__delete_opttmp1, _SequenceL_tmp500));
SequenceL__parallel_split_2(_SequenceL_tmp500, '\t', _SequenceL_tmp501);	/*advent6.sl:70: split(trim(s[1]), '\t')*/
_SequenceL_tmp500.delete_data(false);	
_SequenceL_tmp500.finished();	
_SequenceL__Arg_regs.setSize(_SequenceL_tmp501.size());	/*advent6.sl:70: stringToInt(split(trim(s[1]), '\t'))*/
SequenceL__sl_main_nt1_ SequenceL__sl_main_nt1__val(_SequenceL_tmp501, _SequenceL__Arg_regs);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_regs.size() + 1, SequenceL__sl_main_nt1__val);
_SequenceL_tmp501.delete_data(false);	
_SequenceL_tmp501.finished();	
SequenceL__parallel_findStartOfCycle_0(_SequenceL__Arg_regs, _SequenceL__Arg_start);	/*advent6.sl:71: findStartOfCycle(regs)*/
_SequenceL__Arg_regs.delete_data(false);	
_SequenceL__Arg_regs.finished();	
_SequenceL__Arg_start.state.clone(_SequenceL__delete_opttmp2);	/*advent6.sl:72: countCycle(start.state, copy(start.state), 0)*/
_SequenceL__Arg_start.state.clone(_SequenceL__delete_opttmp3);	/*advent6.sl:72: copy(start.state)*/
SequenceL__parallel_copy_0(_SequenceL__delete_opttmp3, _SequenceL_tmp506);	/*advent6.sl:72: copy(start.state)*/
_SequenceL__delete_opttmp3.delete_data(false);	
_SequenceL__delete_opttmp3.finished();	
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_countCycle_i_i_i_0(_SequenceL__delete_opttmp2, _SequenceL_tmp506, 0, _SequenceL__Arg_cycle));
_SequenceL_tmp506.finished();	
(*(_SequenceL__resultConv.get_ptr(1))) = (_SequenceL__Arg_start.steps + _SequenceL__Arg_cycle);	/*advent6.sl:74: start.steps + cycle*/
_SequenceL__Arg_start._delete_data(false);	
_SequenceL__Arg_start._finished();	
(*(_SequenceL__resultConv.get_ptr(2))) = _SequenceL__Arg_cycle;	/*advent6.sl:74: cycle*/
}
void SequenceL_redistribution_0(::Sequence< int > &_SequenceL__Arg_a, int _SequenceL__Arg_m, int _SequenceL__Arg_toEach, int _SequenceL__Arg_extra, ::Sequence< int > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_a.size());	/*advent6.sl:30: toEach when i = m  else a[i] + toEach + 1 when i > m and i <= (m + extra)  else a[i] + toEach + 1 when i <= (m + extra - size(a))  else a[i] + toEach*/
if (((_SequenceL__Arg_m >= 1) && (_SequenceL__Arg_m <= _SequenceL__Arg_a.size())))	/*advent6.sl:30: toEach when i = m  else a[i] + toEach + 1 when i > m and i <= (m + extra)  else a[i] + toEach + 1 when i <= (m + extra - size(a))  else a[i] + toEach*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Arg_m))) = _SequenceL__Arg_toEach;	/*advent6.sl:27: toEach*/
}
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=SequenceL_max(1, (_SequenceL__Arg_m + 1)),_stop_val__SequenceL__Index_i=SequenceL_min(SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m - 1)), (_SequenceL__Arg_m + _SequenceL__Arg_extra)); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) + _SequenceL__Arg_toEach) + 1);	/*advent6.sl:28: a[i] + toEach + 1*/
}
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=SequenceL_max(1, (((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size()) + 1)),_stop_val__SequenceL__Index_i=SequenceL_min(SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m - 1)), _SequenceL__Arg_m); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = ((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) + _SequenceL__Arg_toEach);	/*advent6.sl:30: a[i] + toEach*/
}
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=SequenceL_min(SequenceL_min(SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m - 1)), _SequenceL__Arg_m), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size())); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) + _SequenceL__Arg_toEach) + 1);	/*advent6.sl:29: a[i] + toEach + 1*/
}
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=SequenceL_max(SequenceL_max(1, ((_SequenceL__Arg_m + _SequenceL__Arg_extra) + 1)), (((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size()) + 1)),_stop_val__SequenceL__Index_i=SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m - 1)); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = ((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) + _SequenceL__Arg_toEach);	/*advent6.sl:30: a[i] + toEach*/
}
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=SequenceL_max(1, ((_SequenceL__Arg_m + _SequenceL__Arg_extra) + 1)),_stop_val__SequenceL__Index_i=SequenceL_min(SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m - 1)), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size())); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) + _SequenceL__Arg_toEach) + 1);	/*advent6.sl:29: a[i] + toEach + 1*/
}
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=SequenceL_max(SequenceL_max(1, (_SequenceL__Arg_m + 1)), (_SequenceL__Arg_m + 1)),_stop_val__SequenceL__Index_i=SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_m + _SequenceL__Arg_extra)); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) + _SequenceL__Arg_toEach) + 1);	/*advent6.sl:28: a[i] + toEach + 1*/
}
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=SequenceL_max(SequenceL_max(1, (_SequenceL__Arg_m + 1)), (((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size()) + 1)),_stop_val__SequenceL__Index_i=SequenceL_min(_SequenceL__Arg_a.size(), _SequenceL__Arg_m); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = ((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) + _SequenceL__Arg_toEach);	/*advent6.sl:30: a[i] + toEach*/
}
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=SequenceL_max(1, (_SequenceL__Arg_m + 1)),_stop_val__SequenceL__Index_i=SequenceL_min(SequenceL_min(_SequenceL__Arg_a.size(), _SequenceL__Arg_m), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size())); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) + _SequenceL__Arg_toEach) + 1);	/*advent6.sl:29: a[i] + toEach + 1*/
}
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=SequenceL_max(SequenceL_max(SequenceL_max(1, (_SequenceL__Arg_m + 1)), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) + 1)), (((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size()) + 1)),_stop_val__SequenceL__Index_i=_SequenceL__Arg_a.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = ((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) + _SequenceL__Arg_toEach);	/*advent6.sl:30: a[i] + toEach*/
}
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=SequenceL_max(SequenceL_max(1, (_SequenceL__Arg_m + 1)), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) + 1)),_stop_val__SequenceL__Index_i=SequenceL_min(_SequenceL__Arg_a.size(), ((_SequenceL__Arg_m + _SequenceL__Arg_extra) - _SequenceL__Arg_a.size())); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) + _SequenceL__Arg_toEach) + 1);	/*advent6.sl:29: a[i] + toEach + 1*/
}
}
void SequenceL_foldMaxIndex_0(::Sequence< int > &_SequenceL__Arg_indexList, ::Sequence< int > &_SequenceL__Arg_inputList, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL_tmp98(cspace);
::Sequence< int > _SequenceL_tmp101(cspace);

ellipsis(0, ((_SequenceL__Arg_indexList.size() - 1) / 2), _SequenceL_tmp98);	/*advent6.sl:15: 0 ... ((size(indexList) - 1) / 2)*/
_SequenceL_tmp101.setSize(_SequenceL_tmp98.size());	/*advent6.sl:15: 2 * (0 ... ((size(indexList) - 1) / 2)) + 1*/
SIMD_DIRECTIVE
for (int _SequenceL__i100=1,_stop_val__SequenceL__i100=_SequenceL_tmp98.size(); _SequenceL__i100<=_stop_val__SequenceL__i100; _SequenceL__i100+=1)
{
(*(_SequenceL_tmp101.get_ptr(_SequenceL__i100))) = ((2 * (*(_SequenceL_tmp98.get_ptr(_SequenceL__i100)))) + 1);	/*advent6.sl:15: 2 * (0 ... ((size(indexList) - 1) / 2)) + 1*/
}
_SequenceL_tmp98.delete_data(true);	
_SequenceL_tmp98.finished();	
_SequenceL__resultConv.setSize(_SequenceL_tmp101.size());	/*advent6.sl:15: indexList[i] when i = size(inputList) or inputList[indexList[i]] >= inputList[indexList[i + 1]]        else                indexList[i + 1]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__resultConv.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
if ((((*(_SequenceL_tmp101.get_ptr(_SequenceL__Index_i))) == _SequenceL__Arg_inputList.size()) || ((*(_SequenceL__Arg_inputList.get_ptr((*(_SequenceL__Arg_indexList.get_ptr((*(_SequenceL_tmp101.get_ptr(_SequenceL__Index_i))))))))) >= (*(_SequenceL__Arg_inputList.get_ptr((*(_SequenceL__Arg_indexList.get_ptr(((*(_SequenceL_tmp101.get_ptr(_SequenceL__Index_i))) + 1))))))))))	/*advent6.sl:15: indexList[i] when i = size(inputList) or inputList[indexList[i]] >= inputList[indexList[i + 1]]        else                indexList[i + 1]*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_indexList.get_ptr((*(_SequenceL_tmp101.get_ptr(_SequenceL__Index_i))))));	/*advent6.sl:12: indexList[i]*/
}
else
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_indexList.get_ptr(((*(_SequenceL_tmp101.get_ptr(_SequenceL__Index_i))) + 1))));	/*advent6.sl:15: indexList[i + 1]*/
}
}
_SequenceL_tmp101.delete_data(true);	
_SequenceL_tmp101.finished();	
}
void SequenceL_applyMaxIndex_0(::Sequence< int > &_SequenceL__Arg_indexList, ::Sequence< int > &_SequenceL__Arg_inputList, int &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL___Arg_indexList_tco(cspace);
::Sequence< int > _SequenceL_tmp117(cspace);

if (_SequenceL__Arg_indexList.onlyInstance())	
{
_SequenceL___Arg_indexList_tco.replaceSequence(_SequenceL__Arg_indexList);	
}
else
{
_SequenceL___Arg_indexList_tco.hard_copy(_SequenceL__Arg_indexList,__LINE__);	
}
applyMaxIndex_advent6_label_tco:	
if ((_SequenceL___Arg_indexList_tco.size() == 1))	/*advent6.sl:21: head(indexList) when size(indexList) = 1        else                applyMaxIndex(foldMaxIndex(indexList, inputList), inputList)*/
{
_SequenceL__resultConv = _SequenceL___Arg_indexList_tco.head();	/*advent6.sl:19: head(indexList)*/
}
else
{
SequenceL_foldMaxIndex_0(_SequenceL___Arg_indexList_tco, _SequenceL__Arg_inputList, _SequenceL_tmp117);	/*advent6.sl:21: foldMaxIndex(indexList, inputList)*/
_swap(_SequenceL___Arg_indexList_tco, _SequenceL_tmp117);	
goto applyMaxIndex_advent6_label_tco;	/*advent6.sl:21: applyMaxIndex(foldMaxIndex(indexList, inputList), inputList)*/
}
_SequenceL_tmp117.delete_data(true);	
_SequenceL_tmp117.finished();	
}
void SequenceL_maxIndex_0(::Sequence< int > &_SequenceL__Arg_a, int &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL_tmp118(cspace);

ellipsis(1, _SequenceL__Arg_a.size(), _SequenceL_tmp118);	/*advent6.sl:24: 1 ... size(a)*/
SequenceL_applyMaxIndex_0(_SequenceL_tmp118, _SequenceL__Arg_a, _SequenceL__resultConv);	/*advent6.sl:24: applyMaxIndex(1 ... size(a), a)*/
_SequenceL_tmp118.delete_data(true);	
_SequenceL_tmp118.finished();	
}
void SequenceL_redistribute_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__resultConv)
{
int _SequenceL__Arg_m;
::Sequence< int > _SequenceL__delete_opttmp1(cspace);
int _SequenceL__Arg_toEach;
int _SequenceL__Arg_toDistribute;
int _SequenceL__Arg_extra;

_SequenceL__Arg_a.clone(_SequenceL__delete_opttmp1);	/*advent6.sl:33: maxIndex(a)*/
SequenceL_maxIndex_0(_SequenceL__delete_opttmp1, _SequenceL__Arg_m);	/*advent6.sl:33: maxIndex(a)*/
_SequenceL__delete_opttmp1.delete_data(true);	
_SequenceL__delete_opttmp1.finished();	
_SequenceL__Arg_toDistribute = (*(_SequenceL__Arg_a.get_ptr(_SequenceL__Arg_m)));	/*advent6.sl:34: a[m]*/
_SequenceL__Arg_toEach = (_SequenceL__Arg_toDistribute / _SequenceL__Arg_a.size());	/*advent6.sl:35: toDistribute / size(a)*/
_SequenceL__Arg_extra = (_SequenceL__Arg_toDistribute % _SequenceL__Arg_a.size());	/*advent6.sl:36: toDistribute mod size(a)*/
SequenceL_redistribution_0(_SequenceL__Arg_a, _SequenceL__Arg_m, _SequenceL__Arg_toEach, _SequenceL__Arg_extra, _SequenceL__resultConv);	/*advent6.sl:37: redistribution(a, m, toEach, extra)*/
}
void SequenceL_countCycle_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__Arg_start, int _SequenceL__Arg_count, int &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL___Arg_a_tco(cspace);
int _SequenceL___Arg_count_tco;
::Sequence< int > _SequenceL__Arg_newA(cspace);
bool _SequenceL_tmp119;
int _SequenceL_tmp122;

if (_SequenceL__Arg_a.onlyInstance())	
{
_SequenceL___Arg_a_tco.replaceSequence(_SequenceL__Arg_a);	
}
else
{
_SequenceL___Arg_a_tco.hard_copy(_SequenceL__Arg_a,__LINE__);	
}
_SequenceL___Arg_count_tco = _SequenceL__Arg_count;	
countCycle_advent6_label_tco:	
SequenceL_redistribute_0(_SequenceL___Arg_a_tco, _SequenceL__Arg_newA);	/*advent6.sl:62: redistribute(a)*/
_SequenceL_tmp119 = eq_list(_SequenceL__Arg_newA, _SequenceL__Arg_start);	/*advent6.sl:64: equalList(newA, start)*/
if (_SequenceL_tmp119)	/*advent6.sl:64: (count + 1) when equalList(newA, start)  else countCycle(newA, start, (count + 1))*/
{
_SequenceL__resultConv = (_SequenceL___Arg_count_tco + 1);	/*advent6.sl:63: count + 1*/
}
else
{
_SequenceL_tmp122 = (_SequenceL___Arg_count_tco + 1);	/*advent6.sl:64: count + 1*/
_swap(_SequenceL___Arg_a_tco, _SequenceL__Arg_newA);	
_SequenceL___Arg_count_tco = _SequenceL_tmp122;	
goto countCycle_advent6_label_tco;	/*advent6.sl:64: countCycle(newA, start, (count + 1))*/
}
_SequenceL__Arg_newA.delete_data(true);	
_SequenceL__Arg_newA.finished();	
}
void SequenceL_copy_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__resultConv)
{

if (_SequenceL__Arg_a.onlyInstance())	/*advent6.sl:66: a[i]*/
{
_SequenceL__resultConv.replaceSequence(_SequenceL__Arg_a);	/*advent6.sl:66: a[i]*/
}
else
{
_SequenceL__resultConv.setSize(_SequenceL__Arg_a.size());	/*advent6.sl:66: a[i]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_a.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i)));	/*advent6.sl:66: a[i]*/
}
}
}
void SequenceL_moveToMeetHelper_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__Arg_b, int _SequenceL__Arg_count, ::_sl_StepRecord_0 &_SequenceL__resultConv)
{
bool _SequenceL_tmp134;
::Sequence< int > _SequenceL__Arg_newA(cspace);
::Sequence< int > _SequenceL__Arg_newB(cspace);
int _SequenceL_tmp138;

_SequenceL_tmp134 = eq_list(_SequenceL__Arg_a, _SequenceL__Arg_b);	/*advent6.sl:52: equalList(a,b)*/
if (_SequenceL_tmp134)	/*advent6.sl:52: (steps: count, state: copy(a)) when equalList(a,b)  else moveToMeetHelper(newA, newB, (count + 1))*/
{
_SequenceL__resultConv.steps = _SequenceL__Arg_count;	/*advent6.sl:51: count*/
SequenceL_copy_0(_SequenceL__Arg_a, _SequenceL__resultConv.state);	/*advent6.sl:51: copy(a)*/
}
else
{
SequenceL_redistribute_0(_SequenceL__Arg_a, _SequenceL__Arg_newA);	/*advent6.sl:49: redistribute(a)*/
SequenceL_redistribute_0(_SequenceL__Arg_b, _SequenceL__Arg_newB);	/*advent6.sl:50: redistribute(b)*/
_SequenceL_tmp138 = (_SequenceL__Arg_count + 1);	/*advent6.sl:52: count + 1*/
SequenceL_moveToMeetHelper_0(_SequenceL__Arg_newA, _SequenceL__Arg_newB, _SequenceL_tmp138, _SequenceL__resultConv);	/*advent6.sl:52: moveToMeetHelper(newA, newB, (count + 1))*/
_SequenceL__Arg_newA.delete_data(true);	
_SequenceL__Arg_newB.delete_data(true);	
_SequenceL__Arg_newB.finished();	
_SequenceL__Arg_newA.finished();	
}
}
void SequenceL_moveToMeet_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__Arg_b, ::_sl_StepRecord_0 &_SequenceL__resultConv)
{

SequenceL_moveToMeetHelper_0(_SequenceL__Arg_a, _SequenceL__Arg_b, 0, _SequenceL__resultConv);	/*advent6.sl:55: moveToMeetHelper(a,b,0)*/
}
void SequenceL_floyd_0(::Sequence< int > &_SequenceL__Arg_tortoise, ::Sequence< int > &_SequenceL__Arg_hare, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL___Arg_tortoise_tco(cspace);
::Sequence< int > _SequenceL___Arg_hare_tco(cspace);
::Sequence< int > _SequenceL__Arg_newTortoise(cspace);
::Sequence< int > _SequenceL__Arg_newHare(cspace);
::Sequence< int > _SequenceL_tmp147(cspace);
bool _SequenceL_tmp148;

if (_SequenceL__Arg_tortoise.onlyInstance())	
{
_SequenceL___Arg_tortoise_tco.replaceSequence(_SequenceL__Arg_tortoise);	
}
else
{
_SequenceL___Arg_tortoise_tco.hard_copy(_SequenceL__Arg_tortoise,__LINE__);	
}
if (_SequenceL__Arg_hare.onlyInstance())	
{
_SequenceL___Arg_hare_tco.replaceSequence(_SequenceL__Arg_hare);	
}
else
{
_SequenceL___Arg_hare_tco.hard_copy(_SequenceL__Arg_hare,__LINE__);	
}
floyd_advent6_label_tco:	
SequenceL_redistribute_0(_SequenceL___Arg_tortoise_tco, _SequenceL__Arg_newTortoise);	/*advent6.sl:40: redistribute(tortoise)*/
SequenceL_redistribute_0(_SequenceL___Arg_hare_tco, _SequenceL_tmp147);	/*advent6.sl:41: redistribute(hare)*/
SequenceL_redistribute_0(_SequenceL_tmp147, _SequenceL__Arg_newHare);	/*advent6.sl:41: redistribute(redistribute(hare))*/
_SequenceL_tmp148 = eq_list(_SequenceL__Arg_newTortoise, _SequenceL__Arg_newHare);	/*advent6.sl:43: equalList(newTortoise, newHare)*/
if (_SequenceL_tmp148)	/*advent6.sl:43: newHare when equalList(newTortoise, newHare)  else floyd(newTortoise, newHare)*/
{
_SequenceL__resultConv = _SequenceL__Arg_newHare;	/*advent6.sl:42: newHare*/
}
else
{
_swap(_SequenceL___Arg_tortoise_tco, _SequenceL__Arg_newTortoise);	
_swap(_SequenceL___Arg_hare_tco, _SequenceL__Arg_newHare);	
goto floyd_advent6_label_tco;	/*advent6.sl:43: floyd(newTortoise, newHare)*/
}
_SequenceL__Arg_newTortoise.delete_data(true);	
_SequenceL__Arg_newHare.delete_data(true);	
_SequenceL_tmp147.delete_data(true);	
_SequenceL_tmp147.finished();	
_SequenceL__Arg_newHare.finished();	
_SequenceL__Arg_newTortoise.finished();	
}
void SequenceL_findStartOfCycle_0(::Sequence< int > &_SequenceL__Arg_a, ::_sl_StepRecord_0 &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL__Arg_hare(cspace);
::Sequence< int > _SequenceL__delete_opttmp1(cspace);
::Sequence< int > _SequenceL_tmp151(cspace);
::Sequence< int > _SequenceL__delete_opttmp2(cspace);

_SequenceL__Arg_a.clone(_SequenceL__delete_opttmp1);	/*advent6.sl:58: floyd(a, copy(a))*/
_SequenceL__Arg_a.clone(_SequenceL__delete_opttmp2);	/*advent6.sl:58: copy(a)*/
SequenceL_copy_0(_SequenceL__delete_opttmp2, _SequenceL_tmp151);	/*advent6.sl:58: copy(a)*/
_SequenceL__delete_opttmp2.delete_data(true);	
_SequenceL__delete_opttmp2.finished();	
SequenceL_floyd_0(_SequenceL__delete_opttmp1, _SequenceL_tmp151, _SequenceL__Arg_hare);	/*advent6.sl:58: floyd(a, copy(a))*/
_SequenceL__delete_opttmp1.delete_data(true);	
_SequenceL_tmp151.delete_data(true);	
_SequenceL_tmp151.finished();	
_SequenceL__delete_opttmp1.finished();	
SequenceL_moveToMeet_0(_SequenceL__Arg_a, _SequenceL__Arg_hare, _SequenceL__resultConv);	/*advent6.sl:59: moveToMeet(a, hare)*/
_SequenceL__Arg_hare.delete_data(true);	
_SequenceL__Arg_hare.finished();	
}
void SequenceL_integerPowerHelper_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int _SequenceL__Arg_val, int &_SequenceL__resultConv)
{
int _SequenceL___Arg_y_tco;
int _SequenceL___Arg_val_tco;
int _SequenceL_tmp182;
int _SequenceL_tmp183;

_SequenceL___Arg_y_tco = _SequenceL__Arg_y;	
_SequenceL___Arg_val_tco = _SequenceL__Arg_val;	
integerPowerHelper_Math_label_tco:	
if ((_SequenceL___Arg_y_tco < 1))	/*Math.sl:20: val when y < 1	else		integerPowerHelper(x, y - 1, val * x)*/
{
_SequenceL__resultConv = _SequenceL___Arg_val_tco;	/*Math.sl:18: val*/
}
else
{
_SequenceL_tmp182 = (_SequenceL___Arg_y_tco - 1);	/*Math.sl:20: y - 1*/
_SequenceL_tmp183 = (_SequenceL___Arg_val_tco * _SequenceL__Arg_x);	/*Math.sl:20: val * x*/
_SequenceL___Arg_y_tco = _SequenceL_tmp182;	
_SequenceL___Arg_val_tco = _SequenceL_tmp183;	
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
int _SequenceL_tmp244;
int _SequenceL__Arg_place;
int _SequenceL_tmp245;

_SequenceL__resultConv.setSize(_SequenceL__Arg_numString.size());	/*Conversion.sl:60: charToInt(numString[i]) * place*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_numString.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
SequenceL_charToInt_3((*(_SequenceL__Arg_numString.get_ptr(_SequenceL__Index_i))), _SequenceL_tmp244);	/*Conversion.sl:60: charToInt(numString[i])*/
_SequenceL_tmp245 = (_SequenceL__Arg_numString.size() - _SequenceL__Index_i);	/*Conversion.sl:58: size(numString) - i*/
SequenceL_integerPower_5(10, _SequenceL_tmp245, _SequenceL__Arg_place);	/*Conversion.sl:58: integerPower(10, (size(numString) - i))*/
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (_SequenceL_tmp244 * _SequenceL__Arg_place);	/*Conversion.sl:60: charToInt(numString[i]) * place*/
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
bool _SequenceL_tmp321;
int _SequenceL_tmp324;
int _SequenceL_tmp326;

_SequenceL___Arg_i_tco = _SequenceL__Arg_i;	
trimNonNumeric_Conversion_label_tco:	
if ((_SequenceL___Arg_i_tco > _SequenceL__Arg_numString.size()))	/*Conversion.sl:53: numString when i > size(numString)	else		take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL__resultConv = _SequenceL__Arg_numString;	/*Conversion.sl:49: numString*/
}
else
{
SequenceL_isDigit_1((*(_SequenceL__Arg_numString.get_ptr(_SequenceL___Arg_i_tco))), _SequenceL_tmp321);	/*Conversion.sl:52: isDigit(numString[i])*/
if (!_SequenceL_tmp321)	/*Conversion.sl:53: take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL_tmp324 = (_SequenceL___Arg_i_tco - 1);	/*Conversion.sl:51: i-1*/
SequenceL_take_2(_SequenceL__Arg_numString, _SequenceL_tmp324, _SequenceL__resultConv);	/*Conversion.sl:51: take(numString, i-1)*/
}
else
{
_SequenceL_tmp326 = (_SequenceL___Arg_i_tco + 1);	/*Conversion.sl:53: i + 1*/
_SequenceL___Arg_i_tco = _SequenceL_tmp326;	
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
bool _SequenceL_tmp403;
char _SequenceL_tmp402;
::Sequence< char > _SequenceL_tmp405(cspace);

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
_SequenceL_tmp402 = _SequenceL___Arg_input_tco.head();	/*String.sl:10: head(input)*/
SequenceL_isWhiteSpace_1(_SequenceL_tmp402, _SequenceL_tmp403);	/*String.sl:11: isWhiteSpace(head(input))*/
if (_SequenceL_tmp403)	/*String.sl:12: trimStart(tail(input)) when isWhiteSpace(head(input))	else		input*/
{
_SequenceL___Arg_input_tco.tail(_SequenceL_tmp405);	/*String.sl:10: tail(input)*/
_swap(_SequenceL___Arg_input_tco, _SequenceL_tmp405);	
goto trimStart_String_label_tco;	/*String.sl:10: trimStart(tail(input))*/
}
else
{
_SequenceL__resultConv = _SequenceL___Arg_input_tco;	/*String.sl:12: input*/
}
}
_SequenceL_tmp405.delete_data(true);	
_SequenceL_tmp405.finished();	
}
void SequenceL_stringToInt_3(::Sequence< char > &_SequenceL__Arg_numString, int &_SequenceL__resultConv)
{
::Sequence< char > _SequenceL__Arg_trimmed(cspace);
char _SequenceL_tmp410;
int _SequenceL_tmp414;
::Sequence< char > _SequenceL_tmp413(cspace);
char _SequenceL_tmp416;
::Sequence< char > _SequenceL_tmp419(cspace);
::Sequence< int > _SequenceL_tmp421(cspace);
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
_SequenceL_tmp410 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:41: head(trimmed)*/
if ((_SequenceL_tmp410 == '-'))	/*Conversion.sl:45: - stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp413);	/*Conversion.sl:41: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
SequenceL_stringToInt_3(_SequenceL_tmp413, _SequenceL_tmp414);	/*Conversion.sl:41: stringToInt(tail(trimmed))*/
_SequenceL_tmp413.finished();	
_SequenceL__resultConv = (-_SequenceL_tmp414);	/*Conversion.sl:41: - stringToInt(tail(trimmed))*/
}
else
{
_SequenceL_tmp416 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:43: head(trimmed)*/
if ((_SequenceL_tmp416 == '+'))	/*Conversion.sl:45: stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp419);	/*Conversion.sl:43: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
SequenceL_stringToInt_3(_SequenceL_tmp419, _SequenceL__resultConv);	/*Conversion.sl:43: stringToInt(tail(trimmed))*/
_SequenceL_tmp419.finished();	
}
else
{
SequenceL_trimNonNumeric_3(_SequenceL__Arg_trimmed, 1, _SequenceL__Arg_justNumber);	/*Conversion.sl:37: trimNonNumeric(trimmed, 1)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
SequenceL_atoIWorker_3(_SequenceL__Arg_justNumber, _SequenceL_tmp421);	/*Conversion.sl:45: atoIWorker(justNumber)*/
_SequenceL__Arg_justNumber.delete_data(true);	
_SequenceL__Arg_justNumber.finished();	
_SequenceL__resultConv = sum(_SequenceL_tmp421);	/*Conversion.sl:45: sum(atoIWorker(justNumber))*/
_SequenceL_tmp421.delete_data(true);	
_SequenceL_tmp421.finished();	
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
::Sequence< Empty > _SequenceL_tmp441(cspace);
::Sequence< int > _SequenceL_tmp447(cspace);
::Sequence< int > _SequenceL_tmp443(cspace);
::Sequence< int > _SequenceL__Arg_indexes(cspace);
::Sequence< int > _SequenceL_tmp445(cspace);
::Sequence< int > _SequenceL_tmp452(cspace);
::Sequence< int > _SequenceL_tmp448(cspace);
::Sequence< int > _SequenceL_tmp450(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp453(cspace);

if ((_SequenceL__Arg_list.size() == 0))	/*Sequence.sl:54: [] when size(list) = 0	else		multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
{
_SequenceL_tmp441.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp441, _SequenceL__resultConv);	
_SequenceL_tmp441.delete_data(true);	
_SequenceL_tmp441.finished();	
}
else
{
_SequenceL_tmp443.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp443.get_ptr(1))) = 1;	/*Sequence.sl:54: 1*/
SequenceL_indexesOf_2(_SequenceL__Arg_list, _SequenceL__Arg_delimiter, _SequenceL__Arg_indexes);	/*Sequence.sl:50: indexesOf(list, delimiter)*/
_SequenceL_tmp445.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes + 1*/
SIMD_DIRECTIVE
for (int _SequenceL__i446=1,_stop_val__SequenceL__i446=_SequenceL_tmp445.size(); _SequenceL__i446<=_stop_val__SequenceL__i446; _SequenceL__i446+=1)
{
(*(_SequenceL_tmp445.get_ptr(_SequenceL__i446))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i446))) + 1);	/*Sequence.sl:54: indexes + 1*/
}
append(_SequenceL_tmp443, _SequenceL_tmp445, _SequenceL_tmp447);	/*Sequence.sl:54: [1] ++ (indexes + 1)*/
_SequenceL_tmp443.delete_data(true);	
_SequenceL_tmp445.delete_data(true);	
_SequenceL_tmp445.finished();	
_SequenceL_tmp443.finished();	
_SequenceL_tmp448.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes - 1*/
SIMD_DIRECTIVE
for (int _SequenceL__i449=1,_stop_val__SequenceL__i449=_SequenceL_tmp448.size(); _SequenceL__i449<=_stop_val__SequenceL__i449; _SequenceL__i449+=1)
{
(*(_SequenceL_tmp448.get_ptr(_SequenceL__i449))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i449))) - 1);	/*Sequence.sl:54: indexes - 1*/
}
_SequenceL__Arg_indexes.delete_data(true);	
_SequenceL__Arg_indexes.finished();	
_SequenceL_tmp450.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp450.get_ptr(1))) = _SequenceL__Arg_list.size();	/*Sequence.sl:54: size(list)*/
append(_SequenceL_tmp448, _SequenceL_tmp450, _SequenceL_tmp452);	/*Sequence.sl:54: (indexes - 1) ++ [size(list)]*/
_SequenceL_tmp448.delete_data(true);	
_SequenceL_tmp450.delete_data(true);	
_SequenceL_tmp450.finished();	
_SequenceL_tmp448.finished();	
_SequenceL_tmp453.setSize(_SequenceL_tmp447.size());	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
SIMD_DIRECTIVE
for (int _SequenceL__i454=1,_stop_val__SequenceL__i454=_SequenceL_tmp453.size(); _SequenceL__i454<=_stop_val__SequenceL__i454; _SequenceL__i454+=1)
{
ellipsis((*(_SequenceL_tmp447.get_ptr(_SequenceL__i454))), (*(_SequenceL_tmp452.get_ptr(_SequenceL__i454))), (*(_SequenceL_tmp453.get_ptr(_SequenceL__i454))));	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
}
_SequenceL_tmp447.delete_data(true);	
_SequenceL_tmp452.delete_data(true);	
_SequenceL_tmp452.finished();	
_SequenceL_tmp447.finished();	
SequenceL_multipleIndexes_2(_SequenceL__Arg_list, _SequenceL_tmp453, _SequenceL__resultConv);	/*Sequence.sl:54: multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
_SequenceL_tmp453.delete_data(true);	
_SequenceL_tmp453.finished();	
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
bool _SequenceL_tmp490;
char _SequenceL_tmp489;
::Sequence< char > _SequenceL_tmp492(cspace);
bool _SequenceL_tmp495;
char _SequenceL_tmp494;
::Sequence< char > _SequenceL_tmp497(cspace);

if (_SequenceL__Arg_s.onlyInstance())	
{
_SequenceL___Arg_s_tco.replaceSequence(_SequenceL__Arg_s);	
}
else
{
_SequenceL___Arg_s_tco.hard_copy(_SequenceL__Arg_s,__LINE__);	
}
trim_advent6_label_tco:	
_SequenceL_tmp489 = _SequenceL___Arg_s_tco.head();	/*advent6.sl:6: head(s)*/
SequenceL_isWhiteSpace_1(_SequenceL_tmp489, _SequenceL_tmp490);	/*advent6.sl:7: isWhiteSpace(head(s))*/
if (_SequenceL_tmp490)	/*advent6.sl:8: trim(tail(s)) when isWhiteSpace(head(s))  else trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
_SequenceL___Arg_s_tco.tail(_SequenceL_tmp492);	/*advent6.sl:6: tail(s)*/
_swap(_SequenceL___Arg_s_tco, _SequenceL_tmp492);	
goto trim_advent6_label_tco;	/*advent6.sl:6: trim(tail(s))*/
}
else
{
SequenceL_last_2(_SequenceL___Arg_s_tco, _SequenceL_tmp494);	/*advent6.sl:7: last(s)*/
SequenceL_isWhiteSpace_1(_SequenceL_tmp494, _SequenceL_tmp495);	/*advent6.sl:8: isWhiteSpace(last(s))*/
if (_SequenceL_tmp495)	/*advent6.sl:8: trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
SequenceL_allButLast_2(_SequenceL___Arg_s_tco, _SequenceL_tmp497);	/*advent6.sl:7: allButLast(s)*/
_swap(_SequenceL___Arg_s_tco, _SequenceL_tmp497);	
goto trim_advent6_label_tco;	/*advent6.sl:7: trim(allButLast(s))*/
}
else
{
_SequenceL__resultConv = _SequenceL___Arg_s_tco;	/*advent6.sl:8: s*/
}
}
_SequenceL_tmp492.delete_data(true);	
_SequenceL_tmp497.delete_data(true);	
_SequenceL_tmp497.finished();	
_SequenceL_tmp492.finished();	
}
void SequenceL_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_s, ::Sequence< int > &_SequenceL__resultConv)
{
::_sl_StepRecord_0 _SequenceL__Arg_start(cspace);
::Sequence< ::Sequence< char > > _SequenceL_tmp501(cspace);
::Sequence< char > _SequenceL_tmp500(cspace);
::Sequence< int > _SequenceL__Arg_regs(cspace);
::Sequence< char > _SequenceL__delete_opttmp1(cspace);
int _SequenceL__Arg_cycle;
::Sequence< int > _SequenceL_tmp506(cspace);
::Sequence< int > _SequenceL__delete_opttmp2(cspace);

_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
SequenceL_trim_0((*(_SequenceL__Arg_s.get_ptr(1))), _SequenceL_tmp500);	/*advent6.sl:70: trim(s[1])*/
SequenceL_split_2(_SequenceL_tmp500, '\t', _SequenceL_tmp501);	/*advent6.sl:70: split(trim(s[1]), '\t')*/
_SequenceL_tmp500.delete_data(true);	
_SequenceL_tmp500.finished();	
_SequenceL__Arg_regs.setSize(_SequenceL_tmp501.size());	/*advent6.sl:70: stringToInt(split(trim(s[1]), '\t'))*/
SIMD_DIRECTIVE
for (int _SequenceL__i502=1,_stop_val__SequenceL__i502=_SequenceL__Arg_regs.size(); _SequenceL__i502<=_stop_val__SequenceL__i502; _SequenceL__i502+=1)
{
(*(_SequenceL_tmp501.get_ptr(_SequenceL__i502))).clone(_SequenceL__delete_opttmp1);	/*advent6.sl:70: stringToInt(split(trim(s[1]), '\t'))*/
SequenceL_stringToInt_3(_SequenceL__delete_opttmp1, (*(_SequenceL__Arg_regs.get_ptr(_SequenceL__i502))));	/*advent6.sl:70: stringToInt(split(trim(s[1]), '\t'))*/
_SequenceL__delete_opttmp1.finished();	
}
_SequenceL_tmp501.delete_data(true);	
_SequenceL_tmp501.finished();	
SequenceL_findStartOfCycle_0(_SequenceL__Arg_regs, _SequenceL__Arg_start);	/*advent6.sl:71: findStartOfCycle(regs)*/
_SequenceL__Arg_regs.delete_data(true);	
_SequenceL__Arg_regs.finished();	
_SequenceL__Arg_start.state.clone(_SequenceL__delete_opttmp2);	/*advent6.sl:72: copy(start.state)*/
SequenceL_copy_0(_SequenceL__delete_opttmp2, _SequenceL_tmp506);	/*advent6.sl:72: copy(start.state)*/
_SequenceL__delete_opttmp2.delete_data(true);	
_SequenceL__delete_opttmp2.finished();	
SequenceL_countCycle_0(_SequenceL__Arg_start.state, _SequenceL_tmp506, 0, _SequenceL__Arg_cycle);	/*advent6.sl:72: countCycle(start.state, copy(start.state), 0)*/
_SequenceL__Arg_start.state.delete_data(true);	
_SequenceL__Arg_start.state.finished();	
_SequenceL_tmp506.delete_data(true);	
_SequenceL_tmp506.finished();	
(*(_SequenceL__resultConv.get_ptr(1))) = (_SequenceL__Arg_start.steps + _SequenceL__Arg_cycle);	/*advent6.sl:74: start.steps + cycle*/
_SequenceL__Arg_start._delete_data(true);	
_SequenceL__Arg_start._finished();	
(*(_SequenceL__resultConv.get_ptr(2))) = _SequenceL__Arg_cycle;	/*advent6.sl:74: cycle*/
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
