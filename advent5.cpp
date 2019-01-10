#include "advent5.h"
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
void SequenceL_part1_0(::Sequence< int > &_SequenceL__Arg_a, int _SequenceL__Arg_p, int _SequenceL__Arg_done, int &_SequenceL__resultConv);
void SequenceL_increment_0(::Sequence< int > &_SequenceL__Arg_a, int _SequenceL__Arg_p, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_part2_0(::Sequence< int > &_SequenceL__Arg_a, int _SequenceL__Arg_p, int _SequenceL__Arg_done, int &_SequenceL__resultConv);
void SequenceL_update_0(::Sequence< int > &_SequenceL__Arg_a, int _SequenceL__Arg_p, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL__parallel_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_s, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt1_: public NTObj
{
	private:
		::Sequence< ::Sequence< char > > &_SequenceL_tmp425;
		 ::Sequence< int > &_SequenceL__result2;

	public:
		SequenceL__sl_main_nt1_(::Sequence< ::Sequence< char > > &_inp1, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL_tmp425(_inp1), _SequenceL__result2(_out1)
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
		::Sequence< int > &_SequenceL_tmp371;
		::Sequence< int > &_SequenceL_tmp376;
		 ::Sequence< ::Sequence< int > > &_SequenceL__result8;

	public:
		SequenceL__sl_main_nt7_(::Sequence< int > &_inp1, ::Sequence< int > &_inp2, ::Sequence< ::Sequence< int > > &_out1): NTObj(__LINE__,false), _SequenceL_tmp371(_inp1), _SequenceL_tmp376(_inp2), _SequenceL__result8(_out1)
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
void SequenceL__parallel_part1_0(::Sequence< int > &_SequenceL__Arg_a, int _SequenceL__Arg_p, int _SequenceL__Arg_done, int &_SequenceL__resultConv);
void SequenceL__parallel_increment_0(::Sequence< int > &_SequenceL__Arg_a, int _SequenceL__Arg_p, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt17_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_a;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result18;

	public:
		SequenceL__sl_main_nt17_(::Sequence< int > &_inp1, int _inp2, int _inp3, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_a(_inp1), _SequenceL__start(_inp2), _SequenceL__stop(_inp3), _SequenceL__result18(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
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
void SequenceL__parallel_part2_0(::Sequence< int > &_SequenceL__Arg_a, int _SequenceL__Arg_p, int _SequenceL__Arg_done, int &_SequenceL__resultConv);
void SequenceL__parallel_update_0(::Sequence< int > &_SequenceL__Arg_a, int _SequenceL__Arg_p, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt21_: public NTObj
{
	private:
		int _SequenceL__Arg_p;
		::Sequence< int > &_SequenceL__Arg_a;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result22;

	public:
		SequenceL__sl_main_nt21_(int _inp1, ::Sequence< int > &_inp2, int _inp3, int _inp4, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_p(_inp1), _SequenceL__Arg_a(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result22(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt19_: public NTObj
{
	private:
		int _SequenceL__Arg_p;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result20;

	public:
		SequenceL__sl_main_nt19_(int _inp1, int _inp2, int _inp3, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_p(_inp1), _SequenceL__start(_inp2), _SequenceL__stop(_inp3), _SequenceL__result20(_out1)
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
bool _SequenceL_tmp414;
char _SequenceL_tmp413;
::Sequence< char > _SequenceL_tmp416;
bool _SequenceL_tmp419;
char _SequenceL_tmp418;
::Sequence< char > _SequenceL_tmp421;

	public:
		SequenceL__sl_main_trim_c_0(::Sequence< char > &_inp1, ::Sequence< char > &_out1): _SequenceL__Arg_s(_inp1), _SequenceL__resultConv(_out1), _SequenceL___Arg_s_tco(cspace), _SequenceL_tmp416(cspace), _SequenceL_tmp421(cspace)
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
char _SequenceL_tmp334;
int _SequenceL_tmp338;
::Sequence< char > _SequenceL_tmp337;
char _SequenceL_tmp340;
::Sequence< char > _SequenceL_tmp343;
::Sequence< int > _SequenceL_tmp345;
::Sequence< char > _SequenceL__Arg_justNumber;

	public:
		SequenceL__sl_main_stringToInt_c_3(::Sequence< char > &_inp1, int &_out1): _SequenceL__Arg_numString(_inp1), _SequenceL__resultConv(_out1), _SequenceL__Arg_trimmed(cspace), _SequenceL_tmp337(cspace), _SequenceL_tmp343(cspace), _SequenceL_tmp345(cspace), _SequenceL__Arg_justNumber(cspace)
		{
		}
		task *execute();

};
class SequenceL__sl_main_part1_i_i_i_0: public task
{
	private:
		 ::Sequence< int > &_SequenceL__Arg_a;
		int _SequenceL__Arg_p;
		int _SequenceL__Arg_done;
		 int &_SequenceL__resultConv;
::Sequence< int > _SequenceL___Arg_a_tco;
int _SequenceL___Arg_p_tco;
int _SequenceL___Arg_done_tco;
::Sequence< int > _SequenceL__Arg_newA;
::Sequence< int > _SequenceL__delete_opttmp1;
int _SequenceL__Arg_newP;
int _SequenceL_tmp75;

	public:
		SequenceL__sl_main_part1_i_i_i_0(::Sequence< int > &_inp1, int _inp2, int _inp3, int &_out1): _SequenceL__Arg_a(_inp1), _SequenceL__Arg_p(_inp2), _SequenceL__Arg_done(_inp3), _SequenceL__resultConv(_out1), _SequenceL___Arg_a_tco(cspace), _SequenceL__Arg_newA(cspace), _SequenceL__delete_opttmp1(cspace)
		{
		}
		task *execute();

};
class SequenceL__sl_main_part2_i_i_i_0: public task
{
	private:
		 ::Sequence< int > &_SequenceL__Arg_a;
		int _SequenceL__Arg_p;
		int _SequenceL__Arg_done;
		 int &_SequenceL__resultConv;
::Sequence< int > _SequenceL___Arg_a_tco;
int _SequenceL___Arg_p_tco;
int _SequenceL___Arg_done_tco;
::Sequence< int > _SequenceL__Arg_newA;
::Sequence< int > _SequenceL__delete_opttmp1;
int _SequenceL__Arg_newP;
int _SequenceL_tmp48;

	public:
		SequenceL__sl_main_part2_i_i_i_0(::Sequence< int > &_inp1, int _inp2, int _inp3, int &_out1): _SequenceL__Arg_a(_inp1), _SequenceL__Arg_p(_inp2), _SequenceL__Arg_done(_inp3), _SequenceL__resultConv(_out1), _SequenceL___Arg_a_tco(cspace), _SequenceL__Arg_newA(cspace), _SequenceL__delete_opttmp1(cspace)
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
::Sequence< ::Sequence< char > > _sl_vc10_advent5_dummy_1(cspace);
::Sequence< int > _sl_vc10_advent5_dummy_2(cspace);
::Sequence< char > _sl_vc10_advent5_dummy_3(cspace);
::Sequence< Empty > _sl_vc10_advent5_dummy_4(cspace);
::Sequence< ::Sequence< int > > _sl_vc10_advent5_dummy_5(cspace);
#endif

task *SequenceL__sl_main_part2_i_i_i_0::execute()
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
_SequenceL___Arg_p_tco = _SequenceL__Arg_p;	
_SequenceL___Arg_done_tco = _SequenceL__Arg_done;	
_sl_main_part2_i_i_i_advent5_label_tco:	
if (((_SequenceL___Arg_p_tco < 1) || (_SequenceL___Arg_p_tco > _SequenceL___Arg_a_tco.size())))	/*advent5.sl:29: done when p < 1 or p > size(a)     else part2(newA, newP, done + 1)*/
{
_SequenceL__resultConv = _SequenceL___Arg_done_tco;	/*advent5.sl:28: done*/
}
else
{
_SequenceL___Arg_a_tco.clone(_SequenceL__delete_opttmp1);	/*advent5.sl:27: update(a, p)*/
SequenceL_update_0(_SequenceL__delete_opttmp1, _SequenceL___Arg_p_tco, _SequenceL__Arg_newA);	/*advent5.sl:27: update(a, p)*/
_SequenceL__Arg_newP = (_SequenceL___Arg_p_tco + (*(_SequenceL___Arg_a_tco.get_ptr(_SequenceL___Arg_p_tco))));	/*advent5.sl:26: p + a[p]*/
_SequenceL_tmp48 = (_SequenceL___Arg_done_tco + 1);	/*advent5.sl:29: done + 1*/
_swap(_SequenceL___Arg_a_tco, _SequenceL__Arg_newA);	
_SequenceL___Arg_p_tco = _SequenceL__Arg_newP;	
_SequenceL___Arg_done_tco = _SequenceL_tmp48;	
goto _sl_main_part2_i_i_i_advent5_label_tco;	/*advent5.sl:29: part2(newA, newP, done + 1)*/
}
_SequenceL__Arg_newA.delete_data(true);	
_SequenceL__delete_opttmp1.delete_data(true);	
_SequenceL__delete_opttmp1.finished();	
_SequenceL__Arg_newA.finished();	
return NULL;
}
task *SequenceL__sl_main_part1_i_i_i_0::execute()
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
_SequenceL___Arg_p_tco = _SequenceL__Arg_p;	
_SequenceL___Arg_done_tco = _SequenceL__Arg_done;	
_sl_main_part1_i_i_i_advent5_label_tco:	
if (((_SequenceL___Arg_p_tco < 1) || (_SequenceL___Arg_p_tco > _SequenceL___Arg_a_tco.size())))	/*advent5.sl:18: done when p < 1 or p > size(a)     else part1(newA, newP, done + 1)*/
{
_SequenceL__resultConv = _SequenceL___Arg_done_tco;	/*advent5.sl:17: done*/
}
else
{
_SequenceL___Arg_a_tco.clone(_SequenceL__delete_opttmp1);	/*advent5.sl:16: increment(a, p)*/
SequenceL_increment_0(_SequenceL__delete_opttmp1, _SequenceL___Arg_p_tco, _SequenceL__Arg_newA);	/*advent5.sl:16: increment(a, p)*/
_SequenceL__Arg_newP = (_SequenceL___Arg_p_tco + (*(_SequenceL___Arg_a_tco.get_ptr(_SequenceL___Arg_p_tco))));	/*advent5.sl:15: p + a[p]*/
_SequenceL_tmp75 = (_SequenceL___Arg_done_tco + 1);	/*advent5.sl:18: done + 1*/
_swap(_SequenceL___Arg_a_tco, _SequenceL__Arg_newA);	
_SequenceL___Arg_p_tco = _SequenceL__Arg_newP;	
_SequenceL___Arg_done_tco = _SequenceL_tmp75;	
goto _sl_main_part1_i_i_i_advent5_label_tco;	/*advent5.sl:18: part1(newA, newP, done + 1)*/
}
_SequenceL__Arg_newA.delete_data(true);	
_SequenceL__delete_opttmp1.delete_data(true);	
_SequenceL__delete_opttmp1.finished();	
_SequenceL__Arg_newA.finished();	
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
_SequenceL_tmp334 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:41: head(trimmed)*/
if ((_SequenceL_tmp334 == '-'))	/*Conversion.sl:45: - stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp337);	/*Conversion.sl:41: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
set_ref_count(2);
spawn_and_wait_for_all(*new(allocate_child()) SequenceL__sl_main_stringToInt_c_3(_SequenceL_tmp337, _SequenceL_tmp338));
_SequenceL_tmp337.finished();	
_SequenceL__resultConv = (-_SequenceL_tmp338);	/*Conversion.sl:41: - stringToInt(tail(trimmed))*/
}
else
{
_SequenceL_tmp340 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:43: head(trimmed)*/
if ((_SequenceL_tmp340 == '+'))	/*Conversion.sl:45: stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp343);	/*Conversion.sl:43: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
set_ref_count(2);
spawn_and_wait_for_all(*new(allocate_child()) SequenceL__sl_main_stringToInt_c_3(_SequenceL_tmp343, _SequenceL__resultConv));
_SequenceL_tmp343.finished();	
}
else
{
SequenceL_trimNonNumeric_3(_SequenceL__Arg_trimmed, 1, _SequenceL__Arg_justNumber);	/*Conversion.sl:37: trimNonNumeric(trimmed, 1)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
SequenceL_atoIWorker_3(_SequenceL__Arg_justNumber, _SequenceL_tmp345);	/*Conversion.sl:45: atoIWorker(justNumber)*/
_SequenceL__Arg_justNumber.delete_data(true);	
_SequenceL__Arg_justNumber.finished();	
_SequenceL__resultConv = sum(_SequenceL_tmp345);	/*Conversion.sl:45: sum(atoIWorker(justNumber))*/
_SequenceL_tmp345.delete_data(true);	
_SequenceL_tmp345.finished();	
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
_sl_main_trim_c_advent5_label_tco:	
_SequenceL_tmp413 = _SequenceL___Arg_s_tco.head();	/*advent5.sl:6: head(s)*/
SequenceL_isWhiteSpace_1(_SequenceL_tmp413, _SequenceL_tmp414);	/*advent5.sl:7: isWhiteSpace(head(s))*/
if (_SequenceL_tmp414)	/*advent5.sl:8: trim(tail(s)) when isWhiteSpace(head(s))  else trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
_SequenceL___Arg_s_tco.tail(_SequenceL_tmp416);	/*advent5.sl:6: tail(s)*/
_swap(_SequenceL___Arg_s_tco, _SequenceL_tmp416);	
goto _sl_main_trim_c_advent5_label_tco;	/*advent5.sl:6: trim(tail(s))*/
}
else
{
SequenceL_last_2(_SequenceL___Arg_s_tco, _SequenceL_tmp418);	/*advent5.sl:7: last(s)*/
SequenceL_isWhiteSpace_1(_SequenceL_tmp418, _SequenceL_tmp419);	/*advent5.sl:8: isWhiteSpace(last(s))*/
if (_SequenceL_tmp419)	/*advent5.sl:8: trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
SequenceL_allButLast_2(_SequenceL___Arg_s_tco, _SequenceL_tmp421);	/*advent5.sl:7: allButLast(s)*/
_swap(_SequenceL___Arg_s_tco, _SequenceL_tmp421);	
goto _sl_main_trim_c_advent5_label_tco;	/*advent5.sl:7: trim(allButLast(s))*/
}
else
{
_SequenceL__resultConv = _SequenceL___Arg_s_tco;	/*advent5.sl:8: s*/
}
}
_SequenceL_tmp416.delete_data(true);	
_SequenceL_tmp421.delete_data(true);	
_SequenceL_tmp421.finished();	
_SequenceL_tmp416.finished();	
return NULL;
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
if (((_SequenceL__no_share_iter == _SequenceL__Arg_p) && ((*(_SequenceL__result20.get_ptr(_SequenceL__no_share_iter))) >= 3)))	/*advent5.sl:23: a[i] - 1 when i = p and a[i] >= 3  else a[i] + 1 when i = p  else a[i]*/
{
(*(_SequenceL__result20.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL__result20.get_ptr(_SequenceL__no_share_iter))) - 1);	/*advent5.sl:21: a[i] - 1*/
}
else
{
if ((_SequenceL__no_share_iter == _SequenceL__Arg_p))	/*advent5.sl:23: a[i] + 1 when i = p  else a[i]*/
{
(*(_SequenceL__result20.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL__result20.get_ptr(_SequenceL__no_share_iter))) + 1);	/*advent5.sl:22: a[i] + 1*/
}
}
}
}
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
if (((_SequenceL__no_share_iter == _SequenceL__Arg_p) && ((*(_SequenceL__Arg_a.get_ptr(_SequenceL__no_share_iter))) >= 3)))	/*advent5.sl:23: a[i] - 1 when i = p and a[i] >= 3  else a[i] + 1 when i = p  else a[i]*/
{
(*(_SequenceL__result22.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL__Arg_a.get_ptr(_SequenceL__no_share_iter))) - 1);	/*advent5.sl:21: a[i] - 1*/
}
else
{
if ((_SequenceL__no_share_iter == _SequenceL__Arg_p))	/*advent5.sl:23: a[i] + 1 when i = p  else a[i]*/
{
(*(_SequenceL__result22.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL__Arg_a.get_ptr(_SequenceL__no_share_iter))) + 1);	/*advent5.sl:22: a[i] + 1*/
}
else
{
(*(_SequenceL__result22.get_ptr(_SequenceL__no_share_iter))) = (*(_SequenceL__Arg_a.get_ptr(_SequenceL__no_share_iter)));	/*advent5.sl:23: a[i]*/
}
}
}
}
}
void SequenceL__parallel_update_0(::Sequence< int > &_SequenceL__Arg_a, int _SequenceL__Arg_p, ::Sequence< int > &_SequenceL__resultConv)
{

if (_SequenceL__Arg_a.onlyInstance())	/*advent5.sl:23: a[i] - 1 when i = p and a[i] >= 3  else a[i] + 1 when i = p  else a[i]*/
{
_SequenceL__resultConv.replaceSequence(_SequenceL__Arg_a);	/*advent5.sl:23: a[i] - 1 when i = p and a[i] >= 3  else a[i] + 1 when i = p  else a[i]*/
if (((((SL_FLOAT)(_SequenceL__resultConv.size() - 1)) * 6) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt19_ SequenceL__sl_main_nt19__val(_SequenceL__Arg_p, 1, _SequenceL__resultConv.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt19__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__resultConv.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
if (((_SequenceL__Index_i == _SequenceL__Arg_p) && ((*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) >= 3)))	/*advent5.sl:23: a[i] - 1 when i = p and a[i] >= 3  else a[i] + 1 when i = p  else a[i]*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = ((*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) - 1);	/*advent5.sl:21: a[i] - 1*/
}
else
{
if ((_SequenceL__Index_i == _SequenceL__Arg_p))	/*advent5.sl:23: a[i] + 1 when i = p  else a[i]*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = ((*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) + 1);	/*advent5.sl:22: a[i] + 1*/
}
}
}
}
}
else
{
_SequenceL__resultConv.setSize(_SequenceL__Arg_a.size());	/*advent5.sl:23: a[i] - 1 when i = p and a[i] >= 3  else a[i] + 1 when i = p  else a[i]*/
if (((((SL_FLOAT)(_SequenceL__Arg_a.size() - 1)) * 7) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt21_ SequenceL__sl_main_nt21__val(_SequenceL__Arg_p, _SequenceL__Arg_a, 1, _SequenceL__Arg_a.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt21__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_a.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
if (((_SequenceL__Index_i == _SequenceL__Arg_p) && ((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) >= 3)))	/*advent5.sl:23: a[i] - 1 when i = p and a[i] >= 3  else a[i] + 1 when i = p  else a[i]*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = ((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) - 1);	/*advent5.sl:21: a[i] - 1*/
}
else
{
if ((_SequenceL__Index_i == _SequenceL__Arg_p))	/*advent5.sl:23: a[i] + 1 when i = p  else a[i]*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = ((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) + 1);	/*advent5.sl:22: a[i] + 1*/
}
else
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i)));	/*advent5.sl:23: a[i]*/
}
}
}
}
}
}
void SequenceL__parallel_part2_0(::Sequence< int > &_SequenceL__Arg_a, int _SequenceL__Arg_p, int _SequenceL__Arg_done, int &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL__Arg_newA(cspace);
::Sequence< int > _SequenceL__delete_opttmp1(cspace);
int _SequenceL__Arg_newP;
int _SequenceL_tmp48;

if (((_SequenceL__Arg_p < 1) || (_SequenceL__Arg_p > _SequenceL__Arg_a.size())))	/*advent5.sl:29: done when p < 1 or p > size(a)     else part2(newA, newP, done + 1)*/
{
_SequenceL__resultConv = _SequenceL__Arg_done;	/*advent5.sl:28: done*/
}
else
{
_SequenceL__Arg_a.clone(_SequenceL__delete_opttmp1);	/*advent5.sl:27: update(a, p)*/
SequenceL__parallel_update_0(_SequenceL__delete_opttmp1, _SequenceL__Arg_p, _SequenceL__Arg_newA);	/*advent5.sl:27: update(a, p)*/
_SequenceL__delete_opttmp1.delete_data(false);	
_SequenceL__delete_opttmp1.finished();	
_SequenceL__Arg_newP = (_SequenceL__Arg_p + (*(_SequenceL__Arg_a.get_ptr(_SequenceL__Arg_p))));	/*advent5.sl:26: p + a[p]*/
_SequenceL_tmp48 = (_SequenceL__Arg_done + 1);	/*advent5.sl:29: done + 1*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_part2_i_i_i_0(_SequenceL__Arg_newA, _SequenceL__Arg_newP, _SequenceL_tmp48, _SequenceL__resultConv));
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
(*(_SequenceL__result16.get_ptr(_SequenceL__no_share_iter))) = (*(_SequenceL__Arg_a.get_ptr(_SequenceL__no_share_iter)));	/*advent5.sl:12: a[i]*/
}
}
}
void SequenceL__sl_main_nt17_::operator() (const blocked_range<int>& _r) const {
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
(*(_SequenceL__result18.get_ptr(_SequenceL__no_share_iter))) = (*(_SequenceL__Arg_a.get_ptr(_SequenceL__no_share_iter)));	/*advent5.sl:12: a[i]*/
}
}
}
void SequenceL__parallel_increment_0(::Sequence< int > &_SequenceL__Arg_a, int _SequenceL__Arg_p, ::Sequence< int > &_SequenceL__resultConv)
{

if (_SequenceL__Arg_a.onlyInstance())	/*advent5.sl:12: a[i] + 1 when i = p  else a[i]*/
{
_SequenceL__resultConv.replaceSequence(_SequenceL__Arg_a);	/*advent5.sl:12: a[i] + 1 when i = p  else a[i]*/
if (((_SequenceL__Arg_p >= 1) && (_SequenceL__Arg_p <= _SequenceL__resultConv.size())))	/*advent5.sl:12: a[i] + 1 when i = p  else a[i]*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Arg_p))) = ((*(_SequenceL__resultConv.get_ptr(_SequenceL__Arg_p))) + 1);	/*advent5.sl:11: a[i] + 1*/
}
}
else
{
_SequenceL__resultConv.setSize(_SequenceL__Arg_a.size());	/*advent5.sl:12: a[i] + 1 when i = p  else a[i]*/
if (((_SequenceL__Arg_p >= 1) && (_SequenceL__Arg_p <= _SequenceL__Arg_a.size())))	/*advent5.sl:12: a[i] + 1 when i = p  else a[i]*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Arg_p))) = ((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Arg_p))) + 1);	/*advent5.sl:11: a[i] + 1*/
}
if (((((SL_FLOAT)(SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_p - 1)) - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt15_ SequenceL__sl_main_nt15__val(_SequenceL__Arg_a, 1, SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_p - 1)), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt15__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_p - 1)); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i)));	/*advent5.sl:12: a[i]*/
}
}
if (((((SL_FLOAT)(_SequenceL__Arg_a.size() - SequenceL_max(1, (_SequenceL__Arg_p + 1)))) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt17_ SequenceL__sl_main_nt17__val(_SequenceL__Arg_a, SequenceL_max(1, (_SequenceL__Arg_p + 1)), _SequenceL__Arg_a.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt17__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=SequenceL_max(1, (_SequenceL__Arg_p + 1)),_stop_val__SequenceL__Index_i=_SequenceL__Arg_a.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i)));	/*advent5.sl:12: a[i]*/
}
}
}
}
void SequenceL__parallel_part1_0(::Sequence< int > &_SequenceL__Arg_a, int _SequenceL__Arg_p, int _SequenceL__Arg_done, int &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL__Arg_newA(cspace);
::Sequence< int > _SequenceL__delete_opttmp1(cspace);
int _SequenceL__Arg_newP;
int _SequenceL_tmp75;

if (((_SequenceL__Arg_p < 1) || (_SequenceL__Arg_p > _SequenceL__Arg_a.size())))	/*advent5.sl:18: done when p < 1 or p > size(a)     else part1(newA, newP, done + 1)*/
{
_SequenceL__resultConv = _SequenceL__Arg_done;	/*advent5.sl:17: done*/
}
else
{
_SequenceL__Arg_a.clone(_SequenceL__delete_opttmp1);	/*advent5.sl:16: increment(a, p)*/
SequenceL__parallel_increment_0(_SequenceL__delete_opttmp1, _SequenceL__Arg_p, _SequenceL__Arg_newA);	/*advent5.sl:16: increment(a, p)*/
_SequenceL__delete_opttmp1.delete_data(false);	
_SequenceL__delete_opttmp1.finished();	
_SequenceL__Arg_newP = (_SequenceL__Arg_p + (*(_SequenceL__Arg_a.get_ptr(_SequenceL__Arg_p))));	/*advent5.sl:15: p + a[p]*/
_SequenceL_tmp75 = (_SequenceL__Arg_done + 1);	/*advent5.sl:18: done + 1*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_part1_i_i_i_0(_SequenceL__Arg_newA, _SequenceL__Arg_newP, _SequenceL_tmp75, _SequenceL__resultConv));
_SequenceL__Arg_newA.finished();	
}
}
void SequenceL__parallel_integerPowerHelper_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int _SequenceL__Arg_val, int &_SequenceL__resultConv)
{
int _SequenceL___Arg_y_tco;
int _SequenceL___Arg_val_tco;
int _SequenceL_tmp106;
int _SequenceL_tmp107;

_SequenceL___Arg_y_tco = _SequenceL__Arg_y;	
_SequenceL___Arg_val_tco = _SequenceL__Arg_val;	
_parallel_integerPowerHelper_Math_label_tco:	
if ((_SequenceL___Arg_y_tco < 1))	/*Math.sl:20: val when y < 1	else		integerPowerHelper(x, y - 1, val * x)*/
{
_SequenceL__resultConv = _SequenceL___Arg_val_tco;	/*Math.sl:18: val*/
}
else
{
_SequenceL_tmp106 = (_SequenceL___Arg_y_tco - 1);	/*Math.sl:20: y - 1*/
_SequenceL_tmp107 = (_SequenceL___Arg_val_tco * _SequenceL__Arg_x);	/*Math.sl:20: val * x*/
_SequenceL___Arg_y_tco = _SequenceL_tmp106;	
_SequenceL___Arg_val_tco = _SequenceL_tmp107;	
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
int _SequenceL_tmp168;
int _SequenceL__Arg_place;
int _SequenceL_tmp169;

SequenceL_charToInt_3((*(_SequenceL__Arg_numString.get_ptr(_SequenceL__Index_i))), _SequenceL_tmp168);	/*Conversion.sl:60: charToInt(numString[i])*/
_SequenceL_tmp169 = (_SequenceL__Arg_numString.size() - _SequenceL__Index_i);	/*Conversion.sl:58: size(numString) - i*/
SequenceL_integerPower_5(10, _SequenceL_tmp169, _SequenceL__Arg_place);	/*Conversion.sl:58: integerPower(10, (size(numString) - i))*/
(*(_SequenceL__result14.get_ptr(_SequenceL__Index_i))) = (_SequenceL_tmp168 * _SequenceL__Arg_place);	/*Conversion.sl:60: charToInt(numString[i]) * place*/
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
bool _SequenceL_tmp245;
int _SequenceL_tmp248;
int _SequenceL_tmp250;

_SequenceL___Arg_i_tco = _SequenceL__Arg_i;	
_parallel_trimNonNumeric_Conversion_label_tco:	
if ((_SequenceL___Arg_i_tco > _SequenceL__Arg_numString.size()))	/*Conversion.sl:53: numString when i > size(numString)	else		take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL__resultConv = _SequenceL__Arg_numString;	/*Conversion.sl:49: numString*/
}
else
{
SequenceL__parallel_isDigit_1((*(_SequenceL__Arg_numString.get_ptr(_SequenceL___Arg_i_tco))), _SequenceL_tmp245);	/*Conversion.sl:52: isDigit(numString[i])*/
if (!_SequenceL_tmp245)	/*Conversion.sl:53: take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL_tmp248 = (_SequenceL___Arg_i_tco - 1);	/*Conversion.sl:51: i-1*/
SequenceL__parallel_take_2(_SequenceL__Arg_numString, _SequenceL_tmp248, _SequenceL__resultConv);	/*Conversion.sl:51: take(numString, i-1)*/
}
else
{
_SequenceL_tmp250 = (_SequenceL___Arg_i_tco + 1);	/*Conversion.sl:53: i + 1*/
_SequenceL___Arg_i_tco = _SequenceL_tmp250;	
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
bool _SequenceL_tmp327;
char _SequenceL_tmp326;
::Sequence< char > _SequenceL_tmp329(cspace);

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
_SequenceL_tmp326 = _SequenceL___Arg_input_tco.head();	/*String.sl:10: head(input)*/
SequenceL__parallel_isWhiteSpace_1(_SequenceL_tmp326, _SequenceL_tmp327);	/*String.sl:11: isWhiteSpace(head(input))*/
if (_SequenceL_tmp327)	/*String.sl:12: trimStart(tail(input)) when isWhiteSpace(head(input))	else		input*/
{
_SequenceL___Arg_input_tco.tail(_SequenceL_tmp329);	/*String.sl:10: tail(input)*/
_swap(_SequenceL___Arg_input_tco, _SequenceL_tmp329);	
goto _parallel_trimStart_String_label_tco;	/*String.sl:10: trimStart(tail(input))*/
}
else
{
_SequenceL__resultConv = _SequenceL___Arg_input_tco;	/*String.sl:12: input*/
}
}
_SequenceL_tmp329.delete_data(false);	
_SequenceL_tmp329.finished();	
}
void SequenceL__parallel_stringToInt_3(::Sequence< char > &_SequenceL__Arg_numString, int &_SequenceL__resultConv)
{
::Sequence< char > _SequenceL__Arg_trimmed(cspace);
char _SequenceL_tmp334;
int _SequenceL_tmp338;
::Sequence< char > _SequenceL_tmp337(cspace);
char _SequenceL_tmp340;
::Sequence< char > _SequenceL_tmp343(cspace);
::Sequence< int > _SequenceL_tmp345(cspace);
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
_SequenceL_tmp334 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:41: head(trimmed)*/
if ((_SequenceL_tmp334 == '-'))	/*Conversion.sl:45: - stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp337);	/*Conversion.sl:41: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(false);	
_SequenceL__Arg_trimmed.finished();	
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_stringToInt_c_3(_SequenceL_tmp337, _SequenceL_tmp338));
_SequenceL_tmp337.finished();	
_SequenceL__resultConv = (-_SequenceL_tmp338);	/*Conversion.sl:41: - stringToInt(tail(trimmed))*/
}
else
{
_SequenceL_tmp340 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:43: head(trimmed)*/
if ((_SequenceL_tmp340 == '+'))	/*Conversion.sl:45: stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp343);	/*Conversion.sl:43: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(false);	
_SequenceL__Arg_trimmed.finished();	
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_stringToInt_c_3(_SequenceL_tmp343, _SequenceL__resultConv));
_SequenceL_tmp343.finished();	
}
else
{
SequenceL__parallel_trimNonNumeric_3(_SequenceL__Arg_trimmed, 1, _SequenceL__Arg_justNumber);	/*Conversion.sl:37: trimNonNumeric(trimmed, 1)*/
_SequenceL__Arg_trimmed.delete_data(false);	
_SequenceL__Arg_trimmed.finished();	
SequenceL__parallel_atoIWorker_3(_SequenceL__Arg_justNumber, _SequenceL_tmp345);	/*Conversion.sl:45: atoIWorker(justNumber)*/
_SequenceL__Arg_justNumber.delete_data(false);	
_SequenceL__Arg_justNumber.finished();	
_SequenceL__resultConv = _SequenceL_parallel_sum(_SequenceL_tmp345, __LINE__);	/*Conversion.sl:45: sum(atoIWorker(justNumber))*/
_SequenceL_tmp345.delete_data(false);	
_SequenceL_tmp345.finished();	
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
  for(int _SequenceL__i370 = _r.begin(); _SequenceL__i370 < _e; _SequenceL__i370++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__i370 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__i370 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result4.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__no_share_iter))) + 1);	/*Sequence.sl:54: indexes + 1*/
}
}
}
void SequenceL__sl_main_nt5_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i373 = _r.begin(); _SequenceL__i373 < _e; _SequenceL__i373++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__i373 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__i373 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result6.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__no_share_iter))) - 1);	/*Sequence.sl:54: indexes - 1*/
}
}
}
void SequenceL__sl_main_nt7_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i378 = _r.begin(); _SequenceL__i378 < _e; _SequenceL__i378++)
{

ellipsis((*(_SequenceL_tmp371.get_ptr(_SequenceL__i378))), (*(_SequenceL_tmp376.get_ptr(_SequenceL__i378))), (*(_SequenceL__result8.get_ptr(_SequenceL__i378))));	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
}
}
void SequenceL__parallel_split_2(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_delimiter, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv)
{
::Sequence< Empty > _SequenceL_tmp365(cspace);
::Sequence< int > _SequenceL_tmp371(cspace);
::Sequence< int > _SequenceL_tmp367(cspace);
::Sequence< int > _SequenceL__Arg_indexes(cspace);
::Sequence< int > _SequenceL_tmp369(cspace);
::Sequence< int > _SequenceL_tmp376(cspace);
::Sequence< int > _SequenceL_tmp372(cspace);
::Sequence< int > _SequenceL_tmp374(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp377(cspace);

if ((_SequenceL__Arg_list.size() == 0))	/*Sequence.sl:54: [] when size(list) = 0	else		multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
{
_SequenceL_tmp365.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp365, _SequenceL__resultConv);	
_SequenceL_tmp365.delete_data(false);	
_SequenceL_tmp365.finished();	
_SequenceL_tmp377.delete_data(false);	
_SequenceL_tmp377.finished();	
}
else
{
_SequenceL_tmp367.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp367.get_ptr(1))) = 1;	/*Sequence.sl:54: 1*/
SequenceL__parallel_indexesOf_2(_SequenceL__Arg_list, _SequenceL__Arg_delimiter, _SequenceL__Arg_indexes);	/*Sequence.sl:50: indexesOf(list, delimiter)*/
_SequenceL_tmp369.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes + 1*/
if (((((SL_FLOAT)(_SequenceL_tmp369.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt3_ SequenceL__sl_main_nt3__val(_SequenceL__Arg_indexes, 1, _SequenceL_tmp369.size(), _SequenceL_tmp369);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt3__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__i370=1,_stop_val__SequenceL__i370=_SequenceL_tmp369.size(); _SequenceL__i370<=_stop_val__SequenceL__i370; _SequenceL__i370+=1)
{
(*(_SequenceL_tmp369.get_ptr(_SequenceL__i370))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i370))) + 1);	/*Sequence.sl:54: indexes + 1*/
}
}
append(_SequenceL_tmp367, _SequenceL_tmp369, _SequenceL_tmp371);	/*Sequence.sl:54: [1] ++ (indexes + 1)*/
_SequenceL_tmp367.delete_data(false);	
_SequenceL_tmp369.delete_data(false);	
_SequenceL_tmp369.finished();	
_SequenceL_tmp367.finished();	
_SequenceL_tmp372.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes - 1*/
if (((((SL_FLOAT)(_SequenceL_tmp372.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt5_ SequenceL__sl_main_nt5__val(_SequenceL__Arg_indexes, 1, _SequenceL_tmp372.size(), _SequenceL_tmp372);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt5__val);
_SequenceL__Arg_indexes.delete_data(false);	
_SequenceL__Arg_indexes.finished();	
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__i373=1,_stop_val__SequenceL__i373=_SequenceL_tmp372.size(); _SequenceL__i373<=_stop_val__SequenceL__i373; _SequenceL__i373+=1)
{
(*(_SequenceL_tmp372.get_ptr(_SequenceL__i373))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i373))) - 1);	/*Sequence.sl:54: indexes - 1*/
}
_SequenceL__Arg_indexes.delete_data(false);	
_SequenceL__Arg_indexes.finished();	
}
_SequenceL_tmp374.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp374.get_ptr(1))) = _SequenceL__Arg_list.size();	/*Sequence.sl:54: size(list)*/
append(_SequenceL_tmp372, _SequenceL_tmp374, _SequenceL_tmp376);	/*Sequence.sl:54: (indexes - 1) ++ [size(list)]*/
_SequenceL_tmp372.delete_data(false);	
_SequenceL_tmp374.delete_data(false);	
_SequenceL_tmp374.finished();	
_SequenceL_tmp372.finished();	
_SequenceL_tmp377.setSize(_SequenceL_tmp371.size());	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
SequenceL__sl_main_nt7_ SequenceL__sl_main_nt7__val(_SequenceL_tmp371, _SequenceL_tmp376, _SequenceL_tmp377);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL_tmp377.size() + 1, SequenceL__sl_main_nt7__val);
_SequenceL_tmp371.delete_data(false);	
_SequenceL_tmp376.delete_data(false);	
_SequenceL_tmp376.finished();	
_SequenceL_tmp371.finished();	
SequenceL__parallel_multipleIndexes_2(_SequenceL__Arg_list, _SequenceL_tmp377, _SequenceL__resultConv);	/*Sequence.sl:54: multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
_SequenceL_tmp377.delete_data(false);	
_SequenceL_tmp377.finished();	
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
bool _SequenceL_tmp414;
char _SequenceL_tmp413;
::Sequence< char > _SequenceL_tmp416(cspace);
bool _SequenceL_tmp419;
char _SequenceL_tmp418;
::Sequence< char > _SequenceL_tmp421(cspace);

_SequenceL_tmp413 = _SequenceL__Arg_s.head();	/*advent5.sl:6: head(s)*/
SequenceL__parallel_isWhiteSpace_1(_SequenceL_tmp413, _SequenceL_tmp414);	/*advent5.sl:7: isWhiteSpace(head(s))*/
if (_SequenceL_tmp414)	/*advent5.sl:8: trim(tail(s)) when isWhiteSpace(head(s))  else trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
_SequenceL__Arg_s.tail(_SequenceL_tmp416);	/*advent5.sl:6: tail(s)*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_trim_c_0(_SequenceL_tmp416, _SequenceL__resultConv));
_SequenceL_tmp416.finished();	
}
else
{
SequenceL__parallel_last_2(_SequenceL__Arg_s, _SequenceL_tmp418);	/*advent5.sl:7: last(s)*/
SequenceL__parallel_isWhiteSpace_1(_SequenceL_tmp418, _SequenceL_tmp419);	/*advent5.sl:8: isWhiteSpace(last(s))*/
if (_SequenceL_tmp419)	/*advent5.sl:8: trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
SequenceL__parallel_allButLast_2(_SequenceL__Arg_s, _SequenceL_tmp421);	/*advent5.sl:7: allButLast(s)*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_trim_c_0(_SequenceL_tmp421, _SequenceL__resultConv));
_SequenceL_tmp421.finished();	
}
else
{
_SequenceL__resultConv = _SequenceL__Arg_s;	/*advent5.sl:8: s*/
}
}
}
void SequenceL__sl_main_nt1_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i426 = _r.begin(); _SequenceL__i426 < _e; _SequenceL__i426++)
{
::Sequence< char > _SequenceL__delete_opttmp1(cspace);

(*(_SequenceL_tmp425.get_ptr(_SequenceL__i426))).clone(_SequenceL__delete_opttmp1);	/*advent5.sl:33: stringToInt(split(trim(s[1]), '\n'))*/
SequenceL_stringToInt_3(_SequenceL__delete_opttmp1, (*(_SequenceL__result2.get_ptr(_SequenceL__i426))));	/*advent5.sl:33: stringToInt(split(trim(s[1]), '\n'))*/
_SequenceL__delete_opttmp1.finished();	
}
}
void SequenceL__parallel_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_s, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL__delete_opttmp1(cspace);
::Sequence< ::Sequence< char > > _SequenceL_tmp425(cspace);
::Sequence< char > _SequenceL_tmp424(cspace);
::Sequence< char > _SequenceL__delete_opttmp2(cspace);
::Sequence< int > _SequenceL__Arg_jumps(cspace);

