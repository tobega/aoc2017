#include "advent16.h"
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
void SequenceL_transform_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__Arg_b, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_s, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv);
void SequenceL_split_1(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_delimiter, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv);
void SequenceL_applyMoves_0(::Sequence< int > &_SequenceL__Arg_place, ::Sequence< ::Sequence< char > > &_SequenceL__Arg_moves, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_applyMove_0(::Sequence< char > &_SequenceL__Arg_move, ::Sequence< int > &_SequenceL__Arg_place, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_stringToInt_2(::Sequence< char > &_SequenceL__Arg_numString, int &_SequenceL__resultConv);
void SequenceL_doSpin_0(int _SequenceL__Arg_s, ::Sequence< int > &_SequenceL__Arg_place, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_multipleIndexes_1(::Sequence< char > &_SequenceL__Arg_list, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_indexes, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv);
void SequenceL_trimStart_3(::Sequence< char > &_SequenceL__Arg_input, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL_isWhiteSpace_3(char _SequenceL__Arg_input, bool &_SequenceL__resultConv);
void SequenceL_trimNonNumeric_2(::Sequence< char > &_SequenceL__Arg_numString, int _SequenceL__Arg_i, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL_isDigit_3(char _SequenceL__Arg_char, bool &_SequenceL__resultConv);
void SequenceL_take_1(::Sequence< char > &_SequenceL__Arg_list, int _SequenceL__Arg_n, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL_atoIWorker_2(::Sequence< char > &_SequenceL__Arg_numString, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_charToInt_2(char _SequenceL__Arg_char, int &_SequenceL__resultConv);
void SequenceL_integerPower_4(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv);
void SequenceL_integerPowerHelper_4(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int _SequenceL__Arg_val, int &_SequenceL__resultConv);
void SequenceL_applyRenames_0(::Sequence< int > &_SequenceL__Arg_reverseKind, ::Sequence< ::Sequence< char > > &_SequenceL__Arg_moves, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_toKind_0(::Sequence< int > &_SequenceL__Arg_reverseKind, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_applyRename_0(::Sequence< char > &_SequenceL__Arg_move, ::Sequence< int > &_SequenceL__Arg_reverseKind, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_firstIndexOf_1(::Sequence< int > &_SequenceL__Arg_list, int _SequenceL__Arg_element, int &_SequenceL__resultConv);
void SequenceL_indexesOf_1(::Sequence< int > &_SequenceL__Arg_list, int _SequenceL__Arg_element, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_firstIndexOf_1(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_element, int &_SequenceL__resultConv);
void SequenceL_indexesOf_1(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_element, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_doPermute_0(::Sequence< int > &_SequenceL__Arg_p, ::Sequence< int > &_SequenceL__Arg_place, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_setElementAt_1(::Sequence< int > &_SequenceL__Arg_list, int _SequenceL__Arg_location, int _SequenceL__Arg_newElement, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_stringify_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL_bits_0(::Sequence< int > &_SequenceL__Arg_b, int _SequenceL__Arg_pow2, int _SequenceL__Arg_num, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_powerTs_0(::Sequence< ::Sequence< int > > &_SequenceL__Arg_ts, ::Sequence< int > &_SequenceL__Arg_t, int _SequenceL__Arg_f, int _SequenceL__Arg_total, ::Sequence< ::Sequence< int > > &_SequenceL__resultConv);
void SequenceL_fol_0(::Sequence< ::Sequence< int > > &_SequenceL__Arg_inputList, _sl_fun_pointer* _SequenceL__Arg_operator, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_applyFol_0(::Sequence< ::Sequence< int > > &_SequenceL__Arg_inputList, _sl_fun_pointer* _SequenceL__Arg_operator, ::Sequence< ::Sequence< int > > &_SequenceL__resultConv);
void SequenceL__parallel_transform_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__Arg_b, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt1_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_a;
		::Sequence< int > &_SequenceL__Arg_b;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result2;

	public:
		SequenceL__sl_main_nt1_(::Sequence< int > &_inp1, ::Sequence< int > &_inp2, int _inp3, int _inp4, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_a(_inp1), _SequenceL__Arg_b(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result2(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_s, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv);
class SequenceL__sl_main_nt9_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_finalS;
		::Sequence< int > &_SequenceL__Arg_finalP;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result10;

	public:
		SequenceL__sl_main_nt9_(::Sequence< int > &_inp1, ::Sequence< int > &_inp2, int _inp3, int _inp4, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_finalS(_inp1), _SequenceL__Arg_finalP(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result10(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt7_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_firstSubstitution;
		int _SequenceL_tmp693;
		::Sequence< int > &_SequenceL_tmp689;
		 ::Sequence< ::Sequence< int > > &_SequenceL__result8;

	public:
		SequenceL__sl_main_nt7_(::Sequence< int > &_inp1, int _inp2, ::Sequence< int > &_inp3, ::Sequence< ::Sequence< int > > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_firstSubstitution(_inp1), _SequenceL_tmp693(_inp2), _SequenceL_tmp689(_inp3), _SequenceL__result8(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt5_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_firstPermutation;
		int _SequenceL_tmp683;
		::Sequence< int > &_SequenceL_tmp679;
		 ::Sequence< ::Sequence< int > > &_SequenceL__result6;

	public:
		SequenceL__sl_main_nt5_(::Sequence< int > &_inp1, int _inp2, ::Sequence< int > &_inp3, ::Sequence< ::Sequence< int > > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_firstPermutation(_inp1), _SequenceL_tmp683(_inp2), _SequenceL_tmp679(_inp3), _SequenceL__result6(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt3_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_firstSubstitution;
		::Sequence< int > &_SequenceL__Arg_firstPermutation;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result4;

	public:
		SequenceL__sl_main_nt3_(::Sequence< int > &_inp1, ::Sequence< int > &_inp2, int _inp3, int _inp4, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_firstSubstitution(_inp1), _SequenceL__Arg_firstPermutation(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result4(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
::Sequence< char > _SequenceL_alfabet_0(cspace);
void SequenceL__parallel_split_1(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_delimiter, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv);
class SequenceL__sl_main_nt15_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL_tmp661;
		::Sequence< int > &_SequenceL_tmp666;
		 ::Sequence< ::Sequence< int > > &_SequenceL__result16;

	public:
		SequenceL__sl_main_nt15_(::Sequence< int > &_inp1, ::Sequence< int > &_inp2, ::Sequence< ::Sequence< int > > &_out1): NTObj(__LINE__,false), _SequenceL_tmp661(_inp1), _SequenceL_tmp666(_inp2), _SequenceL__result16(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt13_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_indexes;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result14;

	public:
		SequenceL__sl_main_nt13_(::Sequence< int > &_inp1, int _inp2, int _inp3, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_indexes(_inp1), _SequenceL__start(_inp2), _SequenceL__stop(_inp3), _SequenceL__result14(_out1)
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
void SequenceL__parallel_applyMoves_0(::Sequence< int > &_SequenceL__Arg_place, ::Sequence< ::Sequence< char > > &_SequenceL__Arg_moves, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL__parallel_applyMove_0(::Sequence< char > &_SequenceL__Arg_move, ::Sequence< int > &_SequenceL__Arg_place, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt17_: public NTObj
{
	private:
		::Sequence< ::Sequence< char > > &_SequenceL_tmp644;
		 ::Sequence< int > &_SequenceL__result18;
		 ::Sequence< int > &_SequenceL__result19;

	public:
		SequenceL__sl_main_nt17_(::Sequence< ::Sequence< char > > &_inp1, ::Sequence< int > &_out1, ::Sequence< int > &_out2): NTObj(__LINE__,false), _SequenceL_tmp644(_inp1), _SequenceL__result18(_out1), _SequenceL__result19(_out2)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_stringToInt_2(::Sequence< char > &_SequenceL__Arg_numString, int &_SequenceL__resultConv);
void SequenceL__parallel_doSpin_0(int _SequenceL__Arg_s, ::Sequence< int > &_SequenceL__Arg_place, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt20_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_place;
		::Sequence< int > &_SequenceL_tmp602;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result21;

	public:
		SequenceL__sl_main_nt20_(::Sequence< int > &_inp1, ::Sequence< int > &_inp2, int _inp3, int _inp4, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_place(_inp1), _SequenceL_tmp602(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result21(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_multipleIndexes_1(::Sequence< char > &_SequenceL__Arg_list, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_indexes, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv);
class SequenceL__sl_main_nt22_: public NTObj
{
	private:
		::Sequence< ::Sequence< int > > &_SequenceL__Arg_indexes;
		::Sequence< char > &_SequenceL__Arg_list;
		 ::Sequence< ::Sequence< char > > &_SequenceL__result23;

	public:
		SequenceL__sl_main_nt22_(::Sequence< ::Sequence< int > > &_inp1, ::Sequence< char > &_inp2, ::Sequence< ::Sequence< char > > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_indexes(_inp1), _SequenceL__Arg_list(_inp2), _SequenceL__result23(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_trimStart_3(::Sequence< char > &_SequenceL__Arg_input, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_isWhiteSpace_3(char _SequenceL__Arg_input, bool &_SequenceL__resultConv);
void SequenceL__parallel_trimNonNumeric_2(::Sequence< char > &_SequenceL__Arg_numString, int _SequenceL__Arg_i, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_isDigit_3(char _SequenceL__Arg_char, bool &_SequenceL__resultConv);
void SequenceL__parallel_take_1(::Sequence< char > &_SequenceL__Arg_list, int _SequenceL__Arg_n, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_atoIWorker_2(::Sequence< char > &_SequenceL__Arg_numString, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt24_: public NTObj
{
	private:
		::Sequence< char > &_SequenceL__Arg_numString;
		 ::Sequence< int > &_SequenceL__result25;

	public:
		SequenceL__sl_main_nt24_(::Sequence< char > &_inp1, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_numString(_inp1), _SequenceL__result25(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_charToInt_2(char _SequenceL__Arg_char, int &_SequenceL__resultConv);
void SequenceL__parallel_integerPower_4(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv);
void SequenceL__parallel_integerPowerHelper_4(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int _SequenceL__Arg_val, int &_SequenceL__resultConv);
void SequenceL__parallel_applyRenames_0(::Sequence< int > &_SequenceL__Arg_reverseKind, ::Sequence< ::Sequence< char > > &_SequenceL__Arg_moves, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL__parallel_toKind_0(::Sequence< int > &_SequenceL__Arg_reverseKind, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt26_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_reverseKind;
		 ::Sequence< int > &_SequenceL__result27;

	public:
		SequenceL__sl_main_nt26_(::Sequence< int > &_inp1, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_reverseKind(_inp1), _SequenceL__result27(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_applyRename_0(::Sequence< char > &_SequenceL__Arg_move, ::Sequence< int > &_SequenceL__Arg_reverseKind, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt28_: public NTObj
{
	private:
		::Sequence< char > &_SequenceL_tmp258;
		::Sequence< char > &_SequenceL_tmp261;
		 ::Sequence< int > &_SequenceL__result29;

	public:
		SequenceL__sl_main_nt28_(::Sequence< char > &_inp1, ::Sequence< char > &_inp2, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL_tmp258(_inp1), _SequenceL_tmp261(_inp2), _SequenceL__result29(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_firstIndexOf_1(::Sequence< int > &_SequenceL__Arg_list, int _SequenceL__Arg_element, int &_SequenceL__resultConv);
void SequenceL__parallel_indexesOf_1(::Sequence< int > &_SequenceL__Arg_list, int _SequenceL__Arg_element, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt30_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_list;
		int _SequenceL__Arg_element;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result31;

	public:
		SequenceL__sl_main_nt30_(::Sequence< int > &_inp1, int _inp2, int _inp3, int _inp4, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_list(_inp1), _SequenceL__Arg_element(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result31(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_firstIndexOf_1(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_element, int &_SequenceL__resultConv);
void SequenceL__parallel_indexesOf_1(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_element, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt32_: public NTObj
{
	private:
		::Sequence< char > &_SequenceL__Arg_list;
		char _SequenceL__Arg_element;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result33;

	public:
		SequenceL__sl_main_nt32_(::Sequence< char > &_inp1, char _inp2, int _inp3, int _inp4, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_list(_inp1), _SequenceL__Arg_element(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result33(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_doPermute_0(::Sequence< int > &_SequenceL__Arg_p, ::Sequence< int > &_SequenceL__Arg_place, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL__parallel_setElementAt_1(::Sequence< int > &_SequenceL__Arg_list, int _SequenceL__Arg_location, int _SequenceL__Arg_newElement, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt34_: public NTObj
{
	private:
		int _SequenceL__Arg_location;
		::Sequence< int > &_SequenceL__Arg_list;
		int _SequenceL__Arg_newElement;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result35;

	public:
		SequenceL__sl_main_nt34_(int _inp1, ::Sequence< int > &_inp2, int _inp3, int _inp4, int _inp5, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_location(_inp1), _SequenceL__Arg_list(_inp2), _SequenceL__Arg_newElement(_inp3), _SequenceL__start(_inp4), _SequenceL__stop(_inp5), _SequenceL__result35(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_stringify_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< char > &_SequenceL__resultConv);
class SequenceL__sl_main_nt36_: public NTObj
{
	private:
		::Sequence< char > &_SequenceL_tmp196;
		::Sequence< int > &_SequenceL__Arg_a;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< char > &_SequenceL__result37;

	public:
		SequenceL__sl_main_nt36_(::Sequence< char > &_inp1, ::Sequence< int > &_inp2, int _inp3, int _inp4, ::Sequence< char > &_out1): NTObj(__LINE__,false), _SequenceL_tmp196(_inp1), _SequenceL__Arg_a(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result37(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
int _SequenceL_noOfTimes_0;
void SequenceL__parallel_bits_0(::Sequence< int > &_SequenceL__Arg_b, int _SequenceL__Arg_pow2, int _SequenceL__Arg_num, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL__parallel_powerTs_0(::Sequence< ::Sequence< int > > &_SequenceL__Arg_ts, ::Sequence< int > &_SequenceL__Arg_t, int _SequenceL__Arg_f, int _SequenceL__Arg_total, ::Sequence< ::Sequence< int > > &_SequenceL__resultConv);
class SequenceL__sl_main_nt38_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_t;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result39;

	public:
		SequenceL__sl_main_nt38_(::Sequence< int > &_inp1, int _inp2, int _inp3, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_t(_inp1), _SequenceL__start(_inp2), _SequenceL__stop(_inp3), _SequenceL__result39(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_fol_0(::Sequence< ::Sequence< int > > &_SequenceL__Arg_inputList, _sl_fun_pointer* _SequenceL__Arg_operator, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL__parallel_applyFol_0(::Sequence< ::Sequence< int > > &_SequenceL__Arg_inputList, _sl_fun_pointer* _SequenceL__Arg_operator, ::Sequence< ::Sequence< int > > &_SequenceL__resultConv);
class SequenceL__sl_main_nt42_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL_tmp67;
		::Sequence< ::Sequence< int > > &_SequenceL__Arg_inputList;
		_sl_fun_pointer* _SequenceL__Arg_operator;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< ::Sequence< int > > &_SequenceL__result43;

	public:
		SequenceL__sl_main_nt42_(::Sequence< int > &_inp1, ::Sequence< ::Sequence< int > > &_inp2, _sl_fun_pointer* _inp3, int _inp4, int _inp5, ::Sequence< ::Sequence< int > > &_out1): NTObj(__LINE__,false), _SequenceL_tmp67(_inp1), _SequenceL__Arg_inputList(_inp2), _SequenceL__Arg_operator(_inp3), _SequenceL__start(_inp4), _SequenceL__stop(_inp5), _SequenceL__result43(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt40_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL_tmp64;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result41;

	public:
		SequenceL__sl_main_nt40_(::Sequence< int > &_inp1, int _inp2, int _inp3, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL_tmp64(_inp1), _SequenceL__start(_inp2), _SequenceL__stop(_inp3), _SequenceL__result41(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_applyMoves_i_c_0: public task
{
	private:
		 ::Sequence< int > &_SequenceL__Arg_place;
		 ::Sequence< ::Sequence< char > > &_SequenceL__Arg_moves;
		 ::Sequence< int > &_SequenceL__resultConv;
::Sequence< int > _SequenceL___Arg_place_tco;
::Sequence< ::Sequence< char > > _SequenceL___Arg_moves_tco;
::Sequence< int > _SequenceL__Arg_newPlace;
::Sequence< char > _SequenceL__Arg_move;
::Sequence< ::Sequence< char > > _SequenceL_tmp653;

	public:
		SequenceL__sl_main_applyMoves_i_c_0(::Sequence< int > &_inp1, ::Sequence< ::Sequence< char > > &_inp2, ::Sequence< int > &_out1): _SequenceL__Arg_place(_inp1), _SequenceL__Arg_moves(_inp2), _SequenceL__resultConv(_out1), _SequenceL___Arg_place_tco(cspace), _SequenceL___Arg_moves_tco(cspace), _SequenceL__Arg_newPlace(cspace), _SequenceL__Arg_move(cspace), _SequenceL_tmp653(cspace)
		{
		}
		task *execute();

};
class SequenceL__sl_main_applyRenames_i_c_0: public task
{
	private:
		 ::Sequence< int > &_SequenceL__Arg_reverseKind;
		 ::Sequence< ::Sequence< char > > &_SequenceL__Arg_moves;
		 ::Sequence< int > &_SequenceL__resultConv;
::Sequence< int > _SequenceL___Arg_reverseKind_tco;
::Sequence< ::Sequence< char > > _SequenceL___Arg_moves_tco;
::Sequence< int > _SequenceL__Arg_newReverseKind;
::Sequence< char > _SequenceL__Arg_move;
::Sequence< ::Sequence< char > > _SequenceL_tmp268;

	public:
		SequenceL__sl_main_applyRenames_i_c_0(::Sequence< int > &_inp1, ::Sequence< ::Sequence< char > > &_inp2, ::Sequence< int > &_out1): _SequenceL__Arg_reverseKind(_inp1), _SequenceL__Arg_moves(_inp2), _SequenceL__resultConv(_out1), _SequenceL___Arg_reverseKind_tco(cspace), _SequenceL___Arg_moves_tco(cspace), _SequenceL__Arg_newReverseKind(cspace), _SequenceL__Arg_move(cspace), _SequenceL_tmp268(cspace)
		{
		}
		task *execute();

};
class SequenceL__sl_main_bits_i_i_i_0: public task
{
	private:
		 ::Sequence< int > &_SequenceL__Arg_b;
		int _SequenceL__Arg_pow2;
		int _SequenceL__Arg_num;
		 ::Sequence< int > &_SequenceL__resultConv;
::Sequence< int > _SequenceL___Arg_b_tco;
int _SequenceL___Arg_pow2_tco;
int _SequenceL___Arg_num_tco;
int _SequenceL_tmp188;
int _SequenceL_tmp189;
::Sequence< int > _SequenceL_tmp193;
::Sequence< int > _SequenceL_tmp191;
int _SequenceL_tmp194;
int _SequenceL_tmp195;

	public:
		SequenceL__sl_main_bits_i_i_i_0(::Sequence< int > &_inp1, int _inp2, int _inp3, ::Sequence< int > &_out1): _SequenceL__Arg_b(_inp1), _SequenceL__Arg_pow2(_inp2), _SequenceL__Arg_num(_inp3), _SequenceL__resultConv(_out1), _SequenceL___Arg_b_tco(cspace), _SequenceL_tmp193(cspace), _SequenceL_tmp191(cspace)
		{
		}
		task *execute();

};
class SequenceL__sl_main_powerTs_i_i_i_i_0: public task
{
	private:
		 ::Sequence< ::Sequence< int > > &_SequenceL__Arg_ts;
		 ::Sequence< int > &_SequenceL__Arg_t;
		int _SequenceL__Arg_f;
		int _SequenceL__Arg_total;
		 ::Sequence< ::Sequence< int > > &_SequenceL__resultConv;
::Sequence< ::Sequence< int > > _SequenceL___Arg_ts_tco;
::Sequence< int > _SequenceL___Arg_t_tco;
int _SequenceL___Arg_f_tco;
::Sequence< ::Sequence< int > > _SequenceL_tmp174;
::Sequence< ::Sequence< int > > _SequenceL_tmp179;
::Sequence< ::Sequence< int > > _SequenceL_tmp177;
::Sequence< int > _SequenceL_tmp180;
int _SequenceL_tmp181;

	public:
		SequenceL__sl_main_powerTs_i_i_i_i_0(::Sequence< ::Sequence< int > > &_inp1, ::Sequence< int > &_inp2, int _inp3, int _inp4, ::Sequence< ::Sequence< int > > &_out1): _SequenceL__Arg_ts(_inp1), _SequenceL__Arg_t(_inp2), _SequenceL__Arg_f(_inp3), _SequenceL__Arg_total(_inp4), _SequenceL__resultConv(_out1), _SequenceL___Arg_ts_tco(cspace), _SequenceL___Arg_t_tco(cspace), _SequenceL_tmp174(cspace), _SequenceL_tmp179(cspace), _SequenceL_tmp177(cspace), _SequenceL_tmp180(cspace)
		{
		}
		task *execute();

};
class SequenceL__sl_main_fol_i_z_0: public task
{
	private:
		 ::Sequence< ::Sequence< int > > &_SequenceL__Arg_inputList;
		_sl_fun_pointer* _SequenceL__Arg_operator;
		 ::Sequence< int > &_SequenceL__resultConv;
::Sequence< ::Sequence< int > > _SequenceL___Arg_inputList_tco;
::Sequence< ::Sequence< int > > _SequenceL_tmp170;

	public:
		SequenceL__sl_main_fol_i_z_0(::Sequence< ::Sequence< int > > &_inp1, _sl_fun_pointer* _inp2, ::Sequence< int > &_out1): _SequenceL__Arg_inputList(_inp1), _SequenceL__Arg_operator(_inp2), _SequenceL__resultConv(_out1), _SequenceL___Arg_inputList_tco(cspace), _SequenceL_tmp170(cspace)
		{
		}
		task *execute();

};

_sl_fun_pointer _PointerSequenceL_transform_0[1] = { (_sl_fun_pointer)((void (*)(::Sequence< int >&,::Sequence< int >&,::Sequence< int >&))SequenceL_transform_0)};

void _SequenceL_init_sl_main_globals()
{
{

_SequenceL_alfabet_0 = "abcdefghijklmnop";	/*advent16a.sl:4: "abcdefghijklmnop"*/
}
{

_SequenceL_noOfTimes_0 = 1000000000;	/*advent16a.sl:5: 1000000000*/
}

}

void _SequenceL_delete_sl_main_globals()
{
_SequenceL_alfabet_0.delete_data(false);
_SequenceL_alfabet_0.finished();

}

#ifdef _WIN32
::Sequence< ::Sequence< char > > _sl_vc10_advent16_dummy_1(cspace);
::Sequence< int > _sl_vc10_advent16_dummy_2(cspace);
::Sequence< char > _sl_vc10_advent16_dummy_3(cspace);
::Sequence< Empty > _sl_vc10_advent16_dummy_4(cspace);
::Sequence< ::Sequence< int > > _sl_vc10_advent16_dummy_5(cspace);
#endif

task *SequenceL__sl_main_fol_i_z_0::execute()
{
if (_SequenceL__Arg_inputList.onlyInstance())	
{
_SequenceL___Arg_inputList_tco.replaceSequence(_SequenceL__Arg_inputList);	
_SequenceL__Arg_inputList.delete_data(true);	
}
else
{
_SequenceL___Arg_inputList_tco.hard_copy(_SequenceL__Arg_inputList,__LINE__);	
_SequenceL__Arg_inputList.delete_data(true);	
}
_sl_main_fol_i_z_advent16a_label_tco:	
if ((_SequenceL___Arg_inputList_tco.size() == 1))	/*advent16a.sl:82: head(inputList) when size(inputList) = 1        else                fol(applyFol(inputList, operator), operator)*/
{
_SequenceL___Arg_inputList_tco.head(_SequenceL__resultConv);	/*advent16a.sl:80: head(inputList)*/
}
else
{
SequenceL_applyFol_0(_SequenceL___Arg_inputList_tco, _SequenceL__Arg_operator, _SequenceL_tmp170);	/*advent16a.sl:82: applyFol(inputList, operator)*/
_swap(_SequenceL___Arg_inputList_tco, _SequenceL_tmp170);	
goto _sl_main_fol_i_z_advent16a_label_tco;	/*advent16a.sl:82: fol(applyFol(inputList, operator), operator)*/
}
_SequenceL_tmp170.delete_data(true);	
_SequenceL_tmp170.finished();	
return NULL;
}
task *SequenceL__sl_main_powerTs_i_i_i_i_0::execute()
{
if (_SequenceL__Arg_ts.onlyInstance())	
{
_SequenceL___Arg_ts_tco.replaceSequence(_SequenceL__Arg_ts);	
_SequenceL__Arg_ts.delete_data(true);	
}
else
{
_SequenceL___Arg_ts_tco.hard_copy(_SequenceL__Arg_ts,__LINE__);	
_SequenceL__Arg_ts.delete_data(true);	
}
if (_SequenceL__Arg_t.onlyInstance())	
{
_SequenceL___Arg_t_tco.replaceSequence(_SequenceL__Arg_t);	
_SequenceL__Arg_t.delete_data(true);	
}
else
{
_SequenceL___Arg_t_tco.hard_copy(_SequenceL__Arg_t,__LINE__);	
_SequenceL__Arg_t.delete_data(true);	
}
_SequenceL___Arg_f_tco = _SequenceL__Arg_f;	
_sl_main_powerTs_i_i_i_i_advent16a_label_tco:	
if (((_SequenceL___Arg_f_tco * 2) > _SequenceL__Arg_total))	/*advent16a.sl:56: ts ++ [t] when f*2 > total  else powerTs(ts ++ [t], t[t], f*2, total)*/
{
_SequenceL_tmp174.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp174.get_ptr(1))) = _SequenceL___Arg_t_tco;	/*advent16a.sl:55: t*/
append(_SequenceL___Arg_ts_tco, _SequenceL_tmp174, _SequenceL__resultConv);	/*advent16a.sl:55: ts ++ [t]*/
}
else
{
_SequenceL_tmp177.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp177.get_ptr(1))) = _SequenceL___Arg_t_tco;	/*advent16a.sl:56: t*/
append(_SequenceL___Arg_ts_tco, _SequenceL_tmp177, _SequenceL_tmp179);	/*advent16a.sl:56: ts ++ [t]*/
_SequenceL_tmp180.setSize(_SequenceL___Arg_t_tco.size());	/*advent16a.sl:56: t[t]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index1=1,_stop_val__SequenceL__Index__tmp_index1=_SequenceL_tmp180.size(); _SequenceL__Index__tmp_index1<=_stop_val__SequenceL__Index__tmp_index1; _SequenceL__Index__tmp_index1+=1)
{
(*(_SequenceL_tmp180.get_ptr(_SequenceL__Index__tmp_index1))) = (*(_SequenceL___Arg_t_tco.get_ptr((*(_SequenceL___Arg_t_tco.get_ptr(_SequenceL__Index__tmp_index1))))));	/*advent16a.sl:56: t[t]*/
}
_SequenceL_tmp181 = (_SequenceL___Arg_f_tco * 2);	/*advent16a.sl:56: f*2*/
_swap(_SequenceL___Arg_ts_tco, _SequenceL_tmp179);	
_swap(_SequenceL___Arg_t_tco, _SequenceL_tmp180);	
_SequenceL___Arg_f_tco = _SequenceL_tmp181;	
goto _sl_main_powerTs_i_i_i_i_advent16a_label_tco;	/*advent16a.sl:56: powerTs(ts ++ [t], t[t], f*2, total)*/
}
_SequenceL_tmp174.delete_data(true);	
_SequenceL_tmp179.delete_data(true);	
_SequenceL_tmp177.delete_data(true);	
_SequenceL_tmp180.delete_data(true);	
_SequenceL_tmp180.finished();	
_SequenceL_tmp177.finished();	
_SequenceL_tmp179.finished();	
_SequenceL_tmp174.finished();	
return NULL;
}
task *SequenceL__sl_main_bits_i_i_i_0::execute()
{
if (_SequenceL__Arg_b.onlyInstance())	
{
_SequenceL___Arg_b_tco.replaceSequence(_SequenceL__Arg_b);	
_SequenceL__Arg_b.delete_data(true);	
}
else
{
_SequenceL___Arg_b_tco.hard_copy(_SequenceL__Arg_b,__LINE__);	
_SequenceL__Arg_b.delete_data(true);	
}
_SequenceL___Arg_pow2_tco = _SequenceL__Arg_pow2;	
_SequenceL___Arg_num_tco = _SequenceL__Arg_num;	
_sl_main_bits_i_i_i_advent16a_label_tco:	
if ((_SequenceL___Arg_num_tco == 0))	/*advent16a.sl:61: b when num = 0  else bits(b, pow2 + 1, num / 2) when num mod 2 = 0  else bits(b ++ [pow2], pow2 + 1, num / 2)*/
{
_SequenceL__resultConv = _SequenceL___Arg_b_tco;	/*advent16a.sl:59: b*/
}
else
{
if (((_SequenceL___Arg_num_tco % 2) == 0))	/*advent16a.sl:61: bits(b, pow2 + 1, num / 2) when num mod 2 = 0  else bits(b ++ [pow2], pow2 + 1, num / 2)*/
{
_SequenceL_tmp188 = (_SequenceL___Arg_pow2_tco + 1);	/*advent16a.sl:60: pow2 + 1*/
_SequenceL_tmp189 = (_SequenceL___Arg_num_tco / 2);	/*advent16a.sl:60: num / 2*/
_SequenceL___Arg_pow2_tco = _SequenceL_tmp188;	
_SequenceL___Arg_num_tco = _SequenceL_tmp189;	
goto _sl_main_bits_i_i_i_advent16a_label_tco;	/*advent16a.sl:60: bits(b, pow2 + 1, num / 2)*/
}
else
{
_SequenceL_tmp191.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp191.get_ptr(1))) = _SequenceL___Arg_pow2_tco;	/*advent16a.sl:61: pow2*/
_appendF(_SequenceL___Arg_b_tco, _SequenceL_tmp191, _SequenceL_tmp193);	/*advent16a.sl:61: b ++ [pow2]*/
_SequenceL_tmp194 = (_SequenceL___Arg_pow2_tco + 1);	/*advent16a.sl:61: pow2 + 1*/
_SequenceL_tmp195 = (_SequenceL___Arg_num_tco / 2);	/*advent16a.sl:61: num / 2*/
_swap(_SequenceL___Arg_b_tco, _SequenceL_tmp193);	
_SequenceL___Arg_pow2_tco = _SequenceL_tmp194;	
_SequenceL___Arg_num_tco = _SequenceL_tmp195;	
goto _sl_main_bits_i_i_i_advent16a_label_tco;	/*advent16a.sl:61: bits(b ++ [pow2], pow2 + 1, num / 2)*/
}
}
_SequenceL_tmp193.delete_data(true);	
_SequenceL_tmp191.delete_data(true);	
_SequenceL_tmp191.finished();	
_SequenceL_tmp193.finished();	
return NULL;
}
task *SequenceL__sl_main_applyRenames_i_c_0::execute()
{
if (_SequenceL__Arg_reverseKind.onlyInstance())	
{
_SequenceL___Arg_reverseKind_tco.replaceSequence(_SequenceL__Arg_reverseKind);	
_SequenceL__Arg_reverseKind.delete_data(true);	
}
else
{
_SequenceL___Arg_reverseKind_tco.hard_copy(_SequenceL__Arg_reverseKind,__LINE__);	
_SequenceL__Arg_reverseKind.delete_data(true);	
}
if (_SequenceL__Arg_moves.onlyInstance())	
{
_SequenceL___Arg_moves_tco.replaceSequence(_SequenceL__Arg_moves);	
_SequenceL__Arg_moves.delete_data(true);	
}
else
{
_SequenceL___Arg_moves_tco.hard_copy(_SequenceL__Arg_moves,__LINE__);	
_SequenceL__Arg_moves.delete_data(true);	
}
_sl_main_applyRenames_i_c_advent16a_label_tco:	
if ((_SequenceL___Arg_moves_tco.size() == 0))	/*advent16a.sl:47: toKind(reverseKind) when size(moves) = 0  else applyRenames(newReverseKind, tail(moves))*/
{
SequenceL_toKind_0(_SequenceL___Arg_reverseKind_tco, _SequenceL__resultConv);	/*advent16a.sl:45: toKind(reverseKind)*/
}
else
{
_SequenceL___Arg_moves_tco.head(_SequenceL__Arg_move);	/*advent16a.sl:42: head(moves)*/
SequenceL_applyRename_0(_SequenceL__Arg_move, _SequenceL___Arg_reverseKind_tco, _SequenceL__Arg_newReverseKind);	/*advent16a.sl:43: applyRename(move, reverseKind)*/
_SequenceL___Arg_moves_tco.tail(_SequenceL_tmp268);	/*advent16a.sl:46: tail(moves)*/
_swap(_SequenceL___Arg_reverseKind_tco, _SequenceL__Arg_newReverseKind);	
_swap(_SequenceL___Arg_moves_tco, _SequenceL_tmp268);	
goto _sl_main_applyRenames_i_c_advent16a_label_tco;	/*advent16a.sl:47: applyRenames(newReverseKind, tail(moves))*/
}
_SequenceL__Arg_newReverseKind.delete_data(true);	
_SequenceL__Arg_move.delete_data(true);	
_SequenceL_tmp268.delete_data(true);	
_SequenceL_tmp268.finished();	
_SequenceL__Arg_move.finished();	
_SequenceL__Arg_newReverseKind.finished();	
return NULL;
}
task *SequenceL__sl_main_applyMoves_i_c_0::execute()
{
if (_SequenceL__Arg_place.onlyInstance())	
{
_SequenceL___Arg_place_tco.replaceSequence(_SequenceL__Arg_place);	
_SequenceL__Arg_place.delete_data(true);	
}
else
{
_SequenceL___Arg_place_tco.hard_copy(_SequenceL__Arg_place,__LINE__);	
_SequenceL__Arg_place.delete_data(true);	
}
if (_SequenceL__Arg_moves.onlyInstance())	
{
_SequenceL___Arg_moves_tco.replaceSequence(_SequenceL__Arg_moves);	
_SequenceL__Arg_moves.delete_data(true);	
}
else
{
_SequenceL___Arg_moves_tco.hard_copy(_SequenceL__Arg_moves,__LINE__);	
_SequenceL__Arg_moves.delete_data(true);	
}
_sl_main_applyMoves_i_c_advent16a_label_tco:	
if ((_SequenceL___Arg_moves_tco.size() == 0))	/*advent16a.sl:34: place when size(moves) = 0  else applyMoves(newPlace, tail(moves))*/
{
_SequenceL__resultConv = _SequenceL___Arg_place_tco;	/*advent16a.sl:32: place*/
}
else
{
_SequenceL___Arg_moves_tco.head(_SequenceL__Arg_move);	/*advent16a.sl:29: head(moves)*/
SequenceL_applyMove_0(_SequenceL__Arg_move, _SequenceL___Arg_place_tco, _SequenceL__Arg_newPlace);	/*advent16a.sl:30: applyMove(move, place)*/
_SequenceL___Arg_moves_tco.tail(_SequenceL_tmp653);	/*advent16a.sl:33: tail(moves)*/
_swap(_SequenceL___Arg_place_tco, _SequenceL__Arg_newPlace);	
_swap(_SequenceL___Arg_moves_tco, _SequenceL_tmp653);	
goto _sl_main_applyMoves_i_c_advent16a_label_tco;	/*advent16a.sl:34: applyMoves(newPlace, tail(moves))*/
}
_SequenceL__Arg_newPlace.delete_data(true);	
_SequenceL__Arg_move.delete_data(true);	
_SequenceL_tmp653.delete_data(true);	
_SequenceL_tmp653.finished();	
_SequenceL__Arg_move.finished();	
_SequenceL__Arg_newPlace.finished();	
return NULL;
}
void SequenceL__sl_main_nt40_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i66 = _r.begin(); _SequenceL__i66 < _e; _SequenceL__i66++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__i66 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__i66 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result41.get_ptr(_SequenceL__no_share_iter))) = ((2 * (*(_SequenceL_tmp64.get_ptr(_SequenceL__no_share_iter)))) + 1);	/*advent16a.sl:89: 2 * (0 ... ((size(inputList) - 1) / 2)) + 1*/
}
}
}
void SequenceL__sl_main_nt42_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
int _SequenceL_tmp72;
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__Index_i - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__Index_i * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
if (((*(_SequenceL_tmp67.get_ptr(_SequenceL__no_share_iter))) < _SequenceL__Arg_inputList.size()))	/*advent16a.sl:89: operator(inputList[i], inputList[i + 1]) when i < size(inputList)        else                inputList[i]*/
{
_SequenceL_tmp72 = ((*(_SequenceL_tmp67.get_ptr(_SequenceL__no_share_iter))) + 1);	/*advent16a.sl:86: i + 1*/
((void (*)(::Sequence< int >&,::Sequence< int >&,::Sequence< int >&))_SequenceL__Arg_operator[0])((*(_SequenceL__Arg_inputList.get_ptr((*(_SequenceL_tmp67.get_ptr(_SequenceL__no_share_iter)))))), (*(_SequenceL__Arg_inputList.get_ptr(_SequenceL_tmp72))), (*(_SequenceL__result43.get_ptr(_SequenceL__no_share_iter))));	/*advent16a.sl:86: operator(inputList[i], inputList[i + 1])*/
}
else
{
(*(_SequenceL__result43.get_ptr(_SequenceL__no_share_iter))) = (*(_SequenceL__Arg_inputList.get_ptr((*(_SequenceL_tmp67.get_ptr(_SequenceL__no_share_iter))))));	/*advent16a.sl:89: inputList[i]*/
}
}
}
}
void SequenceL__parallel_applyFol_0(::Sequence< ::Sequence< int > > &_SequenceL__Arg_inputList, _sl_fun_pointer* _SequenceL__Arg_operator, ::Sequence< ::Sequence< int > > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL_tmp64(cspace);
::Sequence< int > _SequenceL_tmp67(cspace);
int _SequenceL_tmp72;

_SequenceL_parallel__ellipsis(0, ((_SequenceL__Arg_inputList.size() - 1) / 2), __LINE__, _SequenceL_tmp64);	/*advent16a.sl:89: 0 ... ((size(inputList) - 1) / 2)*/
_SequenceL_tmp67.setSize(_SequenceL_tmp64.size());	/*advent16a.sl:89: 2 * (0 ... ((size(inputList) - 1) / 2)) + 1*/
if (((((SL_FLOAT)(_SequenceL_tmp64.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt40_ SequenceL__sl_main_nt40__val(_SequenceL_tmp64, 1, _SequenceL_tmp64.size(), _SequenceL_tmp67);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt40__val);
_SequenceL_tmp64.delete_data(false);	
_SequenceL_tmp64.finished();	
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__i66=1,_stop_val__SequenceL__i66=_SequenceL_tmp64.size(); _SequenceL__i66<=_stop_val__SequenceL__i66; _SequenceL__i66+=1)
{
(*(_SequenceL_tmp67.get_ptr(_SequenceL__i66))) = ((2 * (*(_SequenceL_tmp64.get_ptr(_SequenceL__i66)))) + 1);	/*advent16a.sl:89: 2 * (0 ... ((size(inputList) - 1) / 2)) + 1*/
}
_SequenceL_tmp64.delete_data(false);	
_SequenceL_tmp64.finished();	
}
_SequenceL__resultConv.setSize(_SequenceL_tmp67.size());	/*advent16a.sl:89: operator(inputList[i], inputList[i + 1]) when i < size(inputList)        else                inputList[i]*/
if (((((SL_FLOAT)(_SequenceL__resultConv.size() - 1)) * 5) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt42_ SequenceL__sl_main_nt42__val(_SequenceL_tmp67, _SequenceL__Arg_inputList, _SequenceL__Arg_operator, 1, _SequenceL__resultConv.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt42__val);
_SequenceL_tmp67.delete_data(false);	
_SequenceL_tmp67.finished();	
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__resultConv.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
if (((*(_SequenceL_tmp67.get_ptr(_SequenceL__Index_i))) < _SequenceL__Arg_inputList.size()))	/*advent16a.sl:89: operator(inputList[i], inputList[i + 1]) when i < size(inputList)        else                inputList[i]*/
{
_SequenceL_tmp72 = ((*(_SequenceL_tmp67.get_ptr(_SequenceL__Index_i))) + 1);	/*advent16a.sl:86: i + 1*/
((void (*)(::Sequence< int >&,::Sequence< int >&,::Sequence< int >&))_SequenceL__Arg_operator[0])((*(_SequenceL__Arg_inputList.get_ptr((*(_SequenceL_tmp67.get_ptr(_SequenceL__Index_i)))))), (*(_SequenceL__Arg_inputList.get_ptr(_SequenceL_tmp72))), (*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))));	/*advent16a.sl:86: operator(inputList[i], inputList[i + 1])*/
}
else
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_inputList.get_ptr((*(_SequenceL_tmp67.get_ptr(_SequenceL__Index_i))))));	/*advent16a.sl:89: inputList[i]*/
}
}
_SequenceL_tmp67.delete_data(false);	
_SequenceL_tmp67.finished();	
}
}
void SequenceL__parallel_fol_0(::Sequence< ::Sequence< int > > &_SequenceL__Arg_inputList, _sl_fun_pointer* _SequenceL__Arg_operator, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< ::Sequence< int > > _SequenceL_tmp170(cspace);

if ((_SequenceL__Arg_inputList.size() == 1))	/*advent16a.sl:82: head(inputList) when size(inputList) = 1        else                fol(applyFol(inputList, operator), operator)*/
{
_SequenceL__Arg_inputList.head(_SequenceL__resultConv);	/*advent16a.sl:80: head(inputList)*/
}
else
{
SequenceL__parallel_applyFol_0(_SequenceL__Arg_inputList, _SequenceL__Arg_operator, _SequenceL_tmp170);	/*advent16a.sl:82: applyFol(inputList, operator)*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_fol_i_z_0(_SequenceL_tmp170, _SequenceL__Arg_operator, _SequenceL__resultConv));
_SequenceL_tmp170.finished();	
}
}
void SequenceL__sl_main_nt38_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index__tmp_index1 = _r.begin(); _SequenceL__Index__tmp_index1 < _e; _SequenceL__Index__tmp_index1++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__Index__tmp_index1 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__Index__tmp_index1 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result39.get_ptr(_SequenceL__no_share_iter))) = (*(_SequenceL__Arg_t.get_ptr((*(_SequenceL__Arg_t.get_ptr(_SequenceL__no_share_iter))))));	/*advent16a.sl:56: t[t]*/
}
}
}
void SequenceL__parallel_powerTs_0(::Sequence< ::Sequence< int > > &_SequenceL__Arg_ts, ::Sequence< int > &_SequenceL__Arg_t, int _SequenceL__Arg_f, int _SequenceL__Arg_total, ::Sequence< ::Sequence< int > > &_SequenceL__resultConv)
{
::Sequence< ::Sequence< int > > _SequenceL_tmp174(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp179(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp177(cspace);
::Sequence< int > _SequenceL_tmp180(cspace);
int _SequenceL_tmp181;

if (((_SequenceL__Arg_f * 2) > _SequenceL__Arg_total))	/*advent16a.sl:56: ts ++ [t] when f*2 > total  else powerTs(ts ++ [t], t[t], f*2, total)*/
{
_SequenceL_tmp174.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp174.get_ptr(1))) = _SequenceL__Arg_t;	/*advent16a.sl:55: t*/
append(_SequenceL__Arg_ts, _SequenceL_tmp174, _SequenceL__resultConv);	/*advent16a.sl:55: ts ++ [t]*/
_SequenceL_tmp174.delete_data(false);	
_SequenceL_tmp174.finished();	
}
else
{
_SequenceL_tmp177.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp177.get_ptr(1))) = _SequenceL__Arg_t;	/*advent16a.sl:56: t*/
append(_SequenceL__Arg_ts, _SequenceL_tmp177, _SequenceL_tmp179);	/*advent16a.sl:56: ts ++ [t]*/
_SequenceL_tmp177.delete_data(false);	
_SequenceL_tmp177.finished();	
_SequenceL_tmp180.setSize(_SequenceL__Arg_t.size());	/*advent16a.sl:56: t[t]*/
if (((((SL_FLOAT)(_SequenceL_tmp180.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt38_ SequenceL__sl_main_nt38__val(_SequenceL__Arg_t, 1, _SequenceL_tmp180.size(), _SequenceL_tmp180);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt38__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index1=1,_stop_val__SequenceL__Index__tmp_index1=_SequenceL_tmp180.size(); _SequenceL__Index__tmp_index1<=_stop_val__SequenceL__Index__tmp_index1; _SequenceL__Index__tmp_index1+=1)
{
(*(_SequenceL_tmp180.get_ptr(_SequenceL__Index__tmp_index1))) = (*(_SequenceL__Arg_t.get_ptr((*(_SequenceL__Arg_t.get_ptr(_SequenceL__Index__tmp_index1))))));	/*advent16a.sl:56: t[t]*/
}
}
_SequenceL_tmp181 = (_SequenceL__Arg_f * 2);	/*advent16a.sl:56: f*2*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_powerTs_i_i_i_i_0(_SequenceL_tmp179, _SequenceL_tmp180, _SequenceL_tmp181, _SequenceL__Arg_total, _SequenceL__resultConv));
_SequenceL_tmp180.finished();	
_SequenceL_tmp179.finished();	
}
}
void SequenceL__parallel_bits_0(::Sequence< int > &_SequenceL__Arg_b, int _SequenceL__Arg_pow2, int _SequenceL__Arg_num, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL__delete_opttmp1(cspace);
int _SequenceL_tmp188;
int _SequenceL_tmp189;
::Sequence< int > _SequenceL_tmp193(cspace);
::Sequence< int > _SequenceL_tmp191(cspace);
int _SequenceL_tmp194;
int _SequenceL_tmp195;

if ((_SequenceL__Arg_num == 0))	/*advent16a.sl:61: b when num = 0  else bits(b, pow2 + 1, num / 2) when num mod 2 = 0  else bits(b ++ [pow2], pow2 + 1, num / 2)*/
{
_SequenceL__resultConv = _SequenceL__Arg_b;	/*advent16a.sl:59: b*/
}
else
{
if (((_SequenceL__Arg_num % 2) == 0))	/*advent16a.sl:61: bits(b, pow2 + 1, num / 2) when num mod 2 = 0  else bits(b ++ [pow2], pow2 + 1, num / 2)*/
{
_SequenceL__Arg_b.clone(_SequenceL__delete_opttmp1);	/*advent16a.sl:60: bits(b, pow2 + 1, num / 2)*/
_SequenceL_tmp188 = (_SequenceL__Arg_pow2 + 1);	/*advent16a.sl:60: pow2 + 1*/
_SequenceL_tmp189 = (_SequenceL__Arg_num / 2);	/*advent16a.sl:60: num / 2*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_bits_i_i_i_0(_SequenceL__delete_opttmp1, _SequenceL_tmp188, _SequenceL_tmp189, _SequenceL__resultConv));
}
else
{
_SequenceL_tmp191.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp191.get_ptr(1))) = _SequenceL__Arg_pow2;	/*advent16a.sl:61: pow2*/
_appendF(_SequenceL__Arg_b, _SequenceL_tmp191, _SequenceL_tmp193);	/*advent16a.sl:61: b ++ [pow2]*/
_SequenceL_tmp191.delete_data(false);	
_SequenceL_tmp191.finished();	
_SequenceL_tmp194 = (_SequenceL__Arg_pow2 + 1);	/*advent16a.sl:61: pow2 + 1*/
_SequenceL_tmp195 = (_SequenceL__Arg_num / 2);	/*advent16a.sl:61: num / 2*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_bits_i_i_i_0(_SequenceL_tmp193, _SequenceL_tmp194, _SequenceL_tmp195, _SequenceL__resultConv));
_SequenceL_tmp193.finished();	
}
}
}
void SequenceL__sl_main_nt36_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index__tmp_index1 = _r.begin(); _SequenceL__Index__tmp_index1 < _e; _SequenceL__Index__tmp_index1++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__Index__tmp_index1 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__Index__tmp_index1 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result37.get_ptr(_SequenceL__no_share_iter))) = (*(_SequenceL_tmp196.get_ptr((*(_SequenceL__Arg_a.get_ptr(_SequenceL__no_share_iter))))));	/*advent16a.sl:52: alfabet[a]*/
}
}
}
void SequenceL__parallel_stringify_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< char > &_SequenceL__resultConv)
{
::Sequence< char > _SequenceL_tmp196(cspace);

_SequenceL__resultConv.setSize(_SequenceL__Arg_a.size());	/*advent16a.sl:52: alfabet[a]*/
if ((_SequenceL__resultConv.size() >= 1))	
{
_SequenceL_tmp196 = _SequenceL_alfabet_0;	/*advent16a.sl:52: alfabet*/
}
if (((((SL_FLOAT)(_SequenceL__resultConv.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt36_ SequenceL__sl_main_nt36__val(_SequenceL_tmp196, _SequenceL__Arg_a, 1, _SequenceL__resultConv.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt36__val);
_SequenceL_tmp196.delete_data(false);	
_SequenceL_tmp196.finished();	
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index1=1,_stop_val__SequenceL__Index__tmp_index1=_SequenceL__resultConv.size(); _SequenceL__Index__tmp_index1<=_stop_val__SequenceL__Index__tmp_index1; _SequenceL__Index__tmp_index1+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index__tmp_index1))) = (*(_SequenceL_tmp196.get_ptr((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index__tmp_index1))))));	/*advent16a.sl:52: alfabet[a]*/
}
_SequenceL_tmp196.delete_data(false);	
_SequenceL_tmp196.finished();	
}
}
void SequenceL__sl_main_nt34_::operator() (const blocked_range<int>& _r) const {
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
if (!(_SequenceL__no_share_iter == _SequenceL__Arg_location))	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
{
(*(_SequenceL__result35.get_ptr(_SequenceL__no_share_iter))) = (*(_SequenceL__Arg_list.get_ptr(_SequenceL__no_share_iter)));	/*Sequence.sl:76: list[i]*/
}
else
{
(*(_SequenceL__result35.get_ptr(_SequenceL__no_share_iter))) = _SequenceL__Arg_newElement;	/*Sequence.sl:78: newElement*/
}
}
}
}
void SequenceL__parallel_setElementAt_1(::Sequence< int > &_SequenceL__Arg_list, int _SequenceL__Arg_location, int _SequenceL__Arg_newElement, ::Sequence< int > &_SequenceL__resultConv)
{

if (_SequenceL__Arg_list.onlyInstance())	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
{
_SequenceL__resultConv.replaceSequence(_SequenceL__Arg_list);	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
if (((_SequenceL__Arg_location >= 1) && (_SequenceL__Arg_location <= _SequenceL__resultConv.size())))	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Arg_location))) = _SequenceL__Arg_newElement;	/*Sequence.sl:78: newElement*/
}
}
else
{
_SequenceL__resultConv.setSize(_SequenceL__Arg_list.size());	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
if (((((SL_FLOAT)(_SequenceL__Arg_list.size() - 1)) * 4) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt34_ SequenceL__sl_main_nt34__val(_SequenceL__Arg_location, _SequenceL__Arg_list, _SequenceL__Arg_newElement, 1, _SequenceL__Arg_list.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt34__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_list.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
if (!(_SequenceL__Index_i == _SequenceL__Arg_location))	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_list.get_ptr(_SequenceL__Index_i)));	/*Sequence.sl:76: list[i]*/
}
else
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = _SequenceL__Arg_newElement;	/*Sequence.sl:78: newElement*/
}
}
}
}
}
void SequenceL__parallel_doPermute_0(::Sequence< int > &_SequenceL__Arg_p, ::Sequence< int > &_SequenceL__Arg_place, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL_tmp228(cspace);
::Sequence< int > _SequenceL__delete_opttmp1(cspace);
int _SequenceL__Arg_val2;
int _SequenceL__Arg_val1;

_SequenceL__Arg_place.clone(_SequenceL__delete_opttmp1);	/*advent16a.sl:20: setElementAt(place, p[1], val2)*/
_SequenceL__Arg_val2 = (*(_SequenceL__Arg_place.get_ptr((*(_SequenceL__Arg_p.get_ptr(2))))));	/*advent16a.sl:18: place[p[2]]*/
SequenceL__parallel_setElementAt_1(_SequenceL__delete_opttmp1, (*(_SequenceL__Arg_p.get_ptr(1))), _SequenceL__Arg_val2, _SequenceL_tmp228);	/*advent16a.sl:20: setElementAt(place, p[1], val2)*/
_SequenceL__delete_opttmp1.delete_data(false);	
_SequenceL__delete_opttmp1.finished();	
_SequenceL__Arg_val1 = (*(_SequenceL__Arg_place.get_ptr((*(_SequenceL__Arg_p.get_ptr(1))))));	/*advent16a.sl:17: place[p[1]]*/
SequenceL__parallel_setElementAt_1(_SequenceL_tmp228, (*(_SequenceL__Arg_p.get_ptr(2))), _SequenceL__Arg_val1, _SequenceL__resultConv);	/*advent16a.sl:20: setElementAt(setElementAt(place, p[1], val2), p[2], val1)*/
_SequenceL_tmp228.delete_data(false);	
_SequenceL_tmp228.finished();	
}
void SequenceL__sl_main_nt32_::operator() (const blocked_range<int>& _r) const {
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
(*(_SequenceL__result33.get_ptr(_SequenceL__no_share_iter))) = _SequenceL__no_share_iter;	
_SequenceL__result33.setExistence(_SequenceL__no_share_iter, true);	
}
else
{
_SequenceL__result33.setExistence(_SequenceL__no_share_iter, false);	
}
}
}
}
void SequenceL__parallel_indexesOf_1(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_element, ::Sequence< int > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_list.size());	/*Sequence.sl:41: i when list[i] = element*/
_SequenceL__resultConv.create_map();	
if (((((SL_FLOAT)(_SequenceL__Arg_list.size() - 1)) * 3) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt32_ SequenceL__sl_main_nt32__val(_SequenceL__Arg_list, _SequenceL__Arg_element, 1, _SequenceL__Arg_list.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt32__val);
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
void SequenceL__parallel_firstIndexOf_1(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_element, int &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL__Arg_indexes(cspace);

SequenceL__parallel_indexesOf_1(_SequenceL__Arg_list, _SequenceL__Arg_element, _SequenceL__Arg_indexes);	/*Sequence.sl:24: indexesOf(list, element)*/
if ((_SequenceL__Arg_indexes.size() == 0))	/*Sequence.sl:28: 0 when size(indexes) = 0	else		head(indexes)*/
{
_SequenceL__resultConv = 0;	/*Sequence.sl:26: 0*/
_SequenceL__Arg_indexes.delete_data(false);	
_SequenceL__Arg_indexes.finished();	
}
else
{
_SequenceL__resultConv = _SequenceL__Arg_indexes.head();	/*Sequence.sl:28: head(indexes)*/
_SequenceL__Arg_indexes.delete_data(false);	
_SequenceL__Arg_indexes.finished();	
}
}
void SequenceL__sl_main_nt30_::operator() (const blocked_range<int>& _r) const {
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
(*(_SequenceL__result31.get_ptr(_SequenceL__no_share_iter))) = _SequenceL__no_share_iter;	
_SequenceL__result31.setExistence(_SequenceL__no_share_iter, true);	
}
else
{
_SequenceL__result31.setExistence(_SequenceL__no_share_iter, false);	
}
}
}
}
void SequenceL__parallel_indexesOf_1(::Sequence< int > &_SequenceL__Arg_list, int _SequenceL__Arg_element, ::Sequence< int > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_list.size());	/*Sequence.sl:41: i when list[i] = element*/
_SequenceL__resultConv.create_map();	
if (((((SL_FLOAT)(_SequenceL__Arg_list.size() - 1)) * 3) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt30_ SequenceL__sl_main_nt30__val(_SequenceL__Arg_list, _SequenceL__Arg_element, 1, _SequenceL__Arg_list.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt30__val);
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
void SequenceL__parallel_firstIndexOf_1(::Sequence< int > &_SequenceL__Arg_list, int _SequenceL__Arg_element, int &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL__Arg_indexes(cspace);

SequenceL__parallel_indexesOf_1(_SequenceL__Arg_list, _SequenceL__Arg_element, _SequenceL__Arg_indexes);	/*Sequence.sl:24: indexesOf(list, element)*/
if ((_SequenceL__Arg_indexes.size() == 0))	/*Sequence.sl:28: 0 when size(indexes) = 0	else		head(indexes)*/
{
_SequenceL__resultConv = 0;	/*Sequence.sl:26: 0*/
_SequenceL__Arg_indexes.delete_data(false);	
_SequenceL__Arg_indexes.finished();	
}
else
{
_SequenceL__resultConv = _SequenceL__Arg_indexes.head();	/*Sequence.sl:28: head(indexes)*/
_SequenceL__Arg_indexes.delete_data(false);	
_SequenceL__Arg_indexes.finished();	
}
}
void SequenceL__sl_main_nt28_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i263 = _r.begin(); _SequenceL__i263 < _e; _SequenceL__i263++)
{

SequenceL_firstIndexOf_1(_SequenceL_tmp258, (*(_SequenceL_tmp261.get_ptr(_SequenceL__i263))), (*(_SequenceL__result29.get_ptr(_SequenceL__i263))));	/*advent16a.sl:37: firstIndexOf(alfabet, takeAway(tail(move), "/"))*/
}
}
void SequenceL__parallel_applyRename_0(::Sequence< char > &_SequenceL__Arg_move, ::Sequence< int > &_SequenceL__Arg_reverseKind, ::Sequence< int > &_SequenceL__resultConv)
{
char _SequenceL_tmp255;
::Sequence< char > _SequenceL_tmp258(cspace);
::Sequence< char > _SequenceL_tmp261(cspace);
::Sequence< char > _SequenceL_tmp259(cspace);
::Sequence< char > _SequenceL_tmp260(cspace);
::Sequence< int > _SequenceL_tmp262(cspace);

_SequenceL_tmp255 = _SequenceL__Arg_move.head();	/*advent16a.sl:37: head(move)*/
if ((_SequenceL_tmp255 == 'p'))	/*advent16a.sl:38: doPermute(firstIndexOf(alfabet, takeAway(tail(move), "/")), reverseKind) when head(move) = 'p'  else reverseKind*/
{
_SequenceL_tmp258 = _SequenceL_alfabet_0;	/*advent16a.sl:37: alfabet*/
_SequenceL__Arg_move.tail(_SequenceL_tmp259);	/*advent16a.sl:37: tail(move)*/
_SequenceL_tmp260 = "/";	/*advent16a.sl:37: "/"*/
takeaway(_SequenceL_tmp259, _SequenceL_tmp260, _SequenceL_tmp261);	/*advent16a.sl:37: takeAway(tail(move), "/")*/
_SequenceL_tmp259.delete_data(false);	
_SequenceL_tmp260.delete_data(false);	
_SequenceL_tmp260.finished();	
_SequenceL_tmp259.finished();	
_SequenceL_tmp262.setSize(_SequenceL_tmp261.size());	/*advent16a.sl:37: firstIndexOf(alfabet, takeAway(tail(move), "/"))*/
SequenceL__sl_main_nt28_ SequenceL__sl_main_nt28__val(_SequenceL_tmp258, _SequenceL_tmp261, _SequenceL_tmp262);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL_tmp262.size() + 1, SequenceL__sl_main_nt28__val);
_SequenceL_tmp261.delete_data(false);	
_SequenceL_tmp258.delete_data(false);	
_SequenceL_tmp258.finished();	
_SequenceL_tmp261.finished();	
SequenceL__parallel_doPermute_0(_SequenceL_tmp262, _SequenceL__Arg_reverseKind, _SequenceL__resultConv);	/*advent16a.sl:37: doPermute(firstIndexOf(alfabet, takeAway(tail(move), "/")), reverseKind)*/
_SequenceL_tmp262.delete_data(false);	
_SequenceL_tmp262.finished();	
}
else
{
_SequenceL__resultConv = _SequenceL__Arg_reverseKind;	/*advent16a.sl:38: reverseKind*/
_SequenceL_tmp262.delete_data(false);	
_SequenceL_tmp262.finished();	
}
}
void SequenceL__sl_main_nt26_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{

SequenceL_firstIndexOf_1(_SequenceL__Arg_reverseKind, _SequenceL__Index_i, (*(_SequenceL__result27.get_ptr(_SequenceL__Index_i))));	/*advent16a.sl:50: firstIndexOf(reverseKind, i)*/
}
}
void SequenceL__parallel_toKind_0(::Sequence< int > &_SequenceL__Arg_reverseKind, ::Sequence< int > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_reverseKind.size());	/*advent16a.sl:50: firstIndexOf(reverseKind, i)*/
SequenceL__sl_main_nt26_ SequenceL__sl_main_nt26__val(_SequenceL__Arg_reverseKind, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_reverseKind.size() + 1, SequenceL__sl_main_nt26__val);
}
void SequenceL__parallel_applyRenames_0(::Sequence< int > &_SequenceL__Arg_reverseKind, ::Sequence< ::Sequence< char > > &_SequenceL__Arg_moves, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL__Arg_newReverseKind(cspace);
::Sequence< char > _SequenceL__Arg_move(cspace);
::Sequence< ::Sequence< char > > _SequenceL_tmp268(cspace);

if ((_SequenceL__Arg_moves.size() == 0))	/*advent16a.sl:47: toKind(reverseKind) when size(moves) = 0  else applyRenames(newReverseKind, tail(moves))*/
{
SequenceL__parallel_toKind_0(_SequenceL__Arg_reverseKind, _SequenceL__resultConv);	/*advent16a.sl:45: toKind(reverseKind)*/
}
else
{
_SequenceL__Arg_moves.head(_SequenceL__Arg_move);	/*advent16a.sl:42: head(moves)*/
SequenceL__parallel_applyRename_0(_SequenceL__Arg_move, _SequenceL__Arg_reverseKind, _SequenceL__Arg_newReverseKind);	/*advent16a.sl:43: applyRename(move, reverseKind)*/
_SequenceL__Arg_move.delete_data(false);	
_SequenceL__Arg_move.finished();	
_SequenceL__Arg_moves.tail(_SequenceL_tmp268);	/*advent16a.sl:46: tail(moves)*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_applyRenames_i_c_0(_SequenceL__Arg_newReverseKind, _SequenceL_tmp268, _SequenceL__resultConv));
_SequenceL_tmp268.finished();	
_SequenceL__Arg_newReverseKind.finished();	
}
}
void SequenceL__parallel_integerPowerHelper_4(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int _SequenceL__Arg_val, int &_SequenceL__resultConv)
{
int _SequenceL___Arg_y_tco;
int _SequenceL___Arg_val_tco;
int _SequenceL_tmp323;
int _SequenceL_tmp324;

_SequenceL___Arg_y_tco = _SequenceL__Arg_y;	
_SequenceL___Arg_val_tco = _SequenceL__Arg_val;	
_parallel_integerPowerHelper_Math_label_tco:	
if ((_SequenceL___Arg_y_tco < 1))	/*Math.sl:20: val when y < 1	else		integerPowerHelper(x, y - 1, val * x)*/
{
_SequenceL__resultConv = _SequenceL___Arg_val_tco;	/*Math.sl:18: val*/
}
else
{
_SequenceL_tmp323 = (_SequenceL___Arg_y_tco - 1);	/*Math.sl:20: y - 1*/
_SequenceL_tmp324 = (_SequenceL___Arg_val_tco * _SequenceL__Arg_x);	/*Math.sl:20: val * x*/
_SequenceL___Arg_y_tco = _SequenceL_tmp323;	
_SequenceL___Arg_val_tco = _SequenceL_tmp324;	
goto _parallel_integerPowerHelper_Math_label_tco;	/*Math.sl:20: integerPowerHelper(x, y - 1, val * x)*/
}
}
void SequenceL__parallel_integerPower_4(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv)
{

SequenceL__parallel_integerPowerHelper_4(_SequenceL__Arg_x, _SequenceL__Arg_y, 1, _SequenceL__resultConv);	/*Math.sl:14: integerPowerHelper(x, y, 1)*/
}
void SequenceL__parallel_charToInt_2(char _SequenceL__Arg_char, int &_SequenceL__resultConv)
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
void SequenceL__sl_main_nt24_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
int _SequenceL_tmp385;
int _SequenceL__Arg_place;
int _SequenceL_tmp386;

SequenceL_charToInt_2((*(_SequenceL__Arg_numString.get_ptr(_SequenceL__Index_i))), _SequenceL_tmp385);	/*Conversion.sl:60: charToInt(numString[i])*/
_SequenceL_tmp386 = (_SequenceL__Arg_numString.size() - _SequenceL__Index_i);	/*Conversion.sl:58: size(numString) - i*/
SequenceL_integerPower_4(10, _SequenceL_tmp386, _SequenceL__Arg_place);	/*Conversion.sl:58: integerPower(10, (size(numString) - i))*/
(*(_SequenceL__result25.get_ptr(_SequenceL__Index_i))) = (_SequenceL_tmp385 * _SequenceL__Arg_place);	/*Conversion.sl:60: charToInt(numString[i]) * place*/
}
}
void SequenceL__parallel_atoIWorker_2(::Sequence< char > &_SequenceL__Arg_numString, ::Sequence< int > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_numString.size());	/*Conversion.sl:60: charToInt(numString[i]) * place*/
SequenceL__sl_main_nt24_ SequenceL__sl_main_nt24__val(_SequenceL__Arg_numString, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_numString.size() + 1, SequenceL__sl_main_nt24__val);
}
void SequenceL__parallel_take_1(::Sequence< char > &_SequenceL__Arg_list, int _SequenceL__Arg_n, ::Sequence< char > &_SequenceL__resultConv)
{

_SequenceL__Arg_list.sub_seq(1, _SequenceL__Arg_n, _SequenceL__resultConv);	/*Sequence.sl:171: list[1 ... n]*/
}
void SequenceL__parallel_isDigit_3(char _SequenceL__Arg_char, bool &_SequenceL__resultConv)
{

_SequenceL__resultConv = ((((((((((_SequenceL__Arg_char == '0') || (_SequenceL__Arg_char == '1')) || (_SequenceL__Arg_char == '2')) || (_SequenceL__Arg_char == '3')) || (_SequenceL__Arg_char == '4')) || (_SequenceL__Arg_char == '5')) || (_SequenceL__Arg_char == '6')) || (_SequenceL__Arg_char == '7')) || (_SequenceL__Arg_char == '8')) || (_SequenceL__Arg_char == '9'));	/*String.sl:20: char = '0' or char = '1' or char = '2' or char = '3' or char = '4' or char = '5' or char = '6' or char = '7' or char = '8' or char = '9'*/
}
void SequenceL__parallel_trimNonNumeric_2(::Sequence< char > &_SequenceL__Arg_numString, int _SequenceL__Arg_i, ::Sequence< char > &_SequenceL__resultConv)
{
int _SequenceL___Arg_i_tco;
bool _SequenceL_tmp462;
int _SequenceL_tmp465;
int _SequenceL_tmp467;

_SequenceL___Arg_i_tco = _SequenceL__Arg_i;	
_parallel_trimNonNumeric_Conversion_label_tco:	
if ((_SequenceL___Arg_i_tco > _SequenceL__Arg_numString.size()))	/*Conversion.sl:53: numString when i > size(numString)	else		take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL__resultConv = _SequenceL__Arg_numString;	/*Conversion.sl:49: numString*/
}
else
{
SequenceL__parallel_isDigit_3((*(_SequenceL__Arg_numString.get_ptr(_SequenceL___Arg_i_tco))), _SequenceL_tmp462);	/*Conversion.sl:52: isDigit(numString[i])*/
if (!_SequenceL_tmp462)	/*Conversion.sl:53: take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL_tmp465 = (_SequenceL___Arg_i_tco - 1);	/*Conversion.sl:51: i-1*/
SequenceL__parallel_take_1(_SequenceL__Arg_numString, _SequenceL_tmp465, _SequenceL__resultConv);	/*Conversion.sl:51: take(numString, i-1)*/
}
else
{
_SequenceL_tmp467 = (_SequenceL___Arg_i_tco + 1);	/*Conversion.sl:53: i + 1*/
_SequenceL___Arg_i_tco = _SequenceL_tmp467;	
goto _parallel_trimNonNumeric_Conversion_label_tco;	/*Conversion.sl:53: trimNonNumeric(numString, i + 1)*/
}
}
}
void SequenceL__parallel_isWhiteSpace_3(char _SequenceL__Arg_input, bool &_SequenceL__resultConv)
{

_SequenceL__resultConv = ((((_SequenceL__Arg_input == ' ') || (_SequenceL__Arg_input == '\n')) || (_SequenceL__Arg_input == '\t')) || (_SequenceL__Arg_input == '\r'));	/*String.sl:16: input = ' ' or input = '\n' or input = '\t' or input = '\r'*/
}
void SequenceL__parallel_trimStart_3(::Sequence< char > &_SequenceL__Arg_input, ::Sequence< char > &_SequenceL__resultConv)
{
::Sequence< char > _SequenceL___Arg_input_tco(cspace);
bool _SequenceL_tmp544;
char _SequenceL_tmp543;
::Sequence< char > _SequenceL_tmp546(cspace);

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
_SequenceL_tmp543 = _SequenceL___Arg_input_tco.head();	/*String.sl:10: head(input)*/
SequenceL__parallel_isWhiteSpace_3(_SequenceL_tmp543, _SequenceL_tmp544);	/*String.sl:11: isWhiteSpace(head(input))*/
if (_SequenceL_tmp544)	/*String.sl:12: trimStart(tail(input)) when isWhiteSpace(head(input))	else		input*/
{
_SequenceL___Arg_input_tco.tail(_SequenceL_tmp546);	/*String.sl:10: tail(input)*/
_swap(_SequenceL___Arg_input_tco, _SequenceL_tmp546);	
goto _parallel_trimStart_String_label_tco;	/*String.sl:10: trimStart(tail(input))*/
}
else
{
_SequenceL__resultConv = _SequenceL___Arg_input_tco;	/*String.sl:12: input*/
}
}
_SequenceL_tmp546.delete_data(false);	
_SequenceL_tmp546.finished();	
}
void SequenceL__sl_main_nt22_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{

(*(_SequenceL__result23.get_ptr(_SequenceL__Index_i))).setSize((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__Index_i))).size());	/*Sequence.sl:45: list[indexes[i]]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index2=1,_stop_val__SequenceL__Index__tmp_index2=(*(_SequenceL__result23.get_ptr(_SequenceL__Index_i))).size(); _SequenceL__Index__tmp_index2<=_stop_val__SequenceL__Index__tmp_index2; _SequenceL__Index__tmp_index2+=1)
{
(*((*(_SequenceL__result23.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index__tmp_index2))) = (*(_SequenceL__Arg_list.get_ptr((*((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index__tmp_index2))))));	/*Sequence.sl:45: list[indexes[i]]*/
}
}
}
void SequenceL__parallel_multipleIndexes_1(::Sequence< char > &_SequenceL__Arg_list, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_indexes, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:45: list[indexes[i]]*/
if (((((SL_FLOAT)(_SequenceL__Arg_indexes.size() - 1)) * (-1 + ((_SequenceL__Arg_indexes.size() > 0) ? (*(_SequenceL__Arg_indexes.get_ptr(1))).size() : 0))) > (sl_get_num_units() * ((WORK_SHARE_VALUE * WORK_SHARE_VALUE) * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt22_ SequenceL__sl_main_nt22__val(_SequenceL__Arg_indexes, _SequenceL__Arg_list, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_indexes.size() + 1, SequenceL__sl_main_nt22__val);
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
void SequenceL__sl_main_nt20_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index__tmp_index1 = _r.begin(); _SequenceL__Index__tmp_index1 < _e; _SequenceL__Index__tmp_index1++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__Index__tmp_index1 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__Index__tmp_index1 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result21.get_ptr(_SequenceL__no_share_iter))) = (*(_SequenceL__Arg_place.get_ptr((*(_SequenceL_tmp602.get_ptr(_SequenceL__no_share_iter))))));	/*advent16a.sl:13: place[join([start ... mid, 1 ... end])]*/
}
}
}
void SequenceL__parallel_doSpin_0(int _SequenceL__Arg_s, ::Sequence< int > &_SequenceL__Arg_place, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL_tmp602(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp599(cspace);
int _SequenceL__Arg_start;
int _SequenceL__Arg_end;
int _SequenceL__Arg_mid;

_SequenceL_tmp599.setSize(2 > 0 ? 2 : 0);	
_SequenceL__Arg_end = (_SequenceL__Arg_place.size() - _SequenceL__Arg_s);	/*advent16a.sl:9: size(place) - s*/
_SequenceL__Arg_start = (_SequenceL__Arg_end + 1);	/*advent16a.sl:10: end + 1*/
_SequenceL__Arg_mid = _SequenceL__Arg_place.size();	/*advent16a.sl:11: size(place)*/
_SequenceL_parallel__ellipsis(_SequenceL__Arg_start, _SequenceL__Arg_mid, __LINE__, (*(_SequenceL_tmp599.get_ptr(1))));	/*advent16a.sl:13: start ... mid*/
_SequenceL_parallel__ellipsis(1, _SequenceL__Arg_end, __LINE__, (*(_SequenceL_tmp599.get_ptr(2))));	/*advent16a.sl:13: 1 ... end*/
_SequenceL_parallel_appends(_SequenceL_tmp599, __LINE__, _SequenceL_tmp602);	/*advent16a.sl:13: join([start ... mid, 1 ... end])*/
_SequenceL_tmp599.delete_data(false);	
_SequenceL_tmp599.finished();	
_SequenceL__resultConv.setSize(_SequenceL_tmp602.size());	/*advent16a.sl:13: place[join([start ... mid, 1 ... end])]*/
if (((((SL_FLOAT)(_SequenceL__resultConv.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt20_ SequenceL__sl_main_nt20__val(_SequenceL__Arg_place, _SequenceL_tmp602, 1, _SequenceL__resultConv.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt20__val);
_SequenceL_tmp602.delete_data(false);	
_SequenceL_tmp602.finished();	
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index1=1,_stop_val__SequenceL__Index__tmp_index1=_SequenceL__resultConv.size(); _SequenceL__Index__tmp_index1<=_stop_val__SequenceL__Index__tmp_index1; _SequenceL__Index__tmp_index1+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index__tmp_index1))) = (*(_SequenceL__Arg_place.get_ptr((*(_SequenceL_tmp602.get_ptr(_SequenceL__Index__tmp_index1))))));	/*advent16a.sl:13: place[join([start ... mid, 1 ... end])]*/
}
_SequenceL_tmp602.delete_data(false);	
_SequenceL_tmp602.finished();	
}
}
void SequenceL__parallel_stringToInt_2(::Sequence< char > &_SequenceL__Arg_numString, int &_SequenceL__resultConv)
{
::Sequence< char > _SequenceL__Arg_trimmed(cspace);
char _SequenceL_tmp606;
int _SequenceL_tmp610;
::Sequence< char > _SequenceL_tmp609(cspace);
char _SequenceL_tmp612;
::Sequence< char > _SequenceL_tmp615(cspace);
::Sequence< int > _SequenceL_tmp617(cspace);
::Sequence< char > _SequenceL__Arg_justNumber(cspace);

SequenceL__parallel_trimStart_3(_SequenceL__Arg_numString, _SequenceL__Arg_trimmed);	/*Conversion.sl:36: trimStart(numString)*/
if ((_SequenceL__Arg_trimmed.size() == 0))	/*Conversion.sl:45: 0 when size(trimmed) = 0	else		- stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__resultConv = 0;	/*Conversion.sl:39: 0*/
_SequenceL__Arg_trimmed.delete_data(false);	
_SequenceL__Arg_trimmed.finished();	
}
else
{
_SequenceL_tmp606 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:41: head(trimmed)*/
if ((_SequenceL_tmp606 == '-'))	/*Conversion.sl:45: - stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp609);	/*Conversion.sl:41: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(false);	
_SequenceL__Arg_trimmed.finished();	
SequenceL__parallel_stringToInt_2(_SequenceL_tmp609, _SequenceL_tmp610);	/*Conversion.sl:41: stringToInt(tail(trimmed))*/
_SequenceL_tmp609.delete_data(false);	
_SequenceL_tmp609.finished();	
_SequenceL__resultConv = (-_SequenceL_tmp610);	/*Conversion.sl:41: - stringToInt(tail(trimmed))*/
}
else
{
_SequenceL_tmp612 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:43: head(trimmed)*/
if ((_SequenceL_tmp612 == '+'))	/*Conversion.sl:45: stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp615);	/*Conversion.sl:43: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(false);	
_SequenceL__Arg_trimmed.finished();	
SequenceL__parallel_stringToInt_2(_SequenceL_tmp615, _SequenceL__resultConv);	/*Conversion.sl:43: stringToInt(tail(trimmed))*/
_SequenceL_tmp615.delete_data(false);	
_SequenceL_tmp615.finished();	
}
else
{
SequenceL__parallel_trimNonNumeric_2(_SequenceL__Arg_trimmed, 1, _SequenceL__Arg_justNumber);	/*Conversion.sl:37: trimNonNumeric(trimmed, 1)*/
_SequenceL__Arg_trimmed.delete_data(false);	
_SequenceL__Arg_trimmed.finished();	
SequenceL__parallel_atoIWorker_2(_SequenceL__Arg_justNumber, _SequenceL_tmp617);	/*Conversion.sl:45: atoIWorker(justNumber)*/
_SequenceL__Arg_justNumber.delete_data(false);	
_SequenceL__Arg_justNumber.finished();	
_SequenceL__resultConv = _SequenceL_parallel_sum(_SequenceL_tmp617, __LINE__);	/*Conversion.sl:45: sum(atoIWorker(justNumber))*/
_SequenceL_tmp617.delete_data(false);	
_SequenceL_tmp617.finished();	
}
}
}
}
void SequenceL__sl_main_nt17_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i646 = _r.begin(); _SequenceL__i646 < _e; _SequenceL__i646++)
{
::Sequence< char > _SequenceL__delete_opttmp1(cspace);

(*(_SequenceL_tmp644.get_ptr(_SequenceL__i646))).clone(_SequenceL__delete_opttmp1);	/*advent16a.sl:24: stringToInt(split(tail(move), '/'))*/
SequenceL_stringToInt_2(_SequenceL__delete_opttmp1, (*(_SequenceL__result18.get_ptr(_SequenceL__i646))));	/*advent16a.sl:24: stringToInt(split(tail(move), '/'))*/
_SequenceL__delete_opttmp1.finished();	
(*(_SequenceL__result19.get_ptr(_SequenceL__i646))) = ((*(_SequenceL__result18.get_ptr(_SequenceL__i646))) + 1);	/*advent16a.sl:24: stringToInt(split(tail(move), '/')) + 1*/
}
}
void SequenceL__parallel_applyMove_0(::Sequence< char > &_SequenceL__Arg_move, ::Sequence< int > &_SequenceL__Arg_place, ::Sequence< int > &_SequenceL__resultConv)
{
char _SequenceL_tmp634;
int _SequenceL_tmp638;
::Sequence< char > _SequenceL_tmp637(cspace);
char _SequenceL_tmp640;
::Sequence< ::Sequence< char > > _SequenceL_tmp644(cspace);
::Sequence< char > _SequenceL_tmp643(cspace);
::Sequence< int > _SequenceL_tmp645(cspace);
::Sequence< int > _SequenceL_tmp647(cspace);

_SequenceL_tmp634 = _SequenceL__Arg_move.head();	/*advent16a.sl:23: head(move)*/
if ((_SequenceL_tmp634 == 's'))	/*advent16a.sl:25: doSpin(stringToInt(tail(move)), place) when head(move) = 's'  else doPermute(stringToInt(split(tail(move), '/')) + 1, place) when head(move) = 'x'  else place*/
{
_SequenceL__Arg_move.tail(_SequenceL_tmp637);	/*advent16a.sl:23: tail(move)*/
SequenceL__parallel_stringToInt_2(_SequenceL_tmp637, _SequenceL_tmp638);	/*advent16a.sl:23: stringToInt(tail(move))*/
_SequenceL_tmp637.delete_data(false);	
_SequenceL_tmp637.finished();	
SequenceL__parallel_doSpin_0(_SequenceL_tmp638, _SequenceL__Arg_place, _SequenceL__resultConv);	/*advent16a.sl:23: doSpin(stringToInt(tail(move)), place)*/
}
else
{
_SequenceL_tmp640 = _SequenceL__Arg_move.head();	/*advent16a.sl:24: head(move)*/
if ((_SequenceL_tmp640 == 'x'))	/*advent16a.sl:25: doPermute(stringToInt(split(tail(move), '/')) + 1, place) when head(move) = 'x'  else place*/
{
_SequenceL__Arg_move.tail(_SequenceL_tmp643);	/*advent16a.sl:24: tail(move)*/
SequenceL__parallel_split_1(_SequenceL_tmp643, '/', _SequenceL_tmp644);	/*advent16a.sl:24: split(tail(move), '/')*/
_SequenceL_tmp643.delete_data(false);	
_SequenceL_tmp643.finished();	
_SequenceL_tmp645.setSize(_SequenceL_tmp644.size());	/*advent16a.sl:24: stringToInt(split(tail(move), '/'))*/
_SequenceL_tmp647.setSize(_SequenceL_tmp645.size());	/*advent16a.sl:24: stringToInt(split(tail(move), '/')) + 1*/
SequenceL__sl_main_nt17_ SequenceL__sl_main_nt17__val(_SequenceL_tmp644, _SequenceL_tmp645, _SequenceL_tmp647);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL_tmp645.size() + 1, SequenceL__sl_main_nt17__val);
_SequenceL_tmp644.delete_data(false);	
_SequenceL_tmp644.finished();	
SequenceL__parallel_doPermute_0(_SequenceL_tmp647, _SequenceL__Arg_place, _SequenceL__resultConv);	/*advent16a.sl:24: doPermute(stringToInt(split(tail(move), '/')) + 1, place)*/
_SequenceL_tmp647.delete_data(false);	
_SequenceL_tmp647.finished();	
}
else
{
_SequenceL__resultConv = _SequenceL__Arg_place;	/*advent16a.sl:25: place*/
}
}
}
void SequenceL__parallel_applyMoves_0(::Sequence< int > &_SequenceL__Arg_place, ::Sequence< ::Sequence< char > > &_SequenceL__Arg_moves, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL__Arg_newPlace(cspace);
::Sequence< char > _SequenceL__Arg_move(cspace);
::Sequence< ::Sequence< char > > _SequenceL_tmp653(cspace);

if ((_SequenceL__Arg_moves.size() == 0))	/*advent16a.sl:34: place when size(moves) = 0  else applyMoves(newPlace, tail(moves))*/
{
_SequenceL__resultConv = _SequenceL__Arg_place;	/*advent16a.sl:32: place*/
}
else
{
_SequenceL__Arg_moves.head(_SequenceL__Arg_move);	/*advent16a.sl:29: head(moves)*/
SequenceL__parallel_applyMove_0(_SequenceL__Arg_move, _SequenceL__Arg_place, _SequenceL__Arg_newPlace);	/*advent16a.sl:30: applyMove(move, place)*/
_SequenceL__Arg_move.delete_data(false);	
_SequenceL__Arg_move.finished();	
_SequenceL__Arg_moves.tail(_SequenceL_tmp653);	/*advent16a.sl:33: tail(moves)*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_applyMoves_i_c_0(_SequenceL__Arg_newPlace, _SequenceL_tmp653, _SequenceL__resultConv));
_SequenceL_tmp653.finished();	
_SequenceL__Arg_newPlace.finished();	
}
}
void SequenceL__sl_main_nt11_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i660 = _r.begin(); _SequenceL__i660 < _e; _SequenceL__i660++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__i660 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__i660 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result12.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__no_share_iter))) + 1);	/*Sequence.sl:54: indexes + 1*/
}
}
}
void SequenceL__sl_main_nt13_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i663 = _r.begin(); _SequenceL__i663 < _e; _SequenceL__i663++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__i663 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__i663 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result14.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__no_share_iter))) - 1);	/*Sequence.sl:54: indexes - 1*/
}
}
}
void SequenceL__sl_main_nt15_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i668 = _r.begin(); _SequenceL__i668 < _e; _SequenceL__i668++)
{

ellipsis((*(_SequenceL_tmp661.get_ptr(_SequenceL__i668))), (*(_SequenceL_tmp666.get_ptr(_SequenceL__i668))), (*(_SequenceL__result16.get_ptr(_SequenceL__i668))));	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
}
}
void SequenceL__parallel_split_1(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_delimiter, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv)
{
::Sequence< Empty > _SequenceL_tmp655(cspace);
::Sequence< int > _SequenceL_tmp661(cspace);
::Sequence< int > _SequenceL_tmp657(cspace);
::Sequence< int > _SequenceL__Arg_indexes(cspace);
::Sequence< int > _SequenceL_tmp659(cspace);
::Sequence< int > _SequenceL_tmp666(cspace);
::Sequence< int > _SequenceL_tmp662(cspace);
::Sequence< int > _SequenceL_tmp664(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp667(cspace);

if ((_SequenceL__Arg_list.size() == 0))	/*Sequence.sl:54: [] when size(list) = 0	else		multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
{
_SequenceL_tmp655.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp655, _SequenceL__resultConv);	
_SequenceL_tmp655.delete_data(false);	
_SequenceL_tmp655.finished();	
_SequenceL_tmp667.delete_data(false);	
_SequenceL_tmp667.finished();	
}
else
{
_SequenceL_tmp657.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp657.get_ptr(1))) = 1;	/*Sequence.sl:54: 1*/
SequenceL__parallel_indexesOf_1(_SequenceL__Arg_list, _SequenceL__Arg_delimiter, _SequenceL__Arg_indexes);	/*Sequence.sl:50: indexesOf(list, delimiter)*/
_SequenceL_tmp659.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes + 1*/
if (((((SL_FLOAT)(_SequenceL_tmp659.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt11_ SequenceL__sl_main_nt11__val(_SequenceL__Arg_indexes, 1, _SequenceL_tmp659.size(), _SequenceL_tmp659);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt11__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__i660=1,_stop_val__SequenceL__i660=_SequenceL_tmp659.size(); _SequenceL__i660<=_stop_val__SequenceL__i660; _SequenceL__i660+=1)
{
(*(_SequenceL_tmp659.get_ptr(_SequenceL__i660))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i660))) + 1);	/*Sequence.sl:54: indexes + 1*/
}
}
append(_SequenceL_tmp657, _SequenceL_tmp659, _SequenceL_tmp661);	/*Sequence.sl:54: [1] ++ (indexes + 1)*/
_SequenceL_tmp657.delete_data(false);	
_SequenceL_tmp659.delete_data(false);	
_SequenceL_tmp659.finished();	
_SequenceL_tmp657.finished();	
_SequenceL_tmp662.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes - 1*/
if (((((SL_FLOAT)(_SequenceL_tmp662.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt13_ SequenceL__sl_main_nt13__val(_SequenceL__Arg_indexes, 1, _SequenceL_tmp662.size(), _SequenceL_tmp662);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt13__val);
_SequenceL__Arg_indexes.delete_data(false);	
_SequenceL__Arg_indexes.finished();	
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__i663=1,_stop_val__SequenceL__i663=_SequenceL_tmp662.size(); _SequenceL__i663<=_stop_val__SequenceL__i663; _SequenceL__i663+=1)
{
(*(_SequenceL_tmp662.get_ptr(_SequenceL__i663))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i663))) - 1);	/*Sequence.sl:54: indexes - 1*/
}
_SequenceL__Arg_indexes.delete_data(false);	
_SequenceL__Arg_indexes.finished();	
}
_SequenceL_tmp664.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp664.get_ptr(1))) = _SequenceL__Arg_list.size();	/*Sequence.sl:54: size(list)*/
append(_SequenceL_tmp662, _SequenceL_tmp664, _SequenceL_tmp666);	/*Sequence.sl:54: (indexes - 1) ++ [size(list)]*/
_SequenceL_tmp662.delete_data(false);	
_SequenceL_tmp664.delete_data(false);	
_SequenceL_tmp664.finished();	
_SequenceL_tmp662.finished();	
_SequenceL_tmp667.setSize(_SequenceL_tmp661.size());	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
SequenceL__sl_main_nt15_ SequenceL__sl_main_nt15__val(_SequenceL_tmp661, _SequenceL_tmp666, _SequenceL_tmp667);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL_tmp667.size() + 1, SequenceL__sl_main_nt15__val);
_SequenceL_tmp661.delete_data(false);	
_SequenceL_tmp666.delete_data(false);	
_SequenceL_tmp666.finished();	
_SequenceL_tmp661.finished();	
SequenceL__parallel_multipleIndexes_1(_SequenceL__Arg_list, _SequenceL_tmp667, _SequenceL__resultConv);	/*Sequence.sl:54: multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
_SequenceL_tmp667.delete_data(false);	
_SequenceL_tmp667.finished();	
}
}
void SequenceL__sl_main_nt3_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index__tmp_index1 = _r.begin(); _SequenceL__Index__tmp_index1 < _e; _SequenceL__Index__tmp_index1++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__Index__tmp_index1 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__Index__tmp_index1 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result4.get_ptr(_SequenceL__no_share_iter))) = (*(_SequenceL__Arg_firstSubstitution.get_ptr((*(_SequenceL__Arg_firstPermutation.get_ptr(_SequenceL__no_share_iter))))));	/*advent16a.sl:74: firstSubstitution[firstPermutation]*/
}
}
}
void SequenceL__sl_main_nt5_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__scope__Index_finalP__tmp_index1 = _r.begin(); _SequenceL__scope__Index_finalP__tmp_index1 < _e; _SequenceL__scope__Index_finalP__tmp_index1++)
{
::Sequence< ::Sequence< int > > _SequenceL_tmp684(cspace);
::Sequence< ::Sequence< int > > _SequenceL__delete_opttmp1(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp685(cspace);
::Sequence< Empty > _SequenceL_tmp682(cspace);
::Sequence< int > _SequenceL__delete_opttmp2(cspace);

_SequenceL_tmp682.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp682, _SequenceL_tmp685);	
_SequenceL_tmp685.clone(_SequenceL__delete_opttmp1);	/*advent16a.sl:71: powerTs([], firstPermutation, 1, noOfTimes)*/
_SequenceL__Arg_firstPermutation.clone(_SequenceL__delete_opttmp2);	/*advent16a.sl:71: powerTs([], firstPermutation, 1, noOfTimes)*/
SequenceL_powerTs_0(_SequenceL__delete_opttmp1, _SequenceL__delete_opttmp2, 1, _SequenceL_tmp683, _SequenceL_tmp684);	/*advent16a.sl:71: powerTs([], firstPermutation, 1, noOfTimes)*/
_SequenceL__delete_opttmp1.delete_data(true);	
_SequenceL__delete_opttmp2.delete_data(true);	
_SequenceL__delete_opttmp2.finished();	
_SequenceL__delete_opttmp1.finished();	
(*(_SequenceL__result6.get_ptr(_SequenceL__scope__Index_finalP__tmp_index1))) = (*(_SequenceL_tmp684.get_ptr((*(_SequenceL_tmp679.get_ptr(_SequenceL__scope__Index_finalP__tmp_index1))))));	/*advent16a.sl:71: powerTs([], firstPermutation, 1, noOfTimes)[bits([], 1, noOfTimes)]*/
}
}
void SequenceL__sl_main_nt7_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__scope__Index_finalS__tmp_index1 = _r.begin(); _SequenceL__scope__Index_finalS__tmp_index1 < _e; _SequenceL__scope__Index_finalS__tmp_index1++)
{
::Sequence< ::Sequence< int > > _SequenceL_tmp694(cspace);
::Sequence< ::Sequence< int > > _SequenceL__delete_opttmp1(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp695(cspace);
::Sequence< Empty > _SequenceL_tmp692(cspace);
::Sequence< int > _SequenceL__delete_opttmp2(cspace);

_SequenceL_tmp692.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp692, _SequenceL_tmp695);	
_SequenceL_tmp695.clone(_SequenceL__delete_opttmp1);	/*advent16a.sl:72: powerTs([], firstSubstitution, 1, noOfTimes)*/
_SequenceL__Arg_firstSubstitution.clone(_SequenceL__delete_opttmp2);	/*advent16a.sl:72: powerTs([], firstSubstitution, 1, noOfTimes)*/
SequenceL_powerTs_0(_SequenceL__delete_opttmp1, _SequenceL__delete_opttmp2, 1, _SequenceL_tmp693, _SequenceL_tmp694);	/*advent16a.sl:72: powerTs([], firstSubstitution, 1, noOfTimes)*/
_SequenceL__delete_opttmp1.delete_data(true);	
_SequenceL__delete_opttmp2.delete_data(true);	
_SequenceL__delete_opttmp2.finished();	
_SequenceL__delete_opttmp1.finished();	
(*(_SequenceL__result8.get_ptr(_SequenceL__scope__Index_finalS__tmp_index1))) = (*(_SequenceL_tmp694.get_ptr((*(_SequenceL_tmp689.get_ptr(_SequenceL__scope__Index_finalS__tmp_index1))))));	/*advent16a.sl:72: powerTs([], firstSubstitution, 1, noOfTimes)[bits([], 1, noOfTimes)]*/
}
}
void SequenceL__sl_main_nt9_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index__tmp_index2 = _r.begin(); _SequenceL__Index__tmp_index2 < _e; _SequenceL__Index__tmp_index2++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__Index__tmp_index2 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__Index__tmp_index2 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result10.get_ptr(_SequenceL__no_share_iter))) = (*(_SequenceL__Arg_finalS.get_ptr((*(_SequenceL__Arg_finalP.get_ptr(_SequenceL__no_share_iter))))));	/*advent16a.sl:75: finalS[finalP]*/
}
}
}
void SequenceL__parallel_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_s, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL__Arg_firstPermutation(cspace);
::Sequence< int > _SequenceL_tmp672(cspace);
::Sequence< char > _SequenceL_tmp671(cspace);
::Sequence< ::Sequence< char > > _SequenceL__delete_opttmp1(cspace);
::Sequence< ::Sequence< char > > _SequenceL__Arg_moves(cspace);
::Sequence< int > _SequenceL_tmp673(cspace);
::Sequence< int > _SequenceL__Arg_firstSubstitution(cspace);
::Sequence< int > _SequenceL_tmp675(cspace);
::Sequence< char > _SequenceL_tmp674(cspace);
::Sequence< int > _SequenceL__Arg_finalP(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp681(cspace);
::Sequence< int > _SequenceL_tmp679(cspace);
::Sequence< int > _SequenceL_tmp680(cspace);
::Sequence< Empty > _SequenceL_tmp677(cspace);
int _SequenceL_tmp678;
int _SequenceL_tmp683;
::Sequence< int > _SequenceL_tmp686(cspace);
::Sequence< int > _SequenceL__Arg_finalS(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp691(cspace);
::Sequence< int > _SequenceL_tmp689(cspace);
::Sequence< int > _SequenceL_tmp690(cspace);
::Sequence< Empty > _SequenceL_tmp687(cspace);
int _SequenceL_tmp688;
int _SequenceL_tmp693;
int _SequenceL__scope__Index_finalS__tmp_index1;

_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
_SequenceL_tmp671 = _SequenceL_alfabet_0;	/*advent16a.sl:69: alfabet*/
_SequenceL_parallel__ellipsis(1, _SequenceL_tmp671.size(), __LINE__, _SequenceL_tmp672);	/*advent16a.sl:69: 1 ... size(alfabet)*/
_SequenceL_tmp671.delete_data(false);	
_SequenceL_tmp671.finished();	
SequenceL__parallel_split_1((*(_SequenceL__Arg_s.get_ptr(1))), ',', _SequenceL__Arg_moves);	/*advent16a.sl:68: split(s[1], ',')*/
_SequenceL__Arg_moves.clone(_SequenceL__delete_opttmp1);	/*advent16a.sl:69: applyMoves(1 ... size(alfabet), moves)*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_applyMoves_i_c_0(_SequenceL_tmp672, _SequenceL__delete_opttmp1, _SequenceL__Arg_firstPermutation));
_SequenceL_tmp672.finished();	
_SequenceL_tmp673.setSize(_SequenceL__Arg_firstPermutation.size());	/*advent16a.sl:74: firstSubstitution[firstPermutation]*/
if ((_SequenceL_tmp673.size() >= 1))	
{
_SequenceL_tmp674 = _SequenceL_alfabet_0;	/*advent16a.sl:70: alfabet*/
_SequenceL_parallel__ellipsis(1, _SequenceL_tmp674.size(), __LINE__, _SequenceL_tmp675);	/*advent16a.sl:70: 1 ... size(alfabet)*/
_SequenceL_tmp674.delete_data(false);	
_SequenceL_tmp674.finished();	
SequenceL__parallel_applyRenames_0(_SequenceL_tmp675, _SequenceL__Arg_moves, _SequenceL__Arg_firstSubstitution);	/*advent16a.sl:70: applyRenames(1 ... size(alfabet), moves)*/
_SequenceL_tmp675.delete_data(false);	
_SequenceL__Arg_moves.delete_data(false);	
_SequenceL__Arg_moves.finished();	
_SequenceL_tmp675.finished();	
}
else
{
_SequenceL__Arg_moves.delete_data(false);	
_SequenceL__Arg_moves.finished();	
}
if (((((SL_FLOAT)(_SequenceL_tmp673.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt3_ SequenceL__sl_main_nt3__val(_SequenceL__Arg_firstSubstitution, _SequenceL__Arg_firstPermutation, 1, _SequenceL_tmp673.size(), _SequenceL_tmp673);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt3__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index1=1,_stop_val__SequenceL__Index__tmp_index1=_SequenceL_tmp673.size(); _SequenceL__Index__tmp_index1<=_stop_val__SequenceL__Index__tmp_index1; _SequenceL__Index__tmp_index1+=1)
{
(*(_SequenceL_tmp673.get_ptr(_SequenceL__Index__tmp_index1))) = (*(_SequenceL__Arg_firstSubstitution.get_ptr((*(_SequenceL__Arg_firstPermutation.get_ptr(_SequenceL__Index__tmp_index1))))));	/*advent16a.sl:74: firstSubstitution[firstPermutation]*/
}
}
SequenceL__parallel_stringify_0(_SequenceL_tmp673, (*(_SequenceL__resultConv.get_ptr(1))));	/*advent16a.sl:74: stringify(firstSubstitution[firstPermutation])*/
_SequenceL_tmp673.delete_data(false);	
_SequenceL_tmp673.finished();	
_SequenceL_tmp677.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp677, _SequenceL_tmp680);	
_SequenceL_tmp677.delete_data(false);	
_SequenceL_tmp677.finished();	
_SequenceL_tmp678 = _SequenceL_noOfTimes_0;	/*advent16a.sl:71: noOfTimes*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_bits_i_i_i_0(_SequenceL_tmp680, 1, _SequenceL_tmp678, _SequenceL_tmp679));
_SequenceL_tmp680.finished();	
_SequenceL_tmp679.parallel_deFrag(__LINE__);	
_SequenceL_tmp681.setSize(_SequenceL_tmp679.size());	/*advent16a.sl:71: powerTs([], firstPermutation, 1, noOfTimes)[bits([], 1, noOfTimes)]*/
if ((_SequenceL_tmp681.size() >= 1))	
{
_SequenceL_tmp683 = _SequenceL_noOfTimes_0;	/*advent16a.sl:71: noOfTimes*/
}
else
{
_SequenceL_tmp683 = 0;	
}
SequenceL__sl_main_nt5_ SequenceL__sl_main_nt5__val(_SequenceL__Arg_firstPermutation, _SequenceL_tmp683, _SequenceL_tmp679, _SequenceL_tmp681);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL_tmp681.size() + 1, SequenceL__sl_main_nt5__val);
_SequenceL_tmp679.delete_data(false);	
_SequenceL__Arg_firstPermutation.delete_data(false);	
_SequenceL__Arg_firstPermutation.finished();	
_SequenceL_tmp679.finished();	
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_fol_i_z_0(_SequenceL_tmp681, _PointerSequenceL_transform_0, _SequenceL__Arg_finalP));
_SequenceL_tmp681.finished();	
_SequenceL_tmp686.setSize(_SequenceL__Arg_finalP.size());	/*advent16a.sl:75: finalS[finalP]*/
if ((_SequenceL_tmp686.size() >= 1))	
{
_SequenceL_tmp687.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp687, _SequenceL_tmp690);	
_SequenceL_tmp687.delete_data(false);	
_SequenceL_tmp687.finished();	
_SequenceL_tmp688 = _SequenceL_noOfTimes_0;	/*advent16a.sl:72: noOfTimes*/
SequenceL__parallel_bits_0(_SequenceL_tmp690, 1, _SequenceL_tmp688, _SequenceL_tmp689);	/*advent16a.sl:72: bits([], 1, noOfTimes)*/
_SequenceL_tmp690.delete_data(false);	
_SequenceL_tmp690.finished();	
_SequenceL_tmp689.parallel_deFrag(__LINE__);	
_SequenceL_tmp691.setSize(_SequenceL_tmp689.size());	/*advent16a.sl:72: powerTs([], firstSubstitution, 1, noOfTimes)[bits([], 1, noOfTimes)]*/
if ((_SequenceL_tmp691.size() >= 1))	
{
_SequenceL_tmp693 = _SequenceL_noOfTimes_0;	/*advent16a.sl:72: noOfTimes*/
}
else
{
_SequenceL_tmp693 = 0;	
}
SequenceL__sl_main_nt7_ SequenceL__sl_main_nt7__val(_SequenceL__Arg_firstSubstitution, _SequenceL_tmp693, _SequenceL_tmp689, _SequenceL_tmp691);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL_tmp691.size() + 1, SequenceL__sl_main_nt7__val);
_SequenceL_tmp689.delete_data(false);	
_SequenceL__Arg_firstSubstitution.delete_data(false);	
_SequenceL__Arg_firstSubstitution.finished();	
_SequenceL_tmp689.finished();	
SequenceL__parallel_fol_0(_SequenceL_tmp691, _PointerSequenceL_transform_0, _SequenceL__Arg_finalS);	/*advent16a.sl:72: fol(powerTs([], firstSubstitution, 1, noOfTimes)[bits([], 1, noOfTimes)], transform)*/
_SequenceL_tmp691.delete_data(false);	
_SequenceL_tmp691.finished();	
}
else
{
_SequenceL_tmp693 = 0;	
_SequenceL__scope__Index_finalS__tmp_index1 = 0;	
_SequenceL_tmp688 = 0;	
_SequenceL__Arg_firstSubstitution.delete_data(false);	
_SequenceL_tmp691.delete_data(false);	
_SequenceL_tmp691.finished();	
_SequenceL__Arg_firstSubstitution.finished();	
}
if (((((SL_FLOAT)(_SequenceL_tmp686.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt9_ SequenceL__sl_main_nt9__val(_SequenceL__Arg_finalS, _SequenceL__Arg_finalP, 1, _SequenceL_tmp686.size(), _SequenceL_tmp686);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt9__val);
_SequenceL__Arg_finalP.delete_data(false);	
_SequenceL__Arg_finalS.delete_data(false);	
_SequenceL__Arg_finalS.finished();	
_SequenceL__Arg_finalP.finished();	
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index2=1,_stop_val__SequenceL__Index__tmp_index2=_SequenceL_tmp686.size(); _SequenceL__Index__tmp_index2<=_stop_val__SequenceL__Index__tmp_index2; _SequenceL__Index__tmp_index2+=1)
{
(*(_SequenceL_tmp686.get_ptr(_SequenceL__Index__tmp_index2))) = (*(_SequenceL__Arg_finalS.get_ptr((*(_SequenceL__Arg_finalP.get_ptr(_SequenceL__Index__tmp_index2))))));	/*advent16a.sl:75: finalS[finalP]*/
}
_SequenceL__Arg_finalP.delete_data(false);	
_SequenceL__Arg_finalS.delete_data(false);	
_SequenceL__Arg_finalS.finished();	
_SequenceL__Arg_finalP.finished();	
}
SequenceL__parallel_stringify_0(_SequenceL_tmp686, (*(_SequenceL__resultConv.get_ptr(2))));	/*advent16a.sl:75: stringify(finalS[finalP])*/
_SequenceL_tmp686.delete_data(false);	
_SequenceL_tmp686.finished();	
}
void SequenceL__sl_main_nt1_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index__tmp_index1 = _r.begin(); _SequenceL__Index__tmp_index1 < _e; _SequenceL__Index__tmp_index1++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__Index__tmp_index1 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__Index__tmp_index1 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result2.get_ptr(_SequenceL__no_share_iter))) = (*(_SequenceL__Arg_a.get_ptr((*(_SequenceL__Arg_b.get_ptr(_SequenceL__no_share_iter))))));	/*advent16a.sl:63: a[b]*/
}
}
}
void SequenceL__parallel_transform_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__Arg_b, ::Sequence< int > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_b.size());	/*advent16a.sl:63: a[b]*/
if (((((SL_FLOAT)(_SequenceL__resultConv.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt1_ SequenceL__sl_main_nt1__val(_SequenceL__Arg_a, _SequenceL__Arg_b, 1, _SequenceL__resultConv.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt1__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index1=1,_stop_val__SequenceL__Index__tmp_index1=_SequenceL__resultConv.size(); _SequenceL__Index__tmp_index1<=_stop_val__SequenceL__Index__tmp_index1; _SequenceL__Index__tmp_index1+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index__tmp_index1))) = (*(_SequenceL__Arg_a.get_ptr((*(_SequenceL__Arg_b.get_ptr(_SequenceL__Index__tmp_index1))))));	/*advent16a.sl:63: a[b]*/
}
}
}
void SequenceL_applyFol_0(::Sequence< ::Sequence< int > > &_SequenceL__Arg_inputList, _sl_fun_pointer* _SequenceL__Arg_operator, ::Sequence< ::Sequence< int > > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL_tmp64(cspace);
::Sequence< int > _SequenceL_tmp67(cspace);
int _SequenceL_tmp72;

ellipsis(0, ((_SequenceL__Arg_inputList.size() - 1) / 2), _SequenceL_tmp64);	/*advent16a.sl:89: 0 ... ((size(inputList) - 1) / 2)*/
_SequenceL_tmp67.setSize(_SequenceL_tmp64.size());	/*advent16a.sl:89: 2 * (0 ... ((size(inputList) - 1) / 2)) + 1*/
SIMD_DIRECTIVE
for (int _SequenceL__i66=1,_stop_val__SequenceL__i66=_SequenceL_tmp64.size(); _SequenceL__i66<=_stop_val__SequenceL__i66; _SequenceL__i66+=1)
{
(*(_SequenceL_tmp67.get_ptr(_SequenceL__i66))) = ((2 * (*(_SequenceL_tmp64.get_ptr(_SequenceL__i66)))) + 1);	/*advent16a.sl:89: 2 * (0 ... ((size(inputList) - 1) / 2)) + 1*/
}
_SequenceL_tmp64.delete_data(true);	
_SequenceL_tmp64.finished();	
_SequenceL__resultConv.setSize(_SequenceL_tmp67.size());	/*advent16a.sl:89: operator(inputList[i], inputList[i + 1]) when i < size(inputList)        else                inputList[i]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__resultConv.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
if (((*(_SequenceL_tmp67.get_ptr(_SequenceL__Index_i))) < _SequenceL__Arg_inputList.size()))	/*advent16a.sl:89: operator(inputList[i], inputList[i + 1]) when i < size(inputList)        else                inputList[i]*/
{
_SequenceL_tmp72 = ((*(_SequenceL_tmp67.get_ptr(_SequenceL__Index_i))) + 1);	/*advent16a.sl:86: i + 1*/
((void (*)(::Sequence< int >&,::Sequence< int >&,::Sequence< int >&))_SequenceL__Arg_operator[0])((*(_SequenceL__Arg_inputList.get_ptr((*(_SequenceL_tmp67.get_ptr(_SequenceL__Index_i)))))), (*(_SequenceL__Arg_inputList.get_ptr(_SequenceL_tmp72))), (*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))));	/*advent16a.sl:86: operator(inputList[i], inputList[i + 1])*/
}
else
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_inputList.get_ptr((*(_SequenceL_tmp67.get_ptr(_SequenceL__Index_i))))));	/*advent16a.sl:89: inputList[i]*/
}
}
_SequenceL_tmp67.delete_data(true);	
_SequenceL_tmp67.finished();	
}
void SequenceL_fol_0(::Sequence< ::Sequence< int > > &_SequenceL__Arg_inputList, _sl_fun_pointer* _SequenceL__Arg_operator, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< ::Sequence< int > > _SequenceL___Arg_inputList_tco(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp170(cspace);

if (_SequenceL__Arg_inputList.onlyInstance())	
{
_SequenceL___Arg_inputList_tco.replaceSequence(_SequenceL__Arg_inputList);	
}
else
{
_SequenceL___Arg_inputList_tco.hard_copy(_SequenceL__Arg_inputList,__LINE__);	
}
fol_advent16a_label_tco:	
if ((_SequenceL___Arg_inputList_tco.size() == 1))	/*advent16a.sl:82: head(inputList) when size(inputList) = 1        else                fol(applyFol(inputList, operator), operator)*/
{
_SequenceL___Arg_inputList_tco.head(_SequenceL__resultConv);	/*advent16a.sl:80: head(inputList)*/
}
else
{
SequenceL_applyFol_0(_SequenceL___Arg_inputList_tco, _SequenceL__Arg_operator, _SequenceL_tmp170);	/*advent16a.sl:82: applyFol(inputList, operator)*/
_swap(_SequenceL___Arg_inputList_tco, _SequenceL_tmp170);	
goto fol_advent16a_label_tco;	/*advent16a.sl:82: fol(applyFol(inputList, operator), operator)*/
}
_SequenceL_tmp170.delete_data(true);	
_SequenceL_tmp170.finished();	
}
void SequenceL_powerTs_0(::Sequence< ::Sequence< int > > &_SequenceL__Arg_ts, ::Sequence< int > &_SequenceL__Arg_t, int _SequenceL__Arg_f, int _SequenceL__Arg_total, ::Sequence< ::Sequence< int > > &_SequenceL__resultConv)
{
::Sequence< ::Sequence< int > > _SequenceL___Arg_ts_tco(cspace);
::Sequence< int > _SequenceL___Arg_t_tco(cspace);
int _SequenceL___Arg_f_tco;
::Sequence< ::Sequence< int > > _SequenceL_tmp174(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp179(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp177(cspace);
::Sequence< int > _SequenceL_tmp180(cspace);
int _SequenceL_tmp181;

if (_SequenceL__Arg_ts.onlyInstance())	
{
_SequenceL___Arg_ts_tco.replaceSequence(_SequenceL__Arg_ts);	
}
else
{
_SequenceL___Arg_ts_tco.hard_copy(_SequenceL__Arg_ts,__LINE__);	
}
if (_SequenceL__Arg_t.onlyInstance())	
{
_SequenceL___Arg_t_tco.replaceSequence(_SequenceL__Arg_t);	
}
else
{
_SequenceL___Arg_t_tco.hard_copy(_SequenceL__Arg_t,__LINE__);	
}
_SequenceL___Arg_f_tco = _SequenceL__Arg_f;	
powerTs_advent16a_label_tco:	
if (((_SequenceL___Arg_f_tco * 2) > _SequenceL__Arg_total))	/*advent16a.sl:56: ts ++ [t] when f*2 > total  else powerTs(ts ++ [t], t[t], f*2, total)*/
{
_SequenceL_tmp174.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp174.get_ptr(1))) = _SequenceL___Arg_t_tco;	/*advent16a.sl:55: t*/
append(_SequenceL___Arg_ts_tco, _SequenceL_tmp174, _SequenceL__resultConv);	/*advent16a.sl:55: ts ++ [t]*/
}
else
{
_SequenceL_tmp177.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp177.get_ptr(1))) = _SequenceL___Arg_t_tco;	/*advent16a.sl:56: t*/
append(_SequenceL___Arg_ts_tco, _SequenceL_tmp177, _SequenceL_tmp179);	/*advent16a.sl:56: ts ++ [t]*/
_SequenceL_tmp180.setSize(_SequenceL___Arg_t_tco.size());	/*advent16a.sl:56: t[t]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index1=1,_stop_val__SequenceL__Index__tmp_index1=_SequenceL_tmp180.size(); _SequenceL__Index__tmp_index1<=_stop_val__SequenceL__Index__tmp_index1; _SequenceL__Index__tmp_index1+=1)
{
(*(_SequenceL_tmp180.get_ptr(_SequenceL__Index__tmp_index1))) = (*(_SequenceL___Arg_t_tco.get_ptr((*(_SequenceL___Arg_t_tco.get_ptr(_SequenceL__Index__tmp_index1))))));	/*advent16a.sl:56: t[t]*/
}
_SequenceL_tmp181 = (_SequenceL___Arg_f_tco * 2);	/*advent16a.sl:56: f*2*/
_swap(_SequenceL___Arg_ts_tco, _SequenceL_tmp179);	
_swap(_SequenceL___Arg_t_tco, _SequenceL_tmp180);	
_SequenceL___Arg_f_tco = _SequenceL_tmp181;	
goto powerTs_advent16a_label_tco;	/*advent16a.sl:56: powerTs(ts ++ [t], t[t], f*2, total)*/
}
_SequenceL_tmp174.delete_data(true);	
_SequenceL_tmp179.delete_data(true);	
_SequenceL_tmp177.delete_data(true);	
_SequenceL_tmp180.delete_data(true);	
_SequenceL_tmp180.finished();	
_SequenceL_tmp177.finished();	
_SequenceL_tmp179.finished();	
_SequenceL_tmp174.finished();	
}
void SequenceL_bits_0(::Sequence< int > &_SequenceL__Arg_b, int _SequenceL__Arg_pow2, int _SequenceL__Arg_num, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL___Arg_b_tco(cspace);
int _SequenceL___Arg_pow2_tco;
int _SequenceL___Arg_num_tco;
int _SequenceL_tmp188;
int _SequenceL_tmp189;
::Sequence< int > _SequenceL_tmp193(cspace);
::Sequence< int > _SequenceL_tmp191(cspace);
int _SequenceL_tmp194;
int _SequenceL_tmp195;

if (_SequenceL__Arg_b.onlyInstance())	
{
_SequenceL___Arg_b_tco.replaceSequence(_SequenceL__Arg_b);	
}
else
{
_SequenceL___Arg_b_tco.hard_copy(_SequenceL__Arg_b,__LINE__);	
}
_SequenceL___Arg_pow2_tco = _SequenceL__Arg_pow2;	
_SequenceL___Arg_num_tco = _SequenceL__Arg_num;	
bits_advent16a_label_tco:	
if ((_SequenceL___Arg_num_tco == 0))	/*advent16a.sl:61: b when num = 0  else bits(b, pow2 + 1, num / 2) when num mod 2 = 0  else bits(b ++ [pow2], pow2 + 1, num / 2)*/
{
_SequenceL__resultConv = _SequenceL___Arg_b_tco;	/*advent16a.sl:59: b*/
}
else
{
if (((_SequenceL___Arg_num_tco % 2) == 0))	/*advent16a.sl:61: bits(b, pow2 + 1, num / 2) when num mod 2 = 0  else bits(b ++ [pow2], pow2 + 1, num / 2)*/
{
_SequenceL_tmp188 = (_SequenceL___Arg_pow2_tco + 1);	/*advent16a.sl:60: pow2 + 1*/
_SequenceL_tmp189 = (_SequenceL___Arg_num_tco / 2);	/*advent16a.sl:60: num / 2*/
_SequenceL___Arg_pow2_tco = _SequenceL_tmp188;	
_SequenceL___Arg_num_tco = _SequenceL_tmp189;	
goto bits_advent16a_label_tco;	/*advent16a.sl:60: bits(b, pow2 + 1, num / 2)*/
}
else
{
_SequenceL_tmp191.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp191.get_ptr(1))) = _SequenceL___Arg_pow2_tco;	/*advent16a.sl:61: pow2*/
_appendF(_SequenceL___Arg_b_tco, _SequenceL_tmp191, _SequenceL_tmp193);	/*advent16a.sl:61: b ++ [pow2]*/
_SequenceL_tmp194 = (_SequenceL___Arg_pow2_tco + 1);	/*advent16a.sl:61: pow2 + 1*/
_SequenceL_tmp195 = (_SequenceL___Arg_num_tco / 2);	/*advent16a.sl:61: num / 2*/
_swap(_SequenceL___Arg_b_tco, _SequenceL_tmp193);	
_SequenceL___Arg_pow2_tco = _SequenceL_tmp194;	
_SequenceL___Arg_num_tco = _SequenceL_tmp195;	
goto bits_advent16a_label_tco;	/*advent16a.sl:61: bits(b ++ [pow2], pow2 + 1, num / 2)*/
}
}
_SequenceL_tmp193.delete_data(true);	
_SequenceL_tmp191.delete_data(true);	
_SequenceL_tmp191.finished();	
_SequenceL_tmp193.finished();	
}
void SequenceL_stringify_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< char > &_SequenceL__resultConv)
{
::Sequence< char > _SequenceL_tmp196(cspace);

_SequenceL__resultConv.setSize(_SequenceL__Arg_a.size());	/*advent16a.sl:52: alfabet[a]*/
if ((_SequenceL__resultConv.size() >= 1))	
{
_SequenceL_tmp196 = _SequenceL_alfabet_0;	/*advent16a.sl:52: alfabet*/
}
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index1=1,_stop_val__SequenceL__Index__tmp_index1=_SequenceL__resultConv.size(); _SequenceL__Index__tmp_index1<=_stop_val__SequenceL__Index__tmp_index1; _SequenceL__Index__tmp_index1+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index__tmp_index1))) = (*(_SequenceL_tmp196.get_ptr((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index__tmp_index1))))));	/*advent16a.sl:52: alfabet[a]*/
}
_SequenceL_tmp196.delete_data(true);	
_SequenceL_tmp196.finished();	
}
void SequenceL_setElementAt_1(::Sequence< int > &_SequenceL__Arg_list, int _SequenceL__Arg_location, int _SequenceL__Arg_newElement, ::Sequence< int > &_SequenceL__resultConv)
{

if (_SequenceL__Arg_list.onlyInstance())	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
{
_SequenceL__resultConv.replaceSequence(_SequenceL__Arg_list);	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
if (((_SequenceL__Arg_location >= 1) && (_SequenceL__Arg_location <= _SequenceL__resultConv.size())))	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Arg_location))) = _SequenceL__Arg_newElement;	/*Sequence.sl:78: newElement*/
}
}
else
{
_SequenceL__resultConv.setSize(_SequenceL__Arg_list.size());	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_list.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
if (!(_SequenceL__Index_i == _SequenceL__Arg_location))	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_list.get_ptr(_SequenceL__Index_i)));	/*Sequence.sl:76: list[i]*/
}
else
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = _SequenceL__Arg_newElement;	/*Sequence.sl:78: newElement*/
}
}
}
}
void SequenceL_doPermute_0(::Sequence< int > &_SequenceL__Arg_p, ::Sequence< int > &_SequenceL__Arg_place, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL_tmp228(cspace);
::Sequence< int > _SequenceL__delete_opttmp1(cspace);
int _SequenceL__Arg_val2;
int _SequenceL__Arg_val1;

_SequenceL__Arg_place.clone(_SequenceL__delete_opttmp1);	/*advent16a.sl:20: setElementAt(place, p[1], val2)*/
_SequenceL__Arg_val2 = (*(_SequenceL__Arg_place.get_ptr((*(_SequenceL__Arg_p.get_ptr(2))))));	/*advent16a.sl:18: place[p[2]]*/
SequenceL_setElementAt_1(_SequenceL__delete_opttmp1, (*(_SequenceL__Arg_p.get_ptr(1))), _SequenceL__Arg_val2, _SequenceL_tmp228);	/*advent16a.sl:20: setElementAt(place, p[1], val2)*/
_SequenceL__delete_opttmp1.delete_data(true);	
_SequenceL__delete_opttmp1.finished();	
_SequenceL__Arg_val1 = (*(_SequenceL__Arg_place.get_ptr((*(_SequenceL__Arg_p.get_ptr(1))))));	/*advent16a.sl:17: place[p[1]]*/
SequenceL_setElementAt_1(_SequenceL_tmp228, (*(_SequenceL__Arg_p.get_ptr(2))), _SequenceL__Arg_val1, _SequenceL__resultConv);	/*advent16a.sl:20: setElementAt(setElementAt(place, p[1], val2), p[2], val1)*/
_SequenceL_tmp228.delete_data(true);	
_SequenceL_tmp228.finished();	
}
void SequenceL_indexesOf_1(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_element, ::Sequence< int > &_SequenceL__resultConv)
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
void SequenceL_firstIndexOf_1(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_element, int &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL__Arg_indexes(cspace);

SequenceL_indexesOf_1(_SequenceL__Arg_list, _SequenceL__Arg_element, _SequenceL__Arg_indexes);	/*Sequence.sl:24: indexesOf(list, element)*/
if ((_SequenceL__Arg_indexes.size() == 0))	/*Sequence.sl:28: 0 when size(indexes) = 0	else		head(indexes)*/
{
_SequenceL__resultConv = 0;	/*Sequence.sl:26: 0*/
_SequenceL__Arg_indexes.delete_data(true);	
_SequenceL__Arg_indexes.finished();	
}
else
{
_SequenceL__resultConv = _SequenceL__Arg_indexes.head();	/*Sequence.sl:28: head(indexes)*/
_SequenceL__Arg_indexes.delete_data(true);	
_SequenceL__Arg_indexes.finished();	
}
}
void SequenceL_indexesOf_1(::Sequence< int > &_SequenceL__Arg_list, int _SequenceL__Arg_element, ::Sequence< int > &_SequenceL__resultConv)
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
void SequenceL_firstIndexOf_1(::Sequence< int > &_SequenceL__Arg_list, int _SequenceL__Arg_element, int &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL__Arg_indexes(cspace);

SequenceL_indexesOf_1(_SequenceL__Arg_list, _SequenceL__Arg_element, _SequenceL__Arg_indexes);	/*Sequence.sl:24: indexesOf(list, element)*/
if ((_SequenceL__Arg_indexes.size() == 0))	/*Sequence.sl:28: 0 when size(indexes) = 0	else		head(indexes)*/
{
_SequenceL__resultConv = 0;	/*Sequence.sl:26: 0*/
_SequenceL__Arg_indexes.delete_data(true);	
_SequenceL__Arg_indexes.finished();	
}
else
{
_SequenceL__resultConv = _SequenceL__Arg_indexes.head();	/*Sequence.sl:28: head(indexes)*/
_SequenceL__Arg_indexes.delete_data(true);	
_SequenceL__Arg_indexes.finished();	
}
}
void SequenceL_applyRename_0(::Sequence< char > &_SequenceL__Arg_move, ::Sequence< int > &_SequenceL__Arg_reverseKind, ::Sequence< int > &_SequenceL__resultConv)
{
char _SequenceL_tmp255;
::Sequence< char > _SequenceL_tmp258(cspace);
::Sequence< char > _SequenceL_tmp261(cspace);
::Sequence< char > _SequenceL_tmp259(cspace);
::Sequence< char > _SequenceL_tmp260(cspace);
::Sequence< int > _SequenceL_tmp262(cspace);

_SequenceL_tmp255 = _SequenceL__Arg_move.head();	/*advent16a.sl:37: head(move)*/
if ((_SequenceL_tmp255 == 'p'))	/*advent16a.sl:38: doPermute(firstIndexOf(alfabet, takeAway(tail(move), "/")), reverseKind) when head(move) = 'p'  else reverseKind*/
{
_SequenceL_tmp258 = _SequenceL_alfabet_0;	/*advent16a.sl:37: alfabet*/
_SequenceL__Arg_move.tail(_SequenceL_tmp259);	/*advent16a.sl:37: tail(move)*/
_SequenceL_tmp260 = "/";	/*advent16a.sl:37: "/"*/
takeaway(_SequenceL_tmp259, _SequenceL_tmp260, _SequenceL_tmp261);	/*advent16a.sl:37: takeAway(tail(move), "/")*/
_SequenceL_tmp259.delete_data(true);	
_SequenceL_tmp260.delete_data(true);	
_SequenceL_tmp260.finished();	
_SequenceL_tmp259.finished();	
_SequenceL_tmp262.setSize(_SequenceL_tmp261.size());	/*advent16a.sl:37: firstIndexOf(alfabet, takeAway(tail(move), "/"))*/
SIMD_DIRECTIVE
for (int _SequenceL__i263=1,_stop_val__SequenceL__i263=_SequenceL_tmp262.size(); _SequenceL__i263<=_stop_val__SequenceL__i263; _SequenceL__i263+=1)
{
SequenceL_firstIndexOf_1(_SequenceL_tmp258, (*(_SequenceL_tmp261.get_ptr(_SequenceL__i263))), (*(_SequenceL_tmp262.get_ptr(_SequenceL__i263))));	/*advent16a.sl:37: firstIndexOf(alfabet, takeAway(tail(move), "/"))*/
}
_SequenceL_tmp261.delete_data(true);	
_SequenceL_tmp258.delete_data(true);	
_SequenceL_tmp258.finished();	
_SequenceL_tmp261.finished();	
SequenceL_doPermute_0(_SequenceL_tmp262, _SequenceL__Arg_reverseKind, _SequenceL__resultConv);	/*advent16a.sl:37: doPermute(firstIndexOf(alfabet, takeAway(tail(move), "/")), reverseKind)*/
_SequenceL_tmp262.delete_data(true);	
_SequenceL_tmp262.finished();	
}
else
{
_SequenceL__resultConv = _SequenceL__Arg_reverseKind;	/*advent16a.sl:38: reverseKind*/
}
}
void SequenceL_toKind_0(::Sequence< int > &_SequenceL__Arg_reverseKind, ::Sequence< int > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_reverseKind.size());	/*advent16a.sl:50: firstIndexOf(reverseKind, i)*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_reverseKind.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
SequenceL_firstIndexOf_1(_SequenceL__Arg_reverseKind, _SequenceL__Index_i, (*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))));	/*advent16a.sl:50: firstIndexOf(reverseKind, i)*/
}
}
void SequenceL_applyRenames_0(::Sequence< int > &_SequenceL__Arg_reverseKind, ::Sequence< ::Sequence< char > > &_SequenceL__Arg_moves, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL___Arg_reverseKind_tco(cspace);
::Sequence< ::Sequence< char > > _SequenceL___Arg_moves_tco(cspace);
::Sequence< int > _SequenceL__Arg_newReverseKind(cspace);
::Sequence< char > _SequenceL__Arg_move(cspace);
::Sequence< ::Sequence< char > > _SequenceL_tmp268(cspace);

if (_SequenceL__Arg_reverseKind.onlyInstance())	
{
_SequenceL___Arg_reverseKind_tco.replaceSequence(_SequenceL__Arg_reverseKind);	
}
else
{
_SequenceL___Arg_reverseKind_tco.hard_copy(_SequenceL__Arg_reverseKind,__LINE__);	
}
if (_SequenceL__Arg_moves.onlyInstance())	
{
_SequenceL___Arg_moves_tco.replaceSequence(_SequenceL__Arg_moves);	
}
else
{
_SequenceL___Arg_moves_tco.hard_copy(_SequenceL__Arg_moves,__LINE__);	
}
applyRenames_advent16a_label_tco:	
if ((_SequenceL___Arg_moves_tco.size() == 0))	/*advent16a.sl:47: toKind(reverseKind) when size(moves) = 0  else applyRenames(newReverseKind, tail(moves))*/
{
SequenceL_toKind_0(_SequenceL___Arg_reverseKind_tco, _SequenceL__resultConv);	/*advent16a.sl:45: toKind(reverseKind)*/
}
else
{
_SequenceL___Arg_moves_tco.head(_SequenceL__Arg_move);	/*advent16a.sl:42: head(moves)*/
SequenceL_applyRename_0(_SequenceL__Arg_move, _SequenceL___Arg_reverseKind_tco, _SequenceL__Arg_newReverseKind);	/*advent16a.sl:43: applyRename(move, reverseKind)*/
_SequenceL___Arg_moves_tco.tail(_SequenceL_tmp268);	/*advent16a.sl:46: tail(moves)*/
_swap(_SequenceL___Arg_reverseKind_tco, _SequenceL__Arg_newReverseKind);	
_swap(_SequenceL___Arg_moves_tco, _SequenceL_tmp268);	
goto applyRenames_advent16a_label_tco;	/*advent16a.sl:47: applyRenames(newReverseKind, tail(moves))*/
}
_SequenceL__Arg_newReverseKind.delete_data(true);	
_SequenceL__Arg_move.delete_data(true);	
_SequenceL_tmp268.delete_data(true);	
_SequenceL_tmp268.finished();	
_SequenceL__Arg_move.finished();	
_SequenceL__Arg_newReverseKind.finished();	
}
void SequenceL_integerPowerHelper_4(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int _SequenceL__Arg_val, int &_SequenceL__resultConv)
{
int _SequenceL___Arg_y_tco;
int _SequenceL___Arg_val_tco;
int _SequenceL_tmp323;
int _SequenceL_tmp324;

_SequenceL___Arg_y_tco = _SequenceL__Arg_y;	
_SequenceL___Arg_val_tco = _SequenceL__Arg_val;	
integerPowerHelper_Math_label_tco:	
if ((_SequenceL___Arg_y_tco < 1))	/*Math.sl:20: val when y < 1	else		integerPowerHelper(x, y - 1, val * x)*/
{
_SequenceL__resultConv = _SequenceL___Arg_val_tco;	/*Math.sl:18: val*/
}
else
{
_SequenceL_tmp323 = (_SequenceL___Arg_y_tco - 1);	/*Math.sl:20: y - 1*/
_SequenceL_tmp324 = (_SequenceL___Arg_val_tco * _SequenceL__Arg_x);	/*Math.sl:20: val * x*/
_SequenceL___Arg_y_tco = _SequenceL_tmp323;	
_SequenceL___Arg_val_tco = _SequenceL_tmp324;	
goto integerPowerHelper_Math_label_tco;	/*Math.sl:20: integerPowerHelper(x, y - 1, val * x)*/
}
}
void SequenceL_integerPower_4(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv)
{

SequenceL_integerPowerHelper_4(_SequenceL__Arg_x, _SequenceL__Arg_y, 1, _SequenceL__resultConv);	/*Math.sl:14: integerPowerHelper(x, y, 1)*/
}
void SequenceL_charToInt_2(char _SequenceL__Arg_char, int &_SequenceL__resultConv)
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
void SequenceL_atoIWorker_2(::Sequence< char > &_SequenceL__Arg_numString, ::Sequence< int > &_SequenceL__resultConv)
{
int _SequenceL_tmp385;
int _SequenceL__Arg_place;
int _SequenceL_tmp386;

_SequenceL__resultConv.setSize(_SequenceL__Arg_numString.size());	/*Conversion.sl:60: charToInt(numString[i]) * place*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_numString.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
SequenceL_charToInt_2((*(_SequenceL__Arg_numString.get_ptr(_SequenceL__Index_i))), _SequenceL_tmp385);	/*Conversion.sl:60: charToInt(numString[i])*/
_SequenceL_tmp386 = (_SequenceL__Arg_numString.size() - _SequenceL__Index_i);	/*Conversion.sl:58: size(numString) - i*/
SequenceL_integerPower_4(10, _SequenceL_tmp386, _SequenceL__Arg_place);	/*Conversion.sl:58: integerPower(10, (size(numString) - i))*/
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (_SequenceL_tmp385 * _SequenceL__Arg_place);	/*Conversion.sl:60: charToInt(numString[i]) * place*/
}
}
void SequenceL_take_1(::Sequence< char > &_SequenceL__Arg_list, int _SequenceL__Arg_n, ::Sequence< char > &_SequenceL__resultConv)
{

_SequenceL__Arg_list.sub_seq(1, _SequenceL__Arg_n, _SequenceL__resultConv);	/*Sequence.sl:171: list[1 ... n]*/
}
void SequenceL_isDigit_3(char _SequenceL__Arg_char, bool &_SequenceL__resultConv)
{

_SequenceL__resultConv = ((((((((((_SequenceL__Arg_char == '0') || (_SequenceL__Arg_char == '1')) || (_SequenceL__Arg_char == '2')) || (_SequenceL__Arg_char == '3')) || (_SequenceL__Arg_char == '4')) || (_SequenceL__Arg_char == '5')) || (_SequenceL__Arg_char == '6')) || (_SequenceL__Arg_char == '7')) || (_SequenceL__Arg_char == '8')) || (_SequenceL__Arg_char == '9'));	/*String.sl:20: char = '0' or char = '1' or char = '2' or char = '3' or char = '4' or char = '5' or char = '6' or char = '7' or char = '8' or char = '9'*/
}
void SequenceL_trimNonNumeric_2(::Sequence< char > &_SequenceL__Arg_numString, int _SequenceL__Arg_i, ::Sequence< char > &_SequenceL__resultConv)
{
int _SequenceL___Arg_i_tco;
bool _SequenceL_tmp462;
int _SequenceL_tmp465;
int _SequenceL_tmp467;

_SequenceL___Arg_i_tco = _SequenceL__Arg_i;	
trimNonNumeric_Conversion_label_tco:	
if ((_SequenceL___Arg_i_tco > _SequenceL__Arg_numString.size()))	/*Conversion.sl:53: numString when i > size(numString)	else		take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL__resultConv = _SequenceL__Arg_numString;	/*Conversion.sl:49: numString*/
}
else
{
SequenceL_isDigit_3((*(_SequenceL__Arg_numString.get_ptr(_SequenceL___Arg_i_tco))), _SequenceL_tmp462);	/*Conversion.sl:52: isDigit(numString[i])*/
if (!_SequenceL_tmp462)	/*Conversion.sl:53: take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL_tmp465 = (_SequenceL___Arg_i_tco - 1);	/*Conversion.sl:51: i-1*/
SequenceL_take_1(_SequenceL__Arg_numString, _SequenceL_tmp465, _SequenceL__resultConv);	/*Conversion.sl:51: take(numString, i-1)*/
}
else
{
_SequenceL_tmp467 = (_SequenceL___Arg_i_tco + 1);	/*Conversion.sl:53: i + 1*/
_SequenceL___Arg_i_tco = _SequenceL_tmp467;	
goto trimNonNumeric_Conversion_label_tco;	/*Conversion.sl:53: trimNonNumeric(numString, i + 1)*/
}
}
}
void SequenceL_isWhiteSpace_3(char _SequenceL__Arg_input, bool &_SequenceL__resultConv)
{

_SequenceL__resultConv = ((((_SequenceL__Arg_input == ' ') || (_SequenceL__Arg_input == '\n')) || (_SequenceL__Arg_input == '\t')) || (_SequenceL__Arg_input == '\r'));	/*String.sl:16: input = ' ' or input = '\n' or input = '\t' or input = '\r'*/
}
void SequenceL_trimStart_3(::Sequence< char > &_SequenceL__Arg_input, ::Sequence< char > &_SequenceL__resultConv)
{
::Sequence< char > _SequenceL___Arg_input_tco(cspace);
bool _SequenceL_tmp544;
char _SequenceL_tmp543;
::Sequence< char > _SequenceL_tmp546(cspace);

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
_SequenceL_tmp543 = _SequenceL___Arg_input_tco.head();	/*String.sl:10: head(input)*/
SequenceL_isWhiteSpace_3(_SequenceL_tmp543, _SequenceL_tmp544);	/*String.sl:11: isWhiteSpace(head(input))*/
if (_SequenceL_tmp544)	/*String.sl:12: trimStart(tail(input)) when isWhiteSpace(head(input))	else		input*/
{
_SequenceL___Arg_input_tco.tail(_SequenceL_tmp546);	/*String.sl:10: tail(input)*/
_swap(_SequenceL___Arg_input_tco, _SequenceL_tmp546);	
goto trimStart_String_label_tco;	/*String.sl:10: trimStart(tail(input))*/
}
else
{
_SequenceL__resultConv = _SequenceL___Arg_input_tco;	/*String.sl:12: input*/
}
}
_SequenceL_tmp546.delete_data(true);	
_SequenceL_tmp546.finished();	
}
void SequenceL_multipleIndexes_1(::Sequence< char > &_SequenceL__Arg_list, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_indexes, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv)
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
void SequenceL_doSpin_0(int _SequenceL__Arg_s, ::Sequence< int > &_SequenceL__Arg_place, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL_tmp602(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp599(cspace);
int _SequenceL__Arg_start;
int _SequenceL__Arg_end;
int _SequenceL__Arg_mid;

_SequenceL_tmp599.setSize(2 > 0 ? 2 : 0);	
_SequenceL__Arg_end = (_SequenceL__Arg_place.size() - _SequenceL__Arg_s);	/*advent16a.sl:9: size(place) - s*/
_SequenceL__Arg_start = (_SequenceL__Arg_end + 1);	/*advent16a.sl:10: end + 1*/
_SequenceL__Arg_mid = _SequenceL__Arg_place.size();	/*advent16a.sl:11: size(place)*/
ellipsis(_SequenceL__Arg_start, _SequenceL__Arg_mid, (*(_SequenceL_tmp599.get_ptr(1))));	/*advent16a.sl:13: start ... mid*/
ellipsis(1, _SequenceL__Arg_end, (*(_SequenceL_tmp599.get_ptr(2))));	/*advent16a.sl:13: 1 ... end*/
appends(_SequenceL_tmp599, _SequenceL_tmp602);	/*advent16a.sl:13: join([start ... mid, 1 ... end])*/
_SequenceL_tmp599.delete_data(true);	
_SequenceL_tmp599.finished();	
_SequenceL__resultConv.setSize(_SequenceL_tmp602.size());	/*advent16a.sl:13: place[join([start ... mid, 1 ... end])]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index1=1,_stop_val__SequenceL__Index__tmp_index1=_SequenceL__resultConv.size(); _SequenceL__Index__tmp_index1<=_stop_val__SequenceL__Index__tmp_index1; _SequenceL__Index__tmp_index1+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index__tmp_index1))) = (*(_SequenceL__Arg_place.get_ptr((*(_SequenceL_tmp602.get_ptr(_SequenceL__Index__tmp_index1))))));	/*advent16a.sl:13: place[join([start ... mid, 1 ... end])]*/
}
_SequenceL_tmp602.delete_data(true);	
_SequenceL_tmp602.finished();	
}
void SequenceL_stringToInt_2(::Sequence< char > &_SequenceL__Arg_numString, int &_SequenceL__resultConv)
{
::Sequence< char > _SequenceL__Arg_trimmed(cspace);
char _SequenceL_tmp606;
int _SequenceL_tmp610;
::Sequence< char > _SequenceL_tmp609(cspace);
char _SequenceL_tmp612;
::Sequence< char > _SequenceL_tmp615(cspace);
::Sequence< int > _SequenceL_tmp617(cspace);
::Sequence< char > _SequenceL__Arg_justNumber(cspace);

SequenceL_trimStart_3(_SequenceL__Arg_numString, _SequenceL__Arg_trimmed);	/*Conversion.sl:36: trimStart(numString)*/
_SequenceL__Arg_numString.delete_data(true);	
if ((_SequenceL__Arg_trimmed.size() == 0))	/*Conversion.sl:45: 0 when size(trimmed) = 0	else		- stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__resultConv = 0;	/*Conversion.sl:39: 0*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
}
else
{
_SequenceL_tmp606 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:41: head(trimmed)*/
if ((_SequenceL_tmp606 == '-'))	/*Conversion.sl:45: - stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp609);	/*Conversion.sl:41: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
SequenceL_stringToInt_2(_SequenceL_tmp609, _SequenceL_tmp610);	/*Conversion.sl:41: stringToInt(tail(trimmed))*/
_SequenceL_tmp609.finished();	
_SequenceL__resultConv = (-_SequenceL_tmp610);	/*Conversion.sl:41: - stringToInt(tail(trimmed))*/
}
else
{
_SequenceL_tmp612 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:43: head(trimmed)*/
if ((_SequenceL_tmp612 == '+'))	/*Conversion.sl:45: stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp615);	/*Conversion.sl:43: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
SequenceL_stringToInt_2(_SequenceL_tmp615, _SequenceL__resultConv);	/*Conversion.sl:43: stringToInt(tail(trimmed))*/
_SequenceL_tmp615.finished();	
}
else
{
SequenceL_trimNonNumeric_2(_SequenceL__Arg_trimmed, 1, _SequenceL__Arg_justNumber);	/*Conversion.sl:37: trimNonNumeric(trimmed, 1)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
SequenceL_atoIWorker_2(_SequenceL__Arg_justNumber, _SequenceL_tmp617);	/*Conversion.sl:45: atoIWorker(justNumber)*/
_SequenceL__Arg_justNumber.delete_data(true);	
_SequenceL__Arg_justNumber.finished();	
_SequenceL__resultConv = sum(_SequenceL_tmp617);	/*Conversion.sl:45: sum(atoIWorker(justNumber))*/
_SequenceL_tmp617.delete_data(true);	
_SequenceL_tmp617.finished();	
}
}
}
}
void SequenceL_applyMove_0(::Sequence< char > &_SequenceL__Arg_move, ::Sequence< int > &_SequenceL__Arg_place, ::Sequence< int > &_SequenceL__resultConv)
{
char _SequenceL_tmp634;
int _SequenceL_tmp638;
::Sequence< char > _SequenceL_tmp637(cspace);
char _SequenceL_tmp640;
::Sequence< ::Sequence< char > > _SequenceL_tmp644(cspace);
::Sequence< char > _SequenceL_tmp643(cspace);
::Sequence< int > _SequenceL_tmp645(cspace);
::Sequence< int > _SequenceL_tmp647(cspace);
::Sequence< char > _SequenceL__delete_opttmp1(cspace);

_SequenceL_tmp634 = _SequenceL__Arg_move.head();	/*advent16a.sl:23: head(move)*/
if ((_SequenceL_tmp634 == 's'))	/*advent16a.sl:25: doSpin(stringToInt(tail(move)), place) when head(move) = 's'  else doPermute(stringToInt(split(tail(move), '/')) + 1, place) when head(move) = 'x'  else place*/
{
_SequenceL__Arg_move.tail(_SequenceL_tmp637);	/*advent16a.sl:23: tail(move)*/
SequenceL_stringToInt_2(_SequenceL_tmp637, _SequenceL_tmp638);	/*advent16a.sl:23: stringToInt(tail(move))*/
_SequenceL_tmp637.finished();	
SequenceL_doSpin_0(_SequenceL_tmp638, _SequenceL__Arg_place, _SequenceL__resultConv);	/*advent16a.sl:23: doSpin(stringToInt(tail(move)), place)*/
}
else
{
_SequenceL_tmp640 = _SequenceL__Arg_move.head();	/*advent16a.sl:24: head(move)*/
if ((_SequenceL_tmp640 == 'x'))	/*advent16a.sl:25: doPermute(stringToInt(split(tail(move), '/')) + 1, place) when head(move) = 'x'  else place*/
{
_SequenceL__Arg_move.tail(_SequenceL_tmp643);	/*advent16a.sl:24: tail(move)*/
SequenceL_split_1(_SequenceL_tmp643, '/', _SequenceL_tmp644);	/*advent16a.sl:24: split(tail(move), '/')*/
_SequenceL_tmp643.delete_data(true);	
_SequenceL_tmp643.finished();	
_SequenceL_tmp645.setSize(_SequenceL_tmp644.size());	/*advent16a.sl:24: stringToInt(split(tail(move), '/'))*/
_SequenceL_tmp647.setSize(_SequenceL_tmp645.size());	/*advent16a.sl:24: stringToInt(split(tail(move), '/')) + 1*/
SIMD_DIRECTIVE
for (int _SequenceL__i646=1,_stop_val__SequenceL__i646=_SequenceL_tmp645.size(); _SequenceL__i646<=_stop_val__SequenceL__i646; _SequenceL__i646+=1)
{
(*(_SequenceL_tmp644.get_ptr(_SequenceL__i646))).clone(_SequenceL__delete_opttmp1);	/*advent16a.sl:24: stringToInt(split(tail(move), '/'))*/
SequenceL_stringToInt_2(_SequenceL__delete_opttmp1, (*(_SequenceL_tmp645.get_ptr(_SequenceL__i646))));	/*advent16a.sl:24: stringToInt(split(tail(move), '/'))*/
_SequenceL__delete_opttmp1.finished();	
(*(_SequenceL_tmp647.get_ptr(_SequenceL__i646))) = ((*(_SequenceL_tmp645.get_ptr(_SequenceL__i646))) + 1);	/*advent16a.sl:24: stringToInt(split(tail(move), '/')) + 1*/
}
_SequenceL_tmp644.delete_data(true);	
_SequenceL_tmp645.delete_data(true);	
_SequenceL_tmp645.finished();	
_SequenceL_tmp644.finished();	
SequenceL_doPermute_0(_SequenceL_tmp647, _SequenceL__Arg_place, _SequenceL__resultConv);	/*advent16a.sl:24: doPermute(stringToInt(split(tail(move), '/')) + 1, place)*/
_SequenceL_tmp647.delete_data(true);	
_SequenceL_tmp647.finished();	
}
else
{
_SequenceL__resultConv = _SequenceL__Arg_place;	/*advent16a.sl:25: place*/
}
}
}
void SequenceL_applyMoves_0(::Sequence< int > &_SequenceL__Arg_place, ::Sequence< ::Sequence< char > > &_SequenceL__Arg_moves, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL___Arg_place_tco(cspace);
::Sequence< ::Sequence< char > > _SequenceL___Arg_moves_tco(cspace);
::Sequence< int > _SequenceL__Arg_newPlace(cspace);
::Sequence< char > _SequenceL__Arg_move(cspace);
::Sequence< ::Sequence< char > > _SequenceL_tmp653(cspace);

if (_SequenceL__Arg_place.onlyInstance())	
{
_SequenceL___Arg_place_tco.replaceSequence(_SequenceL__Arg_place);	
}
else
{
_SequenceL___Arg_place_tco.hard_copy(_SequenceL__Arg_place,__LINE__);	
}
if (_SequenceL__Arg_moves.onlyInstance())	
{
_SequenceL___Arg_moves_tco.replaceSequence(_SequenceL__Arg_moves);	
}
else
{
_SequenceL___Arg_moves_tco.hard_copy(_SequenceL__Arg_moves,__LINE__);	
}
applyMoves_advent16a_label_tco:	
if ((_SequenceL___Arg_moves_tco.size() == 0))	/*advent16a.sl:34: place when size(moves) = 0  else applyMoves(newPlace, tail(moves))*/
{
_SequenceL__resultConv = _SequenceL___Arg_place_tco;	/*advent16a.sl:32: place*/
}
else
{
_SequenceL___Arg_moves_tco.head(_SequenceL__Arg_move);	/*advent16a.sl:29: head(moves)*/
SequenceL_applyMove_0(_SequenceL__Arg_move, _SequenceL___Arg_place_tco, _SequenceL__Arg_newPlace);	/*advent16a.sl:30: applyMove(move, place)*/
_SequenceL___Arg_moves_tco.tail(_SequenceL_tmp653);	/*advent16a.sl:33: tail(moves)*/
_swap(_SequenceL___Arg_place_tco, _SequenceL__Arg_newPlace);	
_swap(_SequenceL___Arg_moves_tco, _SequenceL_tmp653);	
goto applyMoves_advent16a_label_tco;	/*advent16a.sl:34: applyMoves(newPlace, tail(moves))*/
}
_SequenceL__Arg_newPlace.delete_data(true);	
_SequenceL__Arg_move.delete_data(true);	
_SequenceL_tmp653.delete_data(true);	
_SequenceL_tmp653.finished();	
_SequenceL__Arg_move.finished();	
_SequenceL__Arg_newPlace.finished();	
}
void SequenceL_split_1(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_delimiter, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv)
{
::Sequence< Empty > _SequenceL_tmp655(cspace);
::Sequence< int > _SequenceL_tmp661(cspace);
::Sequence< int > _SequenceL_tmp657(cspace);
::Sequence< int > _SequenceL__Arg_indexes(cspace);
::Sequence< int > _SequenceL_tmp659(cspace);
::Sequence< int > _SequenceL_tmp666(cspace);
::Sequence< int > _SequenceL_tmp662(cspace);
::Sequence< int > _SequenceL_tmp664(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp667(cspace);

if ((_SequenceL__Arg_list.size() == 0))	/*Sequence.sl:54: [] when size(list) = 0	else		multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
{
_SequenceL_tmp655.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp655, _SequenceL__resultConv);	
_SequenceL_tmp655.delete_data(true);	
_SequenceL_tmp655.finished();	
}
else
{
_SequenceL_tmp657.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp657.get_ptr(1))) = 1;	/*Sequence.sl:54: 1*/
SequenceL_indexesOf_1(_SequenceL__Arg_list, _SequenceL__Arg_delimiter, _SequenceL__Arg_indexes);	/*Sequence.sl:50: indexesOf(list, delimiter)*/
_SequenceL_tmp659.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes + 1*/
SIMD_DIRECTIVE
for (int _SequenceL__i660=1,_stop_val__SequenceL__i660=_SequenceL_tmp659.size(); _SequenceL__i660<=_stop_val__SequenceL__i660; _SequenceL__i660+=1)
{
(*(_SequenceL_tmp659.get_ptr(_SequenceL__i660))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i660))) + 1);	/*Sequence.sl:54: indexes + 1*/
}
append(_SequenceL_tmp657, _SequenceL_tmp659, _SequenceL_tmp661);	/*Sequence.sl:54: [1] ++ (indexes + 1)*/
_SequenceL_tmp657.delete_data(true);	
_SequenceL_tmp659.delete_data(true);	
_SequenceL_tmp659.finished();	
_SequenceL_tmp657.finished();	
_SequenceL_tmp662.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes - 1*/
SIMD_DIRECTIVE
for (int _SequenceL__i663=1,_stop_val__SequenceL__i663=_SequenceL_tmp662.size(); _SequenceL__i663<=_stop_val__SequenceL__i663; _SequenceL__i663+=1)
{
(*(_SequenceL_tmp662.get_ptr(_SequenceL__i663))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i663))) - 1);	/*Sequence.sl:54: indexes - 1*/
}
_SequenceL__Arg_indexes.delete_data(true);	
_SequenceL__Arg_indexes.finished();	
_SequenceL_tmp664.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp664.get_ptr(1))) = _SequenceL__Arg_list.size();	/*Sequence.sl:54: size(list)*/
append(_SequenceL_tmp662, _SequenceL_tmp664, _SequenceL_tmp666);	/*Sequence.sl:54: (indexes - 1) ++ [size(list)]*/
_SequenceL_tmp662.delete_data(true);	
_SequenceL_tmp664.delete_data(true);	
_SequenceL_tmp664.finished();	
_SequenceL_tmp662.finished();	
_SequenceL_tmp667.setSize(_SequenceL_tmp661.size());	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
SIMD_DIRECTIVE
for (int _SequenceL__i668=1,_stop_val__SequenceL__i668=_SequenceL_tmp667.size(); _SequenceL__i668<=_stop_val__SequenceL__i668; _SequenceL__i668+=1)
{
ellipsis((*(_SequenceL_tmp661.get_ptr(_SequenceL__i668))), (*(_SequenceL_tmp666.get_ptr(_SequenceL__i668))), (*(_SequenceL_tmp667.get_ptr(_SequenceL__i668))));	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
}
_SequenceL_tmp661.delete_data(true);	
_SequenceL_tmp666.delete_data(true);	
_SequenceL_tmp666.finished();	
_SequenceL_tmp661.finished();	
SequenceL_multipleIndexes_1(_SequenceL__Arg_list, _SequenceL_tmp667, _SequenceL__resultConv);	/*Sequence.sl:54: multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
_SequenceL_tmp667.delete_data(true);	
_SequenceL_tmp667.finished();	
}
}
void SequenceL_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_s, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL_tmp673(cspace);
::Sequence< int > _SequenceL__Arg_firstPermutation(cspace);
::Sequence< int > _SequenceL_tmp672(cspace);
::Sequence< char > _SequenceL_tmp671(cspace);
::Sequence< ::Sequence< char > > _SequenceL__delete_opttmp1(cspace);
::Sequence< ::Sequence< char > > _SequenceL__Arg_moves(cspace);
::Sequence< int > _SequenceL__Arg_firstSubstitution(cspace);
::Sequence< int > _SequenceL_tmp675(cspace);
::Sequence< char > _SequenceL_tmp674(cspace);
::Sequence< int > _SequenceL_tmp686(cspace);
::Sequence< int > _SequenceL__Arg_finalP(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp681(cspace);
::Sequence< int > _SequenceL_tmp679(cspace);
::Sequence< int > _SequenceL_tmp680(cspace);
::Sequence< Empty > _SequenceL_tmp677(cspace);
int _SequenceL_tmp678;
int _SequenceL_tmp683;
::Sequence< ::Sequence< int > > _SequenceL_tmp684(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp685(cspace);
::Sequence< Empty > _SequenceL_tmp682(cspace);
::Sequence< int > _SequenceL__Arg_finalS(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp691(cspace);
::Sequence< int > _SequenceL_tmp689(cspace);
::Sequence< int > _SequenceL_tmp690(cspace);
::Sequence< Empty > _SequenceL_tmp687(cspace);
int _SequenceL_tmp688;
int _SequenceL_tmp693;
::Sequence< ::Sequence< int > > _SequenceL_tmp694(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp695(cspace);
::Sequence< Empty > _SequenceL_tmp692(cspace);
int _SequenceL__scope__Index_finalS__tmp_index1;

_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
_SequenceL_tmp671 = _SequenceL_alfabet_0;	/*advent16a.sl:69: alfabet*/
ellipsis(1, _SequenceL_tmp671.size(), _SequenceL_tmp672);	/*advent16a.sl:69: 1 ... size(alfabet)*/
_SequenceL_tmp671.delete_data(true);	
_SequenceL_tmp671.finished();	
SequenceL_split_1((*(_SequenceL__Arg_s.get_ptr(1))), ',', _SequenceL__Arg_moves);	/*advent16a.sl:68: split(s[1], ',')*/
_SequenceL__Arg_moves.clone(_SequenceL__delete_opttmp1);	/*advent16a.sl:69: applyMoves(1 ... size(alfabet), moves)*/
SequenceL_applyMoves_0(_SequenceL_tmp672, _SequenceL__delete_opttmp1, _SequenceL__Arg_firstPermutation);	/*advent16a.sl:69: applyMoves(1 ... size(alfabet), moves)*/
_SequenceL_tmp672.delete_data(true);	
_SequenceL__delete_opttmp1.delete_data(true);	
_SequenceL__delete_opttmp1.finished();	
_SequenceL_tmp672.finished();	
_SequenceL_tmp673.setSize(_SequenceL__Arg_firstPermutation.size());	/*advent16a.sl:74: firstSubstitution[firstPermutation]*/
if ((_SequenceL_tmp673.size() >= 1))	
{
_SequenceL_tmp674 = _SequenceL_alfabet_0;	/*advent16a.sl:70: alfabet*/
ellipsis(1, _SequenceL_tmp674.size(), _SequenceL_tmp675);	/*advent16a.sl:70: 1 ... size(alfabet)*/
_SequenceL_tmp674.delete_data(true);	
_SequenceL_tmp674.finished();	
SequenceL_applyRenames_0(_SequenceL_tmp675, _SequenceL__Arg_moves, _SequenceL__Arg_firstSubstitution);	/*advent16a.sl:70: applyRenames(1 ... size(alfabet), moves)*/
_SequenceL_tmp675.delete_data(true);	
_SequenceL__Arg_moves.delete_data(true);	
_SequenceL__Arg_moves.finished();	
_SequenceL_tmp675.finished();	
}
else
{
_SequenceL__Arg_moves.delete_data(true);	
_SequenceL__Arg_moves.finished();	
}
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index1=1,_stop_val__SequenceL__Index__tmp_index1=_SequenceL_tmp673.size(); _SequenceL__Index__tmp_index1<=_stop_val__SequenceL__Index__tmp_index1; _SequenceL__Index__tmp_index1+=1)
{
(*(_SequenceL_tmp673.get_ptr(_SequenceL__Index__tmp_index1))) = (*(_SequenceL__Arg_firstSubstitution.get_ptr((*(_SequenceL__Arg_firstPermutation.get_ptr(_SequenceL__Index__tmp_index1))))));	/*advent16a.sl:74: firstSubstitution[firstPermutation]*/
}
SequenceL_stringify_0(_SequenceL_tmp673, (*(_SequenceL__resultConv.get_ptr(1))));	/*advent16a.sl:74: stringify(firstSubstitution[firstPermutation])*/
_SequenceL_tmp673.delete_data(true);	
_SequenceL_tmp673.finished();	
_SequenceL_tmp677.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp677, _SequenceL_tmp680);	
_SequenceL_tmp677.delete_data(true);	
_SequenceL_tmp677.finished();	
_SequenceL_tmp678 = _SequenceL_noOfTimes_0;	/*advent16a.sl:71: noOfTimes*/
SequenceL_bits_0(_SequenceL_tmp680, 1, _SequenceL_tmp678, _SequenceL_tmp679);	/*advent16a.sl:71: bits([], 1, noOfTimes)*/
_SequenceL_tmp680.delete_data(true);	
_SequenceL_tmp680.finished();	
_SequenceL_tmp679.deFrag();	
_SequenceL_tmp681.setSize(_SequenceL_tmp679.size());	/*advent16a.sl:71: powerTs([], firstPermutation, 1, noOfTimes)[bits([], 1, noOfTimes)]*/
if ((_SequenceL_tmp681.size() >= 1))	
{
_SequenceL_tmp683 = _SequenceL_noOfTimes_0;	/*advent16a.sl:71: noOfTimes*/
}
else
{
_SequenceL_tmp683 = 0;	
}
if ((_SequenceL_tmp681.size() >= 1))	
{
_SequenceL_tmp682.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp682, _SequenceL_tmp685);	
_SequenceL_tmp682.delete_data(true);	
_SequenceL_tmp682.finished();	
SequenceL_powerTs_0(_SequenceL_tmp685, _SequenceL__Arg_firstPermutation, 1, _SequenceL_tmp683, _SequenceL_tmp684);	/*advent16a.sl:71: powerTs([], firstPermutation, 1, noOfTimes)*/
_SequenceL_tmp685.delete_data(true);	
_SequenceL__Arg_firstPermutation.delete_data(true);	
_SequenceL__Arg_firstPermutation.finished();	
_SequenceL_tmp685.finished();	
}
else
{
_SequenceL__Arg_firstPermutation.delete_data(true);	
_SequenceL__Arg_firstPermutation.finished();	
}
SIMD_DIRECTIVE
for (int _SequenceL__scope__Index_finalP__tmp_index1=1,_stop_val__SequenceL__scope__Index_finalP__tmp_index1=_SequenceL_tmp681.size(); _SequenceL__scope__Index_finalP__tmp_index1<=_stop_val__SequenceL__scope__Index_finalP__tmp_index1; _SequenceL__scope__Index_finalP__tmp_index1+=1)
{
(*(_SequenceL_tmp681.get_ptr(_SequenceL__scope__Index_finalP__tmp_index1))) = (*(_SequenceL_tmp684.get_ptr((*(_SequenceL_tmp679.get_ptr(_SequenceL__scope__Index_finalP__tmp_index1))))));	/*advent16a.sl:71: powerTs([], firstPermutation, 1, noOfTimes)[bits([], 1, noOfTimes)]*/
}
_SequenceL_tmp679.delete_data(true);	
_SequenceL_tmp684.delete_data(true);	
_SequenceL_tmp684.finished();	
_SequenceL_tmp679.finished();	
SequenceL_fol_0(_SequenceL_tmp681, _PointerSequenceL_transform_0, _SequenceL__Arg_finalP);	/*advent16a.sl:71: fol(powerTs([], firstPermutation, 1, noOfTimes)[bits([], 1, noOfTimes)], transform)*/
_SequenceL_tmp681.delete_data(true);	
_SequenceL_tmp681.finished();	
_SequenceL_tmp686.setSize(_SequenceL__Arg_finalP.size());	/*advent16a.sl:75: finalS[finalP]*/
if ((_SequenceL_tmp686.size() >= 1))	
{
_SequenceL_tmp687.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp687, _SequenceL_tmp690);	
_SequenceL_tmp687.delete_data(true);	
_SequenceL_tmp687.finished();	
_SequenceL_tmp688 = _SequenceL_noOfTimes_0;	/*advent16a.sl:72: noOfTimes*/
SequenceL_bits_0(_SequenceL_tmp690, 1, _SequenceL_tmp688, _SequenceL_tmp689);	/*advent16a.sl:72: bits([], 1, noOfTimes)*/
_SequenceL_tmp690.delete_data(true);	
_SequenceL_tmp690.finished();	
_SequenceL_tmp689.deFrag();	
_SequenceL_tmp691.setSize(_SequenceL_tmp689.size());	/*advent16a.sl:72: powerTs([], firstSubstitution, 1, noOfTimes)[bits([], 1, noOfTimes)]*/
if ((_SequenceL_tmp691.size() >= 1))	
{
_SequenceL_tmp693 = _SequenceL_noOfTimes_0;	/*advent16a.sl:72: noOfTimes*/
}
else
{
_SequenceL_tmp693 = 0;	
}
if ((_SequenceL_tmp691.size() >= 1))	
{
_SequenceL_tmp692.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp692, _SequenceL_tmp695);	
_SequenceL_tmp692.delete_data(true);	
_SequenceL_tmp692.finished();	
SequenceL_powerTs_0(_SequenceL_tmp695, _SequenceL__Arg_firstSubstitution, 1, _SequenceL_tmp693, _SequenceL_tmp694);	/*advent16a.sl:72: powerTs([], firstSubstitution, 1, noOfTimes)*/
_SequenceL_tmp695.delete_data(true);	
_SequenceL__Arg_firstSubstitution.delete_data(true);	
_SequenceL__Arg_firstSubstitution.finished();	
_SequenceL_tmp695.finished();	
}
else
{
_SequenceL__Arg_firstSubstitution.delete_data(true);	
_SequenceL__Arg_firstSubstitution.finished();	
}
SIMD_DIRECTIVE
for (int _SequenceL__scope__Index_finalS__tmp_index1=1,_stop_val__SequenceL__scope__Index_finalS__tmp_index1=_SequenceL_tmp691.size(); _SequenceL__scope__Index_finalS__tmp_index1<=_stop_val__SequenceL__scope__Index_finalS__tmp_index1; _SequenceL__scope__Index_finalS__tmp_index1+=1)
{
(*(_SequenceL_tmp691.get_ptr(_SequenceL__scope__Index_finalS__tmp_index1))) = (*(_SequenceL_tmp694.get_ptr((*(_SequenceL_tmp689.get_ptr(_SequenceL__scope__Index_finalS__tmp_index1))))));	/*advent16a.sl:72: powerTs([], firstSubstitution, 1, noOfTimes)[bits([], 1, noOfTimes)]*/
}
_SequenceL_tmp689.delete_data(true);	
_SequenceL_tmp694.delete_data(true);	
_SequenceL_tmp694.finished();	
_SequenceL_tmp689.finished();	
SequenceL_fol_0(_SequenceL_tmp691, _PointerSequenceL_transform_0, _SequenceL__Arg_finalS);	/*advent16a.sl:72: fol(powerTs([], firstSubstitution, 1, noOfTimes)[bits([], 1, noOfTimes)], transform)*/
_SequenceL_tmp691.delete_data(true);	
_SequenceL_tmp691.finished();	
}
else
{
_SequenceL_tmp693 = 0;	
_SequenceL__scope__Index_finalS__tmp_index1 = 0;	
_SequenceL_tmp688 = 0;	
_SequenceL__Arg_firstSubstitution.delete_data(true);	
_SequenceL__Arg_firstSubstitution.finished();	
}
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index2=1,_stop_val__SequenceL__Index__tmp_index2=_SequenceL_tmp686.size(); _SequenceL__Index__tmp_index2<=_stop_val__SequenceL__Index__tmp_index2; _SequenceL__Index__tmp_index2+=1)
{
(*(_SequenceL_tmp686.get_ptr(_SequenceL__Index__tmp_index2))) = (*(_SequenceL__Arg_finalS.get_ptr((*(_SequenceL__Arg_finalP.get_ptr(_SequenceL__Index__tmp_index2))))));	/*advent16a.sl:75: finalS[finalP]*/
}
_SequenceL__Arg_finalP.delete_data(true);	
_SequenceL__Arg_finalS.delete_data(true);	
_SequenceL__Arg_finalS.finished();	
_SequenceL__Arg_finalP.finished();	
SequenceL_stringify_0(_SequenceL_tmp686, (*(_SequenceL__resultConv.get_ptr(2))));	/*advent16a.sl:75: stringify(finalS[finalP])*/
_SequenceL_tmp686.delete_data(true);	
_SequenceL_tmp686.finished();	
}
void SequenceL_transform_0(::Sequence< int > &_SequenceL__Arg_a, ::Sequence< int > &_SequenceL__Arg_b, ::Sequence< int > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_b.size());	/*advent16a.sl:63: a[b]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index1=1,_stop_val__SequenceL__Index__tmp_index1=_SequenceL__resultConv.size(); _SequenceL__Index__tmp_index1<=_stop_val__SequenceL__Index__tmp_index1; _SequenceL__Index__tmp_index1+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index__tmp_index1))) = (*(_SequenceL__Arg_a.get_ptr((*(_SequenceL__Arg_b.get_ptr(_SequenceL__Index__tmp_index1))))));	/*advent16a.sl:63: a[b]*/
}
}

}
void sl_main(::Sequence< ::Sequence< char > > &_SequenceL__Arg_arg1, int _n, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv)
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
::Sequence< ::Sequence< char > > result;
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