_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
(*(_SequenceL__Arg_s.get_ptr(1))).clone(_SequenceL__delete_opttmp2);	/*advent5.sl:33: trim(s[1])*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_trim_c_0(_SequenceL__delete_opttmp2, _SequenceL_tmp424));
SequenceL__parallel_split_2(_SequenceL_tmp424, '\n', _SequenceL_tmp425);	/*advent5.sl:33: split(trim(s[1]), '\n')*/
_SequenceL_tmp424.delete_data(false);	
_SequenceL_tmp424.finished();	
_SequenceL__Arg_jumps.setSize(_SequenceL_tmp425.size());	/*advent5.sl:33: stringToInt(split(trim(s[1]), '\n'))*/
SequenceL__sl_main_nt1_ SequenceL__sl_main_nt1__val(_SequenceL_tmp425, _SequenceL__Arg_jumps);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_jumps.size() + 1, SequenceL__sl_main_nt1__val);
_SequenceL_tmp425.delete_data(false);	
_SequenceL_tmp425.finished();	
_SequenceL__Arg_jumps.clone(_SequenceL__delete_opttmp1);	/*advent5.sl:35: part1(jumps, 1, 0)*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_part1_i_i_i_0(_SequenceL__delete_opttmp1, 1, 0, (*(_SequenceL__resultConv.get_ptr(1)))));
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_part2_i_i_i_0(_SequenceL__Arg_jumps, 1, 0, (*(_SequenceL__resultConv.get_ptr(2)))));
_SequenceL__Arg_jumps.finished();	
}
void SequenceL_update_0(::Sequence< int > &_SequenceL__Arg_a, int _SequenceL__Arg_p, ::Sequence< int > &_SequenceL__resultConv)
{

if (_SequenceL__Arg_a.onlyInstance())	/*advent5.sl:23: a[i] - 1 when i = p and a[i] >= 3  else a[i] + 1 when i = p  else a[i]*/
{
_SequenceL__resultConv.replaceSequence(_SequenceL__Arg_a);	/*advent5.sl:23: a[i] - 1 when i = p and a[i] >= 3  else a[i] + 1 when i = p  else a[i]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__resultConv.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
if (((_SequenceL__Index_i == _SequenceL__Arg_p) && ((*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) >= 3)))	/*advent5.sl:23: a[i] - 1 when i = p and a[i] >= 3  else a[i] + 1 when i = p  else a[i]*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = ((*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) - 1);	/*advent5.sl:21: a[i] - 1*/
}
else
{
if ((_SequenceL__Index_i == _SequenceL__Arg_p))	/*advent5.sl:23: a[i] + 1 when i = p  else a[i]*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = ((*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) + 1);	/*advent5.sl:22: a[i] + 1*/
}
}
}
}
else
{
_SequenceL__resultConv.setSize(_SequenceL__Arg_a.size());	/*advent5.sl:23: a[i] - 1 when i = p and a[i] >= 3  else a[i] + 1 when i = p  else a[i]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_a.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
if (((_SequenceL__Index_i == _SequenceL__Arg_p) && ((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) >= 3)))	/*advent5.sl:23: a[i] - 1 when i = p and a[i] >= 3  else a[i] + 1 when i = p  else a[i]*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = ((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) - 1);	/*advent5.sl:21: a[i] - 1*/
}
else
{
if ((_SequenceL__Index_i == _SequenceL__Arg_p))	/*advent5.sl:23: a[i] + 1 when i = p  else a[i]*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = ((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i))) + 1);	/*advent5.sl:22: a[i] + 1*/
}
else
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i)));	/*advent5.sl:23: a[i]*/
}
}
}
}
}
void SequenceL_part2_0(::Sequence< int > &_SequenceL__Arg_a, int _SequenceL__Arg_p, int _SequenceL__Arg_done, int &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL___Arg_a_tco(cspace);
int _SequenceL___Arg_p_tco;
int _SequenceL___Arg_done_tco;
::Sequence< int > _SequenceL__Arg_newA(cspace);
::Sequence< int > _SequenceL__delete_opttmp1(cspace);
int _SequenceL__Arg_newP;
int _SequenceL_tmp48;

if (_SequenceL__Arg_a.onlyInstance())	
{
_SequenceL___Arg_a_tco.replaceSequence(_SequenceL__Arg_a);	
}
else
{
_SequenceL___Arg_a_tco.hard_copy(_SequenceL__Arg_a,__LINE__);	
}
_SequenceL___Arg_p_tco = _SequenceL__Arg_p;	
_SequenceL___Arg_done_tco = _SequenceL__Arg_done;	
part2_advent5_label_tco:	
if (((_SequenceL___Arg_p_tco < 1) || (_SequenceL___Arg_p_tco > _SequenceL___Arg_a_tco.size())))	/*advent5.sl:29: done when p < 1 or p > size(a)     else part2(newA, newP, done + 1)*/
{
_SequenceL__resultConv = _SequenceL___Arg_done_tco;	/*advent5.sl:28: done*/
}
else
{
_SequenceL___Arg_a_tco.clone(_SequenceL__delete_opttmp1);	/*advent5.sl:27: update(a, p)*/
SequenceL_update_0(_SequenceL__delete_opttmp1, _SequenceL___Arg_p_tco, _SequenceL__Arg_newA);	/*advent5.sl:27: update(a, p)*/
_SequenceL__Arg_newP = (_SequenceL___Arg_p_tco + (*(_SequenceL___Arg_a_tco.get_ptr(_SequenceL___Arg_p_tco))));	/*advent5.sl:26: p + a[p]*/
_SequenceL_tmp48 = (_SequenceL___Arg_done_tco + 1);	/*advent5.sl:29: done + 1*/
_swap(_SequenceL___Arg_a_tco, _SequenceL__Arg_newA);	
_SequenceL___Arg_p_tco = _SequenceL__Arg_newP;	
_SequenceL___Arg_done_tco = _SequenceL_tmp48;	
goto part2_advent5_label_tco;	/*advent5.sl:29: part2(newA, newP, done + 1)*/
}
_SequenceL__Arg_newA.delete_data(true);	
_SequenceL__delete_opttmp1.delete_data(true);	
_SequenceL__delete_opttmp1.finished();	
_SequenceL__Arg_newA.finished();	
}
void SequenceL_increment_0(::Sequence< int > &_SequenceL__Arg_a, int _SequenceL__Arg_p, ::Sequence< int > &_SequenceL__resultConv)
{

if (_SequenceL__Arg_a.onlyInstance())	/*advent5.sl:12: a[i] + 1 when i = p  else a[i]*/
{
_SequenceL__resultConv.replaceSequence(_SequenceL__Arg_a);	/*advent5.sl:12: a[i] + 1 when i = p  else a[i]*/
if (((_SequenceL__Arg_p >= 1) && (_SequenceL__Arg_p <= _SequenceL__resultConv.size())))	/*advent5.sl:12: a[i] + 1 when i = p  else a[i]*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Arg_p))) = ((*(_SequenceL__resultConv.get_ptr(_SequenceL__Arg_p))) + 1);	/*advent5.sl:11: a[i] + 1*/
}
}
else
{
_SequenceL__resultConv.setSize(_SequenceL__Arg_a.size());	/*advent5.sl:12: a[i] + 1 when i = p  else a[i]*/
if (((_SequenceL__Arg_p >= 1) && (_SequenceL__Arg_p <= _SequenceL__Arg_a.size())))	/*advent5.sl:12: a[i] + 1 when i = p  else a[i]*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Arg_p))) = ((*(_SequenceL__Arg_a.get_ptr(_SequenceL__Arg_p))) + 1);	/*advent5.sl:11: a[i] + 1*/
}
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=SequenceL_min(_SequenceL__Arg_a.size(), (_SequenceL__Arg_p - 1)); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i)));	/*advent5.sl:12: a[i]*/
}
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=SequenceL_max(1, (_SequenceL__Arg_p + 1)),_stop_val__SequenceL__Index_i=_SequenceL__Arg_a.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_a.get_ptr(_SequenceL__Index_i)));	/*advent5.sl:12: a[i]*/
}
}
}
void SequenceL_part1_0(::Sequence< int > &_SequenceL__Arg_a, int _SequenceL__Arg_p, int _SequenceL__Arg_done, int &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL___Arg_a_tco(cspace);
int _SequenceL___Arg_p_tco;
int _SequenceL___Arg_done_tco;
::Sequence< int > _SequenceL__Arg_newA(cspace);
::Sequence< int > _SequenceL__delete_opttmp1(cspace);
int _SequenceL__Arg_newP;
int _SequenceL_tmp75;

if (_SequenceL__Arg_a.onlyInstance())	
{
_SequenceL___Arg_a_tco.replaceSequence(_SequenceL__Arg_a);	
}
else
{
_SequenceL___Arg_a_tco.hard_copy(_SequenceL__Arg_a,__LINE__);	
}
_SequenceL___Arg_p_tco = _SequenceL__Arg_p;	
_SequenceL___Arg_done_tco = _SequenceL__Arg_done;	
part1_advent5_label_tco:	
if (((_SequenceL___Arg_p_tco < 1) || (_SequenceL___Arg_p_tco > _SequenceL___Arg_a_tco.size())))	/*advent5.sl:18: done when p < 1 or p > size(a)     else part1(newA, newP, done + 1)*/
{
_SequenceL__resultConv = _SequenceL___Arg_done_tco;	/*advent5.sl:17: done*/
}
else
{
_SequenceL___Arg_a_tco.clone(_SequenceL__delete_opttmp1);	/*advent5.sl:16: increment(a, p)*/
SequenceL_increment_0(_SequenceL__delete_opttmp1, _SequenceL___Arg_p_tco, _SequenceL__Arg_newA);	/*advent5.sl:16: increment(a, p)*/
_SequenceL__Arg_newP = (_SequenceL___Arg_p_tco + (*(_SequenceL___Arg_a_tco.get_ptr(_SequenceL___Arg_p_tco))));	/*advent5.sl:15: p + a[p]*/
_SequenceL_tmp75 = (_SequenceL___Arg_done_tco + 1);	/*advent5.sl:18: done + 1*/
_swap(_SequenceL___Arg_a_tco, _SequenceL__Arg_newA);	
_SequenceL___Arg_p_tco = _SequenceL__Arg_newP;	
_SequenceL___Arg_done_tco = _SequenceL_tmp75;	
goto part1_advent5_label_tco;	/*advent5.sl:18: part1(newA, newP, done + 1)*/
}
_SequenceL__Arg_newA.delete_data(true);	
_SequenceL__delete_opttmp1.delete_data(true);	
_SequenceL__delete_opttmp1.finished();	
_SequenceL__Arg_newA.finished();	
}
void SequenceL_integerPowerHelper_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int _SequenceL__Arg_val, int &_SequenceL__resultConv)
{
int _SequenceL___Arg_y_tco;
int _SequenceL___Arg_val_tco;
int _SequenceL_tmp106;
int _SequenceL_tmp107;

_SequenceL___Arg_y_tco = _SequenceL__Arg_y;	
_SequenceL___Arg_val_tco = _SequenceL__Arg_val;	
integerPowerHelper_Math_label_tco:	
if ((_SequenceL___Arg_y_tco < 1))	/*Math.sl:20: val when y < 1	else		integerPowerHelper(x, y - 1, val * x)*/
{
_SequenceL__resultConv = _SequenceL___Arg_val_tco;	/*Math.sl:18: val*/
}
else
{
_SequenceL_tmp106 = (_SequenceL___Arg_y_tco - 1);	/*Math.sl:20: y - 1*/
_SequenceL_tmp107 = (_SequenceL___Arg_val_tco * _SequenceL__Arg_x);	/*Math.sl:20: val * x*/
_SequenceL___Arg_y_tco = _SequenceL_tmp106;	
_SequenceL___Arg_val_tco = _SequenceL_tmp107;	
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
int _SequenceL_tmp168;
int _SequenceL__Arg_place;
int _SequenceL_tmp169;

_SequenceL__resultConv.setSize(_SequenceL__Arg_numString.size());	/*Conversion.sl:60: charToInt(numString[i]) * place*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_numString.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
SequenceL_charToInt_3((*(_SequenceL__Arg_numString.get_ptr(_SequenceL__Index_i))), _SequenceL_tmp168);	/*Conversion.sl:60: charToInt(numString[i])*/
_SequenceL_tmp169 = (_SequenceL__Arg_numString.size() - _SequenceL__Index_i);	/*Conversion.sl:58: size(numString) - i*/
SequenceL_integerPower_5(10, _SequenceL_tmp169, _SequenceL__Arg_place);	/*Conversion.sl:58: integerPower(10, (size(numString) - i))*/
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (_SequenceL_tmp168 * _SequenceL__Arg_place);	/*Conversion.sl:60: charToInt(numString[i]) * place*/
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
bool _SequenceL_tmp245;
int _SequenceL_tmp248;
int _SequenceL_tmp250;

_SequenceL___Arg_i_tco = _SequenceL__Arg_i;	
trimNonNumeric_Conversion_label_tco:	
if ((_SequenceL___Arg_i_tco > _SequenceL__Arg_numString.size()))	/*Conversion.sl:53: numString when i > size(numString)	else		take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL__resultConv = _SequenceL__Arg_numString;	/*Conversion.sl:49: numString*/
}
else
{
SequenceL_isDigit_1((*(_SequenceL__Arg_numString.get_ptr(_SequenceL___Arg_i_tco))), _SequenceL_tmp245);	/*Conversion.sl:52: isDigit(numString[i])*/
if (!_SequenceL_tmp245)	/*Conversion.sl:53: take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL_tmp248 = (_SequenceL___Arg_i_tco - 1);	/*Conversion.sl:51: i-1*/
SequenceL_take_2(_SequenceL__Arg_numString, _SequenceL_tmp248, _SequenceL__resultConv);	/*Conversion.sl:51: take(numString, i-1)*/
}
else
{
_SequenceL_tmp250 = (_SequenceL___Arg_i_tco + 1);	/*Conversion.sl:53: i + 1*/
_SequenceL___Arg_i_tco = _SequenceL_tmp250;	
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
bool _SequenceL_tmp327;
char _SequenceL_tmp326;
::Sequence< char > _SequenceL_tmp329(cspace);

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
_SequenceL_tmp326 = _SequenceL___Arg_input_tco.head();	/*String.sl:10: head(input)*/
SequenceL_isWhiteSpace_1(_SequenceL_tmp326, _SequenceL_tmp327);	/*String.sl:11: isWhiteSpace(head(input))*/
if (_SequenceL_tmp327)	/*String.sl:12: trimStart(tail(input)) when isWhiteSpace(head(input))	else		input*/
{
_SequenceL___Arg_input_tco.tail(_SequenceL_tmp329);	/*String.sl:10: tail(input)*/
_swap(_SequenceL___Arg_input_tco, _SequenceL_tmp329);	
goto trimStart_String_label_tco;	/*String.sl:10: trimStart(tail(input))*/
}
else
{
_SequenceL__resultConv = _SequenceL___Arg_input_tco;	/*String.sl:12: input*/
}
}
_SequenceL_tmp329.delete_data(true);	
_SequenceL_tmp329.finished();	
}
void SequenceL_stringToInt_3(::Sequence< char > &_SequenceL__Arg_numString, int &_SequenceL__resultConv)
{
::Sequence< char > _SequenceL__Arg_trimmed(cspace);
char _SequenceL_tmp334;
int _SequenceL_tmp338;
::Sequence< char > _SequenceL_tmp337(cspace);
char _SequenceL_tmp340;
::Sequence< char > _SequenceL_tmp343(cspace);
::Sequence< int > _SequenceL_tmp345(cspace);
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
_SequenceL_tmp334 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:41: head(trimmed)*/
if ((_SequenceL_tmp334 == '-'))	/*Conversion.sl:45: - stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp337);	/*Conversion.sl:41: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
SequenceL_stringToInt_3(_SequenceL_tmp337, _SequenceL_tmp338);	/*Conversion.sl:41: stringToInt(tail(trimmed))*/
_SequenceL_tmp337.finished();	
_SequenceL__resultConv = (-_SequenceL_tmp338);	/*Conversion.sl:41: - stringToInt(tail(trimmed))*/
}
else
{
_SequenceL_tmp340 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:43: head(trimmed)*/
if ((_SequenceL_tmp340 == '+'))	/*Conversion.sl:45: stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp343);	/*Conversion.sl:43: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
SequenceL_stringToInt_3(_SequenceL_tmp343, _SequenceL__resultConv);	/*Conversion.sl:43: stringToInt(tail(trimmed))*/
_SequenceL_tmp343.finished();	
}
else
{
SequenceL_trimNonNumeric_3(_SequenceL__Arg_trimmed, 1, _SequenceL__Arg_justNumber);	/*Conversion.sl:37: trimNonNumeric(trimmed, 1)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
SequenceL_atoIWorker_3(_SequenceL__Arg_justNumber, _SequenceL_tmp345);	/*Conversion.sl:45: atoIWorker(justNumber)*/
_SequenceL__Arg_justNumber.delete_data(true);	
_SequenceL__Arg_justNumber.finished();	
_SequenceL__resultConv = sum(_SequenceL_tmp345);	/*Conversion.sl:45: sum(atoIWorker(justNumber))*/
_SequenceL_tmp345.delete_data(true);	
_SequenceL_tmp345.finished();	
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
::Sequence< Empty > _SequenceL_tmp365(cspace);
::Sequence< int > _SequenceL_tmp371(cspace);
::Sequence< int > _SequenceL_tmp367(cspace);
::Sequence< int > _SequenceL__Arg_indexes(cspace);
::Sequence< int > _SequenceL_tmp369(cspace);
::Sequence< int > _SequenceL_tmp376(cspace);
::Sequence< int > _SequenceL_tmp372(cspace);
::Sequence< int > _SequenceL_tmp374(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp377(cspace);

if ((_SequenceL__Arg_list.size() == 0))	/*Sequence.sl:54: [] when size(list) = 0	else		multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
{
_SequenceL_tmp365.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp365, _SequenceL__resultConv);	
_SequenceL_tmp365.delete_data(true);	
_SequenceL_tmp365.finished();	
}
else
{
_SequenceL_tmp367.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp367.get_ptr(1))) = 1;	/*Sequence.sl:54: 1*/
SequenceL_indexesOf_2(_SequenceL__Arg_list, _SequenceL__Arg_delimiter, _SequenceL__Arg_indexes);	/*Sequence.sl:50: indexesOf(list, delimiter)*/
_SequenceL_tmp369.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes + 1*/
SIMD_DIRECTIVE
for (int _SequenceL__i370=1,_stop_val__SequenceL__i370=_SequenceL_tmp369.size(); _SequenceL__i370<=_stop_val__SequenceL__i370; _SequenceL__i370+=1)
{
(*(_SequenceL_tmp369.get_ptr(_SequenceL__i370))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i370))) + 1);	/*Sequence.sl:54: indexes + 1*/
}
append(_SequenceL_tmp367, _SequenceL_tmp369, _SequenceL_tmp371);	/*Sequence.sl:54: [1] ++ (indexes + 1)*/
_SequenceL_tmp367.delete_data(true);	
_SequenceL_tmp369.delete_data(true);	
_SequenceL_tmp369.finished();	
_SequenceL_tmp367.finished();	
_SequenceL_tmp372.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes - 1*/
SIMD_DIRECTIVE
for (int _SequenceL__i373=1,_stop_val__SequenceL__i373=_SequenceL_tmp372.size(); _SequenceL__i373<=_stop_val__SequenceL__i373; _SequenceL__i373+=1)
{
(*(_SequenceL_tmp372.get_ptr(_SequenceL__i373))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i373))) - 1);	/*Sequence.sl:54: indexes - 1*/
}
_SequenceL__Arg_indexes.delete_data(true);	
_SequenceL__Arg_indexes.finished();	
_SequenceL_tmp374.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp374.get_ptr(1))) = _SequenceL__Arg_list.size();	/*Sequence.sl:54: size(list)*/
append(_SequenceL_tmp372, _SequenceL_tmp374, _SequenceL_tmp376);	/*Sequence.sl:54: (indexes - 1) ++ [size(list)]*/
_SequenceL_tmp372.delete_data(true);	
_SequenceL_tmp374.delete_data(true);	
_SequenceL_tmp374.finished();	
_SequenceL_tmp372.finished();	
_SequenceL_tmp377.setSize(_SequenceL_tmp371.size());	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
SIMD_DIRECTIVE
for (int _SequenceL__i378=1,_stop_val__SequenceL__i378=_SequenceL_tmp377.size(); _SequenceL__i378<=_stop_val__SequenceL__i378; _SequenceL__i378+=1)
{
ellipsis((*(_SequenceL_tmp371.get_ptr(_SequenceL__i378))), (*(_SequenceL_tmp376.get_ptr(_SequenceL__i378))), (*(_SequenceL_tmp377.get_ptr(_SequenceL__i378))));	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
}
_SequenceL_tmp371.delete_data(true);	
_SequenceL_tmp376.delete_data(true);	
_SequenceL_tmp376.finished();	
_SequenceL_tmp371.finished();	
SequenceL_multipleIndexes_2(_SequenceL__Arg_list, _SequenceL_tmp377, _SequenceL__resultConv);	/*Sequence.sl:54: multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
_SequenceL_tmp377.delete_data(true);	
_SequenceL_tmp377.finished();	
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
bool _SequenceL_tmp414;
char _SequenceL_tmp413;
::Sequence< char > _SequenceL_tmp416(cspace);
bool _SequenceL_tmp419;
char _SequenceL_tmp418;
::Sequence< char > _SequenceL_tmp421(cspace);

if (_SequenceL__Arg_s.onlyInstance())	
{
_SequenceL___Arg_s_tco.replaceSequence(_SequenceL__Arg_s);	
}
else
{
_SequenceL___Arg_s_tco.hard_copy(_SequenceL__Arg_s,__LINE__);	
}
trim_advent5_label_tco:	
_SequenceL_tmp413 = _SequenceL___Arg_s_tco.head();	/*advent5.sl:6: head(s)*/
SequenceL_isWhiteSpace_1(_SequenceL_tmp413, _SequenceL_tmp414);	/*advent5.sl:7: isWhiteSpace(head(s))*/
if (_SequenceL_tmp414)	/*advent5.sl:8: trim(tail(s)) when isWhiteSpace(head(s))  else trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
_SequenceL___Arg_s_tco.tail(_SequenceL_tmp416);	/*advent5.sl:6: tail(s)*/
_swap(_SequenceL___Arg_s_tco, _SequenceL_tmp416);	
goto trim_advent5_label_tco;	/*advent5.sl:6: trim(tail(s))*/
}
else
{
SequenceL_last_2(_SequenceL___Arg_s_tco, _SequenceL_tmp418);	/*advent5.sl:7: last(s)*/
SequenceL_isWhiteSpace_1(_SequenceL_tmp418, _SequenceL_tmp419);	/*advent5.sl:8: isWhiteSpace(last(s))*/
if (_SequenceL_tmp419)	/*advent5.sl:8: trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
SequenceL_allButLast_2(_SequenceL___Arg_s_tco, _SequenceL_tmp421);	/*advent5.sl:7: allButLast(s)*/
_swap(_SequenceL___Arg_s_tco, _SequenceL_tmp421);	
goto trim_advent5_label_tco;	/*advent5.sl:7: trim(allButLast(s))*/
}
else
{
_SequenceL__resultConv = _SequenceL___Arg_s_tco;	/*advent5.sl:8: s*/
}
}
_SequenceL_tmp416.delete_data(true);	
_SequenceL_tmp421.delete_data(true);	
_SequenceL_tmp421.finished();	
_SequenceL_tmp416.finished();	
}
void SequenceL_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_s, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL__delete_opttmp1(cspace);
::Sequence< ::Sequence< char > > _SequenceL_tmp425(cspace);
::Sequence< char > _SequenceL_tmp424(cspace);
::Sequence< int > _SequenceL__Arg_jumps(cspace);
::Sequence< char > _SequenceL__delete_opttmp2(cspace);

_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
SequenceL_trim_0((*(_SequenceL__Arg_s.get_ptr(1))), _SequenceL_tmp424);	/*advent5.sl:33: trim(s[1])*/
SequenceL_split_2(_SequenceL_tmp424, '\n', _SequenceL_tmp425);	/*advent5.sl:33: split(trim(s[1]), '\n')*/
_SequenceL_tmp424.delete_data(true);	
_SequenceL_tmp424.finished();	
_SequenceL__Arg_jumps.setSize(_SequenceL_tmp425.size());	/*advent5.sl:33: stringToInt(split(trim(s[1]), '\n'))*/
SIMD_DIRECTIVE
for (int _SequenceL__i426=1,_stop_val__SequenceL__i426=_SequenceL__Arg_jumps.size(); _SequenceL__i426<=_stop_val__SequenceL__i426; _SequenceL__i426+=1)
{
(*(_SequenceL_tmp425.get_ptr(_SequenceL__i426))).clone(_SequenceL__delete_opttmp2);	/*advent5.sl:33: stringToInt(split(trim(s[1]), '\n'))*/
SequenceL_stringToInt_3(_SequenceL__delete_opttmp2, (*(_SequenceL__Arg_jumps.get_ptr(_SequenceL__i426))));	/*advent5.sl:33: stringToInt(split(trim(s[1]), '\n'))*/
_SequenceL__delete_opttmp2.finished();	
}
_SequenceL_tmp425.delete_data(true);	
_SequenceL_tmp425.finished();	
_SequenceL__Arg_jumps.clone(_SequenceL__delete_opttmp1);	/*advent5.sl:35: part1(jumps, 1, 0)*/
SequenceL_part1_0(_SequenceL__delete_opttmp1, 1, 0, (*(_SequenceL__resultConv.get_ptr(1))));	/*advent5.sl:35: part1(jumps, 1, 0)*/
_SequenceL__delete_opttmp1.delete_data(true);	
_SequenceL__delete_opttmp1.finished();	
SequenceL_part2_0(_SequenceL__Arg_jumps, 1, 0, (*(_SequenceL__resultConv.get_ptr(2))));	/*advent5.sl:35: part2(jumps, 1, 0)*/
_SequenceL__Arg_jumps.delete_data(true);	
_SequenceL__Arg_jumps.finished();	
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
