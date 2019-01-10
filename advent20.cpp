#include "advent20.h"
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
ostream &operator<<(ostream &stream, const _sl_CollisionRecord_0& s)
{
return s._toString(stream);
}

bool operator==(const _sl_CollisionRecord_0&_lhs, const _sl_CollisionRecord_0&_rhs)
{
return ((_lhs.t == _rhs.t)&&(_lhs.a == _rhs.a)&&(_lhs.b == _rhs.b));
}
bool operator!=(const _sl_CollisionRecord_0&_lhs, const _sl_CollisionRecord_0&_rhs)
{
 return ((_lhs.t != _rhs.t)||(_lhs.a != _rhs.a)||(_lhs.b != _rhs.b));
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
ostream &operator<<(ostream &stream, const Token& s)
{
return s._toString(stream);
}

bool operator==(const Token&_lhs, const Token&_rhs)
{
return ((_lhs.Value == _rhs.Value)&&(_lhs.Type == _rhs.Type));
}
bool operator!=(const Token&_lhs, const Token&_rhs)
{
 return ((_lhs.Value != _rhs.Value)||(_lhs.Type != _rhs.Type));
}
}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
ostream &operator<<(ostream &stream, const Transition& s)
{
return s._toString(stream);
}

bool operator==(const Transition&_lhs, const Transition&_rhs)
{
return ((_lhs.Token == _rhs.Token)&&(_lhs.State == _rhs.State));
}
bool operator!=(const Transition&_lhs, const Transition&_rhs)
{
 return ((_lhs.Token != _rhs.Token)||(_lhs.State != _rhs.State));
}
}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
ostream &operator<<(ostream &stream, const State& s)
{
return s._toString(stream);
}

bool operator==(const State&_lhs, const State&_rhs)
{
return ((_lhs.ID == _rhs.ID)&&(_lhs.IDSet == _rhs.IDSet)&&(_lhs.Starting == _rhs.Starting)&&(_lhs.Accepting == _rhs.Accepting)&&(_lhs.Transitions == _rhs.Transitions));
}
bool operator!=(const State&_lhs, const State&_rhs)
{
 return ((_lhs.ID != _rhs.ID)||(_lhs.IDSet != _rhs.IDSet)||(_lhs.Starting != _rhs.Starting)||(_lhs.Accepting != _rhs.Accepting)||(_lhs.Transitions != _rhs.Transitions));
}
}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
ostream &operator<<(ostream &stream, const Parsing& s)
{
return s._toString(stream);
}

bool operator==(const Parsing&_lhs, const Parsing&_rhs)
{
return ((_lhs.Current == _rhs.Current)&&(_lhs.Tokens == _rhs.Tokens)&&(_lhs.States == _rhs.States)&&(_lhs.MaxID == _rhs.MaxID));
}
bool operator!=(const Parsing&_lhs, const Parsing&_rhs)
{
 return ((_lhs.Current != _rhs.Current)||(_lhs.Tokens != _rhs.Tokens)||(_lhs.States != _rhs.States)||(_lhs.MaxID != _rhs.MaxID));
}
}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
ostream &operator<<(ostream &stream, const Combined& s)
{
return s._toString(stream);
}

bool operator==(const Combined&_lhs, const Combined&_rhs)
{
return ((_lhs.Class == _rhs.Class)&&(_lhs.RemainingTokens == _rhs.RemainingTokens));
}
bool operator!=(const Combined&_lhs, const Combined&_rhs)
{
 return ((_lhs.Class != _rhs.Class)||(_lhs.RemainingTokens != _rhs.RemainingTokens));
}
}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
ostream &operator<<(ostream &stream, const Processed& s)
{
return s._toString(stream);
}

bool operator==(const Processed&_lhs, const Processed&_rhs)
{
return ((_lhs.ReturnedState == _rhs.ReturnedState)&&(_lhs.ReturnedStates == _rhs.ReturnedStates));
}
bool operator!=(const Processed&_lhs, const Processed&_rhs)
{
 return ((_lhs.ReturnedState != _rhs.ReturnedState)||(_lhs.ReturnedStates != _rhs.ReturnedStates));
}
}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
ostream &operator<<(ostream &stream, const Matched& s)
{
return s._toString(stream);
}

bool operator==(const Matched&_lhs, const Matched&_rhs)
{
return ((_lhs.Flag == _rhs.Flag)&&(_lhs.Begin == _rhs.Begin)&&(_lhs.End == _rhs.End));
}
bool operator!=(const Matched&_lhs, const Matched&_rhs)
{
 return ((_lhs.Flag != _rhs.Flag)||(_lhs.Begin != _rhs.Begin)||(_lhs.End != _rhs.End));
}
}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
ostream &operator<<(ostream &stream, const RegularExpression& s)
{
return s._toString(stream);
}

bool operator==(const RegularExpression&_lhs, const RegularExpression&_rhs)
{
return ((_lhs.RegEx == _rhs.RegEx)&&(_lhs.DFA == _rhs.DFA));
}
bool operator!=(const RegularExpression&_lhs, const RegularExpression&_rhs)
{
 return ((_lhs.RegEx != _rhs.RegEx)||(_lhs.DFA != _rhs.DFA));
}
}
}
}
namespace
{
void SequenceL_byTime_0(::_sl_CollisionRecord_0 &_SequenceL__Arg_leftCr, ::_sl_CollisionRecord_0 &_SequenceL__Arg_rightCr, int &_SequenceL__resultConv);
void SequenceL_sign_5(SL_FLOAT _SequenceL__Arg_X, int &_SequenceL__resultConv);
void SequenceL_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_s, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_trim_0(::Sequence< char > &_SequenceL__Arg_s, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL_last_4(::Sequence< char > &_SequenceL__Arg_list, char &_SequenceL__resultConv);
void SequenceL_allButLast_4(::Sequence< char > &_SequenceL__Arg_list, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL_split_4(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_delimiter, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv);
void SequenceL_extractVals_0(::Sequence< char > &_SequenceL__Arg_s, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_indexesOf_4(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_element, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_multipleIndexes_4(::Sequence< char > &_SequenceL__Arg_list, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_indexes, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv);
void SequenceL_stringToInt_6(::Sequence< char > &_SequenceL__Arg_numString, int &_SequenceL__resultConv);
void SequenceL_trimStart_2(::Sequence< char > &_SequenceL__Arg_input, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL_isWhiteSpace_2(char _SequenceL__Arg_input, bool &_SequenceL__resultConv);
void SequenceL_trimNonNumeric_6(::Sequence< char > &_SequenceL__Arg_numString, int _SequenceL__Arg_i, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL_isDigit_2(char _SequenceL__Arg_char, bool &_SequenceL__resultConv);
void SequenceL_take_4(::Sequence< char > &_SequenceL__Arg_list, int _SequenceL__Arg_n, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL_atoIWorker_6(::Sequence< char > &_SequenceL__Arg_numString, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_charToInt_6(char _SequenceL__Arg_char, int &_SequenceL__resultConv);
void SequenceL_integerPower_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv);
void SequenceL_integerPowerHelper_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int _SequenceL__Arg_val, int &_SequenceL__resultConv);
void SequenceL_getAxes_0(::Sequence< ::Sequence< int > > &_SequenceL__Arg_v, ::Sequence< ::Sequence< int > > &_SequenceL__resultConv);
void SequenceL_distinctPairs_0(int _SequenceL__Arg_n, ::Sequence< ::Sequence< int > > &_SequenceL__resultConv);
void SequenceL_duplicate_4(int _SequenceL__Arg_element, int _SequenceL__Arg_times, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_findCollisions_0(::Sequence< ::Sequence< ::Sequence< SL_FLOAT > > > &_SequenceL__Arg_axes, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_pairs, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL_firstCollision_0(::Sequence< ::Sequence< ::Sequence< SL_FLOAT > > > &_SequenceL__Arg_pair, ::Sequence< int > &_SequenceL__Arg_points, int _SequenceL__ex_iter, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL_newton_0(::Sequence< SL_FLOAT > &_SequenceL__Arg_a, ::Sequence< SL_FLOAT > &_SequenceL__resultConv);
void SequenceL_linear_0(::Sequence< SL_FLOAT > &_SequenceL__Arg_a, ::Sequence< SL_FLOAT > &_SequenceL__resultConv);
void SequenceL_stationary_0(SL_FLOAT _SequenceL__Arg_p, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_collateDimensions_0(::Sequence< SL_FLOAT > &_SequenceL__Arg_a, ::Sequence< SL_FLOAT > &_SequenceL__Arg_b, ::Sequence< SL_FLOAT > &_SequenceL__resultConv);
void SequenceL_isAllRecord_0(::Sequence< SL_FLOAT > &_SequenceL__Arg_a, bool &_SequenceL__resultConv);
void SequenceL_intersection_3(::Sequence< SL_FLOAT > &_SequenceL__Arg_setA, ::Sequence< SL_FLOAT > &_SequenceL__Arg_setB, ::Sequence< SL_FLOAT > &_SequenceL__resultConv);
void SequenceL_elementOf_3(SL_FLOAT _SequenceL__Arg_element, ::Sequence< SL_FLOAT > &_SequenceL__Arg_list, bool &_SequenceL__resultConv);
void SequenceL_firstNonNegativeTime_0(::Sequence< SL_FLOAT > &_SequenceL__Arg_f, SL_FLOAT &_SequenceL__resultConv);
void SequenceL_sortBy_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL_quickSortSmartBy_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_n, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL_quickSortInPlace_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_threshold, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL_filtermin_4(::_sl_CollisionRecord_0 &_SequenceL__Arg_p, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_s, _sl_fun_pointer* _SequenceL__Arg_func, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL_filtermax_4(::_sl_CollisionRecord_0 &_SequenceL__Arg_p, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_s, _sl_fun_pointer* _SequenceL__Arg_func, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL_quickSortInPlaceHelper_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_first, int _SequenceL__Arg_last, int _SequenceL__Arg_threshold, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL_insertionSortByHelper_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_first, int _SequenceL__Arg_last, int _SequenceL__Arg_i, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL_doSwaps_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, ::_sl_CollisionRecord_0 &_SequenceL__Arg_pivot, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_left, int _SequenceL__Arg_right, SL::Utilities::Sequence::SWAP_RETURN< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL_insertionByWork_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, ::_sl_CollisionRecord_0 &_SequenceL__Arg_val, int _SequenceL__Arg_first, int _SequenceL__Arg_j, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL_getLeft_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, ::_sl_CollisionRecord_0 &_SequenceL__Arg_pivot, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_left, int &_SequenceL__resultConv);
void SequenceL_getRight_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, ::_sl_CollisionRecord_0 &_SequenceL__Arg_pivot, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_right, int &_SequenceL__resultConv);
void SequenceL_swap_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, int _SequenceL__Arg_i, int _SequenceL__Arg_j, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL_swapHelper_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, int _SequenceL__Arg_i, int _SequenceL__Arg_j, ::_sl_CollisionRecord_0 &_SequenceL__Arg_vali, ::_sl_CollisionRecord_0 &_SequenceL__Arg_valj, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL_setElementAt_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, int _SequenceL__Arg_location, ::_sl_CollisionRecord_0 &_SequenceL__Arg_newElement, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL_doCollisions_0(::Sequence< int > &_SequenceL__Arg_remainingPoints, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_collisions, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_getFirstCoincidents_0(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_cr, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL_getColliding_0(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_coincident, ::Sequence< int > &_SequenceL__Arg_remaining, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_drop_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, int _SequenceL__Arg_n, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL_intersection_3(::Sequence< int > &_SequenceL__Arg_setA, ::Sequence< int > &_SequenceL__Arg_setB, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_elementOf_3(int _SequenceL__Arg_element, ::Sequence< int > &_SequenceL__Arg_list, bool &_SequenceL__resultConv);
void SequenceL_union_3(::Sequence< int > &_SequenceL__Arg_X, ::Sequence< int > &_SequenceL__Arg_Y, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL__parallel_byTime_0(::_sl_CollisionRecord_0 &_SequenceL__Arg_leftCr, ::_sl_CollisionRecord_0 &_SequenceL__Arg_rightCr, int &_SequenceL__resultConv);
void SequenceL__parallel_sign_5(SL_FLOAT _SequenceL__Arg_X, int &_SequenceL__resultConv);
void SequenceL__parallel_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_s, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt1_: public NTObj
{
	private:
		::Sequence< ::Sequence< char > > &_SequenceL__Arg_points;
		::Sequence< char > &_SequenceL_tmp1047;
		 ::Sequence< ::Sequence< ::Sequence< char > > > &_SequenceL__result2;
		 ::Sequence< ::Sequence< ::Sequence< int > > > &_SequenceL__result3;
		 ::Sequence< ::Sequence< ::Sequence< int > > > &_SequenceL__result4;

	public:
		SequenceL__sl_main_nt1_(::Sequence< ::Sequence< char > > &_inp1, ::Sequence< char > &_inp2, ::Sequence< ::Sequence< ::Sequence< char > > > &_out1, ::Sequence< ::Sequence< ::Sequence< int > > > &_out2, ::Sequence< ::Sequence< ::Sequence< int > > > &_out3): NTObj(__LINE__,false), _SequenceL__Arg_points(_inp1), _SequenceL_tmp1047(_inp2), _SequenceL__result2(_out1), _SequenceL__result3(_out2), _SequenceL__result4(_out3)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_trim_0(::Sequence< char > &_SequenceL__Arg_s, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_last_4(::Sequence< char > &_SequenceL__Arg_list, char &_SequenceL__resultConv);
void SequenceL__parallel_allButLast_4(::Sequence< char > &_SequenceL__Arg_list, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_split_4(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_delimiter, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv);
class SequenceL__sl_main_nt9_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL_tmp993;
		::Sequence< int > &_SequenceL_tmp998;
		 ::Sequence< ::Sequence< int > > &_SequenceL__result10;

	public:
		SequenceL__sl_main_nt9_(::Sequence< int > &_inp1, ::Sequence< int > &_inp2, ::Sequence< ::Sequence< int > > &_out1): NTObj(__LINE__,false), _SequenceL_tmp993(_inp1), _SequenceL_tmp998(_inp2), _SequenceL__result10(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt7_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_indexes;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result8;

	public:
		SequenceL__sl_main_nt7_(::Sequence< int > &_inp1, int _inp2, int _inp3, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_indexes(_inp1), _SequenceL__start(_inp2), _SequenceL__stop(_inp3), _SequenceL__result8(_out1)
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
void SequenceL__parallel_extractVals_0(::Sequence< char > &_SequenceL__Arg_s, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt11_: public NTObj
{
	private:
		::Sequence< ::Sequence< char > > &_SequenceL_tmp984;
		 ::Sequence< int > &_SequenceL__result12;

	public:
		SequenceL__sl_main_nt11_(::Sequence< ::Sequence< char > > &_inp1, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL_tmp984(_inp1), _SequenceL__result12(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_indexesOf_4(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_element, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt13_: public NTObj
{
	private:
		::Sequence< char > &_SequenceL__Arg_list;
		char _SequenceL__Arg_element;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result14;

	public:
		SequenceL__sl_main_nt13_(::Sequence< char > &_inp1, char _inp2, int _inp3, int _inp4, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_list(_inp1), _SequenceL__Arg_element(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result14(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_multipleIndexes_4(::Sequence< char > &_SequenceL__Arg_list, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_indexes, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv);
class SequenceL__sl_main_nt15_: public NTObj
{
	private:
		::Sequence< ::Sequence< int > > &_SequenceL__Arg_indexes;
		::Sequence< char > &_SequenceL__Arg_list;
		 ::Sequence< ::Sequence< char > > &_SequenceL__result16;

	public:
		SequenceL__sl_main_nt15_(::Sequence< ::Sequence< int > > &_inp1, ::Sequence< char > &_inp2, ::Sequence< ::Sequence< char > > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_indexes(_inp1), _SequenceL__Arg_list(_inp2), _SequenceL__result16(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_stringToInt_6(::Sequence< char > &_SequenceL__Arg_numString, int &_SequenceL__resultConv);
void SequenceL__parallel_trimStart_2(::Sequence< char > &_SequenceL__Arg_input, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_isWhiteSpace_2(char _SequenceL__Arg_input, bool &_SequenceL__resultConv);
void SequenceL__parallel_trimNonNumeric_6(::Sequence< char > &_SequenceL__Arg_numString, int _SequenceL__Arg_i, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_isDigit_2(char _SequenceL__Arg_char, bool &_SequenceL__resultConv);
void SequenceL__parallel_take_4(::Sequence< char > &_SequenceL__Arg_list, int _SequenceL__Arg_n, ::Sequence< char > &_SequenceL__resultConv);
void SequenceL__parallel_atoIWorker_6(::Sequence< char > &_SequenceL__Arg_numString, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt17_: public NTObj
{
	private:
		::Sequence< char > &_SequenceL__Arg_numString;
		 ::Sequence< int > &_SequenceL__result18;

	public:
		SequenceL__sl_main_nt17_(::Sequence< char > &_inp1, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_numString(_inp1), _SequenceL__result18(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_charToInt_6(char _SequenceL__Arg_char, int &_SequenceL__resultConv);
void SequenceL__parallel_integerPower_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv);
void SequenceL__parallel_integerPowerHelper_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int _SequenceL__Arg_val, int &_SequenceL__resultConv);
void SequenceL__parallel_getAxes_0(::Sequence< ::Sequence< int > > &_SequenceL__Arg_v, ::Sequence< ::Sequence< int > > &_SequenceL__resultConv);
class SequenceL__sl_main_nt19_: public NTObj
{
	private:
		::Sequence< ::Sequence< int > > &_SequenceL__Arg_v;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result20;
		 ::Sequence< int > &_SequenceL__result21;
		 ::Sequence< int > &_SequenceL__result22;

	public:
		SequenceL__sl_main_nt19_(::Sequence< ::Sequence< int > > &_inp1, int _inp2, int _inp3, ::Sequence< int > &_out1, ::Sequence< int > &_out2, ::Sequence< int > &_out3): NTObj(__LINE__,false), _SequenceL__Arg_v(_inp1), _SequenceL__start(_inp2), _SequenceL__stop(_inp3), _SequenceL__result20(_out1), _SequenceL__result21(_out2), _SequenceL__result22(_out3)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_distinctPairs_0(int _SequenceL__Arg_n, ::Sequence< ::Sequence< int > > &_SequenceL__resultConv);
void SequenceL__parallel_duplicate_4(int _SequenceL__Arg_element, int _SequenceL__Arg_times, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt23_: public NTObj
{
	private:
		int _SequenceL__Arg_element;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result24;

	public:
		SequenceL__sl_main_nt23_(int _inp1, int _inp2, int _inp3, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_element(_inp1), _SequenceL__start(_inp2), _SequenceL__stop(_inp3), _SequenceL__result24(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_findCollisions_0(::Sequence< ::Sequence< ::Sequence< SL_FLOAT > > > &_SequenceL__Arg_axes, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_pairs, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
class SequenceL__sl_main_nt25_: public NTObj
{
	private:
		::Sequence< ::Sequence< int > > &_SequenceL__Arg_pairs;
		::Sequence< ::Sequence< ::Sequence< SL_FLOAT > > > &_SequenceL__Arg_axes;
		 ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__result26;

	public:
		SequenceL__sl_main_nt25_(::Sequence< ::Sequence< int > > &_inp1, ::Sequence< ::Sequence< ::Sequence< SL_FLOAT > > > &_inp2, ::Sequence< ::_sl_CollisionRecord_0 > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_pairs(_inp1), _SequenceL__Arg_axes(_inp2), _SequenceL__result26(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_firstCollision_0(::Sequence< ::Sequence< ::Sequence< SL_FLOAT > > > &_SequenceL__Arg_pair, ::Sequence< int > &_SequenceL__Arg_points, int _SequenceL__ex_iter, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
class SequenceL__sl_main_nt27_: public NTObj
{
	private:
		::Sequence< ::Sequence< ::Sequence< SL_FLOAT > > > &_SequenceL__Arg_pair;
		 ::Sequence< ::Sequence< SL_FLOAT > > &_SequenceL__result28;
		 ::Sequence< ::Sequence< SL_FLOAT > > &_SequenceL__result29;

	public:
		SequenceL__sl_main_nt27_(::Sequence< ::Sequence< ::Sequence< SL_FLOAT > > > &_inp1, ::Sequence< ::Sequence< SL_FLOAT > > &_out1, ::Sequence< ::Sequence< SL_FLOAT > > &_out2): NTObj(__LINE__,false), _SequenceL__Arg_pair(_inp1), _SequenceL__result28(_out1), _SequenceL__result29(_out2)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_newton_0(::Sequence< SL_FLOAT > &_SequenceL__Arg_a, ::Sequence< SL_FLOAT > &_SequenceL__resultConv);
class SequenceL__sl_main_nt30_: public NTObj
{
	private:
		::Sequence< SL_FLOAT > &_SequenceL__Arg_a;
		::Sequence< int > &_SequenceL_tmp608;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< SL_FLOAT > &_SequenceL__result31;

	public:
		SequenceL__sl_main_nt30_(::Sequence< SL_FLOAT > &_inp1, ::Sequence< int > &_inp2, int _inp3, int _inp4, ::Sequence< SL_FLOAT > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_a(_inp1), _SequenceL_tmp608(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result31(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_linear_0(::Sequence< SL_FLOAT > &_SequenceL__Arg_a, ::Sequence< SL_FLOAT > &_SequenceL__resultConv);
void SequenceL__parallel_stationary_0(SL_FLOAT _SequenceL__Arg_p, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL__parallel_collateDimensions_0(::Sequence< SL_FLOAT > &_SequenceL__Arg_a, ::Sequence< SL_FLOAT > &_SequenceL__Arg_b, ::Sequence< SL_FLOAT > &_SequenceL__resultConv);
void SequenceL__parallel_isAllRecord_0(::Sequence< SL_FLOAT > &_SequenceL__Arg_a, bool &_SequenceL__resultConv);
void SequenceL__parallel_intersection_3(::Sequence< SL_FLOAT > &_SequenceL__Arg_setA, ::Sequence< SL_FLOAT > &_SequenceL__Arg_setB, ::Sequence< SL_FLOAT > &_SequenceL__resultConv);
class SequenceL__sl_main_nt32_: public NTObj
{
	private:
		::Sequence< SL_FLOAT > &_SequenceL__Arg_newSetA;
		::Sequence< SL_FLOAT > &_SequenceL__Arg_setB;
		 ::Sequence< SL_FLOAT > &_SequenceL__result33;

	public:
		SequenceL__sl_main_nt32_(::Sequence< SL_FLOAT > &_inp1, ::Sequence< SL_FLOAT > &_inp2, ::Sequence< SL_FLOAT > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_newSetA(_inp1), _SequenceL__Arg_setB(_inp2), _SequenceL__result33(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_elementOf_3(SL_FLOAT _SequenceL__Arg_element, ::Sequence< SL_FLOAT > &_SequenceL__Arg_list, bool &_SequenceL__resultConv);
class SequenceL__sl_main_nt34_: public NTObj
{
	private:
		SL_FLOAT _SequenceL__Arg_element;
		::Sequence< SL_FLOAT > &_SequenceL__Arg_list;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< bool > &_SequenceL__result35;

	public:
		SequenceL__sl_main_nt34_(SL_FLOAT _inp1, ::Sequence< SL_FLOAT > &_inp2, int _inp3, int _inp4, ::Sequence< bool > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_element(_inp1), _SequenceL__Arg_list(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result35(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_firstNonNegativeTime_0(::Sequence< SL_FLOAT > &_SequenceL__Arg_f, SL_FLOAT &_SequenceL__resultConv);
void SequenceL__parallel_sortBy_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
int _SequenceL_PAR_QSORT_DEPTH_4;
void SequenceL__parallel_quickSortSmartBy_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_n, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
int _SequenceL_INPLACE_QSORT_SIZE_4;
int _SequenceL_INSERT_SORT_SIZE_4;
void SequenceL__parallel_quickSortInPlace_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_threshold, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL__parallel_filtermin_4(::_sl_CollisionRecord_0 &_SequenceL__Arg_p, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_s, _sl_fun_pointer* _SequenceL__Arg_func, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
class SequenceL__sl_main_nt36_: public NTObj
{
	private:
		_sl_fun_pointer* _SequenceL__Arg_func;
		::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_s;
		::_sl_CollisionRecord_0 &_SequenceL__Arg_p;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__result37;

	public:
		SequenceL__sl_main_nt36_(_sl_fun_pointer* _inp1, ::Sequence< ::_sl_CollisionRecord_0 > &_inp2, ::_sl_CollisionRecord_0 &_inp3, int _inp4, int _inp5, ::Sequence< ::_sl_CollisionRecord_0 > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_func(_inp1), _SequenceL__Arg_s(_inp2), _SequenceL__Arg_p(_inp3), _SequenceL__start(_inp4), _SequenceL__stop(_inp5), _SequenceL__result37(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_filtermax_4(::_sl_CollisionRecord_0 &_SequenceL__Arg_p, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_s, _sl_fun_pointer* _SequenceL__Arg_func, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
class SequenceL__sl_main_nt38_: public NTObj
{
	private:
		_sl_fun_pointer* _SequenceL__Arg_func;
		::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_s;
		::_sl_CollisionRecord_0 &_SequenceL__Arg_p;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__result39;

	public:
		SequenceL__sl_main_nt38_(_sl_fun_pointer* _inp1, ::Sequence< ::_sl_CollisionRecord_0 > &_inp2, ::_sl_CollisionRecord_0 &_inp3, int _inp4, int _inp5, ::Sequence< ::_sl_CollisionRecord_0 > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_func(_inp1), _SequenceL__Arg_s(_inp2), _SequenceL__Arg_p(_inp3), _SequenceL__start(_inp4), _SequenceL__stop(_inp5), _SequenceL__result39(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_quickSortInPlaceHelper_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_first, int _SequenceL__Arg_last, int _SequenceL__Arg_threshold, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL__parallel_insertionSortByHelper_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_first, int _SequenceL__Arg_last, int _SequenceL__Arg_i, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL__parallel_doSwaps_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, ::_sl_CollisionRecord_0 &_SequenceL__Arg_pivot, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_left, int _SequenceL__Arg_right, SL::Utilities::Sequence::SWAP_RETURN< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL__parallel_insertionByWork_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, ::_sl_CollisionRecord_0 &_SequenceL__Arg_val, int _SequenceL__Arg_first, int _SequenceL__Arg_j, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL__parallel_getLeft_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, ::_sl_CollisionRecord_0 &_SequenceL__Arg_pivot, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_left, int &_SequenceL__resultConv);
void SequenceL__parallel_getRight_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, ::_sl_CollisionRecord_0 &_SequenceL__Arg_pivot, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_right, int &_SequenceL__resultConv);
void SequenceL__parallel_swap_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, int _SequenceL__Arg_i, int _SequenceL__Arg_j, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL__parallel_swapHelper_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, int _SequenceL__Arg_i, int _SequenceL__Arg_j, ::_sl_CollisionRecord_0 &_SequenceL__Arg_vali, ::_sl_CollisionRecord_0 &_SequenceL__Arg_valj, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL__parallel_setElementAt_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, int _SequenceL__Arg_location, ::_sl_CollisionRecord_0 &_SequenceL__Arg_newElement, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
class SequenceL__sl_main_nt40_: public NTObj
{
	private:
		int _SequenceL__Arg_location;
		::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list;
		::_sl_CollisionRecord_0 &_SequenceL__Arg_newElement;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__result41;

	public:
		SequenceL__sl_main_nt40_(int _inp1, ::Sequence< ::_sl_CollisionRecord_0 > &_inp2, ::_sl_CollisionRecord_0 &_inp3, int _inp4, int _inp5, ::Sequence< ::_sl_CollisionRecord_0 > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_location(_inp1), _SequenceL__Arg_list(_inp2), _SequenceL__Arg_newElement(_inp3), _SequenceL__start(_inp4), _SequenceL__stop(_inp5), _SequenceL__result41(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_doCollisions_0(::Sequence< int > &_SequenceL__Arg_remainingPoints, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_collisions, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL__parallel_getFirstCoincidents_0(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_cr, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL__parallel_getColliding_0(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_coincident, ::Sequence< int > &_SequenceL__Arg_remaining, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL__parallel_drop_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, int _SequenceL__Arg_n, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL__parallel_intersection_3(::Sequence< int > &_SequenceL__Arg_setA, ::Sequence< int > &_SequenceL__Arg_setB, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt42_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_newSetA;
		::Sequence< int > &_SequenceL__Arg_setB;
		 ::Sequence< int > &_SequenceL__result43;

	public:
		SequenceL__sl_main_nt42_(::Sequence< int > &_inp1, ::Sequence< int > &_inp2, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_newSetA(_inp1), _SequenceL__Arg_setB(_inp2), _SequenceL__result43(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_elementOf_3(int _SequenceL__Arg_element, ::Sequence< int > &_SequenceL__Arg_list, bool &_SequenceL__resultConv);
class SequenceL__sl_main_nt44_: public NTObj
{
	private:
		int _SequenceL__Arg_element;
		::Sequence< int > &_SequenceL__Arg_list;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< bool > &_SequenceL__result45;

	public:
		SequenceL__sl_main_nt44_(int _inp1, ::Sequence< int > &_inp2, int _inp3, int _inp4, ::Sequence< bool > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_element(_inp1), _SequenceL__Arg_list(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result45(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_union_3(::Sequence< int > &_SequenceL__Arg_X, ::Sequence< int > &_SequenceL__Arg_Y, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_trim_c_0: public task
{
	private:
		 ::Sequence< char > &_SequenceL__Arg_s;
		 ::Sequence< char > &_SequenceL__resultConv;
::Sequence< char > _SequenceL___Arg_s_tco;
bool _SequenceL_tmp1036;
char _SequenceL_tmp1035;
::Sequence< char > _SequenceL_tmp1038;
bool _SequenceL_tmp1041;
char _SequenceL_tmp1040;
::Sequence< char > _SequenceL_tmp1043;

	public:
		SequenceL__sl_main_trim_c_0(::Sequence< char > &_inp1, ::Sequence< char > &_out1): _SequenceL__Arg_s(_inp1), _SequenceL__resultConv(_out1), _SequenceL___Arg_s_tco(cspace), _SequenceL_tmp1038(cspace), _SequenceL_tmp1043(cspace)
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
::Sequence< ::Sequence< int > > _SequenceL_tmp658;
int _SequenceL_tmp660;
::Sequence< ::Sequence< int > > _SequenceL_tmp667;
int _SequenceL_tmp666;

	public:
		SequenceL__sl_main_distinctPairs_i_0(int _inp1, ::Sequence< ::Sequence< int > > &_out1): _SequenceL__Arg_n(_inp1), _SequenceL__resultConv(_out1), _SequenceL__Arg_npairs(cspace), _SequenceL_tmp658(cspace), _SequenceL_tmp667(cspace)
		{
		}
		task *execute();

};
class SequenceL__sl_main_quickSortSmartByCollisionRecord_z_i_4: public task
{
	private:
		 ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x;
		_sl_fun_pointer* _SequenceL__Arg_compFunc;
		int _SequenceL__Arg_n;
		 ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv;
int _SequenceL_tmp430;
::_sl_CollisionRecord_0 _SequenceL__Arg_pivot;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp437;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp440;

	public:
		SequenceL__sl_main_quickSortSmartByCollisionRecord_z_i_4(::Sequence< ::_sl_CollisionRecord_0 > &_inp1, _sl_fun_pointer* _inp2, int _inp3, ::Sequence< ::_sl_CollisionRecord_0 > &_out1): _SequenceL__Arg_x(_inp1), _SequenceL__Arg_compFunc(_inp2), _SequenceL__Arg_n(_inp3), _SequenceL__resultConv(_out1), _SequenceL__Arg_pivot(cspace), _SequenceL_tmp437(cspace), _SequenceL_tmp440(cspace)
		{
		}
		task *execute();

};
class SequenceL__sl_main_csp59_: public task
{
	private:
		 ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x;
		 ::_sl_CollisionRecord_0 &_SequenceL__Arg_pivot;
		_sl_fun_pointer* _SequenceL__Arg_compFunc;
		int _SequenceL__Arg_n;
		 ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL_tmp437;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp434;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__Arg_lower;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp432;
int _SequenceL_tmp433;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp435;

	public:
		SequenceL__sl_main_csp59_(::Sequence< ::_sl_CollisionRecord_0 > &_inp1, ::_sl_CollisionRecord_0 &_inp2, _sl_fun_pointer* _inp3, int _inp4, ::Sequence< ::_sl_CollisionRecord_0 > &_out1): _SequenceL__Arg_x(_inp1), _SequenceL__Arg_pivot(_inp2), _SequenceL__Arg_compFunc(_inp3), _SequenceL__Arg_n(_inp4), _SequenceL_tmp437(_out1), _SequenceL_tmp434(cspace), _SequenceL__Arg_lower(cspace), _SequenceL_tmp432(cspace), _SequenceL_tmp435(cspace)
		{
		}
		task *execute();

};
class SequenceL__sl_main_csp60_: public task
{
	private:
		 ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x;
		 ::_sl_CollisionRecord_0 &_SequenceL__Arg_pivot;
		_sl_fun_pointer* _SequenceL__Arg_compFunc;
		int _SequenceL__Arg_n;
		 ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL_tmp440;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__Arg_upper;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp438;
int _SequenceL_tmp439;

	public:
		SequenceL__sl_main_csp60_(::Sequence< ::_sl_CollisionRecord_0 > &_inp1, ::_sl_CollisionRecord_0 &_inp2, _sl_fun_pointer* _inp3, int _inp4, ::Sequence< ::_sl_CollisionRecord_0 > &_out1): _SequenceL__Arg_x(_inp1), _SequenceL__Arg_pivot(_inp2), _SequenceL__Arg_compFunc(_inp3), _SequenceL__Arg_n(_inp4), _SequenceL_tmp440(_out1), _SequenceL__Arg_upper(cspace), _SequenceL_tmp438(cspace)
		{
		}
		task *execute();

};
class SequenceL__sl_main_doCollisions_iCollisionRecord_0: public task
{
	private:
		 ::Sequence< int > &_SequenceL__Arg_remainingPoints;
		 ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_collisions;
		 ::Sequence< int > &_SequenceL__resultConv;
::Sequence< int > _SequenceL___Arg_remainingPoints_tco;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL___Arg_collisions_tco;
::Sequence< int > _SequenceL__Arg_newRemaining;
::Sequence< int > _SequenceL__Arg_colliding;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__delete_opttmp1;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__Arg_coincident;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__delete_opttmp3;
::Sequence< int > _SequenceL__delete_opttmp2;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp141;

	public:
		SequenceL__sl_main_doCollisions_iCollisionRecord_0(::Sequence< int > &_inp1, ::Sequence< ::_sl_CollisionRecord_0 > &_inp2, ::Sequence< int > &_out1): _SequenceL__Arg_remainingPoints(_inp1), _SequenceL__Arg_collisions(_inp2), _SequenceL__resultConv(_out1), _SequenceL___Arg_remainingPoints_tco(cspace), _SequenceL___Arg_collisions_tco(cspace), _SequenceL__Arg_newRemaining(cspace), _SequenceL__Arg_colliding(cspace), _SequenceL__delete_opttmp1(cspace), _SequenceL__Arg_coincident(cspace), _SequenceL__delete_opttmp3(cspace), _SequenceL__delete_opttmp2(cspace), _SequenceL_tmp141(cspace)
		{
		}
		task *execute();

};

_sl_fun_pointer _PointerSequenceL_byTime_0[1] = { (_sl_fun_pointer)((void (*)(::_sl_CollisionRecord_0&,::_sl_CollisionRecord_0&,int&))SequenceL_byTime_0)};

void _SequenceL_init_sl_main_globals()
{
{

_SequenceL_PAR_QSORT_DEPTH_4 = 8;	/*Sequence.sl:205: 8*/
}
{

_SequenceL_INPLACE_QSORT_SIZE_4 = 1024;	/*Sequence.sl:206: 1024*/
}
{

_SequenceL_INSERT_SORT_SIZE_4 = 128;	/*Sequence.sl:207: 128*/
}

}

void _SequenceL_delete_sl_main_globals()
{

}

#ifdef _WIN32
::Sequence< ::Sequence< char > > _sl_vc10_advent20_dummy_1(cspace);
::Sequence< int > _sl_vc10_advent20_dummy_2(cspace);
::Sequence< ::Sequence< ::Sequence< int > > > _sl_vc10_advent20_dummy_3(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _sl_vc10_advent20_dummy_4(cspace);
::Sequence< ::Sequence< ::Sequence< char > > > _sl_vc10_advent20_dummy_5(cspace);
::Sequence< char > _sl_vc10_advent20_dummy_6(cspace);
::Sequence< ::Sequence< int > > _sl_vc10_advent20_dummy_7(cspace);
::Sequence< ::Sequence< ::Sequence< SL_FLOAT > > > _sl_vc10_advent20_dummy_8(cspace);
::Sequence< Empty > _sl_vc10_advent20_dummy_9(cspace);
::Sequence< SL_FLOAT > _sl_vc10_advent20_dummy_10(cspace);
::Sequence< ::Sequence< SL_FLOAT > > _sl_vc10_advent20_dummy_11(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _sl_vc10_advent20_dummy_12(cspace);
::Sequence< bool > _sl_vc10_advent20_dummy_13(cspace);
#endif

task *SequenceL__sl_main_doCollisions_iCollisionRecord_0::execute()
{
if (_SequenceL__Arg_remainingPoints.onlyInstance())	
{
_SequenceL___Arg_remainingPoints_tco.replaceSequence(_SequenceL__Arg_remainingPoints);	
_SequenceL__Arg_remainingPoints.delete_data(true);	
}
else
{
_SequenceL___Arg_remainingPoints_tco.hard_copy(_SequenceL__Arg_remainingPoints,__LINE__);	
_SequenceL__Arg_remainingPoints.delete_data(true);	
}
if (_SequenceL__Arg_collisions.onlyInstance())	
{
_SequenceL___Arg_collisions_tco.replaceSequence(_SequenceL__Arg_collisions);	
_SequenceL__Arg_collisions.delete_data(true);	
}
else
{
_SequenceL___Arg_collisions_tco.hard_copy(_SequenceL__Arg_collisions,__LINE__);	
_SequenceL__Arg_collisions.delete_data(true);	
}
_sl_main_doCollisions_iCollisionRecord_advent20working_label_tco:	
if ((_SequenceL___Arg_collisions_tco.size() == 0))	/*advent20_working.sl:96: remainingPoints when size(collisions) = 0  else doCollisions(newRemaining, drop(collisions, size(coincident)))*/
{
_SequenceL__resultConv = _SequenceL___Arg_remainingPoints_tco;	/*advent20_working.sl:95: remainingPoints*/
}
else
{
_SequenceL___Arg_collisions_tco.clone(_SequenceL__delete_opttmp3);	/*advent20_working.sl:92: getFirstCoincidents(collisions)*/
SequenceL_getFirstCoincidents_0(_SequenceL__delete_opttmp3, _SequenceL__Arg_coincident);	/*advent20_working.sl:92: getFirstCoincidents(collisions)*/
_SequenceL__delete_opttmp3.finished();	
_SequenceL__Arg_coincident.deFrag();	
_SequenceL__Arg_coincident.clone(_SequenceL__delete_opttmp1);	/*advent20_working.sl:93: getColliding(coincident, remainingPoints)*/
_SequenceL___Arg_remainingPoints_tco.clone(_SequenceL__delete_opttmp2);	/*advent20_working.sl:93: getColliding(coincident, remainingPoints)*/
SequenceL_getColliding_0(_SequenceL__delete_opttmp1, _SequenceL__delete_opttmp2, _SequenceL__Arg_colliding);	/*advent20_working.sl:93: getColliding(coincident, remainingPoints)*/
_SequenceL__delete_opttmp2.finished();	
_SequenceL__delete_opttmp1.finished();	
takeaway(_SequenceL___Arg_remainingPoints_tco, _SequenceL__Arg_colliding, _SequenceL__Arg_newRemaining);	/*advent20_working.sl:94: takeAway(remainingPoints, colliding)*/
SequenceL_drop_4(_SequenceL___Arg_collisions_tco, _SequenceL__Arg_coincident.size(), _SequenceL_tmp141);	/*advent20_working.sl:96: drop(collisions, size(coincident))*/
_swap(_SequenceL___Arg_remainingPoints_tco, _SequenceL__Arg_newRemaining);	
_swap(_SequenceL___Arg_collisions_tco, _SequenceL_tmp141);	
goto _sl_main_doCollisions_iCollisionRecord_advent20working_label_tco;	/*advent20_working.sl:96: doCollisions(newRemaining, drop(collisions, size(coincident)))*/
}
_SequenceL__Arg_newRemaining.delete_data(true);	
_SequenceL__Arg_colliding.delete_data(true);	
_SequenceL__delete_opttmp1.delete_data(true);	
_SequenceL__Arg_coincident.delete_data(true);	
_SequenceL__delete_opttmp3.delete_data(true);	
_SequenceL__delete_opttmp2.delete_data(true);	
_SequenceL_tmp141.delete_data(true);	
_SequenceL_tmp141.finished();	
_SequenceL__delete_opttmp2.finished();	
_SequenceL__delete_opttmp3.finished();	
_SequenceL__Arg_coincident.finished();	
_SequenceL__delete_opttmp1.finished();	
_SequenceL__Arg_colliding.finished();	
_SequenceL__Arg_newRemaining.finished();	
return NULL;
}
task *SequenceL__sl_main_csp60_::execute()
{
_SequenceL__Arg_x.tail(_SequenceL_tmp438);	/*Sequence.sl:220: tail(x)*/
_SequenceL__Arg_x.delete_data(true);	
SequenceL_filtermax_4(_SequenceL__Arg_pivot, _SequenceL_tmp438, _SequenceL__Arg_compFunc, _SequenceL__Arg_upper);	/*Sequence.sl:220: filtermax(pivot, tail(x), compFunc)*/
_SequenceL__Arg_pivot._delete_data(true);	
_SequenceL_tmp438.delete_data(true);	
_SequenceL_tmp438.finished();	
_SequenceL_tmp439 = (_SequenceL__Arg_n - 1);	/*Sequence.sl:227: n-1*/
set_ref_count(2);
spawn_and_wait_for_all(*new(allocate_child()) SequenceL__sl_main_quickSortSmartByCollisionRecord_z_i_4(_SequenceL__Arg_upper, _SequenceL__Arg_compFunc, _SequenceL_tmp439, _SequenceL_tmp440));
_SequenceL__Arg_upper.finished();	
return NULL;
}
task *SequenceL__sl_main_csp59_::execute()
{
_SequenceL__Arg_x.tail(_SequenceL_tmp432);	/*Sequence.sl:219: tail(x)*/
_SequenceL__Arg_x.delete_data(true);	
SequenceL_filtermin_4(_SequenceL__Arg_pivot, _SequenceL_tmp432, _SequenceL__Arg_compFunc, _SequenceL__Arg_lower);	/*Sequence.sl:219: filtermin(pivot, tail(x), compFunc)*/
_SequenceL_tmp432.delete_data(true);	
_SequenceL_tmp432.finished();	
_SequenceL_tmp433 = (_SequenceL__Arg_n - 1);	/*Sequence.sl:227: n-1*/
set_ref_count(2);
spawn_and_wait_for_all(*new(allocate_child()) SequenceL__sl_main_quickSortSmartByCollisionRecord_z_i_4(_SequenceL__Arg_lower, _SequenceL__Arg_compFunc, _SequenceL_tmp433, _SequenceL_tmp434));
_SequenceL__Arg_lower.finished();	
_SequenceL_tmp435.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp435.get_ptr(1))) = _SequenceL__Arg_pivot;	/*Sequence.sl:227: pivot*/
_SequenceL__Arg_pivot._delete_data(true);	
append(_SequenceL_tmp434, _SequenceL_tmp435, _SequenceL_tmp437);	/*Sequence.sl:227: quickSortSmartBy(lower, compFunc, n-1) ++ [pivot]*/
_SequenceL_tmp434.delete_data(true);	
_SequenceL_tmp435.delete_data(true);	
_SequenceL_tmp435.finished();	
_SequenceL_tmp434.finished();	
return NULL;
}
task *SequenceL__sl_main_quickSortSmartByCollisionRecord_z_i_4::execute()
{
if ((_SequenceL__Arg_x.size() <= 1))	/*Sequence.sl:227: x when size(x) <= 1		else			quickSortInPlace(x, compFunc, INSERT_SORT_SIZE)   				when n <= 0 or size(x) <= INPLACE_QSORT_SIZE		else			quickSortSmartBy(lower, compFunc, n-1) ++ [pivot] ++ quickSortSmartBy(upper, compFunc, n-1)*/
{
_SequenceL__resultConv = _SequenceL__Arg_x;	/*Sequence.sl:222: x*/
_SequenceL__Arg_x.delete_data(true);	
}
else
{
if (((_SequenceL__Arg_n <= 0) || (_SequenceL__Arg_x.size() <= _SequenceL_INPLACE_QSORT_SIZE_4)))	/*Sequence.sl:227: quickSortInPlace(x, compFunc, INSERT_SORT_SIZE)   				when n <= 0 or size(x) <= INPLACE_QSORT_SIZE		else			quickSortSmartBy(lower, compFunc, n-1) ++ [pivot] ++ quickSortSmartBy(upper, compFunc, n-1)*/
{
_SequenceL_tmp430 = _SequenceL_INSERT_SORT_SIZE_4;	/*Sequence.sl:224: INSERT_SORT_SIZE*/
SequenceL_quickSortInPlace_4(_SequenceL__Arg_x, _SequenceL__Arg_compFunc, _SequenceL_tmp430, _SequenceL__resultConv);	/*Sequence.sl:225: quickSortInPlace(x, compFunc, INSERT_SORT_SIZE)*/
_SequenceL__Arg_x.delete_data(true);	
}
else
{
_SequenceL__Arg_x.head(_SequenceL__Arg_pivot);	/*Sequence.sl:218: head(x)*/
_SequenceL__Arg_x.Reference();	
_SequenceL__Arg_pivot._Reference();	
set_ref_count(3);
spawn(*new(allocate_child()) SequenceL__sl_main_csp59_(_SequenceL__Arg_x, _SequenceL__Arg_pivot, _SequenceL__Arg_compFunc, _SequenceL__Arg_n, _SequenceL_tmp437));
spawn_and_wait_for_all(*new(allocate_child()) SequenceL__sl_main_csp60_(_SequenceL__Arg_x, _SequenceL__Arg_pivot, _SequenceL__Arg_compFunc, _SequenceL__Arg_n, _SequenceL_tmp440));
_SequenceL__Arg_pivot._finished();	
append(_SequenceL_tmp437, _SequenceL_tmp440, _SequenceL__resultConv);	/*Sequence.sl:227: quickSortSmartBy(lower, compFunc, n-1) ++ [pivot] ++ quickSortSmartBy(upper, compFunc, n-1)*/
_SequenceL_tmp437.delete_data(true);	
_SequenceL_tmp440.delete_data(true);	
_SequenceL_tmp440.finished();	
_SequenceL_tmp437.finished();	
}
}
return NULL;
}
task *SequenceL__sl_main_distinctPairs_i_0::execute()
{
_SequenceL_tmp658.setSize(2 > 0 ? 2 : 0);	
_SequenceL_tmp660 = (_SequenceL__Arg_n - 1);	/*advent20_working.sl:69: n-1*/
SequenceL_duplicate_4(_SequenceL__Arg_n, _SequenceL_tmp660, (*(_SequenceL_tmp658.get_ptr(1))));	/*advent20_working.sl:69: duplicate(n, (n-1))*/
ellipsis(1, (_SequenceL__Arg_n - 1), (*(_SequenceL_tmp658.get_ptr(2))));	/*advent20_working.sl:69: 1 ... (n - 1)*/
transpose(_SequenceL_tmp658, _SequenceL__Arg_npairs);	/*advent20_working.sl:69: transpose([duplicate(n, (n-1)), 1 ... (n - 1)])*/
_SequenceL_tmp658.delete_data(true);	
_SequenceL_tmp658.finished();	
if ((_SequenceL__Arg_n == 2))	/*advent20_working.sl:71: npairs when n = 2  else npairs ++ distinctPairs(n - 1)*/
{
_SequenceL__resultConv = _SequenceL__Arg_npairs;	/*advent20_working.sl:70: npairs*/
_SequenceL__Arg_npairs.delete_data(true);	
_SequenceL__Arg_npairs.finished();	
}
else
{
_SequenceL_tmp666 = (_SequenceL__Arg_n - 1);	/*advent20_working.sl:71: n - 1*/
set_ref_count(2);
spawn_and_wait_for_all(*new(allocate_child()) SequenceL__sl_main_distinctPairs_i_0(_SequenceL_tmp666, _SequenceL_tmp667));
append(_SequenceL__Arg_npairs, _SequenceL_tmp667, _SequenceL__resultConv);	/*advent20_working.sl:71: npairs ++ distinctPairs(n - 1)*/
_SequenceL__Arg_npairs.delete_data(true);	
_SequenceL_tmp667.delete_data(true);	
_SequenceL_tmp667.finished();	
_SequenceL__Arg_npairs.finished();	
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
_sl_main_trim_c_advent20working_label_tco:	
_SequenceL_tmp1035 = _SequenceL___Arg_s_tco.head();	/*advent20_working.sl:9: head(s)*/
SequenceL_isWhiteSpace_2(_SequenceL_tmp1035, _SequenceL_tmp1036);	/*advent20_working.sl:10: isWhiteSpace(head(s))*/
if (_SequenceL_tmp1036)	/*advent20_working.sl:11: trim(tail(s)) when isWhiteSpace(head(s))  else trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
_SequenceL___Arg_s_tco.tail(_SequenceL_tmp1038);	/*advent20_working.sl:9: tail(s)*/
_swap(_SequenceL___Arg_s_tco, _SequenceL_tmp1038);	
goto _sl_main_trim_c_advent20working_label_tco;	/*advent20_working.sl:9: trim(tail(s))*/
}
else
{
SequenceL_last_4(_SequenceL___Arg_s_tco, _SequenceL_tmp1040);	/*advent20_working.sl:10: last(s)*/
SequenceL_isWhiteSpace_2(_SequenceL_tmp1040, _SequenceL_tmp1041);	/*advent20_working.sl:11: isWhiteSpace(last(s))*/
if (_SequenceL_tmp1041)	/*advent20_working.sl:11: trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
SequenceL_allButLast_4(_SequenceL___Arg_s_tco, _SequenceL_tmp1043);	/*advent20_working.sl:10: allButLast(s)*/
_swap(_SequenceL___Arg_s_tco, _SequenceL_tmp1043);	
goto _sl_main_trim_c_advent20working_label_tco;	/*advent20_working.sl:10: trim(allButLast(s))*/
}
else
{
_SequenceL__resultConv = _SequenceL___Arg_s_tco;	/*advent20_working.sl:11: s*/
}
}
_SequenceL_tmp1038.delete_data(true);	
_SequenceL_tmp1043.delete_data(true);	
_SequenceL_tmp1043.finished();	
_SequenceL_tmp1038.finished();	
return NULL;
}
void SequenceL__parallel_union_3(::Sequence< int > &_SequenceL__Arg_X, ::Sequence< int > &_SequenceL__Arg_Y, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL_tmp40(cspace);

append(_SequenceL__Arg_X, _SequenceL__Arg_Y, _SequenceL_tmp40);	/*Set.sl:39: X ++ Y*/
remdups(_SequenceL_tmp40, _SequenceL__resultConv);	/*Set.sl:39: removeDups(X ++ Y)*/
_SequenceL_tmp40.delete_data(false);	
_SequenceL_tmp40.finished();	
}
void SequenceL__sl_main_nt44_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i56 = _r.begin(); _SequenceL__i56 < _e; _SequenceL__i56++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__i56 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__i56 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result45.get_ptr(_SequenceL__no_share_iter))) = (_SequenceL__Arg_element == (*(_SequenceL__Arg_list.get_ptr(_SequenceL__no_share_iter))));	/*Set.sl:8: element = list*/
}
}
}
void SequenceL__parallel_elementOf_3(int _SequenceL__Arg_element, ::Sequence< int > &_SequenceL__Arg_list, bool &_SequenceL__resultConv)
{
::Sequence< bool > _SequenceL_tmp55(cspace);

_SequenceL_tmp55.setSize(_SequenceL__Arg_list.size());	/*Set.sl:8: element = list*/
if (((((SL_FLOAT)(_SequenceL_tmp55.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt44_ SequenceL__sl_main_nt44__val(_SequenceL__Arg_element, _SequenceL__Arg_list, 1, _SequenceL_tmp55.size(), _SequenceL_tmp55);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt44__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__i56=1,_stop_val__SequenceL__i56=_SequenceL_tmp55.size(); _SequenceL__i56<=_stop_val__SequenceL__i56; _SequenceL__i56+=1)
{
(*(_SequenceL_tmp55.get_ptr(_SequenceL__i56))) = (_SequenceL__Arg_element == (*(_SequenceL__Arg_list.get_ptr(_SequenceL__i56))));	/*Set.sl:8: element = list*/
}
}
_SequenceL__resultConv = some(_SequenceL_tmp55);	/*Set.sl:8: some(element = list)*/
_SequenceL_tmp55.delete_data(false);	
_SequenceL_tmp55.finished();	
}
void SequenceL__sl_main_nt42_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_x = _r.begin(); _SequenceL__Index_x < _e; _SequenceL__Index_x++)
{
bool _SequenceL_tmp58;

SequenceL_elementOf_3((*(_SequenceL__Arg_newSetA.get_ptr(_SequenceL__Index_x))), _SequenceL__Arg_setB, _SequenceL_tmp58);	/*Set.sl:17: elementOf(newSetA[x], setB)*/
if (_SequenceL_tmp58)	/*Set.sl:17: newSetA[x] when elementOf(newSetA[x], setB)*/
{
(*(_SequenceL__result43.get_ptr(_SequenceL__Index_x))) = (*(_SequenceL__Arg_newSetA.get_ptr(_SequenceL__Index_x)));	/*Set.sl:17: newSetA[x]*/
_SequenceL__result43.setExistence(_SequenceL__Index_x, true);	
}
else
{
_SequenceL__result43.setExistence(_SequenceL__Index_x, false);	
}
}
}
void SequenceL__parallel_intersection_3(::Sequence< int > &_SequenceL__Arg_setA, ::Sequence< int > &_SequenceL__Arg_setB, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL__Arg_newSetA(cspace);

remdups(_SequenceL__Arg_setA, _SequenceL__Arg_newSetA);	/*Set.sl:15: removeDups(setA)*/
_SequenceL__resultConv.setSize(_SequenceL__Arg_newSetA.size());	/*Set.sl:17: newSetA[x] when elementOf(newSetA[x], setB)*/
_SequenceL__resultConv.create_map();	
SequenceL__sl_main_nt42_ SequenceL__sl_main_nt42__val(_SequenceL__Arg_newSetA, _SequenceL__Arg_setB, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_newSetA.size() + 1, SequenceL__sl_main_nt42__val);
_SequenceL__Arg_newSetA.delete_data(false);	
_SequenceL__Arg_newSetA.finished();	
_SequenceL__resultConv.cleanup(false);	
}
void SequenceL__parallel_drop_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, int _SequenceL__Arg_n, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{

_SequenceL__Arg_list.sub_seq((_SequenceL__Arg_n + 1), _SequenceL__Arg_list.size(), _SequenceL__resultConv);	/*Sequence.sl:178: list[(n + 1) ... size(list)]*/
}
void SequenceL__parallel_getColliding_0(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_coincident, ::Sequence< int > &_SequenceL__Arg_remaining, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< Empty > _SequenceL_tmp114(cspace);
::Sequence< int > _SequenceL__Arg_colliders(cspace);
::Sequence< int > _SequenceL_tmp116(cspace);
::_sl_CollisionRecord_0 _SequenceL__Arg_first(cspace);
::Sequence< int > _SequenceL__Arg_moreColliders(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp119(cspace);

if ((_SequenceL__Arg_coincident.size() == 0))	/*advent20_working.sl:88: [] when size(coincident) = 0  else union(colliders, moreColliders) when size(colliders) = 2  else moreColliders*/
{
_SequenceL_tmp114.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp114, _SequenceL__resultConv);	
_SequenceL_tmp114.delete_data(false);	
_SequenceL_tmp114.finished();	
}
else
{
_SequenceL_tmp116.setSize(2 > 0 ? 2 : 0);	
_SequenceL__Arg_coincident.head(_SequenceL__Arg_first);	/*advent20_working.sl:83: head(coincident)*/
(*(_SequenceL_tmp116.get_ptr(1))) = _SequenceL__Arg_first.a;	/*advent20_working.sl:84: first.a*/
(*(_SequenceL_tmp116.get_ptr(2))) = _SequenceL__Arg_first.b;	/*advent20_working.sl:84: first.b*/
_SequenceL__Arg_first._delete_data(false);	
_SequenceL__Arg_first._finished();	
SequenceL__parallel_intersection_3(_SequenceL__Arg_remaining, _SequenceL_tmp116, _SequenceL__Arg_colliders);	/*advent20_working.sl:84: intersection(remaining, [first.a, first.b])*/
_SequenceL_tmp116.delete_data(false);	
_SequenceL_tmp116.finished();	
_SequenceL__Arg_coincident.tail(_SequenceL_tmp119);	/*advent20_working.sl:85: tail(coincident)*/
SequenceL__parallel_getColliding_0(_SequenceL_tmp119, _SequenceL__Arg_remaining, _SequenceL__Arg_moreColliders);	/*advent20_working.sl:85: getColliding(tail(coincident), remaining)*/
_SequenceL_tmp119.delete_data(false);	
_SequenceL_tmp119.finished();	
if ((_SequenceL__Arg_colliders.size() == 2))	/*advent20_working.sl:88: union(colliders, moreColliders) when size(colliders) = 2  else moreColliders*/
{
SequenceL__parallel_union_3(_SequenceL__Arg_colliders, _SequenceL__Arg_moreColliders, _SequenceL__resultConv);	/*advent20_working.sl:87: union(colliders, moreColliders)*/
_SequenceL__Arg_colliders.delete_data(false);	
_SequenceL__Arg_moreColliders.delete_data(false);	
_SequenceL__Arg_moreColliders.finished();	
_SequenceL__Arg_colliders.finished();	
}
else
{
_SequenceL__resultConv = _SequenceL__Arg_moreColliders;	/*advent20_working.sl:88: moreColliders*/
_SequenceL__Arg_moreColliders.delete_data(false);	
_SequenceL__Arg_moreColliders.finished();	
_SequenceL__Arg_colliders.delete_data(false);	
_SequenceL__Arg_colliders.finished();	
}
}
}
void SequenceL__parallel_getFirstCoincidents_0(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_cr, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__Arg_next(cspace);
::_sl_CollisionRecord_0 _SequenceL__Arg_first(cspace);
::_sl_CollisionRecord_0 _SequenceL_tmp128(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp133(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp135(cspace);

_SequenceL__Arg_cr.tail(_SequenceL__Arg_next);	/*advent20_working.sl:77: tail(cr)*/
_SequenceL__Arg_cr.head(_SequenceL__Arg_first);	/*advent20_working.sl:76: head(cr)*/
if ((_SequenceL__Arg_next.size() == 0))	/*advent20_working.sl:80: [first] when size(next) = 0  else [first] ++ getFirstCoincidents(next) when head(next).t = first.t  else [first]*/
{
_SequenceL__resultConv.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))) = _SequenceL__Arg_first;	/*advent20_working.sl:78: first*/
_SequenceL__Arg_first._delete_data(false);	
_SequenceL__Arg_first._finished();	
_SequenceL__Arg_next.delete_data(false);	
_SequenceL__Arg_next.finished();	
}
else
{
_SequenceL__Arg_next.head(_SequenceL_tmp128);	/*advent20_working.sl:79: head(next)*/
if ((_SequenceL_tmp128.t == _SequenceL__Arg_first.t))	/*advent20_working.sl:80: [first] ++ getFirstCoincidents(next) when head(next).t = first.t  else [first]*/
{
_SequenceL_tmp133.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp133.get_ptr(1))) = _SequenceL__Arg_first;	/*advent20_working.sl:79: first*/
_SequenceL__Arg_first._delete_data(false);	
_SequenceL__Arg_first._finished();	
SequenceL__parallel_getFirstCoincidents_0(_SequenceL__Arg_next, _SequenceL_tmp135);	/*advent20_working.sl:79: getFirstCoincidents(next)*/
_SequenceL__Arg_next.delete_data(false);	
_SequenceL__Arg_next.finished();	
_appendF(_SequenceL_tmp133, _SequenceL_tmp135, _SequenceL__resultConv);	/*advent20_working.sl:79: [first] ++ getFirstCoincidents(next)*/
_SequenceL_tmp133.delete_data(false);	
_SequenceL_tmp135.delete_data(false);	
_SequenceL_tmp135.finished();	
_SequenceL_tmp133.finished();	
}
else
{
_SequenceL__resultConv.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))) = _SequenceL__Arg_first;	/*advent20_working.sl:80: first*/
_SequenceL__Arg_first._delete_data(false);	
_SequenceL__Arg_first._finished();	
_SequenceL__Arg_next.delete_data(false);	
_SequenceL__Arg_next.finished();	
}
}
}
void SequenceL__parallel_doCollisions_0(::Sequence< int > &_SequenceL__Arg_remainingPoints, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_collisions, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL__Arg_newRemaining(cspace);
::Sequence< int > _SequenceL__Arg_colliding(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__Arg_coincident(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp141(cspace);

if ((_SequenceL__Arg_collisions.size() == 0))	/*advent20_working.sl:96: remainingPoints when size(collisions) = 0  else doCollisions(newRemaining, drop(collisions, size(coincident)))*/
{
_SequenceL__resultConv = _SequenceL__Arg_remainingPoints;	/*advent20_working.sl:95: remainingPoints*/
}
else
{
SequenceL__parallel_getFirstCoincidents_0(_SequenceL__Arg_collisions, _SequenceL__Arg_coincident);	/*advent20_working.sl:92: getFirstCoincidents(collisions)*/
_SequenceL__Arg_coincident.parallel_deFrag(__LINE__);	
SequenceL__parallel_getColliding_0(_SequenceL__Arg_coincident, _SequenceL__Arg_remainingPoints, _SequenceL__Arg_colliding);	/*advent20_working.sl:93: getColliding(coincident, remainingPoints)*/
takeaway(_SequenceL__Arg_remainingPoints, _SequenceL__Arg_colliding, _SequenceL__Arg_newRemaining);	/*advent20_working.sl:94: takeAway(remainingPoints, colliding)*/
_SequenceL__Arg_colliding.delete_data(false);	
_SequenceL__Arg_colliding.finished();	
SequenceL__parallel_drop_4(_SequenceL__Arg_collisions, _SequenceL__Arg_coincident.size(), _SequenceL_tmp141);	/*advent20_working.sl:96: drop(collisions, size(coincident))*/
_SequenceL__Arg_coincident.delete_data(false);	
_SequenceL__Arg_coincident.finished();	
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_doCollisions_iCollisionRecord_0(_SequenceL__Arg_newRemaining, _SequenceL_tmp141, _SequenceL__resultConv));
_SequenceL_tmp141.finished();	
_SequenceL__Arg_newRemaining.finished();	
}
}
void SequenceL__sl_main_nt40_::operator() (const blocked_range<int>& _r) const {
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
(*(_SequenceL__result41.get_ptr(_SequenceL__no_share_iter))) = (*(_SequenceL__Arg_list.get_ptr(_SequenceL__no_share_iter)));	/*Sequence.sl:76: list[i]*/
}
else
{
(*(_SequenceL__result41.get_ptr(_SequenceL__no_share_iter))) = _SequenceL__Arg_newElement;	/*Sequence.sl:78: newElement*/
}
}
}
}
void SequenceL__parallel_setElementAt_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, int _SequenceL__Arg_location, ::_sl_CollisionRecord_0 &_SequenceL__Arg_newElement, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
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
SequenceL__sl_main_nt40_ SequenceL__sl_main_nt40__val(_SequenceL__Arg_location, _SequenceL__Arg_list, _SequenceL__Arg_newElement, 1, _SequenceL__Arg_list.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt40__val);
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
void SequenceL__parallel_swapHelper_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, int _SequenceL__Arg_i, int _SequenceL__Arg_j, ::_sl_CollisionRecord_0 &_SequenceL__Arg_vali, ::_sl_CollisionRecord_0 &_SequenceL__Arg_valj, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp244(cspace);

SequenceL__parallel_setElementAt_4(_SequenceL__Arg_list, _SequenceL__Arg_j, _SequenceL__Arg_vali, _SequenceL_tmp244);	/*Sequence.sl:87: setElementAt(list, j, vali)*/
SequenceL__parallel_setElementAt_4(_SequenceL_tmp244, _SequenceL__Arg_i, _SequenceL__Arg_valj, _SequenceL__resultConv);	/*Sequence.sl:87: setElementAt(setElementAt(list, j, vali), i, valj)*/
_SequenceL_tmp244.delete_data(false);	
_SequenceL_tmp244.finished();	
}
void SequenceL__parallel_swap_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, int _SequenceL__Arg_i, int _SequenceL__Arg_j, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::_sl_CollisionRecord_0 _SequenceL__Arg_vi(cspace);
::_sl_CollisionRecord_0 _SequenceL__Arg_vj(cspace);

_SequenceL__Arg_vi = (*(_SequenceL__Arg_list.get_ptr(_SequenceL__Arg_i)));	/*Sequence.sl:82: list[i]*/
_SequenceL__Arg_vj = (*(_SequenceL__Arg_list.get_ptr(_SequenceL__Arg_j)));	/*Sequence.sl:83: list[j]*/
SequenceL__parallel_swapHelper_4(_SequenceL__Arg_list, _SequenceL__Arg_i, _SequenceL__Arg_j, _SequenceL__Arg_vi, _SequenceL__Arg_vj, _SequenceL__resultConv);	/*Sequence.sl:84: swapHelper(list, i, j, vi, vj)*/
_SequenceL__Arg_vi._delete_data(false);	
_SequenceL__Arg_vj._delete_data(false);	
_SequenceL__Arg_vj._finished();	
_SequenceL__Arg_vi._finished();	
}
void SequenceL__parallel_getRight_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, ::_sl_CollisionRecord_0 &_SequenceL__Arg_pivot, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_right, int &_SequenceL__resultConv)
{
int _SequenceL___Arg_right_tco;
int _SequenceL_tmp275;
int _SequenceL_tmp279;

_SequenceL___Arg_right_tco = _SequenceL__Arg_right;	
_parallel_getRight_Sequence_label_tco:	
((void (*)(::_sl_CollisionRecord_0&,::_sl_CollisionRecord_0&,int&))_SequenceL__Arg_compFunc[0])((*(_SequenceL__Arg_list.get_ptr(_SequenceL___Arg_right_tco))), _SequenceL__Arg_pivot, _SequenceL_tmp275);	/*Sequence.sl:266: compFunc(list[right], pivot)*/
if ((_SequenceL_tmp275 <= 0))	/*Sequence.sl:268: right when compFunc(list[right], pivot) <= 0	else		getRight(list, pivot, compFunc, right-1)*/
{
_SequenceL__resultConv = _SequenceL___Arg_right_tco;	/*Sequence.sl:266: right*/
}
else
{
_SequenceL_tmp279 = (_SequenceL___Arg_right_tco - 1);	/*Sequence.sl:268: right-1*/
_SequenceL___Arg_right_tco = _SequenceL_tmp279;	
goto _parallel_getRight_Sequence_label_tco;	/*Sequence.sl:268: getRight(list, pivot, compFunc, right-1)*/
}
}
void SequenceL__parallel_getLeft_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, ::_sl_CollisionRecord_0 &_SequenceL__Arg_pivot, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_left, int &_SequenceL__resultConv)
{
int _SequenceL___Arg_left_tco;
int _SequenceL_tmp280;
int _SequenceL_tmp284;

_SequenceL___Arg_left_tco = _SequenceL__Arg_left;	
_parallel_getLeft_Sequence_label_tco:	
((void (*)(::_sl_CollisionRecord_0&,::_sl_CollisionRecord_0&,int&))_SequenceL__Arg_compFunc[0])((*(_SequenceL__Arg_list.get_ptr(_SequenceL___Arg_left_tco))), _SequenceL__Arg_pivot, _SequenceL_tmp280);	/*Sequence.sl:260: compFunc(list[left], pivot)*/
if ((_SequenceL_tmp280 >= 0))	/*Sequence.sl:262: left when compFunc(list[left], pivot) >= 0	else		getLeft(list, pivot, compFunc, left+1)*/
{
_SequenceL__resultConv = _SequenceL___Arg_left_tco;	/*Sequence.sl:260: left*/
}
else
{
_SequenceL_tmp284 = (_SequenceL___Arg_left_tco + 1);	/*Sequence.sl:262: left+1*/
_SequenceL___Arg_left_tco = _SequenceL_tmp284;	
goto _parallel_getLeft_Sequence_label_tco;	/*Sequence.sl:262: getLeft(list, pivot, compFunc, left+1)*/
}
}
void SequenceL__parallel_insertionByWork_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, ::_sl_CollisionRecord_0 &_SequenceL__Arg_val, int _SequenceL__Arg_first, int _SequenceL__Arg_j, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL___Arg_x_tco(cspace);
int _SequenceL___Arg_j_tco;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__Arg_return(cspace);
int _SequenceL_tmp344;
int _SequenceL_tmp346;
int _SequenceL_tmp349;
int _SequenceL_tmp351;
int _SequenceL_tmp353;

if (_SequenceL__Arg_x.onlyInstance())	
{
_SequenceL___Arg_x_tco.replaceSequence(_SequenceL__Arg_x);	
}
else
{
_SequenceL___Arg_x_tco.hard_copy(_SequenceL__Arg_x,__LINE__);	
}
_SequenceL___Arg_j_tco = _SequenceL__Arg_j;	
_parallel_insertionByWork_Sequence_label_tco:	
if ((_SequenceL___Arg_j_tco < _SequenceL__Arg_first))	/*Sequence.sl:293: return when j < first	else		return when compFunc(x[j], val) <= 0	else		insertionByWork(setElementAt(x, j+1, x[j]), compFunc, val, first, j-1)*/
{
_SequenceL_tmp344 = (_SequenceL___Arg_j_tco + 1);	/*Sequence.sl:287: j+1*/
_SequenceL__Arg_val._Reference();	/*Sequence.sl:287: setElementAt(x, j+1, val)*/
SequenceL__parallel_setElementAt_4(_SequenceL___Arg_x_tco, _SequenceL_tmp344, _SequenceL__Arg_val, _SequenceL__Arg_return);	/*Sequence.sl:287: setElementAt(x, j+1, val)*/
_SequenceL__Arg_val._dereference();	
_SequenceL__resultConv = _SequenceL__Arg_return;	/*Sequence.sl:289: return*/
}
else
{
((void (*)(::_sl_CollisionRecord_0&,::_sl_CollisionRecord_0&,int&))_SequenceL__Arg_compFunc[0])((*(_SequenceL___Arg_x_tco.get_ptr(_SequenceL___Arg_j_tco))), _SequenceL__Arg_val, _SequenceL_tmp346);	/*Sequence.sl:291: compFunc(x[j], val)*/
if ((_SequenceL_tmp346 <= 0))	/*Sequence.sl:293: return when compFunc(x[j], val) <= 0	else		insertionByWork(setElementAt(x, j+1, x[j]), compFunc, val, first, j-1)*/
{
_SequenceL_tmp349 = (_SequenceL___Arg_j_tco + 1);	/*Sequence.sl:287: j+1*/
_SequenceL__Arg_val._Reference();	/*Sequence.sl:287: setElementAt(x, j+1, val)*/
SequenceL__parallel_setElementAt_4(_SequenceL___Arg_x_tco, _SequenceL_tmp349, _SequenceL__Arg_val, _SequenceL__Arg_return);	/*Sequence.sl:287: setElementAt(x, j+1, val)*/
_SequenceL__Arg_val._dereference();	
_SequenceL__resultConv = _SequenceL__Arg_return;	/*Sequence.sl:291: return*/
}
else
{
_SequenceL_tmp351 = (_SequenceL___Arg_j_tco + 1);	/*Sequence.sl:293: j+1*/
(*(_SequenceL___Arg_x_tco.get_ptr(_SequenceL___Arg_j_tco)))._Reference();	/*Sequence.sl:293: setElementAt(x, j+1, x[j])*/
if (((_SequenceL_tmp351 >= 1) && (_SequenceL_tmp351 <= _SequenceL___Arg_x_tco.size())))	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
{
(*(_SequenceL___Arg_x_tco.get_ptr(_SequenceL_tmp351))) = (*(_SequenceL___Arg_x_tco.get_ptr(_SequenceL___Arg_j_tco)));	/*Sequence.sl:78: newElement*/
}
(*(_SequenceL___Arg_x_tco.get_ptr(_SequenceL___Arg_j_tco)))._dereference();	
_SequenceL_tmp353 = (_SequenceL___Arg_j_tco - 1);	/*Sequence.sl:293: j-1*/
_SequenceL___Arg_j_tco = _SequenceL_tmp353;	
goto _parallel_insertionByWork_Sequence_label_tco;	/*Sequence.sl:293: insertionByWork(setElementAt(x, j+1, x[j]), compFunc, val, first, j-1)*/
}
}
_SequenceL__Arg_return.delete_data(false);	
_SequenceL___Arg_x_tco.delete_data(false);	
_SequenceL___Arg_x_tco.finished();	
_SequenceL__Arg_return.finished();	
}
void SequenceL__parallel_doSwaps_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, ::_sl_CollisionRecord_0 &_SequenceL__Arg_pivot, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_left, int _SequenceL__Arg_right, SL::Utilities::Sequence::SWAP_RETURN< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL___Arg_list_tco(cspace);
int _SequenceL___Arg_left_tco;
int _SequenceL___Arg_right_tco;
int _SequenceL__Arg_newLeft;
int _SequenceL__Arg_newRight;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp377(cspace);
int _SequenceL_tmp378;
int _SequenceL_tmp379;

if (_SequenceL__Arg_list.onlyInstance())	
{
_SequenceL___Arg_list_tco.replaceSequence(_SequenceL__Arg_list);	
}
else
{
_SequenceL___Arg_list_tco.hard_copy(_SequenceL__Arg_list,__LINE__);	
}
_SequenceL___Arg_left_tco = _SequenceL__Arg_left;	
_SequenceL___Arg_right_tco = _SequenceL__Arg_right;	
_parallel_doSwaps_Sequence_label_tco:	
if ((_SequenceL___Arg_left_tco > _SequenceL___Arg_right_tco))	/*Sequence.sl:256: (List: list, Left: left, Right: right) when left > right	else		 doSwaps(swap(list, newLeft, newRight), pivot, compFunc, newLeft + 1, newRight - 1) when newLeft <= newRight	else		(List: list, Left: newLeft, Right: newRight)*/
{
_SequenceL__resultConv.List = _SequenceL___Arg_list_tco;	/*Sequence.sl:252: list*/
_SequenceL__resultConv.Left = _SequenceL___Arg_left_tco;	/*Sequence.sl:252: left*/
_SequenceL__resultConv.Right = _SequenceL___Arg_right_tco;	/*Sequence.sl:252: right*/
}
else
{
SequenceL__parallel_getLeft_4(_SequenceL___Arg_list_tco, _SequenceL__Arg_pivot, _SequenceL__Arg_compFunc, _SequenceL___Arg_left_tco, _SequenceL__Arg_newLeft);	/*Sequence.sl:249: getLeft(list, pivot, compFunc, left)*/
SequenceL__parallel_getRight_4(_SequenceL___Arg_list_tco, _SequenceL__Arg_pivot, _SequenceL__Arg_compFunc, _SequenceL___Arg_right_tco, _SequenceL__Arg_newRight);	/*Sequence.sl:250: getRight(list, pivot, compFunc, right)*/
if ((_SequenceL__Arg_newLeft <= _SequenceL__Arg_newRight))	/*Sequence.sl:256: doSwaps(swap(list, newLeft, newRight), pivot, compFunc, newLeft + 1, newRight - 1) when newLeft <= newRight	else		(List: list, Left: newLeft, Right: newRight)*/
{
SequenceL__parallel_swap_4(_SequenceL___Arg_list_tco, _SequenceL__Arg_newLeft, _SequenceL__Arg_newRight, _SequenceL_tmp377);	/*Sequence.sl:254: swap(list, newLeft, newRight)*/
_SequenceL_tmp378 = (_SequenceL__Arg_newLeft + 1);	/*Sequence.sl:254: newLeft + 1*/
_SequenceL_tmp379 = (_SequenceL__Arg_newRight - 1);	/*Sequence.sl:254: newRight - 1*/
_swap(_SequenceL___Arg_list_tco, _SequenceL_tmp377);	
_SequenceL___Arg_left_tco = _SequenceL_tmp378;	
_SequenceL___Arg_right_tco = _SequenceL_tmp379;	
goto _parallel_doSwaps_Sequence_label_tco;	/*Sequence.sl:254: doSwaps(swap(list, newLeft, newRight), pivot, compFunc, newLeft + 1, newRight - 1)*/
}
else
{
_SequenceL__resultConv.List = _SequenceL___Arg_list_tco;	/*Sequence.sl:256: list*/
_SequenceL__resultConv.Left = _SequenceL__Arg_newLeft;	/*Sequence.sl:256: newLeft*/
_SequenceL__resultConv.Right = _SequenceL__Arg_newRight;	/*Sequence.sl:256: newRight*/
}
}
_SequenceL_tmp377.delete_data(false);	
_SequenceL_tmp377.finished();	
}
void SequenceL__parallel_insertionSortByHelper_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_first, int _SequenceL__Arg_last, int _SequenceL__Arg_i, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL___Arg_x_tco(cspace);
int _SequenceL___Arg_i_tco;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp385(cspace);
::_sl_CollisionRecord_0 _SequenceL__Arg_val(cspace);
int _SequenceL_tmp384;
int _SequenceL_tmp386;

if (_SequenceL__Arg_x.onlyInstance())	
{
_SequenceL___Arg_x_tco.replaceSequence(_SequenceL__Arg_x);	
}
else
{
_SequenceL___Arg_x_tco.hard_copy(_SequenceL__Arg_x,__LINE__);	
}
_SequenceL___Arg_i_tco = _SequenceL__Arg_i;	
_parallel_insertionSortByHelper_Sequence_label_tco:	
if ((_SequenceL___Arg_i_tco > _SequenceL__Arg_last))	/*Sequence.sl:282: x when i > last	else		insertionSortByHelper(insertionByWork(x, compFunc, val, first, i-1), compFunc, first, last, i+1)*/
{
_SequenceL__resultConv = _SequenceL___Arg_x_tco;	/*Sequence.sl:280: x*/
}
else
{
_SequenceL__Arg_val = (*(_SequenceL___Arg_x_tco.get_ptr(_SequenceL___Arg_i_tco)));	/*Sequence.sl:278: x[i]*/
_SequenceL_tmp384 = (_SequenceL___Arg_i_tco - 1);	/*Sequence.sl:282: i-1*/
SequenceL__parallel_insertionByWork_4(_SequenceL___Arg_x_tco, _SequenceL__Arg_compFunc, _SequenceL__Arg_val, _SequenceL__Arg_first, _SequenceL_tmp384, _SequenceL_tmp385);	/*Sequence.sl:282: insertionByWork(x, compFunc, val, first, i-1)*/
_SequenceL_tmp386 = (_SequenceL___Arg_i_tco + 1);	/*Sequence.sl:282: i+1*/
_swap(_SequenceL___Arg_x_tco, _SequenceL_tmp385);	
_SequenceL___Arg_i_tco = _SequenceL_tmp386;	
goto _parallel_insertionSortByHelper_Sequence_label_tco;	/*Sequence.sl:282: insertionSortByHelper(insertionByWork(x, compFunc, val, first, i-1), compFunc, first, last, i+1)*/
}
_SequenceL_tmp385.delete_data(false);	
_SequenceL__Arg_val._delete_data(false);	
_SequenceL__Arg_val._finished();	
_SequenceL_tmp385.finished();	
}
void SequenceL__parallel_quickSortInPlaceHelper_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_first, int _SequenceL__Arg_last, int _SequenceL__Arg_threshold, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp397(cspace);
SL::Utilities::Sequence::SWAP_RETURN< ::_sl_CollisionRecord_0 > _SequenceL__Arg_swapped(cspace);
::_sl_CollisionRecord_0 _SequenceL__Arg_pivot(cspace);

if ((_SequenceL__Arg_first >= _SequenceL__Arg_last))	/*Sequence.sl:244: list when first >= last	else		insertionSortByHelper(list, compFunc, first, last, first) when last - first + 1 <= threshold	else		quickSortInPlaceHelper(quickSortInPlaceHelper(swapped.List, compFunc, first, swapped.Right, threshold), compFunc, swapped.Left, last, threshold)*/
{
_SequenceL__resultConv = _SequenceL__Arg_list;	/*Sequence.sl:240: list*/
}
else
{
if ((((_SequenceL__Arg_last - _SequenceL__Arg_first) + 1) <= _SequenceL__Arg_threshold))	/*Sequence.sl:244: insertionSortByHelper(list, compFunc, first, last, first) when last - first + 1 <= threshold	else		quickSortInPlaceHelper(quickSortInPlaceHelper(swapped.List, compFunc, first, swapped.Right, threshold), compFunc, swapped.Left, last, threshold)*/
{
SequenceL__parallel_insertionSortByHelper_4(_SequenceL__Arg_list, _SequenceL__Arg_compFunc, _SequenceL__Arg_first, _SequenceL__Arg_last, _SequenceL__Arg_first, _SequenceL__resultConv);	/*Sequence.sl:242: insertionSortByHelper(list, compFunc, first, last, first)*/
}
else
{
_SequenceL__Arg_pivot = (*(_SequenceL__Arg_list.get_ptr(_SequenceL__Arg_first)));	/*Sequence.sl:237: list[first]*/
SequenceL__parallel_doSwaps_4(_SequenceL__Arg_list, _SequenceL__Arg_pivot, _SequenceL__Arg_compFunc, _SequenceL__Arg_first, _SequenceL__Arg_last, _SequenceL__Arg_swapped);	/*Sequence.sl:238: doSwaps(list, pivot, compFunc, first, last)*/
_SequenceL__Arg_pivot._delete_data(false);	
_SequenceL__Arg_pivot._finished();	
SequenceL__parallel_quickSortInPlaceHelper_4(_SequenceL__Arg_swapped.List, _SequenceL__Arg_compFunc, _SequenceL__Arg_first, _SequenceL__Arg_swapped.Right, _SequenceL__Arg_threshold, _SequenceL_tmp397);	/*Sequence.sl:244: quickSortInPlaceHelper(swapped.List, compFunc, first, swapped.Right, threshold)*/
SequenceL__parallel_quickSortInPlaceHelper_4(_SequenceL_tmp397, _SequenceL__Arg_compFunc, _SequenceL__Arg_swapped.Left, _SequenceL__Arg_last, _SequenceL__Arg_threshold, _SequenceL__resultConv);	/*Sequence.sl:244: quickSortInPlaceHelper(quickSortInPlaceHelper(swapped.List, compFunc, first, swapped.Right, threshold), compFunc, swapped.Left, last, threshold)*/
_SequenceL_tmp397.delete_data(false);	
_SequenceL__Arg_swapped._delete_data(false);	
_SequenceL__Arg_swapped._finished();	
_SequenceL_tmp397.finished();	
}
}
}
void SequenceL__sl_main_nt38_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
int _SequenceL_tmp399;
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__Index_i - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__Index_i * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
((void (*)(::_sl_CollisionRecord_0&,::_sl_CollisionRecord_0&,int&))_SequenceL__Arg_func[0])((*(_SequenceL__Arg_s.get_ptr(_SequenceL__no_share_iter))), _SequenceL__Arg_p, _SequenceL_tmp399);	/*Sequence.sl:188: func(s[i], p)*/
if ((_SequenceL_tmp399 >= 0))	/*Sequence.sl:188: s[i] 		when func(s[i], p) >= 0*/
{
(*(_SequenceL__result39.get_ptr(_SequenceL__no_share_iter))) = (*(_SequenceL__Arg_s.get_ptr(_SequenceL__no_share_iter)));	/*Sequence.sl:188: s[i]*/
_SequenceL__result39.setExistence(_SequenceL__no_share_iter, true);	
}
else
{
_SequenceL__result39.setExistence(_SequenceL__no_share_iter, false);	
}
}
}
}
void SequenceL__parallel_filtermax_4(::_sl_CollisionRecord_0 &_SequenceL__Arg_p, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_s, _sl_fun_pointer* _SequenceL__Arg_func, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
int _SequenceL_tmp399;

_SequenceL__resultConv.setSize(_SequenceL__Arg_s.size());	/*Sequence.sl:188: s[i] 		when func(s[i], p) >= 0*/
_SequenceL__resultConv.create_map();	
if (((((SL_FLOAT)(_SequenceL__Arg_s.size() - 1)) * 4) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt38_ SequenceL__sl_main_nt38__val(_SequenceL__Arg_func, _SequenceL__Arg_s, _SequenceL__Arg_p, 1, _SequenceL__Arg_s.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt38__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_s.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
((void (*)(::_sl_CollisionRecord_0&,::_sl_CollisionRecord_0&,int&))_SequenceL__Arg_func[0])((*(_SequenceL__Arg_s.get_ptr(_SequenceL__Index_i))), _SequenceL__Arg_p, _SequenceL_tmp399);	/*Sequence.sl:188: func(s[i], p)*/
if ((_SequenceL_tmp399 >= 0))	/*Sequence.sl:188: s[i] 		when func(s[i], p) >= 0*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_s.get_ptr(_SequenceL__Index_i)));	/*Sequence.sl:188: s[i]*/
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
void SequenceL__sl_main_nt36_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
int _SequenceL_tmp420;
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__Index_i - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__Index_i * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
((void (*)(::_sl_CollisionRecord_0&,::_sl_CollisionRecord_0&,int&))_SequenceL__Arg_func[0])((*(_SequenceL__Arg_s.get_ptr(_SequenceL__no_share_iter))), _SequenceL__Arg_p, _SequenceL_tmp420);	/*Sequence.sl:183: func(s[i], p)*/
if ((_SequenceL_tmp420 < 0))	/*Sequence.sl:183: s[i] 		when func(s[i], p) < 0*/
{
(*(_SequenceL__result37.get_ptr(_SequenceL__no_share_iter))) = (*(_SequenceL__Arg_s.get_ptr(_SequenceL__no_share_iter)));	/*Sequence.sl:183: s[i]*/
_SequenceL__result37.setExistence(_SequenceL__no_share_iter, true);	
}
else
{
_SequenceL__result37.setExistence(_SequenceL__no_share_iter, false);	
}
}
}
}
void SequenceL__parallel_filtermin_4(::_sl_CollisionRecord_0 &_SequenceL__Arg_p, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_s, _sl_fun_pointer* _SequenceL__Arg_func, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
int _SequenceL_tmp420;

_SequenceL__resultConv.setSize(_SequenceL__Arg_s.size());	/*Sequence.sl:183: s[i] 		when func(s[i], p) < 0*/
_SequenceL__resultConv.create_map();	
if (((((SL_FLOAT)(_SequenceL__Arg_s.size() - 1)) * 4) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt36_ SequenceL__sl_main_nt36__val(_SequenceL__Arg_func, _SequenceL__Arg_s, _SequenceL__Arg_p, 1, _SequenceL__Arg_s.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt36__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_s.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
((void (*)(::_sl_CollisionRecord_0&,::_sl_CollisionRecord_0&,int&))_SequenceL__Arg_func[0])((*(_SequenceL__Arg_s.get_ptr(_SequenceL__Index_i))), _SequenceL__Arg_p, _SequenceL_tmp420);	/*Sequence.sl:183: func(s[i], p)*/
if ((_SequenceL_tmp420 < 0))	/*Sequence.sl:183: s[i] 		when func(s[i], p) < 0*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_s.get_ptr(_SequenceL__Index_i)));	/*Sequence.sl:183: s[i]*/
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
void SequenceL__parallel_quickSortInPlace_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_threshold, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{

SequenceL__parallel_quickSortInPlaceHelper_4(_SequenceL__Arg_list, _SequenceL__Arg_compFunc, 1, _SequenceL__Arg_list.size(), _SequenceL__Arg_threshold, _SequenceL__resultConv);	/*Sequence.sl:232: quickSortInPlaceHelper(list, compFunc, 1, size(list), threshold)*/
}
void SequenceL__parallel_quickSortSmartBy_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_n, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
int _SequenceL_tmp430;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp437(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp434(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__Arg_lower(cspace);
::_sl_CollisionRecord_0 _SequenceL__Arg_pivot(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp432(cspace);
int _SequenceL_tmp433;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp435(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp440(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__Arg_upper(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp438(cspace);
int _SequenceL_tmp439;

if ((_SequenceL__Arg_x.size() <= 1))	/*Sequence.sl:227: x when size(x) <= 1		else			quickSortInPlace(x, compFunc, INSERT_SORT_SIZE)   				when n <= 0 or size(x) <= INPLACE_QSORT_SIZE		else			quickSortSmartBy(lower, compFunc, n-1) ++ [pivot] ++ quickSortSmartBy(upper, compFunc, n-1)*/
{
_SequenceL__resultConv = _SequenceL__Arg_x;	/*Sequence.sl:222: x*/
}
else
{
if (((_SequenceL__Arg_n <= 0) || (_SequenceL__Arg_x.size() <= _SequenceL_INPLACE_QSORT_SIZE_4)))	/*Sequence.sl:227: quickSortInPlace(x, compFunc, INSERT_SORT_SIZE)   				when n <= 0 or size(x) <= INPLACE_QSORT_SIZE		else			quickSortSmartBy(lower, compFunc, n-1) ++ [pivot] ++ quickSortSmartBy(upper, compFunc, n-1)*/
{
_SequenceL_tmp430 = _SequenceL_INSERT_SORT_SIZE_4;	/*Sequence.sl:224: INSERT_SORT_SIZE*/
SequenceL__parallel_quickSortInPlace_4(_SequenceL__Arg_x, _SequenceL__Arg_compFunc, _SequenceL_tmp430, _SequenceL__resultConv);	/*Sequence.sl:225: quickSortInPlace(x, compFunc, INSERT_SORT_SIZE)*/
}
else
{
_SequenceL__Arg_x.head(_SequenceL__Arg_pivot);	/*Sequence.sl:218: head(x)*/
_SequenceL__Arg_x.tail(_SequenceL_tmp432);	/*Sequence.sl:219: tail(x)*/
SequenceL__parallel_filtermin_4(_SequenceL__Arg_pivot, _SequenceL_tmp432, _SequenceL__Arg_compFunc, _SequenceL__Arg_lower);	/*Sequence.sl:219: filtermin(pivot, tail(x), compFunc)*/
_SequenceL_tmp432.delete_data(false);	
_SequenceL_tmp432.finished();	
_SequenceL_tmp433 = (_SequenceL__Arg_n - 1);	/*Sequence.sl:227: n-1*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_quickSortSmartByCollisionRecord_z_i_4(_SequenceL__Arg_lower, _SequenceL__Arg_compFunc, _SequenceL_tmp433, _SequenceL_tmp434));
_SequenceL__Arg_lower.finished();	
_SequenceL_tmp435.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp435.get_ptr(1))) = _SequenceL__Arg_pivot;	/*Sequence.sl:227: pivot*/
append(_SequenceL_tmp434, _SequenceL_tmp435, _SequenceL_tmp437);	/*Sequence.sl:227: quickSortSmartBy(lower, compFunc, n-1) ++ [pivot]*/
_SequenceL_tmp434.delete_data(false);	
_SequenceL_tmp435.delete_data(false);	
_SequenceL_tmp435.finished();	
_SequenceL_tmp434.finished();	
_SequenceL__Arg_x.tail(_SequenceL_tmp438);	/*Sequence.sl:220: tail(x)*/
SequenceL__parallel_filtermax_4(_SequenceL__Arg_pivot, _SequenceL_tmp438, _SequenceL__Arg_compFunc, _SequenceL__Arg_upper);	/*Sequence.sl:220: filtermax(pivot, tail(x), compFunc)*/
_SequenceL__Arg_pivot._delete_data(false);	
_SequenceL_tmp438.delete_data(false);	
_SequenceL_tmp438.finished();	
_SequenceL__Arg_pivot._finished();	
_SequenceL_tmp439 = (_SequenceL__Arg_n - 1);	/*Sequence.sl:227: n-1*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_quickSortSmartByCollisionRecord_z_i_4(_SequenceL__Arg_upper, _SequenceL__Arg_compFunc, _SequenceL_tmp439, _SequenceL_tmp440));
_SequenceL__Arg_upper.finished();	
append(_SequenceL_tmp437, _SequenceL_tmp440, _SequenceL__resultConv);	/*Sequence.sl:227: quickSortSmartBy(lower, compFunc, n-1) ++ [pivot] ++ quickSortSmartBy(upper, compFunc, n-1)*/
_SequenceL_tmp437.delete_data(false);	
_SequenceL_tmp440.delete_data(false);	
_SequenceL_tmp440.finished();	
_SequenceL_tmp437.finished();	
}
}
}
void SequenceL__parallel_sortBy_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__delete_opttmp1(cspace);
int _SequenceL_tmp441;

_SequenceL__Arg_x.clone(_SequenceL__delete_opttmp1);	/*Sequence.sl:213: quickSortSmartBy(x, compFunc, PAR_QSORT_DEPTH)*/
_SequenceL_tmp441 = _SequenceL_PAR_QSORT_DEPTH_4;	/*Sequence.sl:213: PAR_QSORT_DEPTH*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_quickSortSmartByCollisionRecord_z_i_4(_SequenceL__delete_opttmp1, _SequenceL__Arg_compFunc, _SequenceL_tmp441, _SequenceL__resultConv));
}
void SequenceL__parallel_firstNonNegativeTime_0(::Sequence< SL_FLOAT > &_SequenceL__Arg_f, SL_FLOAT &_SequenceL__resultConv)
{
SL_FLOAT _SequenceL__Arg_a;
SL_FLOAT _SequenceL__Arg_b;
::Sequence< SL_FLOAT > _SequenceL_tmp495(cspace);
int _SequenceL_tmp497;
int _SequenceL_tmp507;

if ((_SequenceL__Arg_f.size() == 0))	/*advent20_working.sl:56: -1 when size(f) = 0  else a when a >= 0 and floor(a) = a and (b < 0 or a < b)  else b when b >= 0 and floor(b) = b  else -1*/
{
_SequenceL__resultConv = ((SL_FLOAT)(-1));	
}
else
{
_SequenceL__Arg_a = _SequenceL__Arg_f.head();	/*advent20_working.sl:51: head(f)*/
_SequenceL__Arg_f.tail(_SequenceL_tmp495);	/*advent20_working.sl:52: tail(f)*/
SequenceL__parallel_firstNonNegativeTime_0(_SequenceL_tmp495, _SequenceL__Arg_b);	/*advent20_working.sl:52: firstNonNegativeTime(tail(f))*/
_SequenceL_tmp495.delete_data(false);	
_SequenceL_tmp495.finished();	
_SequenceL_tmp497 = ((int) floor(_SequenceL__Arg_a));	/*advent20_working.sl:54: floor(a)*/
if ((((_SequenceL__Arg_a >= 0) && (_SequenceL_tmp497 == _SequenceL__Arg_a)) && ((_SequenceL__Arg_b < 0) || (_SequenceL__Arg_a < _SequenceL__Arg_b))))	/*advent20_working.sl:56: a when a >= 0 and floor(a) = a and (b < 0 or a < b)  else b when b >= 0 and floor(b) = b  else -1*/
{
_SequenceL__resultConv = _SequenceL__Arg_a;	/*advent20_working.sl:54: a*/
}
else
{
_SequenceL_tmp507 = ((int) floor(_SequenceL__Arg_b));	/*advent20_working.sl:55: floor(b)*/
if (((_SequenceL__Arg_b >= 0) && (_SequenceL_tmp507 == _SequenceL__Arg_b)))	/*advent20_working.sl:56: b when b >= 0 and floor(b) = b  else -1*/
{
_SequenceL__resultConv = _SequenceL__Arg_b;	/*advent20_working.sl:55: b*/
}
else
{
_SequenceL__resultConv = ((SL_FLOAT)(-1));	
}
}
}
}
void SequenceL__sl_main_nt34_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i522 = _r.begin(); _SequenceL__i522 < _e; _SequenceL__i522++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__i522 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__i522 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result35.get_ptr(_SequenceL__no_share_iter))) = (_SequenceL__Arg_element == (*(_SequenceL__Arg_list.get_ptr(_SequenceL__no_share_iter))));	/*Set.sl:8: element = list*/
}
}
}
void SequenceL__parallel_elementOf_3(SL_FLOAT _SequenceL__Arg_element, ::Sequence< SL_FLOAT > &_SequenceL__Arg_list, bool &_SequenceL__resultConv)
{
::Sequence< bool > _SequenceL_tmp521(cspace);

_SequenceL_tmp521.setSize(_SequenceL__Arg_list.size());	/*Set.sl:8: element = list*/
if (((((SL_FLOAT)(_SequenceL_tmp521.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt34_ SequenceL__sl_main_nt34__val(_SequenceL__Arg_element, _SequenceL__Arg_list, 1, _SequenceL_tmp521.size(), _SequenceL_tmp521);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt34__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__i522=1,_stop_val__SequenceL__i522=_SequenceL_tmp521.size(); _SequenceL__i522<=_stop_val__SequenceL__i522; _SequenceL__i522+=1)
{
(*(_SequenceL_tmp521.get_ptr(_SequenceL__i522))) = (_SequenceL__Arg_element == (*(_SequenceL__Arg_list.get_ptr(_SequenceL__i522))));	/*Set.sl:8: element = list*/
}
}
_SequenceL__resultConv = some(_SequenceL_tmp521);	/*Set.sl:8: some(element = list)*/
_SequenceL_tmp521.delete_data(false);	
_SequenceL_tmp521.finished();	
}
void SequenceL__sl_main_nt32_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_x = _r.begin(); _SequenceL__Index_x < _e; _SequenceL__Index_x++)
{
bool _SequenceL_tmp523;

SequenceL_elementOf_3((*(_SequenceL__Arg_newSetA.get_ptr(_SequenceL__Index_x))), _SequenceL__Arg_setB, _SequenceL_tmp523);	/*Set.sl:17: elementOf(newSetA[x], setB)*/
if (_SequenceL_tmp523)	/*Set.sl:17: newSetA[x] when elementOf(newSetA[x], setB)*/
{
(*(_SequenceL__result33.get_ptr(_SequenceL__Index_x))) = (*(_SequenceL__Arg_newSetA.get_ptr(_SequenceL__Index_x)));	/*Set.sl:17: newSetA[x]*/
_SequenceL__result33.setExistence(_SequenceL__Index_x, true);	
}
else
{
_SequenceL__result33.setExistence(_SequenceL__Index_x, false);	
}
}
}
void SequenceL__parallel_intersection_3(::Sequence< SL_FLOAT > &_SequenceL__Arg_setA, ::Sequence< SL_FLOAT > &_SequenceL__Arg_setB, ::Sequence< SL_FLOAT > &_SequenceL__resultConv)
{
::Sequence< SL_FLOAT > _SequenceL__Arg_newSetA(cspace);

remdups(_SequenceL__Arg_setA, _SequenceL__Arg_newSetA);	/*Set.sl:15: removeDups(setA)*/
_SequenceL__resultConv.setSize(_SequenceL__Arg_newSetA.size());	/*Set.sl:17: newSetA[x] when elementOf(newSetA[x], setB)*/
_SequenceL__resultConv.create_map();	
SequenceL__sl_main_nt32_ SequenceL__sl_main_nt32__val(_SequenceL__Arg_newSetA, _SequenceL__Arg_setB, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_newSetA.size() + 1, SequenceL__sl_main_nt32__val);
_SequenceL__Arg_newSetA.delete_data(false);	
_SequenceL__Arg_newSetA.finished();	
_SequenceL__resultConv.cleanup(false);	
}
void SequenceL__parallel_isAllRecord_0(::Sequence< SL_FLOAT > &_SequenceL__Arg_a, bool &_SequenceL__resultConv)
{

if ((_SequenceL__Arg_a.size() != 2))	/*advent20_working.sl:39: false when size(a) /= 2  else true when a[1] = 0 and a[2] = 0  else false*/
{
_SequenceL__resultConv = false;	/*advent20_working.sl:37: false*/
}
else
{
if ((((*(_SequenceL__Arg_a.get_ptr(1))) == 0) && ((*(_SequenceL__Arg_a.get_ptr(2))) == 0)))	/*advent20_working.sl:39: true when a[1] = 0 and a[2] = 0  else false*/
{
_SequenceL__resultConv = true;	/*advent20_working.sl:38: true*/
}
else
{
_SequenceL__resultConv = false;	/*advent20_working.sl:39: false*/
}
}
}
void SequenceL__parallel_collateDimensions_0(::Sequence< SL_FLOAT > &_SequenceL__Arg_a, ::Sequence< SL_FLOAT > &_SequenceL__Arg_b, ::Sequence< SL_FLOAT > &_SequenceL__resultConv)
{
bool _SequenceL__Arg_allB;
bool _SequenceL__Arg_allA;

SequenceL__parallel_isAllRecord_0(_SequenceL__Arg_b, _SequenceL__Arg_allB);	/*advent20_working.sl:44: isAllRecord(b)*/
if (_SequenceL__Arg_allB)	/*advent20_working.sl:47: a when allB  else b when allA  else intersection(a,b)*/
{
_SequenceL__resultConv = _SequenceL__Arg_a;	/*advent20_working.sl:45: a*/
}
else
{
SequenceL__parallel_isAllRecord_0(_SequenceL__Arg_a, _SequenceL__Arg_allA);	/*advent20_working.sl:43: isAllRecord(a)*/
if (_SequenceL__Arg_allA)	/*advent20_working.sl:47: b when allA  else intersection(a,b)*/
{
_SequenceL__resultConv = _SequenceL__Arg_b;	/*advent20_working.sl:46: b*/
}
else
{
SequenceL__parallel_intersection_3(_SequenceL__Arg_a, _SequenceL__Arg_b, _SequenceL__resultConv);	/*advent20_working.sl:47: intersection(a,b)*/
}
}
}
void SequenceL__parallel_stationary_0(SL_FLOAT _SequenceL__Arg_p, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< Empty > _SequenceL_tmp595(cspace);

if ((_SequenceL__Arg_p != 0))	/*advent20_working.sl:18: [] when p /= 0  else [0, 0]*/
{
_SequenceL_tmp595.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp595, _SequenceL__resultConv);	
_SequenceL_tmp595.delete_data(false);	
_SequenceL_tmp595.finished();	
}
else
{
_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))) = 0;	/*advent20_working.sl:18: 0*/
(*(_SequenceL__resultConv.get_ptr(2))) = 0;	/*advent20_working.sl:18: 0*/
}
}
void SequenceL__parallel_linear_0(::Sequence< SL_FLOAT > &_SequenceL__Arg_a, ::Sequence< SL_FLOAT > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL_tmp601(cspace);

if (((*(_SequenceL__Arg_a.get_ptr(2))) == 0))	/*advent20_working.sl:22: stationary(a[1]) when a[2] = 0  else [-a[1]/a[2]]*/
{
SequenceL__parallel_stationary_0((*(_SequenceL__Arg_a.get_ptr(1))), _SequenceL_tmp601);	/*advent20_working.sl:21: stationary(a[1])*/
_SequenceL_cast(_SequenceL_tmp601, _SequenceL__resultConv);	
_SequenceL_tmp601.delete_data(false);	
_SequenceL_tmp601.finished();	
}
else
{
_SequenceL__resultConv.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))) = ((-(*(_SequenceL__Arg_a.get_ptr(1)))) / (*(_SequenceL__Arg_a.get_ptr(2))));	/*advent20_working.sl:22: -a[1]/a[2]*/
}
}
void SequenceL__sl_main_nt30_::operator() (const blocked_range<int>& _r) const {
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
(*(_SequenceL__result31.get_ptr(_SequenceL__no_share_iter))) = (*(_SequenceL__Arg_a.get_ptr((*(_SequenceL_tmp608.get_ptr(_SequenceL__no_share_iter))))));	/*advent20_working.sl:29: a[[1,2]]*/
}
}
}
void SequenceL__parallel_newton_0(::Sequence< SL_FLOAT > &_SequenceL__Arg_a, ::Sequence< SL_FLOAT > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL_tmp608(cspace);
::Sequence< SL_FLOAT > _SequenceL_tmp611(cspace);
SL_FLOAT _SequenceL__Arg_d;
SL_FLOAT _SequenceL__Arg_b;
::Sequence< Empty > _SequenceL_tmp618(cspace);
SL_FLOAT _SequenceL__Arg_s;

if (((*(_SequenceL__Arg_a.get_ptr(3))) == 0))	/*advent20_working.sl:32: linear(a[[1,2]]) when a[3] = 0  else [] when d < 0  else [-b/a[3]] when d = 0  else [(-b-s)/a[3], (-b+s)/a[3]]*/
{
_SequenceL_tmp608.setSize(2 > 0 ? 2 : 0);	
(*(_SequenceL_tmp608.get_ptr(1))) = 1;	/*advent20_working.sl:29: 1*/
(*(_SequenceL_tmp608.get_ptr(2))) = 2;	/*advent20_working.sl:29: 2*/
_SequenceL_tmp611.setSize(_SequenceL_tmp608.size());	/*advent20_working.sl:29: a[[1,2]]*/
if (((((SL_FLOAT)(_SequenceL_tmp611.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt30_ SequenceL__sl_main_nt30__val(_SequenceL__Arg_a, _SequenceL_tmp608, 1, _SequenceL_tmp611.size(), _SequenceL_tmp611);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt30__val);
_SequenceL_tmp608.delete_data(false);	
_SequenceL_tmp608.finished();	
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index1=1,_stop_val__SequenceL__Index__tmp_index1=_SequenceL_tmp611.size(); _SequenceL__Index__tmp_index1<=_stop_val__SequenceL__Index__tmp_index1; _SequenceL__Index__tmp_index1+=1)
{
(*(_SequenceL_tmp611.get_ptr(_SequenceL__Index__tmp_index1))) = (*(_SequenceL__Arg_a.get_ptr((*(_SequenceL_tmp608.get_ptr(_SequenceL__Index__tmp_index1))))));	/*advent20_working.sl:29: a[[1,2]]*/
}
_SequenceL_tmp608.delete_data(false);	
_SequenceL_tmp608.finished();	
}
SequenceL__parallel_linear_0(_SequenceL_tmp611, _SequenceL__resultConv);	/*advent20_working.sl:29: linear(a[[1,2]])*/
_SequenceL_tmp611.delete_data(false);	
_SequenceL_tmp611.finished();	
}
else
{
_SequenceL__Arg_b = ((*(_SequenceL__Arg_a.get_ptr(2))) + ((*(_SequenceL__Arg_a.get_ptr(3))) / 2));	/*advent20_working.sl:26: a[2] + a[3]/2*/
_SequenceL__Arg_d = ((_SequenceL__Arg_b * _SequenceL__Arg_b) - ((2 * (*(_SequenceL__Arg_a.get_ptr(3)))) * (*(_SequenceL__Arg_a.get_ptr(1)))));	/*advent20_working.sl:27: b*b - 2*a[3]*a[1]*/
if ((_SequenceL__Arg_d < 0))	/*advent20_working.sl:32: [] when d < 0  else [-b/a[3]] when d = 0  else [(-b-s)/a[3], (-b+s)/a[3]]*/
{
_SequenceL_tmp618.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp618, _SequenceL__resultConv);	
_SequenceL_tmp618.delete_data(false);	
_SequenceL_tmp618.finished();	
}
else
{
if ((_SequenceL__Arg_d == 0))	/*advent20_working.sl:32: [-b/a[3]] when d = 0  else [(-b-s)/a[3], (-b+s)/a[3]]*/
{
_SequenceL__resultConv.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))) = ((-_SequenceL__Arg_b) / (*(_SequenceL__Arg_a.get_ptr(3))));	/*advent20_working.sl:31: -b/a[3]*/
}
else
{
_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
_SequenceL__Arg_s = sqrt(_SequenceL__Arg_d);	/*advent20_working.sl:28: sqrt(d)*/
(*(_SequenceL__resultConv.get_ptr(1))) = (((-_SequenceL__Arg_b) - _SequenceL__Arg_s) / (*(_SequenceL__Arg_a.get_ptr(3))));	/*advent20_working.sl:32: (-b-s)/a[3]*/
(*(_SequenceL__resultConv.get_ptr(2))) = (((-_SequenceL__Arg_b) + _SequenceL__Arg_s) / (*(_SequenceL__Arg_a.get_ptr(3))));	/*advent20_working.sl:32: (-b+s)/a[3]*/
}
}
}
}
void SequenceL__sl_main_nt27_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i632 = _r.begin(); _SequenceL__i632 < _e; _SequenceL__i632++)
{

(*(_SequenceL__result28.get_ptr(_SequenceL__i632))).setSize((*((*(_SequenceL__Arg_pair.get_ptr(1))).get_ptr(_SequenceL__i632))).size());	/*advent20_working.sl:60: pair[1] - pair[2]*/
SIMD_DIRECTIVE
for (int _SequenceL__i633=1,_stop_val__SequenceL__i633=(*(_SequenceL__result28.get_ptr(_SequenceL__i632))).size(); _SequenceL__i633<=_stop_val__SequenceL__i633; _SequenceL__i633+=1)
{
(*((*(_SequenceL__result28.get_ptr(_SequenceL__i632))).get_ptr(_SequenceL__i633))) = ((*((*((*(_SequenceL__Arg_pair.get_ptr(1))).get_ptr(_SequenceL__i632))).get_ptr(_SequenceL__i633))) - (*((*((*(_SequenceL__Arg_pair.get_ptr(2))).get_ptr(_SequenceL__i632))).get_ptr(_SequenceL__i633))));	/*advent20_working.sl:60: pair[1] - pair[2]*/
}
SequenceL_newton_0((*(_SequenceL__result28.get_ptr(_SequenceL__i632))), (*(_SequenceL__result29.get_ptr(_SequenceL__i632))));	/*advent20_working.sl:61: newton(diffs)*/
}
}
void SequenceL__parallel_firstCollision_0(::Sequence< ::Sequence< ::Sequence< SL_FLOAT > > > &_SequenceL__Arg_pair, ::Sequence< int > &_SequenceL__Arg_points, int _SequenceL__ex_iter, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
SL_FLOAT _SequenceL__Arg_t;
::Sequence< SL_FLOAT > _SequenceL__Arg_collisionTimes(cspace);
::Sequence< ::Sequence< SL_FLOAT > > _SequenceL__Arg_diffs(cspace);
::Sequence< ::Sequence< SL_FLOAT > > _SequenceL__Arg_roots(cspace);
::Sequence< SL_FLOAT > _SequenceL_tmp635(cspace);

_SequenceL__Arg_diffs.setSize((*(_SequenceL__Arg_pair.get_ptr(1))).size());	/*advent20_working.sl:60: pair[1] - pair[2]*/
_SequenceL__Arg_roots.setSize(_SequenceL__Arg_diffs.size());	/*advent20_working.sl:61: newton(diffs)*/
if (((((SL_FLOAT)(_SequenceL__Arg_diffs.size() - 1)) * ((-1 + ((((_SequenceL__Arg_pair.size() > 0) ? (*(_SequenceL__Arg_pair.get_ptr(1))).size() : 0) > 0) ? (*((*(_SequenceL__Arg_pair.get_ptr(1))).get_ptr(1))).size() : 0)) + 1000)) > (sl_get_num_units() * ((WORK_SHARE_VALUE * WORK_SHARE_VALUE) * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt27_ SequenceL__sl_main_nt27__val(_SequenceL__Arg_pair, _SequenceL__Arg_diffs, _SequenceL__Arg_roots);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_diffs.size() + 1, SequenceL__sl_main_nt27__val);
_SequenceL__Arg_diffs.delete_data(false);	
_SequenceL__Arg_diffs.finished();	
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__i632=1,_stop_val__SequenceL__i632=_SequenceL__Arg_diffs.size(); _SequenceL__i632<=_stop_val__SequenceL__i632; _SequenceL__i632+=1)
{
(*(_SequenceL__Arg_diffs.get_ptr(_SequenceL__i632))).setSize((*((*(_SequenceL__Arg_pair.get_ptr(1))).get_ptr(_SequenceL__i632))).size());	/*advent20_working.sl:60: pair[1] - pair[2]*/
SIMD_DIRECTIVE
for (int _SequenceL__i633=1,_stop_val__SequenceL__i633=(*(_SequenceL__Arg_diffs.get_ptr(_SequenceL__i632))).size(); _SequenceL__i633<=_stop_val__SequenceL__i633; _SequenceL__i633+=1)
{
(*((*(_SequenceL__Arg_diffs.get_ptr(_SequenceL__i632))).get_ptr(_SequenceL__i633))) = ((*((*((*(_SequenceL__Arg_pair.get_ptr(1))).get_ptr(_SequenceL__i632))).get_ptr(_SequenceL__i633))) - (*((*((*(_SequenceL__Arg_pair.get_ptr(2))).get_ptr(_SequenceL__i632))).get_ptr(_SequenceL__i633))));	/*advent20_working.sl:60: pair[1] - pair[2]*/
}
SequenceL_newton_0((*(_SequenceL__Arg_diffs.get_ptr(_SequenceL__i632))), (*(_SequenceL__Arg_roots.get_ptr(_SequenceL__i632))));	/*advent20_working.sl:61: newton(diffs)*/
}
_SequenceL__Arg_diffs.delete_data(false);	
_SequenceL__Arg_diffs.finished();	
}
SequenceL__parallel_collateDimensions_0((*(_SequenceL__Arg_roots.get_ptr(2))), (*(_SequenceL__Arg_roots.get_ptr(3))), _SequenceL_tmp635);	/*advent20_working.sl:62: collateDimensions(roots[2], roots[3])*/
SequenceL__parallel_collateDimensions_0((*(_SequenceL__Arg_roots.get_ptr(1))), _SequenceL_tmp635, _SequenceL__Arg_collisionTimes);	/*advent20_working.sl:62: collateDimensions(roots[1], collateDimensions(roots[2], roots[3]))*/
_SequenceL_tmp635.delete_data(false);	
_SequenceL__Arg_roots.delete_data(false);	
_SequenceL_tmp635.finished();	
_SequenceL__Arg_roots.finished();	
SequenceL__parallel_firstNonNegativeTime_0(_SequenceL__Arg_collisionTimes, _SequenceL__Arg_t);	/*advent20_working.sl:63: firstNonNegativeTime(collisionTimes)*/
_SequenceL__Arg_collisionTimes.delete_data(false);	
_SequenceL__Arg_collisionTimes.finished();	
if ((_SequenceL__Arg_t >= 0))	/*advent20_working.sl:64: (t: t, a: points[1], b: points[2]) when t >= 0*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__ex_iter))).t = _SequenceL__Arg_t;	/*advent20_working.sl:64: t*/
(*(_SequenceL__resultConv.get_ptr(_SequenceL__ex_iter))).a = (*(_SequenceL__Arg_points.get_ptr(1)));	/*advent20_working.sl:64: points[1]*/
(*(_SequenceL__resultConv.get_ptr(_SequenceL__ex_iter))).b = (*(_SequenceL__Arg_points.get_ptr(2)));	/*advent20_working.sl:64: points[2]*/
_SequenceL__resultConv.setExistence(_SequenceL__ex_iter, true);	
}
else
{
_SequenceL__resultConv.setExistence(_SequenceL__ex_iter, false);	
}
}
void SequenceL__sl_main_nt25_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
::Sequence< ::Sequence< ::Sequence< SL_FLOAT > > > _SequenceL_tmp637(cspace);

_SequenceL_tmp637.setSize((*(_SequenceL__Arg_pairs.get_ptr(_SequenceL__Index_i))).size());	/*advent20_working.sl:66: axes[pairs[i]]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index2=1,_stop_val__SequenceL__Index__tmp_index2=_SequenceL_tmp637.size(); _SequenceL__Index__tmp_index2<=_stop_val__SequenceL__Index__tmp_index2; _SequenceL__Index__tmp_index2+=1)
{
(*(_SequenceL_tmp637.get_ptr(_SequenceL__Index__tmp_index2))) = (*(_SequenceL__Arg_axes.get_ptr((*((*(_SequenceL__Arg_pairs.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index__tmp_index2))))));	/*advent20_working.sl:66: axes[pairs[i]]*/
}
SequenceL_firstCollision_0(_SequenceL_tmp637, (*(_SequenceL__Arg_pairs.get_ptr(_SequenceL__Index_i))), _SequenceL__Index_i, _SequenceL__result26);	/*advent20_working.sl:66: firstCollision(axes[pairs[i]], pairs[i])*/
}
}
void SequenceL__parallel_findCollisions_0(::Sequence< ::Sequence< ::Sequence< SL_FLOAT > > > &_SequenceL__Arg_axes, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_pairs, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::Sequence< ::Sequence< ::Sequence< SL_FLOAT > > > _SequenceL_tmp637(cspace);

_SequenceL__resultConv.setSize(_SequenceL__Arg_pairs.size());	/*advent20_working.sl:66: firstCollision(axes[pairs[i]], pairs[i])*/
_SequenceL__resultConv.create_map();	
if (((((SL_FLOAT)(_SequenceL__Arg_pairs.size() - 1)) * ((-1 + ((_SequenceL__Arg_pairs.size() > 0) ? (*(_SequenceL__Arg_pairs.get_ptr(1))).size() : 0)) + 1000)) > (sl_get_num_units() * ((WORK_SHARE_VALUE * WORK_SHARE_VALUE) * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt25_ SequenceL__sl_main_nt25__val(_SequenceL__Arg_pairs, _SequenceL__Arg_axes, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_pairs.size() + 1, SequenceL__sl_main_nt25__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_pairs.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
_SequenceL_tmp637.setSize((*(_SequenceL__Arg_pairs.get_ptr(_SequenceL__Index_i))).size());	/*advent20_working.sl:66: axes[pairs[i]]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index2=1,_stop_val__SequenceL__Index__tmp_index2=_SequenceL_tmp637.size(); _SequenceL__Index__tmp_index2<=_stop_val__SequenceL__Index__tmp_index2; _SequenceL__Index__tmp_index2+=1)
{
(*(_SequenceL_tmp637.get_ptr(_SequenceL__Index__tmp_index2))) = (*(_SequenceL__Arg_axes.get_ptr((*((*(_SequenceL__Arg_pairs.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index__tmp_index2))))));	/*advent20_working.sl:66: axes[pairs[i]]*/
}
SequenceL_firstCollision_0(_SequenceL_tmp637, (*(_SequenceL__Arg_pairs.get_ptr(_SequenceL__Index_i))), _SequenceL__Index_i, _SequenceL__resultConv);	/*advent20_working.sl:66: firstCollision(axes[pairs[i]], pairs[i])*/
}
_SequenceL_tmp637.delete_data(false);	
_SequenceL_tmp637.finished();	
}
_SequenceL__resultConv.cleanup(false);	
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
(*(_SequenceL__result24.get_ptr(_SequenceL__no_share_iter))) = _SequenceL__Arg_element;	/*Sequence.sl:91: element*/
}
}
}
void SequenceL__parallel_duplicate_4(int _SequenceL__Arg_element, int _SequenceL__Arg_times, ::Sequence< int > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_times > 0 ? _SequenceL__Arg_times : 0);	/*Sequence.sl:91: element*/
if (((((SL_FLOAT)(_SequenceL__Arg_times - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt23_ SequenceL__sl_main_nt23__val(_SequenceL__Arg_element, 1, _SequenceL__Arg_times, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt23__val);
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
::Sequence< ::Sequence< int > > _SequenceL_tmp658(cspace);
int _SequenceL_tmp660;
::Sequence< ::Sequence< int > > _SequenceL_tmp667(cspace);
int _SequenceL_tmp666;

_SequenceL_tmp658.setSize(2 > 0 ? 2 : 0);	
_SequenceL_tmp660 = (_SequenceL__Arg_n - 1);	/*advent20_working.sl:69: n-1*/
SequenceL__parallel_duplicate_4(_SequenceL__Arg_n, _SequenceL_tmp660, (*(_SequenceL_tmp658.get_ptr(1))));	/*advent20_working.sl:69: duplicate(n, (n-1))*/
_SequenceL_parallel__ellipsis(1, (_SequenceL__Arg_n - 1), __LINE__, (*(_SequenceL_tmp658.get_ptr(2))));	/*advent20_working.sl:69: 1 ... (n - 1)*/
_SequenceL_parallel_transpose(_SequenceL_tmp658, __LINE__, _SequenceL__Arg_npairs);	/*advent20_working.sl:69: transpose([duplicate(n, (n-1)), 1 ... (n - 1)])*/
_SequenceL_tmp658.delete_data(false);	
_SequenceL_tmp658.finished();	
if ((_SequenceL__Arg_n == 2))	/*advent20_working.sl:71: npairs when n = 2  else npairs ++ distinctPairs(n - 1)*/
{
_SequenceL__resultConv = _SequenceL__Arg_npairs;	/*advent20_working.sl:70: npairs*/
_SequenceL__Arg_npairs.delete_data(false);	
_SequenceL__Arg_npairs.finished();	
}
else
{
_SequenceL_tmp666 = (_SequenceL__Arg_n - 1);	/*advent20_working.sl:71: n - 1*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_distinctPairs_i_0(_SequenceL_tmp666, _SequenceL_tmp667));
append(_SequenceL__Arg_npairs, _SequenceL_tmp667, _SequenceL__resultConv);	/*advent20_working.sl:71: npairs ++ distinctPairs(n - 1)*/
_SequenceL__Arg_npairs.delete_data(false);	
_SequenceL_tmp667.delete_data(false);	
_SequenceL_tmp667.finished();	
_SequenceL__Arg_npairs.finished();	
}
}
void SequenceL__sl_main_nt19_::operator() (const blocked_range<int>& _r) const {
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
(*(_SequenceL__result20.get_ptr(_SequenceL__no_share_iter))) = (*((*(_SequenceL__Arg_v.get_ptr(_SequenceL__no_share_iter))).get_ptr(1)));	/*advent20_working.sl:15: v[all, 1]*/
(*(_SequenceL__result21.get_ptr(_SequenceL__no_share_iter))) = (*((*(_SequenceL__Arg_v.get_ptr(_SequenceL__no_share_iter))).get_ptr(2)));	/*advent20_working.sl:15: v[all, 2]*/
(*(_SequenceL__result22.get_ptr(_SequenceL__no_share_iter))) = (*((*(_SequenceL__Arg_v.get_ptr(_SequenceL__no_share_iter))).get_ptr(3)));	/*advent20_working.sl:15: v[all, 3]*/
}
}
}
void SequenceL__parallel_getAxes_0(::Sequence< ::Sequence< int > > &_SequenceL__Arg_v, ::Sequence< ::Sequence< int > > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(3 > 0 ? 3 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))).setSize(_SequenceL__Arg_v.size());	/*advent20_working.sl:15: v[all, 1]*/
(*(_SequenceL__resultConv.get_ptr(2))).setSize(_SequenceL__Arg_v.size());	/*advent20_working.sl:15: v[all, 2]*/
(*(_SequenceL__resultConv.get_ptr(3))).setSize(_SequenceL__Arg_v.size());	/*advent20_working.sl:15: v[all, 3]*/
if (((((SL_FLOAT)(_SequenceL__Arg_v.size() - 1)) * 3) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt19_ SequenceL__sl_main_nt19__val(_SequenceL__Arg_v, 1, _SequenceL__Arg_v.size(), (*(_SequenceL__resultConv.get_ptr(1))), (*(_SequenceL__resultConv.get_ptr(2))), (*(_SequenceL__resultConv.get_ptr(3))));
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt19__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index1=1,_stop_val__SequenceL__Index__tmp_index1=_SequenceL__Arg_v.size(); _SequenceL__Index__tmp_index1<=_stop_val__SequenceL__Index__tmp_index1; _SequenceL__Index__tmp_index1+=1)
{
(*((*(_SequenceL__resultConv.get_ptr(1))).get_ptr(_SequenceL__Index__tmp_index1))) = (*((*(_SequenceL__Arg_v.get_ptr(_SequenceL__Index__tmp_index1))).get_ptr(1)));	/*advent20_working.sl:15: v[all, 1]*/
(*((*(_SequenceL__resultConv.get_ptr(2))).get_ptr(_SequenceL__Index__tmp_index1))) = (*((*(_SequenceL__Arg_v.get_ptr(_SequenceL__Index__tmp_index1))).get_ptr(2)));	/*advent20_working.sl:15: v[all, 2]*/
(*((*(_SequenceL__resultConv.get_ptr(3))).get_ptr(_SequenceL__Index__tmp_index1))) = (*((*(_SequenceL__Arg_v.get_ptr(_SequenceL__Index__tmp_index1))).get_ptr(3)));	/*advent20_working.sl:15: v[all, 3]*/
}
}
}
void SequenceL__parallel_integerPowerHelper_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int _SequenceL__Arg_val, int &_SequenceL__resultConv)
{
int _SequenceL___Arg_y_tco;
int _SequenceL___Arg_val_tco;
int _SequenceL_tmp708;
int _SequenceL_tmp709;

_SequenceL___Arg_y_tco = _SequenceL__Arg_y;	
_SequenceL___Arg_val_tco = _SequenceL__Arg_val;	
_parallel_integerPowerHelper_Math_label_tco:	
if ((_SequenceL___Arg_y_tco < 1))	/*Math.sl:20: val when y < 1	else		integerPowerHelper(x, y - 1, val * x)*/
{
_SequenceL__resultConv = _SequenceL___Arg_val_tco;	/*Math.sl:18: val*/
}
else
{
_SequenceL_tmp708 = (_SequenceL___Arg_y_tco - 1);	/*Math.sl:20: y - 1*/
_SequenceL_tmp709 = (_SequenceL___Arg_val_tco * _SequenceL__Arg_x);	/*Math.sl:20: val * x*/
_SequenceL___Arg_y_tco = _SequenceL_tmp708;	
_SequenceL___Arg_val_tco = _SequenceL_tmp709;	
goto _parallel_integerPowerHelper_Math_label_tco;	/*Math.sl:20: integerPowerHelper(x, y - 1, val * x)*/
}
}
void SequenceL__parallel_integerPower_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv)
{

SequenceL__parallel_integerPowerHelper_5(_SequenceL__Arg_x, _SequenceL__Arg_y, 1, _SequenceL__resultConv);	/*Math.sl:14: integerPowerHelper(x, y, 1)*/
}
void SequenceL__parallel_charToInt_6(char _SequenceL__Arg_char, int &_SequenceL__resultConv)
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
void SequenceL__sl_main_nt17_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
int _SequenceL_tmp770;
int _SequenceL__Arg_place;
int _SequenceL_tmp771;

SequenceL_charToInt_6((*(_SequenceL__Arg_numString.get_ptr(_SequenceL__Index_i))), _SequenceL_tmp770);	/*Conversion.sl:60: charToInt(numString[i])*/
_SequenceL_tmp771 = (_SequenceL__Arg_numString.size() - _SequenceL__Index_i);	/*Conversion.sl:58: size(numString) - i*/
SequenceL_integerPower_5(10, _SequenceL_tmp771, _SequenceL__Arg_place);	/*Conversion.sl:58: integerPower(10, (size(numString) - i))*/
(*(_SequenceL__result18.get_ptr(_SequenceL__Index_i))) = (_SequenceL_tmp770 * _SequenceL__Arg_place);	/*Conversion.sl:60: charToInt(numString[i]) * place*/
}
}
void SequenceL__parallel_atoIWorker_6(::Sequence< char > &_SequenceL__Arg_numString, ::Sequence< int > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_numString.size());	/*Conversion.sl:60: charToInt(numString[i]) * place*/
SequenceL__sl_main_nt17_ SequenceL__sl_main_nt17__val(_SequenceL__Arg_numString, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_numString.size() + 1, SequenceL__sl_main_nt17__val);
}
void SequenceL__parallel_take_4(::Sequence< char > &_SequenceL__Arg_list, int _SequenceL__Arg_n, ::Sequence< char > &_SequenceL__resultConv)
{

_SequenceL__Arg_list.sub_seq(1, _SequenceL__Arg_n, _SequenceL__resultConv);	/*Sequence.sl:174: list[1 ... n]*/
}
void SequenceL__parallel_isDigit_2(char _SequenceL__Arg_char, bool &_SequenceL__resultConv)
{

_SequenceL__resultConv = ((((((((((_SequenceL__Arg_char == '0') || (_SequenceL__Arg_char == '1')) || (_SequenceL__Arg_char == '2')) || (_SequenceL__Arg_char == '3')) || (_SequenceL__Arg_char == '4')) || (_SequenceL__Arg_char == '5')) || (_SequenceL__Arg_char == '6')) || (_SequenceL__Arg_char == '7')) || (_SequenceL__Arg_char == '8')) || (_SequenceL__Arg_char == '9'));	/*String.sl:20: char = '0' or char = '1' or char = '2' or char = '3' or char = '4' or char = '5' or char = '6' or char = '7' or char = '8' or char = '9'*/
}
void SequenceL__parallel_trimNonNumeric_6(::Sequence< char > &_SequenceL__Arg_numString, int _SequenceL__Arg_i, ::Sequence< char > &_SequenceL__resultConv)
{
int _SequenceL___Arg_i_tco;
bool _SequenceL_tmp847;
int _SequenceL_tmp850;
int _SequenceL_tmp852;

_SequenceL___Arg_i_tco = _SequenceL__Arg_i;	
_parallel_trimNonNumeric_Conversion_label_tco:	
if ((_SequenceL___Arg_i_tco > _SequenceL__Arg_numString.size()))	/*Conversion.sl:53: numString when i > size(numString)	else		take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL__resultConv = _SequenceL__Arg_numString;	/*Conversion.sl:49: numString*/
}
else
{
SequenceL__parallel_isDigit_2((*(_SequenceL__Arg_numString.get_ptr(_SequenceL___Arg_i_tco))), _SequenceL_tmp847);	/*Conversion.sl:52: isDigit(numString[i])*/
if (!_SequenceL_tmp847)	/*Conversion.sl:53: take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL_tmp850 = (_SequenceL___Arg_i_tco - 1);	/*Conversion.sl:51: i-1*/
SequenceL__parallel_take_4(_SequenceL__Arg_numString, _SequenceL_tmp850, _SequenceL__resultConv);	/*Conversion.sl:51: take(numString, i-1)*/
}
else
{
_SequenceL_tmp852 = (_SequenceL___Arg_i_tco + 1);	/*Conversion.sl:53: i + 1*/
_SequenceL___Arg_i_tco = _SequenceL_tmp852;	
goto _parallel_trimNonNumeric_Conversion_label_tco;	/*Conversion.sl:53: trimNonNumeric(numString, i + 1)*/
}
}
}
void SequenceL__parallel_isWhiteSpace_2(char _SequenceL__Arg_input, bool &_SequenceL__resultConv)
{

_SequenceL__resultConv = ((((_SequenceL__Arg_input == ' ') || (_SequenceL__Arg_input == '\n')) || (_SequenceL__Arg_input == '\t')) || (_SequenceL__Arg_input == '\r'));	/*String.sl:16: input = ' ' or input = '\n' or input = '\t' or input = '\r'*/
}
void SequenceL__parallel_trimStart_2(::Sequence< char > &_SequenceL__Arg_input, ::Sequence< char > &_SequenceL__resultConv)
{
::Sequence< char > _SequenceL___Arg_input_tco(cspace);
bool _SequenceL_tmp929;
char _SequenceL_tmp928;
::Sequence< char > _SequenceL_tmp931(cspace);

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
_SequenceL_tmp928 = _SequenceL___Arg_input_tco.head();	/*String.sl:10: head(input)*/
SequenceL__parallel_isWhiteSpace_2(_SequenceL_tmp928, _SequenceL_tmp929);	/*String.sl:11: isWhiteSpace(head(input))*/
if (_SequenceL_tmp929)	/*String.sl:12: trimStart(tail(input)) when isWhiteSpace(head(input))	else		input*/
{
_SequenceL___Arg_input_tco.tail(_SequenceL_tmp931);	/*String.sl:10: tail(input)*/
_swap(_SequenceL___Arg_input_tco, _SequenceL_tmp931);	
goto _parallel_trimStart_String_label_tco;	/*String.sl:10: trimStart(tail(input))*/
}
else
{
_SequenceL__resultConv = _SequenceL___Arg_input_tco;	/*String.sl:12: input*/
}
}
_SequenceL_tmp931.delete_data(false);	
_SequenceL_tmp931.finished();	
}
void SequenceL__parallel_stringToInt_6(::Sequence< char > &_SequenceL__Arg_numString, int &_SequenceL__resultConv)
{
::Sequence< char > _SequenceL__Arg_trimmed(cspace);
char _SequenceL_tmp936;
int _SequenceL_tmp940;
::Sequence< char > _SequenceL_tmp939(cspace);
char _SequenceL_tmp942;
::Sequence< char > _SequenceL_tmp945(cspace);
::Sequence< int > _SequenceL_tmp947(cspace);
::Sequence< char > _SequenceL__Arg_justNumber(cspace);

SequenceL__parallel_trimStart_2(_SequenceL__Arg_numString, _SequenceL__Arg_trimmed);	/*Conversion.sl:36: trimStart(numString)*/
if ((_SequenceL__Arg_trimmed.size() == 0))	/*Conversion.sl:45: 0 when size(trimmed) = 0	else		- stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__resultConv = 0;	/*Conversion.sl:39: 0*/
_SequenceL__Arg_trimmed.delete_data(false);	
_SequenceL__Arg_trimmed.finished();	
}
else
{
_SequenceL_tmp936 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:41: head(trimmed)*/
if ((_SequenceL_tmp936 == '-'))	/*Conversion.sl:45: - stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp939);	/*Conversion.sl:41: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(false);	
_SequenceL__Arg_trimmed.finished();	
SequenceL__parallel_stringToInt_6(_SequenceL_tmp939, _SequenceL_tmp940);	/*Conversion.sl:41: stringToInt(tail(trimmed))*/
_SequenceL_tmp939.delete_data(false);	
_SequenceL_tmp939.finished();	
_SequenceL__resultConv = (-_SequenceL_tmp940);	/*Conversion.sl:41: - stringToInt(tail(trimmed))*/
}
else
{
_SequenceL_tmp942 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:43: head(trimmed)*/
if ((_SequenceL_tmp942 == '+'))	/*Conversion.sl:45: stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp945);	/*Conversion.sl:43: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(false);	
_SequenceL__Arg_trimmed.finished();	
SequenceL__parallel_stringToInt_6(_SequenceL_tmp945, _SequenceL__resultConv);	/*Conversion.sl:43: stringToInt(tail(trimmed))*/
_SequenceL_tmp945.delete_data(false);	
_SequenceL_tmp945.finished();	
}
else
{
SequenceL__parallel_trimNonNumeric_6(_SequenceL__Arg_trimmed, 1, _SequenceL__Arg_justNumber);	/*Conversion.sl:37: trimNonNumeric(trimmed, 1)*/
_SequenceL__Arg_trimmed.delete_data(false);	
_SequenceL__Arg_trimmed.finished();	
SequenceL__parallel_atoIWorker_6(_SequenceL__Arg_justNumber, _SequenceL_tmp947);	/*Conversion.sl:45: atoIWorker(justNumber)*/
_SequenceL__Arg_justNumber.delete_data(false);	
_SequenceL__Arg_justNumber.finished();	
_SequenceL__resultConv = _SequenceL_parallel_sum(_SequenceL_tmp947, __LINE__);	/*Conversion.sl:45: sum(atoIWorker(justNumber))*/
_SequenceL_tmp947.delete_data(false);	
_SequenceL_tmp947.finished();	
}
}
}
}
void SequenceL__sl_main_nt15_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{

(*(_SequenceL__result16.get_ptr(_SequenceL__Index_i))).setSize((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__Index_i))).size());	/*Sequence.sl:45: list[indexes[i]]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index2=1,_stop_val__SequenceL__Index__tmp_index2=(*(_SequenceL__result16.get_ptr(_SequenceL__Index_i))).size(); _SequenceL__Index__tmp_index2<=_stop_val__SequenceL__Index__tmp_index2; _SequenceL__Index__tmp_index2+=1)
{
(*((*(_SequenceL__result16.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index__tmp_index2))) = (*(_SequenceL__Arg_list.get_ptr((*((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index__tmp_index2))))));	/*Sequence.sl:45: list[indexes[i]]*/
}
}
}
void SequenceL__parallel_multipleIndexes_4(::Sequence< char > &_SequenceL__Arg_list, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_indexes, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:45: list[indexes[i]]*/
if (((((SL_FLOAT)(_SequenceL__Arg_indexes.size() - 1)) * (-1 + ((_SequenceL__Arg_indexes.size() > 0) ? (*(_SequenceL__Arg_indexes.get_ptr(1))).size() : 0))) > (sl_get_num_units() * ((WORK_SHARE_VALUE * WORK_SHARE_VALUE) * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt15_ SequenceL__sl_main_nt15__val(_SequenceL__Arg_indexes, _SequenceL__Arg_list, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_indexes.size() + 1, SequenceL__sl_main_nt15__val);
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
void SequenceL__sl_main_nt13_::operator() (const blocked_range<int>& _r) const {
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
(*(_SequenceL__result14.get_ptr(_SequenceL__no_share_iter))) = _SequenceL__no_share_iter;	
_SequenceL__result14.setExistence(_SequenceL__no_share_iter, true);	
}
else
{
_SequenceL__result14.setExistence(_SequenceL__no_share_iter, false);	
}
}
}
}
void SequenceL__parallel_indexesOf_4(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_element, ::Sequence< int > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_list.size());	/*Sequence.sl:41: i when list[i] = element*/
_SequenceL__resultConv.create_map();	
if (((((SL_FLOAT)(_SequenceL__Arg_list.size() - 1)) * 3) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt13_ SequenceL__sl_main_nt13__val(_SequenceL__Arg_list, _SequenceL__Arg_element, 1, _SequenceL__Arg_list.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt13__val);
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
void SequenceL__sl_main_nt11_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i985 = _r.begin(); _SequenceL__i985 < _e; _SequenceL__i985++)
{
::Sequence< char > _SequenceL__delete_opttmp1(cspace);

(*(_SequenceL_tmp984.get_ptr(_SequenceL__i985))).clone(_SequenceL__delete_opttmp1);	/*advent20_working.sl:13: stringToInt(split(s[4 ... (size(s) - 1)], ','))*/
SequenceL_stringToInt_6(_SequenceL__delete_opttmp1, (*(_SequenceL__result12.get_ptr(_SequenceL__i985))));	/*advent20_working.sl:13: stringToInt(split(s[4 ... (size(s) - 1)], ','))*/
_SequenceL__delete_opttmp1.finished();	
}
}
void SequenceL__parallel_extractVals_0(::Sequence< char > &_SequenceL__Arg_s, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< ::Sequence< char > > _SequenceL_tmp984(cspace);
::Sequence< char > _SequenceL_tmp983(cspace);

_SequenceL__Arg_s.sub_seq(4, (_SequenceL__Arg_s.size() - 1), _SequenceL_tmp983);	/*advent20_working.sl:13: s[4 ... (size(s) - 1)]*/
SequenceL__parallel_split_4(_SequenceL_tmp983, ',', _SequenceL_tmp984);	/*advent20_working.sl:13: split(s[4 ... (size(s) - 1)], ',')*/
_SequenceL_tmp983.delete_data(false);	
_SequenceL_tmp983.finished();	
_SequenceL__resultConv.setSize(_SequenceL_tmp984.size());	/*advent20_working.sl:13: stringToInt(split(s[4 ... (size(s) - 1)], ','))*/
SequenceL__sl_main_nt11_ SequenceL__sl_main_nt11__val(_SequenceL_tmp984, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__resultConv.size() + 1, SequenceL__sl_main_nt11__val);
_SequenceL_tmp984.delete_data(false);	
_SequenceL_tmp984.finished();	
}
void SequenceL__sl_main_nt5_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i992 = _r.begin(); _SequenceL__i992 < _e; _SequenceL__i992++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__i992 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__i992 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result6.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__no_share_iter))) + 1);	/*Sequence.sl:54: indexes + 1*/
}
}
}
void SequenceL__sl_main_nt7_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i995 = _r.begin(); _SequenceL__i995 < _e; _SequenceL__i995++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__i995 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__i995 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result8.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__no_share_iter))) - 1);	/*Sequence.sl:54: indexes - 1*/
}
}
}
void SequenceL__sl_main_nt9_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i1000 = _r.begin(); _SequenceL__i1000 < _e; _SequenceL__i1000++)
{

ellipsis((*(_SequenceL_tmp993.get_ptr(_SequenceL__i1000))), (*(_SequenceL_tmp998.get_ptr(_SequenceL__i1000))), (*(_SequenceL__result10.get_ptr(_SequenceL__i1000))));	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
}
}
void SequenceL__parallel_split_4(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_delimiter, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv)
{
::Sequence< Empty > _SequenceL_tmp987(cspace);
::Sequence< int > _SequenceL_tmp993(cspace);
::Sequence< int > _SequenceL_tmp989(cspace);
::Sequence< int > _SequenceL__Arg_indexes(cspace);
::Sequence< int > _SequenceL_tmp991(cspace);
::Sequence< int > _SequenceL_tmp998(cspace);
::Sequence< int > _SequenceL_tmp994(cspace);
::Sequence< int > _SequenceL_tmp996(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp999(cspace);

if ((_SequenceL__Arg_list.size() == 0))	/*Sequence.sl:54: [] when size(list) = 0	else		multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
{
_SequenceL_tmp987.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp987, _SequenceL__resultConv);	
_SequenceL_tmp987.delete_data(false);	
_SequenceL_tmp987.finished();	
_SequenceL_tmp999.delete_data(false);	
_SequenceL_tmp999.finished();	
}
else
{
_SequenceL_tmp989.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp989.get_ptr(1))) = 1;	/*Sequence.sl:54: 1*/
SequenceL__parallel_indexesOf_4(_SequenceL__Arg_list, _SequenceL__Arg_delimiter, _SequenceL__Arg_indexes);	/*Sequence.sl:50: indexesOf(list, delimiter)*/
_SequenceL_tmp991.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes + 1*/
if (((((SL_FLOAT)(_SequenceL_tmp991.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt5_ SequenceL__sl_main_nt5__val(_SequenceL__Arg_indexes, 1, _SequenceL_tmp991.size(), _SequenceL_tmp991);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt5__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__i992=1,_stop_val__SequenceL__i992=_SequenceL_tmp991.size(); _SequenceL__i992<=_stop_val__SequenceL__i992; _SequenceL__i992+=1)
{
(*(_SequenceL_tmp991.get_ptr(_SequenceL__i992))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i992))) + 1);	/*Sequence.sl:54: indexes + 1*/
}
}
append(_SequenceL_tmp989, _SequenceL_tmp991, _SequenceL_tmp993);	/*Sequence.sl:54: [1] ++ (indexes + 1)*/
_SequenceL_tmp989.delete_data(false);	
_SequenceL_tmp991.delete_data(false);	
_SequenceL_tmp991.finished();	
_SequenceL_tmp989.finished();	
_SequenceL_tmp994.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes - 1*/
if (((((SL_FLOAT)(_SequenceL_tmp994.size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt7_ SequenceL__sl_main_nt7__val(_SequenceL__Arg_indexes, 1, _SequenceL_tmp994.size(), _SequenceL_tmp994);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt7__val);
_SequenceL__Arg_indexes.delete_data(false);	
_SequenceL__Arg_indexes.finished();	
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__i995=1,_stop_val__SequenceL__i995=_SequenceL_tmp994.size(); _SequenceL__i995<=_stop_val__SequenceL__i995; _SequenceL__i995+=1)
{
(*(_SequenceL_tmp994.get_ptr(_SequenceL__i995))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i995))) - 1);	/*Sequence.sl:54: indexes - 1*/
}
_SequenceL__Arg_indexes.delete_data(false);	
_SequenceL__Arg_indexes.finished();	
}
_SequenceL_tmp996.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp996.get_ptr(1))) = _SequenceL__Arg_list.size();	/*Sequence.sl:54: size(list)*/
append(_SequenceL_tmp994, _SequenceL_tmp996, _SequenceL_tmp998);	/*Sequence.sl:54: (indexes - 1) ++ [size(list)]*/
_SequenceL_tmp994.delete_data(false);	
_SequenceL_tmp996.delete_data(false);	
_SequenceL_tmp996.finished();	
_SequenceL_tmp994.finished();	
_SequenceL_tmp999.setSize(_SequenceL_tmp993.size());	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
SequenceL__sl_main_nt9_ SequenceL__sl_main_nt9__val(_SequenceL_tmp993, _SequenceL_tmp998, _SequenceL_tmp999);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL_tmp999.size() + 1, SequenceL__sl_main_nt9__val);
_SequenceL_tmp993.delete_data(false);	
_SequenceL_tmp998.delete_data(false);	
_SequenceL_tmp998.finished();	
_SequenceL_tmp993.finished();	
SequenceL__parallel_multipleIndexes_4(_SequenceL__Arg_list, _SequenceL_tmp999, _SequenceL__resultConv);	/*Sequence.sl:54: multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
_SequenceL_tmp999.delete_data(false);	
_SequenceL_tmp999.finished();	
}
}
void SequenceL__parallel_allButLast_4(::Sequence< char > &_SequenceL__Arg_list, ::Sequence< char > &_SequenceL__resultConv)
{

_SequenceL__Arg_list.sub_seq(1, (_SequenceL__Arg_list.size() - 1), _SequenceL__resultConv);	/*Sequence.sl:166: list[1 ... (size(list) - 1)]*/
}
void SequenceL__parallel_last_4(::Sequence< char > &_SequenceL__Arg_list, char &_SequenceL__resultConv)
{

_SequenceL__resultConv = (*(_SequenceL__Arg_list.get_ptr(_SequenceL__Arg_list.size())));	/*Sequence.sl:162: list[size(list)]*/
}
void SequenceL__parallel_trim_0(::Sequence< char > &_SequenceL__Arg_s, ::Sequence< char > &_SequenceL__resultConv)
{
bool _SequenceL_tmp1036;
char _SequenceL_tmp1035;
::Sequence< char > _SequenceL_tmp1038(cspace);
bool _SequenceL_tmp1041;
char _SequenceL_tmp1040;
::Sequence< char > _SequenceL_tmp1043(cspace);

_SequenceL_tmp1035 = _SequenceL__Arg_s.head();	/*advent20_working.sl:9: head(s)*/
SequenceL__parallel_isWhiteSpace_2(_SequenceL_tmp1035, _SequenceL_tmp1036);	/*advent20_working.sl:10: isWhiteSpace(head(s))*/
if (_SequenceL_tmp1036)	/*advent20_working.sl:11: trim(tail(s)) when isWhiteSpace(head(s))  else trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
_SequenceL__Arg_s.tail(_SequenceL_tmp1038);	/*advent20_working.sl:9: tail(s)*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_trim_c_0(_SequenceL_tmp1038, _SequenceL__resultConv));
_SequenceL_tmp1038.finished();	
}
else
{
SequenceL__parallel_last_4(_SequenceL__Arg_s, _SequenceL_tmp1040);	/*advent20_working.sl:10: last(s)*/
SequenceL__parallel_isWhiteSpace_2(_SequenceL_tmp1040, _SequenceL_tmp1041);	/*advent20_working.sl:11: isWhiteSpace(last(s))*/
if (_SequenceL_tmp1041)	/*advent20_working.sl:11: trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
SequenceL__parallel_allButLast_4(_SequenceL__Arg_s, _SequenceL_tmp1043);	/*advent20_working.sl:10: allButLast(s)*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_trim_c_0(_SequenceL_tmp1043, _SequenceL__resultConv));
_SequenceL_tmp1043.finished();	
}
else
{
_SequenceL__resultConv = _SequenceL__Arg_s;	/*advent20_working.sl:11: s*/
}
}
}
void SequenceL__sl_main_nt1_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i1048 = _r.begin(); _SequenceL__i1048 < _e; _SequenceL__i1048++)
{
::Sequence< char > _SequenceL__delete_opttmp1(cspace);

_foreign_SequenceL_findAll((*(_SequenceL__Arg_points.get_ptr(_SequenceL__i1048))), _SequenceL_tmp1047, (*(_SequenceL__result2.get_ptr(_SequenceL__i1048))));	/*advent20_working.sl:101: findAll(points, "(p|v|a)=<[^>]*>")*/
(*(_SequenceL__result3.get_ptr(_SequenceL__i1048))).setSize((*(_SequenceL__result2.get_ptr(_SequenceL__i1048))).size());	/*advent20_working.sl:102: extractVals(forces)*/
SIMD_DIRECTIVE
for (int _SequenceL__i1050=1,_stop_val__SequenceL__i1050=(*(_SequenceL__result3.get_ptr(_SequenceL__i1048))).size(); _SequenceL__i1050<=_stop_val__SequenceL__i1050; _SequenceL__i1050+=1)
{
(*((*(_SequenceL__result2.get_ptr(_SequenceL__i1048))).get_ptr(_SequenceL__i1050))).clone(_SequenceL__delete_opttmp1);	/*advent20_working.sl:102: extractVals(forces)*/
SequenceL_extractVals_0(_SequenceL__delete_opttmp1, (*((*(_SequenceL__result3.get_ptr(_SequenceL__i1048))).get_ptr(_SequenceL__i1050))));	/*advent20_working.sl:102: extractVals(forces)*/
_SequenceL__delete_opttmp1.delete_data(true);	
_SequenceL__delete_opttmp1.finished();	
}
SequenceL_getAxes_0((*(_SequenceL__result3.get_ptr(_SequenceL__i1048))), (*(_SequenceL__result4.get_ptr(_SequenceL__i1048))));	/*advent20_working.sl:103: getAxes(vals)*/
}
}
void SequenceL__parallel_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_s, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__Arg_collisions(cspace);
::Sequence< ::Sequence< ::Sequence< SL_FLOAT > > > _SequenceL_tmp1053(cspace);
::Sequence< ::Sequence< char > > _SequenceL__Arg_points(cspace);
::Sequence< char > _SequenceL_tmp1046(cspace);
::Sequence< char > _SequenceL__delete_opttmp1(cspace);
::Sequence< char > _SequenceL_tmp1047(cspace);
::Sequence< ::Sequence< ::Sequence< char > > > _SequenceL__Arg_forces(cspace);
::Sequence< ::Sequence< ::Sequence< int > > > _SequenceL__Arg_vals(cspace);
::Sequence< ::Sequence< ::Sequence< int > > > _SequenceL__Arg_axes(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp1052(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp1055(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__Arg_sorted(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp1058(cspace);
::Sequence< int > _SequenceL__Arg_remainingPoints(cspace);
::Sequence< int > _SequenceL_tmp1060(cspace);

_SequenceL__resultConv.setSize(5 > 0 ? 5 : 0);	
(*(_SequenceL__Arg_s.get_ptr(1))).clone(_SequenceL__delete_opttmp1);	/*advent20_working.sl:100: trim(s[1])*/
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_trim_c_0(_SequenceL__delete_opttmp1, _SequenceL_tmp1046));
SequenceL__parallel_split_4(_SequenceL_tmp1046, '\n', _SequenceL__Arg_points);	/*advent20_working.sl:100: split(trim(s[1]), '\n')*/
_SequenceL_tmp1046.delete_data(false);	
_SequenceL_tmp1046.finished();	
_SequenceL_tmp1047 = "(p|v|a)=<[^>]*>";	/*advent20_working.sl:101: "(p|v|a)=<[^>]*>"*/
_SequenceL__Arg_forces.setSize(_SequenceL__Arg_points.size());	/*advent20_working.sl:101: findAll(points, "(p|v|a)=<[^>]*>")*/
_SequenceL__Arg_vals.setSize(_SequenceL__Arg_forces.size());	/*advent20_working.sl:102: extractVals(forces)*/
_SequenceL__Arg_axes.setSize(_SequenceL__Arg_vals.size());	/*advent20_working.sl:103: getAxes(vals)*/
SequenceL__sl_main_nt1_ SequenceL__sl_main_nt1__val(_SequenceL__Arg_points, _SequenceL_tmp1047, _SequenceL__Arg_forces, _SequenceL__Arg_vals, _SequenceL__Arg_axes);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_forces.size() + 1, SequenceL__sl_main_nt1__val);
_SequenceL_tmp1047.delete_data(false);	
_SequenceL_tmp1047.finished();	
_SequenceL_cast(_SequenceL__Arg_axes, _SequenceL_tmp1053);	
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_distinctPairs_i_0(_SequenceL__Arg_axes.size(), _SequenceL_tmp1052));
_SequenceL__Arg_axes.delete_data(false);	
_SequenceL__Arg_axes.finished();	
SequenceL__parallel_findCollisions_0(_SequenceL_tmp1053, _SequenceL_tmp1052, _SequenceL__Arg_collisions);	/*advent20_working.sl:104: findCollisions(axes, distinctPairs(size(axes)))*/
_SequenceL_tmp1053.delete_data(false);	
_SequenceL_tmp1052.delete_data(false);	
_SequenceL_tmp1052.finished();	
_SequenceL_tmp1053.finished();	
(*(_SequenceL__resultConv.get_ptr(1))) = _SequenceL__Arg_collisions.size();	/*advent20_working.sl:108: size(collisions)*/
remdups(_SequenceL__Arg_collisions, _SequenceL_tmp1055);	/*advent20_working.sl:108: removeDups(collisions)*/
(*(_SequenceL__resultConv.get_ptr(2))) = _SequenceL_tmp1055.size();	/*advent20_working.sl:108: size(removeDups(collisions))*/
_SequenceL_tmp1055.delete_data(false);	
_SequenceL_tmp1055.finished();	
SequenceL__parallel_sortBy_4(_SequenceL__Arg_collisions, _PointerSequenceL_byTime_0, _SequenceL__Arg_sorted);	/*advent20_working.sl:105: sortBy(collisions, byTime)*/
_SequenceL__Arg_collisions.delete_data(false);	
_SequenceL__Arg_collisions.finished();	
(*(_SequenceL__resultConv.get_ptr(3))) = _SequenceL__Arg_sorted.size();	/*advent20_working.sl:108: size(sorted)*/
remdups(_SequenceL__Arg_sorted, _SequenceL_tmp1058);	/*advent20_working.sl:108: removeDups(sorted)*/
(*(_SequenceL__resultConv.get_ptr(4))) = _SequenceL_tmp1058.size();	/*advent20_working.sl:108: size(removeDups(sorted))*/
_SequenceL_tmp1058.delete_data(false);	
_SequenceL_tmp1058.finished();	
_SequenceL_parallel__ellipsis(1, _SequenceL__Arg_points.size(), __LINE__, _SequenceL_tmp1060);	/*advent20_working.sl:106: 1 ... size(points)*/
_SequenceL__Arg_points.delete_data(false);	
_SequenceL__Arg_points.finished();	
sl_redistribute_mem();
task::spawn_root_and_wait(*new(task::allocate_root()) SequenceL__sl_main_doCollisions_iCollisionRecord_0(_SequenceL_tmp1060, _SequenceL__Arg_sorted, _SequenceL__Arg_remainingPoints));
_SequenceL__Arg_sorted.finished();	
_SequenceL_tmp1060.finished();	
(*(_SequenceL__resultConv.get_ptr(5))) = _SequenceL__Arg_remainingPoints.size();	/*advent20_working.sl:108: size(remainingPoints)*/
_SequenceL__Arg_remainingPoints.delete_data(false);	
_SequenceL__Arg_remainingPoints.finished();	
}
void SequenceL__parallel_sign_5(SL_FLOAT _SequenceL__Arg_X, int &_SequenceL__resultConv)
{

if ((_SequenceL__Arg_X < 0))	/*Math.sl:57: -1 when X < 0	else		0 when X = 0	else		1*/
{
_SequenceL__resultConv = (-1);	/*Math.sl:53: -1*/
}
else
{
if ((_SequenceL__Arg_X == 0))	/*Math.sl:57: 0 when X = 0	else		1*/
{
_SequenceL__resultConv = 0;	/*Math.sl:55: 0*/
}
else
{
_SequenceL__resultConv = 1;	/*Math.sl:57: 1*/
}
}
}
void SequenceL__parallel_byTime_0(::_sl_CollisionRecord_0 &_SequenceL__Arg_leftCr, ::_sl_CollisionRecord_0 &_SequenceL__Arg_rightCr, int &_SequenceL__resultConv)
{
SL_FLOAT _SequenceL_tmp1078;

_SequenceL_tmp1078 = (_SequenceL__Arg_leftCr.t - _SequenceL__Arg_rightCr.t);	/*advent20_working.sl:73: leftCr.t - rightCr.t*/
SequenceL__parallel_sign_5(_SequenceL_tmp1078, _SequenceL__resultConv);	/*advent20_working.sl:73: sign(leftCr.t - rightCr.t)*/
}
void SequenceL_union_3(::Sequence< int > &_SequenceL__Arg_X, ::Sequence< int > &_SequenceL__Arg_Y, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL_tmp40(cspace);

append(_SequenceL__Arg_X, _SequenceL__Arg_Y, _SequenceL_tmp40);	/*Set.sl:39: X ++ Y*/
remdups(_SequenceL_tmp40, _SequenceL__resultConv);	/*Set.sl:39: removeDups(X ++ Y)*/
_SequenceL_tmp40.delete_data(true);	
_SequenceL_tmp40.finished();	
}
void SequenceL_elementOf_3(int _SequenceL__Arg_element, ::Sequence< int > &_SequenceL__Arg_list, bool &_SequenceL__resultConv)
{
::Sequence< bool > _SequenceL_tmp55(cspace);

_SequenceL_tmp55.setSize(_SequenceL__Arg_list.size());	/*Set.sl:8: element = list*/
SIMD_DIRECTIVE
for (int _SequenceL__i56=1,_stop_val__SequenceL__i56=_SequenceL_tmp55.size(); _SequenceL__i56<=_stop_val__SequenceL__i56; _SequenceL__i56+=1)
{
(*(_SequenceL_tmp55.get_ptr(_SequenceL__i56))) = (_SequenceL__Arg_element == (*(_SequenceL__Arg_list.get_ptr(_SequenceL__i56))));	/*Set.sl:8: element = list*/
}
_SequenceL__resultConv = some(_SequenceL_tmp55);	/*Set.sl:8: some(element = list)*/
_SequenceL_tmp55.delete_data(true);	
_SequenceL_tmp55.finished();	
}
void SequenceL_intersection_3(::Sequence< int > &_SequenceL__Arg_setA, ::Sequence< int > &_SequenceL__Arg_setB, ::Sequence< int > &_SequenceL__resultConv)
{
bool _SequenceL_tmp58;
::Sequence< int > _SequenceL__Arg_newSetA(cspace);

remdups(_SequenceL__Arg_setA, _SequenceL__Arg_newSetA);	/*Set.sl:15: removeDups(setA)*/
_SequenceL__resultConv.setSize(_SequenceL__Arg_newSetA.size());	/*Set.sl:17: newSetA[x] when elementOf(newSetA[x], setB)*/
_SequenceL__resultConv.create_map();	
SIMD_DIRECTIVE
for (int _SequenceL__Index_x=1,_stop_val__SequenceL__Index_x=_SequenceL__Arg_newSetA.size(); _SequenceL__Index_x<=_stop_val__SequenceL__Index_x; _SequenceL__Index_x+=1)
{
SequenceL_elementOf_3((*(_SequenceL__Arg_newSetA.get_ptr(_SequenceL__Index_x))), _SequenceL__Arg_setB, _SequenceL_tmp58);	/*Set.sl:17: elementOf(newSetA[x], setB)*/
if (_SequenceL_tmp58)	/*Set.sl:17: newSetA[x] when elementOf(newSetA[x], setB)*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_x))) = (*(_SequenceL__Arg_newSetA.get_ptr(_SequenceL__Index_x)));	/*Set.sl:17: newSetA[x]*/
_SequenceL__resultConv.setExistence(_SequenceL__Index_x, true);	
}
else
{
_SequenceL__resultConv.setExistence(_SequenceL__Index_x, false);	
}
}
_SequenceL__Arg_newSetA.delete_data(true);	
_SequenceL__Arg_newSetA.finished();	
_SequenceL__resultConv.cleanup(true);	
}
void SequenceL_drop_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, int _SequenceL__Arg_n, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{

_SequenceL__Arg_list.sub_seq((_SequenceL__Arg_n + 1), _SequenceL__Arg_list.size(), _SequenceL__resultConv);	/*Sequence.sl:178: list[(n + 1) ... size(list)]*/
}
void SequenceL_getColliding_0(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_coincident, ::Sequence< int > &_SequenceL__Arg_remaining, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< Empty > _SequenceL_tmp114(cspace);
::Sequence< int > _SequenceL__Arg_colliders(cspace);
::Sequence< int > _SequenceL_tmp116(cspace);
::_sl_CollisionRecord_0 _SequenceL__Arg_first(cspace);
::Sequence< int > _SequenceL__Arg_moreColliders(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp119(cspace);

if ((_SequenceL__Arg_coincident.size() == 0))	/*advent20_working.sl:88: [] when size(coincident) = 0  else union(colliders, moreColliders) when size(colliders) = 2  else moreColliders*/
{
_SequenceL_tmp114.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp114, _SequenceL__resultConv);	
_SequenceL_tmp114.delete_data(true);	
_SequenceL_tmp114.finished();	
_SequenceL__Arg_coincident.delete_data(true);	
_SequenceL__Arg_remaining.delete_data(true);	
}
else
{
_SequenceL_tmp116.setSize(2 > 0 ? 2 : 0);	
_SequenceL__Arg_coincident.head(_SequenceL__Arg_first);	/*advent20_working.sl:83: head(coincident)*/
(*(_SequenceL_tmp116.get_ptr(1))) = _SequenceL__Arg_first.a;	/*advent20_working.sl:84: first.a*/
(*(_SequenceL_tmp116.get_ptr(2))) = _SequenceL__Arg_first.b;	/*advent20_working.sl:84: first.b*/
_SequenceL__Arg_first._delete_data(true);	
_SequenceL__Arg_first._finished();	
SequenceL_intersection_3(_SequenceL__Arg_remaining, _SequenceL_tmp116, _SequenceL__Arg_colliders);	/*advent20_working.sl:84: intersection(remaining, [first.a, first.b])*/
_SequenceL_tmp116.delete_data(true);	
_SequenceL_tmp116.finished();	
_SequenceL__Arg_coincident.tail(_SequenceL_tmp119);	/*advent20_working.sl:85: tail(coincident)*/
_SequenceL__Arg_coincident.delete_data(true);	
SequenceL_getColliding_0(_SequenceL_tmp119, _SequenceL__Arg_remaining, _SequenceL__Arg_moreColliders);	/*advent20_working.sl:85: getColliding(tail(coincident), remaining)*/
_SequenceL_tmp119.finished();	
if ((_SequenceL__Arg_colliders.size() == 2))	/*advent20_working.sl:88: union(colliders, moreColliders) when size(colliders) = 2  else moreColliders*/
{
SequenceL_union_3(_SequenceL__Arg_colliders, _SequenceL__Arg_moreColliders, _SequenceL__resultConv);	/*advent20_working.sl:87: union(colliders, moreColliders)*/
_SequenceL__Arg_colliders.delete_data(true);	
_SequenceL__Arg_moreColliders.delete_data(true);	
_SequenceL__Arg_moreColliders.finished();	
_SequenceL__Arg_colliders.finished();	
}
else
{
_SequenceL__resultConv = _SequenceL__Arg_moreColliders;	/*advent20_working.sl:88: moreColliders*/
_SequenceL__Arg_moreColliders.delete_data(true);	
_SequenceL__Arg_moreColliders.finished();	
_SequenceL__Arg_colliders.delete_data(true);	
_SequenceL__Arg_colliders.finished();	
}
}
}
void SequenceL_getFirstCoincidents_0(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_cr, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__Arg_next(cspace);
::_sl_CollisionRecord_0 _SequenceL__Arg_first(cspace);
::_sl_CollisionRecord_0 _SequenceL_tmp128(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp133(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp135(cspace);

_SequenceL__Arg_cr.tail(_SequenceL__Arg_next);	/*advent20_working.sl:77: tail(cr)*/
_SequenceL__Arg_cr.head(_SequenceL__Arg_first);	/*advent20_working.sl:76: head(cr)*/
_SequenceL__Arg_cr.delete_data(true);	
if ((_SequenceL__Arg_next.size() == 0))	/*advent20_working.sl:80: [first] when size(next) = 0  else [first] ++ getFirstCoincidents(next) when head(next).t = first.t  else [first]*/
{
_SequenceL__resultConv.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))) = _SequenceL__Arg_first;	/*advent20_working.sl:78: first*/
_SequenceL__Arg_first._delete_data(true);	
_SequenceL__Arg_first._finished();	
_SequenceL__Arg_next.delete_data(true);	
_SequenceL__Arg_next.finished();	
}
else
{
_SequenceL__Arg_next.head(_SequenceL_tmp128);	/*advent20_working.sl:79: head(next)*/
if ((_SequenceL_tmp128.t == _SequenceL__Arg_first.t))	/*advent20_working.sl:80: [first] ++ getFirstCoincidents(next) when head(next).t = first.t  else [first]*/
{
_SequenceL_tmp133.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp133.get_ptr(1))) = _SequenceL__Arg_first;	/*advent20_working.sl:79: first*/
_SequenceL__Arg_first._delete_data(true);	
_SequenceL__Arg_first._finished();	
SequenceL_getFirstCoincidents_0(_SequenceL__Arg_next, _SequenceL_tmp135);	/*advent20_working.sl:79: getFirstCoincidents(next)*/
_SequenceL__Arg_next.finished();	
_appendF(_SequenceL_tmp133, _SequenceL_tmp135, _SequenceL__resultConv);	/*advent20_working.sl:79: [first] ++ getFirstCoincidents(next)*/
_SequenceL_tmp133.delete_data(true);	
_SequenceL_tmp135.delete_data(true);	
_SequenceL_tmp135.finished();	
_SequenceL_tmp133.finished();	
}
else
{
_SequenceL__resultConv.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))) = _SequenceL__Arg_first;	/*advent20_working.sl:80: first*/
_SequenceL__Arg_first._delete_data(true);	
_SequenceL__Arg_first._finished();	
_SequenceL__Arg_next.delete_data(true);	
_SequenceL__Arg_next.finished();	
}
}
}
void SequenceL_doCollisions_0(::Sequence< int > &_SequenceL__Arg_remainingPoints, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_collisions, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL___Arg_remainingPoints_tco(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL___Arg_collisions_tco(cspace);
::Sequence< int > _SequenceL__Arg_newRemaining(cspace);
::Sequence< int > _SequenceL__Arg_colliding(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__delete_opttmp1(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__Arg_coincident(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__delete_opttmp3(cspace);
::Sequence< int > _SequenceL__delete_opttmp2(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp141(cspace);

if (_SequenceL__Arg_remainingPoints.onlyInstance())	
{
_SequenceL___Arg_remainingPoints_tco.replaceSequence(_SequenceL__Arg_remainingPoints);	
}
else
{
_SequenceL___Arg_remainingPoints_tco.hard_copy(_SequenceL__Arg_remainingPoints,__LINE__);	
}
if (_SequenceL__Arg_collisions.onlyInstance())	
{
_SequenceL___Arg_collisions_tco.replaceSequence(_SequenceL__Arg_collisions);	
}
else
{
_SequenceL___Arg_collisions_tco.hard_copy(_SequenceL__Arg_collisions,__LINE__);	
}
doCollisions_advent20working_label_tco:	
if ((_SequenceL___Arg_collisions_tco.size() == 0))	/*advent20_working.sl:96: remainingPoints when size(collisions) = 0  else doCollisions(newRemaining, drop(collisions, size(coincident)))*/
{
_SequenceL__resultConv = _SequenceL___Arg_remainingPoints_tco;	/*advent20_working.sl:95: remainingPoints*/
}
else
{
_SequenceL___Arg_collisions_tco.clone(_SequenceL__delete_opttmp3);	/*advent20_working.sl:92: getFirstCoincidents(collisions)*/
SequenceL_getFirstCoincidents_0(_SequenceL__delete_opttmp3, _SequenceL__Arg_coincident);	/*advent20_working.sl:92: getFirstCoincidents(collisions)*/
_SequenceL__delete_opttmp3.finished();	
_SequenceL__Arg_coincident.deFrag();	
_SequenceL__Arg_coincident.clone(_SequenceL__delete_opttmp1);	/*advent20_working.sl:93: getColliding(coincident, remainingPoints)*/
_SequenceL___Arg_remainingPoints_tco.clone(_SequenceL__delete_opttmp2);	/*advent20_working.sl:93: getColliding(coincident, remainingPoints)*/
SequenceL_getColliding_0(_SequenceL__delete_opttmp1, _SequenceL__delete_opttmp2, _SequenceL__Arg_colliding);	/*advent20_working.sl:93: getColliding(coincident, remainingPoints)*/
_SequenceL__delete_opttmp2.finished();	
_SequenceL__delete_opttmp1.finished();	
takeaway(_SequenceL___Arg_remainingPoints_tco, _SequenceL__Arg_colliding, _SequenceL__Arg_newRemaining);	/*advent20_working.sl:94: takeAway(remainingPoints, colliding)*/
SequenceL_drop_4(_SequenceL___Arg_collisions_tco, _SequenceL__Arg_coincident.size(), _SequenceL_tmp141);	/*advent20_working.sl:96: drop(collisions, size(coincident))*/
_swap(_SequenceL___Arg_remainingPoints_tco, _SequenceL__Arg_newRemaining);	
_swap(_SequenceL___Arg_collisions_tco, _SequenceL_tmp141);	
goto doCollisions_advent20working_label_tco;	/*advent20_working.sl:96: doCollisions(newRemaining, drop(collisions, size(coincident)))*/
}
_SequenceL__Arg_newRemaining.delete_data(true);	
_SequenceL__Arg_colliding.delete_data(true);	
_SequenceL__delete_opttmp1.delete_data(true);	
_SequenceL__Arg_coincident.delete_data(true);	
_SequenceL__delete_opttmp3.delete_data(true);	
_SequenceL__delete_opttmp2.delete_data(true);	
_SequenceL_tmp141.delete_data(true);	
_SequenceL_tmp141.finished();	
_SequenceL__delete_opttmp2.finished();	
_SequenceL__delete_opttmp3.finished();	
_SequenceL__Arg_coincident.finished();	
_SequenceL__delete_opttmp1.finished();	
_SequenceL__Arg_colliding.finished();	
_SequenceL__Arg_newRemaining.finished();	
}
void SequenceL_setElementAt_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, int _SequenceL__Arg_location, ::_sl_CollisionRecord_0 &_SequenceL__Arg_newElement, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
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
void SequenceL_swapHelper_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, int _SequenceL__Arg_i, int _SequenceL__Arg_j, ::_sl_CollisionRecord_0 &_SequenceL__Arg_vali, ::_sl_CollisionRecord_0 &_SequenceL__Arg_valj, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp244(cspace);

SequenceL_setElementAt_4(_SequenceL__Arg_list, _SequenceL__Arg_j, _SequenceL__Arg_vali, _SequenceL_tmp244);	/*Sequence.sl:87: setElementAt(list, j, vali)*/
SequenceL_setElementAt_4(_SequenceL_tmp244, _SequenceL__Arg_i, _SequenceL__Arg_valj, _SequenceL__resultConv);	/*Sequence.sl:87: setElementAt(setElementAt(list, j, vali), i, valj)*/
_SequenceL_tmp244.delete_data(true);	
_SequenceL_tmp244.finished();	
}
void SequenceL_swap_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, int _SequenceL__Arg_i, int _SequenceL__Arg_j, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::_sl_CollisionRecord_0 _SequenceL__Arg_vi(cspace);
::_sl_CollisionRecord_0 _SequenceL__Arg_vj(cspace);

_SequenceL__Arg_vi = (*(_SequenceL__Arg_list.get_ptr(_SequenceL__Arg_i)));	/*Sequence.sl:82: list[i]*/
_SequenceL__Arg_vj = (*(_SequenceL__Arg_list.get_ptr(_SequenceL__Arg_j)));	/*Sequence.sl:83: list[j]*/
SequenceL_swapHelper_4(_SequenceL__Arg_list, _SequenceL__Arg_i, _SequenceL__Arg_j, _SequenceL__Arg_vi, _SequenceL__Arg_vj, _SequenceL__resultConv);	/*Sequence.sl:84: swapHelper(list, i, j, vi, vj)*/
_SequenceL__Arg_vi._delete_data(true);	
_SequenceL__Arg_vj._delete_data(true);	
_SequenceL__Arg_vj._finished();	
_SequenceL__Arg_vi._finished();	
}
void SequenceL_getRight_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, ::_sl_CollisionRecord_0 &_SequenceL__Arg_pivot, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_right, int &_SequenceL__resultConv)
{
int _SequenceL___Arg_right_tco;
int _SequenceL_tmp275;
int _SequenceL_tmp279;

_SequenceL___Arg_right_tco = _SequenceL__Arg_right;	
getRight_Sequence_label_tco:	
((void (*)(::_sl_CollisionRecord_0&,::_sl_CollisionRecord_0&,int&))_SequenceL__Arg_compFunc[0])((*(_SequenceL__Arg_list.get_ptr(_SequenceL___Arg_right_tco))), _SequenceL__Arg_pivot, _SequenceL_tmp275);	/*Sequence.sl:266: compFunc(list[right], pivot)*/
if ((_SequenceL_tmp275 <= 0))	/*Sequence.sl:268: right when compFunc(list[right], pivot) <= 0	else		getRight(list, pivot, compFunc, right-1)*/
{
_SequenceL__resultConv = _SequenceL___Arg_right_tco;	/*Sequence.sl:266: right*/
}
else
{
_SequenceL_tmp279 = (_SequenceL___Arg_right_tco - 1);	/*Sequence.sl:268: right-1*/
_SequenceL___Arg_right_tco = _SequenceL_tmp279;	
goto getRight_Sequence_label_tco;	/*Sequence.sl:268: getRight(list, pivot, compFunc, right-1)*/
}
}
void SequenceL_getLeft_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, ::_sl_CollisionRecord_0 &_SequenceL__Arg_pivot, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_left, int &_SequenceL__resultConv)
{
int _SequenceL___Arg_left_tco;
int _SequenceL_tmp280;
int _SequenceL_tmp284;

_SequenceL___Arg_left_tco = _SequenceL__Arg_left;	
getLeft_Sequence_label_tco:	
((void (*)(::_sl_CollisionRecord_0&,::_sl_CollisionRecord_0&,int&))_SequenceL__Arg_compFunc[0])((*(_SequenceL__Arg_list.get_ptr(_SequenceL___Arg_left_tco))), _SequenceL__Arg_pivot, _SequenceL_tmp280);	/*Sequence.sl:260: compFunc(list[left], pivot)*/
if ((_SequenceL_tmp280 >= 0))	/*Sequence.sl:262: left when compFunc(list[left], pivot) >= 0	else		getLeft(list, pivot, compFunc, left+1)*/
{
_SequenceL__resultConv = _SequenceL___Arg_left_tco;	/*Sequence.sl:260: left*/
}
else
{
_SequenceL_tmp284 = (_SequenceL___Arg_left_tco + 1);	/*Sequence.sl:262: left+1*/
_SequenceL___Arg_left_tco = _SequenceL_tmp284;	
goto getLeft_Sequence_label_tco;	/*Sequence.sl:262: getLeft(list, pivot, compFunc, left+1)*/
}
}
void SequenceL_insertionByWork_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, ::_sl_CollisionRecord_0 &_SequenceL__Arg_val, int _SequenceL__Arg_first, int _SequenceL__Arg_j, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL___Arg_x_tco(cspace);
int _SequenceL___Arg_j_tco;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__Arg_return(cspace);
int _SequenceL_tmp344;
int _SequenceL_tmp346;
int _SequenceL_tmp349;
int _SequenceL_tmp351;
int _SequenceL_tmp353;

if (_SequenceL__Arg_x.onlyInstance())	
{
_SequenceL___Arg_x_tco.replaceSequence(_SequenceL__Arg_x);	
}
else
{
_SequenceL___Arg_x_tco.hard_copy(_SequenceL__Arg_x,__LINE__);	
}
_SequenceL___Arg_j_tco = _SequenceL__Arg_j;	
insertionByWork_Sequence_label_tco:	
if ((_SequenceL___Arg_j_tco < _SequenceL__Arg_first))	/*Sequence.sl:293: return when j < first	else		return when compFunc(x[j], val) <= 0	else		insertionByWork(setElementAt(x, j+1, x[j]), compFunc, val, first, j-1)*/
{
_SequenceL_tmp344 = (_SequenceL___Arg_j_tco + 1);	/*Sequence.sl:287: j+1*/
_SequenceL__Arg_val._Reference();	/*Sequence.sl:287: setElementAt(x, j+1, val)*/
SequenceL_setElementAt_4(_SequenceL___Arg_x_tco, _SequenceL_tmp344, _SequenceL__Arg_val, _SequenceL__Arg_return);	/*Sequence.sl:287: setElementAt(x, j+1, val)*/
_SequenceL__Arg_val._dereference();	
_SequenceL__resultConv = _SequenceL__Arg_return;	/*Sequence.sl:289: return*/
}
else
{
((void (*)(::_sl_CollisionRecord_0&,::_sl_CollisionRecord_0&,int&))_SequenceL__Arg_compFunc[0])((*(_SequenceL___Arg_x_tco.get_ptr(_SequenceL___Arg_j_tco))), _SequenceL__Arg_val, _SequenceL_tmp346);	/*Sequence.sl:291: compFunc(x[j], val)*/
if ((_SequenceL_tmp346 <= 0))	/*Sequence.sl:293: return when compFunc(x[j], val) <= 0	else		insertionByWork(setElementAt(x, j+1, x[j]), compFunc, val, first, j-1)*/
{
_SequenceL_tmp349 = (_SequenceL___Arg_j_tco + 1);	/*Sequence.sl:287: j+1*/
_SequenceL__Arg_val._Reference();	/*Sequence.sl:287: setElementAt(x, j+1, val)*/
SequenceL_setElementAt_4(_SequenceL___Arg_x_tco, _SequenceL_tmp349, _SequenceL__Arg_val, _SequenceL__Arg_return);	/*Sequence.sl:287: setElementAt(x, j+1, val)*/
_SequenceL__Arg_val._dereference();	
_SequenceL__resultConv = _SequenceL__Arg_return;	/*Sequence.sl:291: return*/
}
else
{
_SequenceL_tmp351 = (_SequenceL___Arg_j_tco + 1);	/*Sequence.sl:293: j+1*/
(*(_SequenceL___Arg_x_tco.get_ptr(_SequenceL___Arg_j_tco)))._Reference();	/*Sequence.sl:293: setElementAt(x, j+1, x[j])*/
if (((_SequenceL_tmp351 >= 1) && (_SequenceL_tmp351 <= _SequenceL___Arg_x_tco.size())))	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
{
(*(_SequenceL___Arg_x_tco.get_ptr(_SequenceL_tmp351))) = (*(_SequenceL___Arg_x_tco.get_ptr(_SequenceL___Arg_j_tco)));	/*Sequence.sl:78: newElement*/
}
(*(_SequenceL___Arg_x_tco.get_ptr(_SequenceL___Arg_j_tco)))._dereference();	
_SequenceL_tmp353 = (_SequenceL___Arg_j_tco - 1);	/*Sequence.sl:293: j-1*/
_SequenceL___Arg_j_tco = _SequenceL_tmp353;	
goto insertionByWork_Sequence_label_tco;	/*Sequence.sl:293: insertionByWork(setElementAt(x, j+1, x[j]), compFunc, val, first, j-1)*/
}
}
_SequenceL__Arg_return.delete_data(true);	
_SequenceL___Arg_x_tco.delete_data(true);	
_SequenceL___Arg_x_tco.finished();	
_SequenceL__Arg_return.finished();	
}
void SequenceL_doSwaps_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, ::_sl_CollisionRecord_0 &_SequenceL__Arg_pivot, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_left, int _SequenceL__Arg_right, SL::Utilities::Sequence::SWAP_RETURN< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL___Arg_list_tco(cspace);
int _SequenceL___Arg_left_tco;
int _SequenceL___Arg_right_tco;
int _SequenceL__Arg_newLeft;
int _SequenceL__Arg_newRight;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp377(cspace);
int _SequenceL_tmp378;
int _SequenceL_tmp379;

if (_SequenceL__Arg_list.onlyInstance())	
{
_SequenceL___Arg_list_tco.replaceSequence(_SequenceL__Arg_list);	
}
else
{
_SequenceL___Arg_list_tco.hard_copy(_SequenceL__Arg_list,__LINE__);	
}
_SequenceL___Arg_left_tco = _SequenceL__Arg_left;	
_SequenceL___Arg_right_tco = _SequenceL__Arg_right;	
doSwaps_Sequence_label_tco:	
if ((_SequenceL___Arg_left_tco > _SequenceL___Arg_right_tco))	/*Sequence.sl:256: (List: list, Left: left, Right: right) when left > right	else		 doSwaps(swap(list, newLeft, newRight), pivot, compFunc, newLeft + 1, newRight - 1) when newLeft <= newRight	else		(List: list, Left: newLeft, Right: newRight)*/
{
_SequenceL__resultConv.List = _SequenceL___Arg_list_tco;	/*Sequence.sl:252: list*/
_SequenceL__resultConv.Left = _SequenceL___Arg_left_tco;	/*Sequence.sl:252: left*/
_SequenceL__resultConv.Right = _SequenceL___Arg_right_tco;	/*Sequence.sl:252: right*/
}
else
{
SequenceL_getLeft_4(_SequenceL___Arg_list_tco, _SequenceL__Arg_pivot, _SequenceL__Arg_compFunc, _SequenceL___Arg_left_tco, _SequenceL__Arg_newLeft);	/*Sequence.sl:249: getLeft(list, pivot, compFunc, left)*/
SequenceL_getRight_4(_SequenceL___Arg_list_tco, _SequenceL__Arg_pivot, _SequenceL__Arg_compFunc, _SequenceL___Arg_right_tco, _SequenceL__Arg_newRight);	/*Sequence.sl:250: getRight(list, pivot, compFunc, right)*/
if ((_SequenceL__Arg_newLeft <= _SequenceL__Arg_newRight))	/*Sequence.sl:256: doSwaps(swap(list, newLeft, newRight), pivot, compFunc, newLeft + 1, newRight - 1) when newLeft <= newRight	else		(List: list, Left: newLeft, Right: newRight)*/
{
SequenceL_swap_4(_SequenceL___Arg_list_tco, _SequenceL__Arg_newLeft, _SequenceL__Arg_newRight, _SequenceL_tmp377);	/*Sequence.sl:254: swap(list, newLeft, newRight)*/
_SequenceL_tmp378 = (_SequenceL__Arg_newLeft + 1);	/*Sequence.sl:254: newLeft + 1*/
_SequenceL_tmp379 = (_SequenceL__Arg_newRight - 1);	/*Sequence.sl:254: newRight - 1*/
_swap(_SequenceL___Arg_list_tco, _SequenceL_tmp377);	
_SequenceL___Arg_left_tco = _SequenceL_tmp378;	
_SequenceL___Arg_right_tco = _SequenceL_tmp379;	
goto doSwaps_Sequence_label_tco;	/*Sequence.sl:254: doSwaps(swap(list, newLeft, newRight), pivot, compFunc, newLeft + 1, newRight - 1)*/
}
else
{
_SequenceL__resultConv.List = _SequenceL___Arg_list_tco;	/*Sequence.sl:256: list*/
_SequenceL__resultConv.Left = _SequenceL__Arg_newLeft;	/*Sequence.sl:256: newLeft*/
_SequenceL__resultConv.Right = _SequenceL__Arg_newRight;	/*Sequence.sl:256: newRight*/
}
}
_SequenceL_tmp377.delete_data(true);	
_SequenceL_tmp377.finished();	
}
void SequenceL_insertionSortByHelper_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_first, int _SequenceL__Arg_last, int _SequenceL__Arg_i, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL___Arg_x_tco(cspace);
int _SequenceL___Arg_i_tco;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp385(cspace);
::_sl_CollisionRecord_0 _SequenceL__Arg_val(cspace);
int _SequenceL_tmp384;
int _SequenceL_tmp386;

if (_SequenceL__Arg_x.onlyInstance())	
{
_SequenceL___Arg_x_tco.replaceSequence(_SequenceL__Arg_x);	
}
else
{
_SequenceL___Arg_x_tco.hard_copy(_SequenceL__Arg_x,__LINE__);	
}
_SequenceL___Arg_i_tco = _SequenceL__Arg_i;	
insertionSortByHelper_Sequence_label_tco:	
if ((_SequenceL___Arg_i_tco > _SequenceL__Arg_last))	/*Sequence.sl:282: x when i > last	else		insertionSortByHelper(insertionByWork(x, compFunc, val, first, i-1), compFunc, first, last, i+1)*/
{
_SequenceL__resultConv = _SequenceL___Arg_x_tco;	/*Sequence.sl:280: x*/
}
else
{
_SequenceL__Arg_val = (*(_SequenceL___Arg_x_tco.get_ptr(_SequenceL___Arg_i_tco)));	/*Sequence.sl:278: x[i]*/
_SequenceL_tmp384 = (_SequenceL___Arg_i_tco - 1);	/*Sequence.sl:282: i-1*/
SequenceL_insertionByWork_4(_SequenceL___Arg_x_tco, _SequenceL__Arg_compFunc, _SequenceL__Arg_val, _SequenceL__Arg_first, _SequenceL_tmp384, _SequenceL_tmp385);	/*Sequence.sl:282: insertionByWork(x, compFunc, val, first, i-1)*/
_SequenceL_tmp386 = (_SequenceL___Arg_i_tco + 1);	/*Sequence.sl:282: i+1*/
_swap(_SequenceL___Arg_x_tco, _SequenceL_tmp385);	
_SequenceL___Arg_i_tco = _SequenceL_tmp386;	
goto insertionSortByHelper_Sequence_label_tco;	/*Sequence.sl:282: insertionSortByHelper(insertionByWork(x, compFunc, val, first, i-1), compFunc, first, last, i+1)*/
}
_SequenceL_tmp385.delete_data(true);	
_SequenceL__Arg_val._delete_data(true);	
_SequenceL__Arg_val._finished();	
_SequenceL_tmp385.finished();	
}
void SequenceL_quickSortInPlaceHelper_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_first, int _SequenceL__Arg_last, int _SequenceL__Arg_threshold, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp397(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__delete_opttmp1(cspace);
SL::Utilities::Sequence::SWAP_RETURN< ::_sl_CollisionRecord_0 > _SequenceL__Arg_swapped(cspace);
::_sl_CollisionRecord_0 _SequenceL__Arg_pivot(cspace);

if ((_SequenceL__Arg_first >= _SequenceL__Arg_last))	/*Sequence.sl:244: list when first >= last	else		insertionSortByHelper(list, compFunc, first, last, first) when last - first + 1 <= threshold	else		quickSortInPlaceHelper(quickSortInPlaceHelper(swapped.List, compFunc, first, swapped.Right, threshold), compFunc, swapped.Left, last, threshold)*/
{
_SequenceL__resultConv = _SequenceL__Arg_list;	/*Sequence.sl:240: list*/
_SequenceL__Arg_list.delete_data(true);	
}
else
{
if ((((_SequenceL__Arg_last - _SequenceL__Arg_first) + 1) <= _SequenceL__Arg_threshold))	/*Sequence.sl:244: insertionSortByHelper(list, compFunc, first, last, first) when last - first + 1 <= threshold	else		quickSortInPlaceHelper(quickSortInPlaceHelper(swapped.List, compFunc, first, swapped.Right, threshold), compFunc, swapped.Left, last, threshold)*/
{
SequenceL_insertionSortByHelper_4(_SequenceL__Arg_list, _SequenceL__Arg_compFunc, _SequenceL__Arg_first, _SequenceL__Arg_last, _SequenceL__Arg_first, _SequenceL__resultConv);	/*Sequence.sl:242: insertionSortByHelper(list, compFunc, first, last, first)*/
_SequenceL__Arg_list.delete_data(true);	
}
else
{
_SequenceL__Arg_pivot = (*(_SequenceL__Arg_list.get_ptr(_SequenceL__Arg_first)));	/*Sequence.sl:237: list[first]*/
SequenceL_doSwaps_4(_SequenceL__Arg_list, _SequenceL__Arg_pivot, _SequenceL__Arg_compFunc, _SequenceL__Arg_first, _SequenceL__Arg_last, _SequenceL__Arg_swapped);	/*Sequence.sl:238: doSwaps(list, pivot, compFunc, first, last)*/
_SequenceL__Arg_list.delete_data(true);	
_SequenceL__Arg_pivot._delete_data(true);	
_SequenceL__Arg_pivot._finished();	
_SequenceL__Arg_swapped.List.clone(_SequenceL__delete_opttmp1);	/*Sequence.sl:244: quickSortInPlaceHelper(swapped.List, compFunc, first, swapped.Right, threshold)*/
SequenceL_quickSortInPlaceHelper_4(_SequenceL__delete_opttmp1, _SequenceL__Arg_compFunc, _SequenceL__Arg_first, _SequenceL__Arg_swapped.Right, _SequenceL__Arg_threshold, _SequenceL_tmp397);	/*Sequence.sl:244: quickSortInPlaceHelper(swapped.List, compFunc, first, swapped.Right, threshold)*/
_SequenceL__delete_opttmp1.finished();	
SequenceL_quickSortInPlaceHelper_4(_SequenceL_tmp397, _SequenceL__Arg_compFunc, _SequenceL__Arg_swapped.Left, _SequenceL__Arg_last, _SequenceL__Arg_threshold, _SequenceL__resultConv);	/*Sequence.sl:244: quickSortInPlaceHelper(quickSortInPlaceHelper(swapped.List, compFunc, first, swapped.Right, threshold), compFunc, swapped.Left, last, threshold)*/
_SequenceL__Arg_swapped._delete_data(true);	
_SequenceL__Arg_swapped._finished();	
_SequenceL_tmp397.finished();	
}
}
}
void SequenceL_filtermax_4(::_sl_CollisionRecord_0 &_SequenceL__Arg_p, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_s, _sl_fun_pointer* _SequenceL__Arg_func, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
int _SequenceL_tmp399;

_SequenceL__resultConv.setSize(_SequenceL__Arg_s.size());	/*Sequence.sl:188: s[i] 		when func(s[i], p) >= 0*/
_SequenceL__resultConv.create_map();	
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_s.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
((void (*)(::_sl_CollisionRecord_0&,::_sl_CollisionRecord_0&,int&))_SequenceL__Arg_func[0])((*(_SequenceL__Arg_s.get_ptr(_SequenceL__Index_i))), _SequenceL__Arg_p, _SequenceL_tmp399);	/*Sequence.sl:188: func(s[i], p)*/
if ((_SequenceL_tmp399 >= 0))	/*Sequence.sl:188: s[i] 		when func(s[i], p) >= 0*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_s.get_ptr(_SequenceL__Index_i)));	/*Sequence.sl:188: s[i]*/
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, true);	
}
else
{
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, false);	
}
}
_SequenceL__resultConv.cleanup(true);	
}
void SequenceL_filtermin_4(::_sl_CollisionRecord_0 &_SequenceL__Arg_p, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_s, _sl_fun_pointer* _SequenceL__Arg_func, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
int _SequenceL_tmp420;

_SequenceL__resultConv.setSize(_SequenceL__Arg_s.size());	/*Sequence.sl:183: s[i] 		when func(s[i], p) < 0*/
_SequenceL__resultConv.create_map();	
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_s.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
((void (*)(::_sl_CollisionRecord_0&,::_sl_CollisionRecord_0&,int&))_SequenceL__Arg_func[0])((*(_SequenceL__Arg_s.get_ptr(_SequenceL__Index_i))), _SequenceL__Arg_p, _SequenceL_tmp420);	/*Sequence.sl:183: func(s[i], p)*/
if ((_SequenceL_tmp420 < 0))	/*Sequence.sl:183: s[i] 		when func(s[i], p) < 0*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (*(_SequenceL__Arg_s.get_ptr(_SequenceL__Index_i)));	/*Sequence.sl:183: s[i]*/
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, true);	
}
else
{
_SequenceL__resultConv.setExistence(_SequenceL__Index_i, false);	
}
}
_SequenceL__resultConv.cleanup(true);	
}
void SequenceL_quickSortInPlace_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_threshold, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__delete_opttmp1(cspace);

_SequenceL__Arg_list.clone(_SequenceL__delete_opttmp1);	/*Sequence.sl:232: quickSortInPlaceHelper(list, compFunc, 1, size(list), threshold)*/
SequenceL_quickSortInPlaceHelper_4(_SequenceL__delete_opttmp1, _SequenceL__Arg_compFunc, 1, _SequenceL__Arg_list.size(), _SequenceL__Arg_threshold, _SequenceL__resultConv);	/*Sequence.sl:232: quickSortInPlaceHelper(list, compFunc, 1, size(list), threshold)*/
_SequenceL__delete_opttmp1.finished();	
}
void SequenceL_quickSortSmartBy_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_n, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
int _SequenceL_tmp430;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp437(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp434(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__Arg_lower(cspace);
::_sl_CollisionRecord_0 _SequenceL__Arg_pivot(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp432(cspace);
int _SequenceL_tmp433;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp435(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp440(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__Arg_upper(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp438(cspace);
int _SequenceL_tmp439;

if ((_SequenceL__Arg_x.size() <= 1))	/*Sequence.sl:227: x when size(x) <= 1		else			quickSortInPlace(x, compFunc, INSERT_SORT_SIZE)   				when n <= 0 or size(x) <= INPLACE_QSORT_SIZE		else			quickSortSmartBy(lower, compFunc, n-1) ++ [pivot] ++ quickSortSmartBy(upper, compFunc, n-1)*/
{
_SequenceL__resultConv = _SequenceL__Arg_x;	/*Sequence.sl:222: x*/
}
else
{
if (((_SequenceL__Arg_n <= 0) || (_SequenceL__Arg_x.size() <= _SequenceL_INPLACE_QSORT_SIZE_4)))	/*Sequence.sl:227: quickSortInPlace(x, compFunc, INSERT_SORT_SIZE)   				when n <= 0 or size(x) <= INPLACE_QSORT_SIZE		else			quickSortSmartBy(lower, compFunc, n-1) ++ [pivot] ++ quickSortSmartBy(upper, compFunc, n-1)*/
{
_SequenceL_tmp430 = _SequenceL_INSERT_SORT_SIZE_4;	/*Sequence.sl:224: INSERT_SORT_SIZE*/
SequenceL_quickSortInPlace_4(_SequenceL__Arg_x, _SequenceL__Arg_compFunc, _SequenceL_tmp430, _SequenceL__resultConv);	/*Sequence.sl:225: quickSortInPlace(x, compFunc, INSERT_SORT_SIZE)*/
}
else
{
_SequenceL__Arg_x.head(_SequenceL__Arg_pivot);	/*Sequence.sl:218: head(x)*/
_SequenceL__Arg_x.tail(_SequenceL_tmp432);	/*Sequence.sl:219: tail(x)*/
SequenceL_filtermin_4(_SequenceL__Arg_pivot, _SequenceL_tmp432, _SequenceL__Arg_compFunc, _SequenceL__Arg_lower);	/*Sequence.sl:219: filtermin(pivot, tail(x), compFunc)*/
_SequenceL_tmp432.delete_data(true);	
_SequenceL_tmp432.finished();	
_SequenceL_tmp433 = (_SequenceL__Arg_n - 1);	/*Sequence.sl:227: n-1*/
SequenceL_quickSortSmartBy_4(_SequenceL__Arg_lower, _SequenceL__Arg_compFunc, _SequenceL_tmp433, _SequenceL_tmp434);	/*Sequence.sl:227: quickSortSmartBy(lower, compFunc, n-1)*/
_SequenceL__Arg_lower.delete_data(true);	
_SequenceL__Arg_lower.finished();	
_SequenceL_tmp435.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp435.get_ptr(1))) = _SequenceL__Arg_pivot;	/*Sequence.sl:227: pivot*/
append(_SequenceL_tmp434, _SequenceL_tmp435, _SequenceL_tmp437);	/*Sequence.sl:227: quickSortSmartBy(lower, compFunc, n-1) ++ [pivot]*/
_SequenceL_tmp434.delete_data(true);	
_SequenceL_tmp435.delete_data(true);	
_SequenceL_tmp435.finished();	
_SequenceL_tmp434.finished();	
_SequenceL__Arg_x.tail(_SequenceL_tmp438);	/*Sequence.sl:220: tail(x)*/
SequenceL_filtermax_4(_SequenceL__Arg_pivot, _SequenceL_tmp438, _SequenceL__Arg_compFunc, _SequenceL__Arg_upper);	/*Sequence.sl:220: filtermax(pivot, tail(x), compFunc)*/
_SequenceL__Arg_pivot._delete_data(true);	
_SequenceL_tmp438.delete_data(true);	
_SequenceL_tmp438.finished();	
_SequenceL__Arg_pivot._finished();	
_SequenceL_tmp439 = (_SequenceL__Arg_n - 1);	/*Sequence.sl:227: n-1*/
SequenceL_quickSortSmartBy_4(_SequenceL__Arg_upper, _SequenceL__Arg_compFunc, _SequenceL_tmp439, _SequenceL_tmp440);	/*Sequence.sl:227: quickSortSmartBy(upper, compFunc, n-1)*/
_SequenceL__Arg_upper.delete_data(true);	
_SequenceL__Arg_upper.finished();	
append(_SequenceL_tmp437, _SequenceL_tmp440, _SequenceL__resultConv);	/*Sequence.sl:227: quickSortSmartBy(lower, compFunc, n-1) ++ [pivot] ++ quickSortSmartBy(upper, compFunc, n-1)*/
_SequenceL_tmp437.delete_data(true);	
_SequenceL_tmp440.delete_data(true);	
_SequenceL_tmp440.finished();	
_SequenceL_tmp437.finished();	
}
}
}
void SequenceL_sortBy_4(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
int _SequenceL_tmp441;

_SequenceL_tmp441 = _SequenceL_PAR_QSORT_DEPTH_4;	/*Sequence.sl:213: PAR_QSORT_DEPTH*/
SequenceL_quickSortSmartBy_4(_SequenceL__Arg_x, _SequenceL__Arg_compFunc, _SequenceL_tmp441, _SequenceL__resultConv);	/*Sequence.sl:213: quickSortSmartBy(x, compFunc, PAR_QSORT_DEPTH)*/
}
void SequenceL_firstNonNegativeTime_0(::Sequence< SL_FLOAT > &_SequenceL__Arg_f, SL_FLOAT &_SequenceL__resultConv)
{
SL_FLOAT _SequenceL__Arg_a;
SL_FLOAT _SequenceL__Arg_b;
::Sequence< SL_FLOAT > _SequenceL_tmp495(cspace);
int _SequenceL_tmp497;
int _SequenceL_tmp507;

if ((_SequenceL__Arg_f.size() == 0))	/*advent20_working.sl:56: -1 when size(f) = 0  else a when a >= 0 and floor(a) = a and (b < 0 or a < b)  else b when b >= 0 and floor(b) = b  else -1*/
{
_SequenceL__resultConv = ((SL_FLOAT)(-1));	
_SequenceL__Arg_f.delete_data(true);	
}
else
{
_SequenceL__Arg_a = _SequenceL__Arg_f.head();	/*advent20_working.sl:51: head(f)*/
_SequenceL__Arg_f.tail(_SequenceL_tmp495);	/*advent20_working.sl:52: tail(f)*/
_SequenceL__Arg_f.delete_data(true);	
SequenceL_firstNonNegativeTime_0(_SequenceL_tmp495, _SequenceL__Arg_b);	/*advent20_working.sl:52: firstNonNegativeTime(tail(f))*/
_SequenceL_tmp495.finished();	
_SequenceL_tmp497 = ((int) floor(_SequenceL__Arg_a));	/*advent20_working.sl:54: floor(a)*/
if ((((_SequenceL__Arg_a >= 0) && (_SequenceL_tmp497 == _SequenceL__Arg_a)) && ((_SequenceL__Arg_b < 0) || (_SequenceL__Arg_a < _SequenceL__Arg_b))))	/*advent20_working.sl:56: a when a >= 0 and floor(a) = a and (b < 0 or a < b)  else b when b >= 0 and floor(b) = b  else -1*/
{
_SequenceL__resultConv = _SequenceL__Arg_a;	/*advent20_working.sl:54: a*/
}
else
{
_SequenceL_tmp507 = ((int) floor(_SequenceL__Arg_b));	/*advent20_working.sl:55: floor(b)*/
if (((_SequenceL__Arg_b >= 0) && (_SequenceL_tmp507 == _SequenceL__Arg_b)))	/*advent20_working.sl:56: b when b >= 0 and floor(b) = b  else -1*/
{
_SequenceL__resultConv = _SequenceL__Arg_b;	/*advent20_working.sl:55: b*/
}
else
{
_SequenceL__resultConv = ((SL_FLOAT)(-1));	
}
}
}
}
void SequenceL_elementOf_3(SL_FLOAT _SequenceL__Arg_element, ::Sequence< SL_FLOAT > &_SequenceL__Arg_list, bool &_SequenceL__resultConv)
{
::Sequence< bool > _SequenceL_tmp521(cspace);

_SequenceL_tmp521.setSize(_SequenceL__Arg_list.size());	/*Set.sl:8: element = list*/
SIMD_DIRECTIVE
for (int _SequenceL__i522=1,_stop_val__SequenceL__i522=_SequenceL_tmp521.size(); _SequenceL__i522<=_stop_val__SequenceL__i522; _SequenceL__i522+=1)
{
(*(_SequenceL_tmp521.get_ptr(_SequenceL__i522))) = (_SequenceL__Arg_element == (*(_SequenceL__Arg_list.get_ptr(_SequenceL__i522))));	/*Set.sl:8: element = list*/
}
_SequenceL__resultConv = some(_SequenceL_tmp521);	/*Set.sl:8: some(element = list)*/
_SequenceL_tmp521.delete_data(true);	
_SequenceL_tmp521.finished();	
}
void SequenceL_intersection_3(::Sequence< SL_FLOAT > &_SequenceL__Arg_setA, ::Sequence< SL_FLOAT > &_SequenceL__Arg_setB, ::Sequence< SL_FLOAT > &_SequenceL__resultConv)
{
bool _SequenceL_tmp523;
::Sequence< SL_FLOAT > _SequenceL__Arg_newSetA(cspace);

remdups(_SequenceL__Arg_setA, _SequenceL__Arg_newSetA);	/*Set.sl:15: removeDups(setA)*/
_SequenceL__resultConv.setSize(_SequenceL__Arg_newSetA.size());	/*Set.sl:17: newSetA[x] when elementOf(newSetA[x], setB)*/
_SequenceL__resultConv.create_map();	
SIMD_DIRECTIVE
for (int _SequenceL__Index_x=1,_stop_val__SequenceL__Index_x=_SequenceL__Arg_newSetA.size(); _SequenceL__Index_x<=_stop_val__SequenceL__Index_x; _SequenceL__Index_x+=1)
{
SequenceL_elementOf_3((*(_SequenceL__Arg_newSetA.get_ptr(_SequenceL__Index_x))), _SequenceL__Arg_setB, _SequenceL_tmp523);	/*Set.sl:17: elementOf(newSetA[x], setB)*/
if (_SequenceL_tmp523)	/*Set.sl:17: newSetA[x] when elementOf(newSetA[x], setB)*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_x))) = (*(_SequenceL__Arg_newSetA.get_ptr(_SequenceL__Index_x)));	/*Set.sl:17: newSetA[x]*/
_SequenceL__resultConv.setExistence(_SequenceL__Index_x, true);	
}
else
{
_SequenceL__resultConv.setExistence(_SequenceL__Index_x, false);	
}
}
_SequenceL__Arg_newSetA.delete_data(true);	
_SequenceL__Arg_newSetA.finished();	
_SequenceL__resultConv.cleanup(true);	
}
void SequenceL_isAllRecord_0(::Sequence< SL_FLOAT > &_SequenceL__Arg_a, bool &_SequenceL__resultConv)
{

if ((_SequenceL__Arg_a.size() != 2))	/*advent20_working.sl:39: false when size(a) /= 2  else true when a[1] = 0 and a[2] = 0  else false*/
{
_SequenceL__resultConv = false;	/*advent20_working.sl:37: false*/
}
else
{
if ((((*(_SequenceL__Arg_a.get_ptr(1))) == 0) && ((*(_SequenceL__Arg_a.get_ptr(2))) == 0)))	/*advent20_working.sl:39: true when a[1] = 0 and a[2] = 0  else false*/
{
_SequenceL__resultConv = true;	/*advent20_working.sl:38: true*/
}
else
{
_SequenceL__resultConv = false;	/*advent20_working.sl:39: false*/
}
}
}
void SequenceL_collateDimensions_0(::Sequence< SL_FLOAT > &_SequenceL__Arg_a, ::Sequence< SL_FLOAT > &_SequenceL__Arg_b, ::Sequence< SL_FLOAT > &_SequenceL__resultConv)
{
bool _SequenceL__Arg_allB;
bool _SequenceL__Arg_allA;

SequenceL_isAllRecord_0(_SequenceL__Arg_b, _SequenceL__Arg_allB);	/*advent20_working.sl:44: isAllRecord(b)*/
if (_SequenceL__Arg_allB)	/*advent20_working.sl:47: a when allB  else b when allA  else intersection(a,b)*/
{
_SequenceL__resultConv = _SequenceL__Arg_a;	/*advent20_working.sl:45: a*/
}
else
{
SequenceL_isAllRecord_0(_SequenceL__Arg_a, _SequenceL__Arg_allA);	/*advent20_working.sl:43: isAllRecord(a)*/
if (_SequenceL__Arg_allA)	/*advent20_working.sl:47: b when allA  else intersection(a,b)*/
{
_SequenceL__resultConv = _SequenceL__Arg_b;	/*advent20_working.sl:46: b*/
}
else
{
SequenceL_intersection_3(_SequenceL__Arg_a, _SequenceL__Arg_b, _SequenceL__resultConv);	/*advent20_working.sl:47: intersection(a,b)*/
}
}
}
void SequenceL_stationary_0(SL_FLOAT _SequenceL__Arg_p, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< Empty > _SequenceL_tmp595(cspace);

if ((_SequenceL__Arg_p != 0))	/*advent20_working.sl:18: [] when p /= 0  else [0, 0]*/
{
_SequenceL_tmp595.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp595, _SequenceL__resultConv);	
_SequenceL_tmp595.delete_data(true);	
_SequenceL_tmp595.finished();	
}
else
{
_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))) = 0;	/*advent20_working.sl:18: 0*/
(*(_SequenceL__resultConv.get_ptr(2))) = 0;	/*advent20_working.sl:18: 0*/
}
}
void SequenceL_linear_0(::Sequence< SL_FLOAT > &_SequenceL__Arg_a, ::Sequence< SL_FLOAT > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL_tmp601(cspace);

if (((*(_SequenceL__Arg_a.get_ptr(2))) == 0))	/*advent20_working.sl:22: stationary(a[1]) when a[2] = 0  else [-a[1]/a[2]]*/
{
SequenceL_stationary_0((*(_SequenceL__Arg_a.get_ptr(1))), _SequenceL_tmp601);	/*advent20_working.sl:21: stationary(a[1])*/
_SequenceL_cast(_SequenceL_tmp601, _SequenceL__resultConv);	
_SequenceL_tmp601.delete_data(true);	
_SequenceL_tmp601.finished();	
}
else
{
_SequenceL__resultConv.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))) = ((-(*(_SequenceL__Arg_a.get_ptr(1)))) / (*(_SequenceL__Arg_a.get_ptr(2))));	/*advent20_working.sl:22: -a[1]/a[2]*/
}
}
void SequenceL_newton_0(::Sequence< SL_FLOAT > &_SequenceL__Arg_a, ::Sequence< SL_FLOAT > &_SequenceL__resultConv)
{
::Sequence< SL_FLOAT > _SequenceL_tmp611(cspace);
::Sequence< int > _SequenceL_tmp608(cspace);
SL_FLOAT _SequenceL__Arg_d;
SL_FLOAT _SequenceL__Arg_b;
::Sequence< Empty > _SequenceL_tmp618(cspace);
SL_FLOAT _SequenceL__Arg_s;

if (((*(_SequenceL__Arg_a.get_ptr(3))) == 0))	/*advent20_working.sl:32: linear(a[[1,2]]) when a[3] = 0  else [] when d < 0  else [-b/a[3]] when d = 0  else [(-b-s)/a[3], (-b+s)/a[3]]*/
{
_SequenceL_tmp608.setSize(2 > 0 ? 2 : 0);	
(*(_SequenceL_tmp608.get_ptr(1))) = 1;	/*advent20_working.sl:29: 1*/
(*(_SequenceL_tmp608.get_ptr(2))) = 2;	/*advent20_working.sl:29: 2*/
_SequenceL_tmp611.setSize(_SequenceL_tmp608.size());	/*advent20_working.sl:29: a[[1,2]]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index1=1,_stop_val__SequenceL__Index__tmp_index1=_SequenceL_tmp611.size(); _SequenceL__Index__tmp_index1<=_stop_val__SequenceL__Index__tmp_index1; _SequenceL__Index__tmp_index1+=1)
{
(*(_SequenceL_tmp611.get_ptr(_SequenceL__Index__tmp_index1))) = (*(_SequenceL__Arg_a.get_ptr((*(_SequenceL_tmp608.get_ptr(_SequenceL__Index__tmp_index1))))));	/*advent20_working.sl:29: a[[1,2]]*/
}
_SequenceL_tmp608.delete_data(true);	
_SequenceL_tmp608.finished();	
SequenceL_linear_0(_SequenceL_tmp611, _SequenceL__resultConv);	/*advent20_working.sl:29: linear(a[[1,2]])*/
_SequenceL_tmp611.delete_data(true);	
_SequenceL_tmp611.finished();	
}
else
{
_SequenceL__Arg_b = ((*(_SequenceL__Arg_a.get_ptr(2))) + ((*(_SequenceL__Arg_a.get_ptr(3))) / 2));	/*advent20_working.sl:26: a[2] + a[3]/2*/
_SequenceL__Arg_d = ((_SequenceL__Arg_b * _SequenceL__Arg_b) - ((2 * (*(_SequenceL__Arg_a.get_ptr(3)))) * (*(_SequenceL__Arg_a.get_ptr(1)))));	/*advent20_working.sl:27: b*b - 2*a[3]*a[1]*/
if ((_SequenceL__Arg_d < 0))	/*advent20_working.sl:32: [] when d < 0  else [-b/a[3]] when d = 0  else [(-b-s)/a[3], (-b+s)/a[3]]*/
{
_SequenceL_tmp618.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp618, _SequenceL__resultConv);	
_SequenceL_tmp618.delete_data(true);	
_SequenceL_tmp618.finished();	
}
else
{
if ((_SequenceL__Arg_d == 0))	/*advent20_working.sl:32: [-b/a[3]] when d = 0  else [(-b-s)/a[3], (-b+s)/a[3]]*/
{
_SequenceL__resultConv.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))) = ((-_SequenceL__Arg_b) / (*(_SequenceL__Arg_a.get_ptr(3))));	/*advent20_working.sl:31: -b/a[3]*/
}
else
{
_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
_SequenceL__Arg_s = sqrt(_SequenceL__Arg_d);	/*advent20_working.sl:28: sqrt(d)*/
(*(_SequenceL__resultConv.get_ptr(1))) = (((-_SequenceL__Arg_b) - _SequenceL__Arg_s) / (*(_SequenceL__Arg_a.get_ptr(3))));	/*advent20_working.sl:32: (-b-s)/a[3]*/
(*(_SequenceL__resultConv.get_ptr(2))) = (((-_SequenceL__Arg_b) + _SequenceL__Arg_s) / (*(_SequenceL__Arg_a.get_ptr(3))));	/*advent20_working.sl:32: (-b+s)/a[3]*/
}
}
}
}
void SequenceL_firstCollision_0(::Sequence< ::Sequence< ::Sequence< SL_FLOAT > > > &_SequenceL__Arg_pair, ::Sequence< int > &_SequenceL__Arg_points, int _SequenceL__ex_iter, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
SL_FLOAT _SequenceL__Arg_t;
::Sequence< SL_FLOAT > _SequenceL__Arg_collisionTimes(cspace);
::Sequence< ::Sequence< SL_FLOAT > > _SequenceL__Arg_diffs(cspace);
::Sequence< ::Sequence< SL_FLOAT > > _SequenceL__Arg_roots(cspace);
::Sequence< SL_FLOAT > _SequenceL_tmp635(cspace);

_SequenceL__Arg_diffs.setSize((*(_SequenceL__Arg_pair.get_ptr(1))).size());	/*advent20_working.sl:60: pair[1] - pair[2]*/
_SequenceL__Arg_roots.setSize(_SequenceL__Arg_diffs.size());	/*advent20_working.sl:61: newton(diffs)*/
SIMD_DIRECTIVE
for (int _SequenceL__i632=1,_stop_val__SequenceL__i632=_SequenceL__Arg_diffs.size(); _SequenceL__i632<=_stop_val__SequenceL__i632; _SequenceL__i632+=1)
{
(*(_SequenceL__Arg_diffs.get_ptr(_SequenceL__i632))).setSize((*((*(_SequenceL__Arg_pair.get_ptr(1))).get_ptr(_SequenceL__i632))).size());	/*advent20_working.sl:60: pair[1] - pair[2]*/
SIMD_DIRECTIVE
for (int _SequenceL__i633=1,_stop_val__SequenceL__i633=(*(_SequenceL__Arg_diffs.get_ptr(_SequenceL__i632))).size(); _SequenceL__i633<=_stop_val__SequenceL__i633; _SequenceL__i633+=1)
{
(*((*(_SequenceL__Arg_diffs.get_ptr(_SequenceL__i632))).get_ptr(_SequenceL__i633))) = ((*((*((*(_SequenceL__Arg_pair.get_ptr(1))).get_ptr(_SequenceL__i632))).get_ptr(_SequenceL__i633))) - (*((*((*(_SequenceL__Arg_pair.get_ptr(2))).get_ptr(_SequenceL__i632))).get_ptr(_SequenceL__i633))));	/*advent20_working.sl:60: pair[1] - pair[2]*/
}
SequenceL_newton_0((*(_SequenceL__Arg_diffs.get_ptr(_SequenceL__i632))), (*(_SequenceL__Arg_roots.get_ptr(_SequenceL__i632))));	/*advent20_working.sl:61: newton(diffs)*/
}
_SequenceL__Arg_diffs.delete_data(true);	
_SequenceL__Arg_diffs.finished();	
SequenceL_collateDimensions_0((*(_SequenceL__Arg_roots.get_ptr(2))), (*(_SequenceL__Arg_roots.get_ptr(3))), _SequenceL_tmp635);	/*advent20_working.sl:62: collateDimensions(roots[2], roots[3])*/
SequenceL_collateDimensions_0((*(_SequenceL__Arg_roots.get_ptr(1))), _SequenceL_tmp635, _SequenceL__Arg_collisionTimes);	/*advent20_working.sl:62: collateDimensions(roots[1], collateDimensions(roots[2], roots[3]))*/
_SequenceL_tmp635.delete_data(true);	
_SequenceL__Arg_roots.delete_data(true);	
_SequenceL_tmp635.finished();	
_SequenceL__Arg_roots.finished();	
SequenceL_firstNonNegativeTime_0(_SequenceL__Arg_collisionTimes, _SequenceL__Arg_t);	/*advent20_working.sl:63: firstNonNegativeTime(collisionTimes)*/
_SequenceL__Arg_collisionTimes.finished();	
if ((_SequenceL__Arg_t >= 0))	/*advent20_working.sl:64: (t: t, a: points[1], b: points[2]) when t >= 0*/
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__ex_iter))).t = _SequenceL__Arg_t;	/*advent20_working.sl:64: t*/
(*(_SequenceL__resultConv.get_ptr(_SequenceL__ex_iter))).a = (*(_SequenceL__Arg_points.get_ptr(1)));	/*advent20_working.sl:64: points[1]*/
(*(_SequenceL__resultConv.get_ptr(_SequenceL__ex_iter))).b = (*(_SequenceL__Arg_points.get_ptr(2)));	/*advent20_working.sl:64: points[2]*/
_SequenceL__resultConv.setExistence(_SequenceL__ex_iter, true);	
}
else
{
_SequenceL__resultConv.setExistence(_SequenceL__ex_iter, false);	
}
}
void SequenceL_findCollisions_0(::Sequence< ::Sequence< ::Sequence< SL_FLOAT > > > &_SequenceL__Arg_axes, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_pairs, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::Sequence< ::Sequence< ::Sequence< SL_FLOAT > > > _SequenceL_tmp637(cspace);

_SequenceL__resultConv.setSize(_SequenceL__Arg_pairs.size());	/*advent20_working.sl:66: firstCollision(axes[pairs[i]], pairs[i])*/
_SequenceL__resultConv.create_map();	
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_pairs.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
_SequenceL_tmp637.setSize((*(_SequenceL__Arg_pairs.get_ptr(_SequenceL__Index_i))).size());	/*advent20_working.sl:66: axes[pairs[i]]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index2=1,_stop_val__SequenceL__Index__tmp_index2=_SequenceL_tmp637.size(); _SequenceL__Index__tmp_index2<=_stop_val__SequenceL__Index__tmp_index2; _SequenceL__Index__tmp_index2+=1)
{
(*(_SequenceL_tmp637.get_ptr(_SequenceL__Index__tmp_index2))) = (*(_SequenceL__Arg_axes.get_ptr((*((*(_SequenceL__Arg_pairs.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index__tmp_index2))))));	/*advent20_working.sl:66: axes[pairs[i]]*/
}
SequenceL_firstCollision_0(_SequenceL_tmp637, (*(_SequenceL__Arg_pairs.get_ptr(_SequenceL__Index_i))), _SequenceL__Index_i, _SequenceL__resultConv);	/*advent20_working.sl:66: firstCollision(axes[pairs[i]], pairs[i])*/
}
_SequenceL_tmp637.delete_data(true);	
_SequenceL_tmp637.finished();	
_SequenceL__resultConv.cleanup(true);	
}
void SequenceL_duplicate_4(int _SequenceL__Arg_element, int _SequenceL__Arg_times, ::Sequence< int > &_SequenceL__resultConv)
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
::Sequence< ::Sequence< int > > _SequenceL_tmp658(cspace);
int _SequenceL_tmp660;
::Sequence< ::Sequence< int > > _SequenceL_tmp667(cspace);
int _SequenceL_tmp666;

_SequenceL_tmp658.setSize(2 > 0 ? 2 : 0);	
_SequenceL_tmp660 = (_SequenceL__Arg_n - 1);	/*advent20_working.sl:69: n-1*/
SequenceL_duplicate_4(_SequenceL__Arg_n, _SequenceL_tmp660, (*(_SequenceL_tmp658.get_ptr(1))));	/*advent20_working.sl:69: duplicate(n, (n-1))*/
ellipsis(1, (_SequenceL__Arg_n - 1), (*(_SequenceL_tmp658.get_ptr(2))));	/*advent20_working.sl:69: 1 ... (n - 1)*/
transpose(_SequenceL_tmp658, _SequenceL__Arg_npairs);	/*advent20_working.sl:69: transpose([duplicate(n, (n-1)), 1 ... (n - 1)])*/
_SequenceL_tmp658.delete_data(true);	
_SequenceL_tmp658.finished();	
if ((_SequenceL__Arg_n == 2))	/*advent20_working.sl:71: npairs when n = 2  else npairs ++ distinctPairs(n - 1)*/
{
_SequenceL__resultConv = _SequenceL__Arg_npairs;	/*advent20_working.sl:70: npairs*/
_SequenceL__Arg_npairs.delete_data(true);	
_SequenceL__Arg_npairs.finished();	
}
else
{
_SequenceL_tmp666 = (_SequenceL__Arg_n - 1);	/*advent20_working.sl:71: n - 1*/
SequenceL_distinctPairs_0(_SequenceL_tmp666, _SequenceL_tmp667);	/*advent20_working.sl:71: distinctPairs(n - 1)*/
append(_SequenceL__Arg_npairs, _SequenceL_tmp667, _SequenceL__resultConv);	/*advent20_working.sl:71: npairs ++ distinctPairs(n - 1)*/
_SequenceL__Arg_npairs.delete_data(true);	
_SequenceL_tmp667.delete_data(true);	
_SequenceL_tmp667.finished();	
_SequenceL__Arg_npairs.finished();	
}
}
void SequenceL_getAxes_0(::Sequence< ::Sequence< int > > &_SequenceL__Arg_v, ::Sequence< ::Sequence< int > > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(3 > 0 ? 3 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))).setSize(_SequenceL__Arg_v.size());	/*advent20_working.sl:15: v[all, 1]*/
(*(_SequenceL__resultConv.get_ptr(2))).setSize(_SequenceL__Arg_v.size());	/*advent20_working.sl:15: v[all, 2]*/
(*(_SequenceL__resultConv.get_ptr(3))).setSize(_SequenceL__Arg_v.size());	/*advent20_working.sl:15: v[all, 3]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index__tmp_index1=1,_stop_val__SequenceL__Index__tmp_index1=_SequenceL__Arg_v.size(); _SequenceL__Index__tmp_index1<=_stop_val__SequenceL__Index__tmp_index1; _SequenceL__Index__tmp_index1+=1)
{
(*((*(_SequenceL__resultConv.get_ptr(1))).get_ptr(_SequenceL__Index__tmp_index1))) = (*((*(_SequenceL__Arg_v.get_ptr(_SequenceL__Index__tmp_index1))).get_ptr(1)));	/*advent20_working.sl:15: v[all, 1]*/
(*((*(_SequenceL__resultConv.get_ptr(2))).get_ptr(_SequenceL__Index__tmp_index1))) = (*((*(_SequenceL__Arg_v.get_ptr(_SequenceL__Index__tmp_index1))).get_ptr(2)));	/*advent20_working.sl:15: v[all, 2]*/
(*((*(_SequenceL__resultConv.get_ptr(3))).get_ptr(_SequenceL__Index__tmp_index1))) = (*((*(_SequenceL__Arg_v.get_ptr(_SequenceL__Index__tmp_index1))).get_ptr(3)));	/*advent20_working.sl:15: v[all, 3]*/
}
}
void SequenceL_integerPowerHelper_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int _SequenceL__Arg_val, int &_SequenceL__resultConv)
{
int _SequenceL___Arg_y_tco;
int _SequenceL___Arg_val_tco;
int _SequenceL_tmp708;
int _SequenceL_tmp709;

_SequenceL___Arg_y_tco = _SequenceL__Arg_y;	
_SequenceL___Arg_val_tco = _SequenceL__Arg_val;	
integerPowerHelper_Math_label_tco:	
if ((_SequenceL___Arg_y_tco < 1))	/*Math.sl:20: val when y < 1	else		integerPowerHelper(x, y - 1, val * x)*/
{
_SequenceL__resultConv = _SequenceL___Arg_val_tco;	/*Math.sl:18: val*/
}
else
{
_SequenceL_tmp708 = (_SequenceL___Arg_y_tco - 1);	/*Math.sl:20: y - 1*/
_SequenceL_tmp709 = (_SequenceL___Arg_val_tco * _SequenceL__Arg_x);	/*Math.sl:20: val * x*/
_SequenceL___Arg_y_tco = _SequenceL_tmp708;	
_SequenceL___Arg_val_tco = _SequenceL_tmp709;	
goto integerPowerHelper_Math_label_tco;	/*Math.sl:20: integerPowerHelper(x, y - 1, val * x)*/
}
}
void SequenceL_integerPower_5(int _SequenceL__Arg_x, int _SequenceL__Arg_y, int &_SequenceL__resultConv)
{

SequenceL_integerPowerHelper_5(_SequenceL__Arg_x, _SequenceL__Arg_y, 1, _SequenceL__resultConv);	/*Math.sl:14: integerPowerHelper(x, y, 1)*/
}
void SequenceL_charToInt_6(char _SequenceL__Arg_char, int &_SequenceL__resultConv)
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
void SequenceL_atoIWorker_6(::Sequence< char > &_SequenceL__Arg_numString, ::Sequence< int > &_SequenceL__resultConv)
{
int _SequenceL_tmp770;
int _SequenceL__Arg_place;
int _SequenceL_tmp771;

_SequenceL__resultConv.setSize(_SequenceL__Arg_numString.size());	/*Conversion.sl:60: charToInt(numString[i]) * place*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_numString.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
SequenceL_charToInt_6((*(_SequenceL__Arg_numString.get_ptr(_SequenceL__Index_i))), _SequenceL_tmp770);	/*Conversion.sl:60: charToInt(numString[i])*/
_SequenceL_tmp771 = (_SequenceL__Arg_numString.size() - _SequenceL__Index_i);	/*Conversion.sl:58: size(numString) - i*/
SequenceL_integerPower_5(10, _SequenceL_tmp771, _SequenceL__Arg_place);	/*Conversion.sl:58: integerPower(10, (size(numString) - i))*/
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))) = (_SequenceL_tmp770 * _SequenceL__Arg_place);	/*Conversion.sl:60: charToInt(numString[i]) * place*/
}
}
void SequenceL_take_4(::Sequence< char > &_SequenceL__Arg_list, int _SequenceL__Arg_n, ::Sequence< char > &_SequenceL__resultConv)
{

_SequenceL__Arg_list.sub_seq(1, _SequenceL__Arg_n, _SequenceL__resultConv);	/*Sequence.sl:174: list[1 ... n]*/
}
void SequenceL_isDigit_2(char _SequenceL__Arg_char, bool &_SequenceL__resultConv)
{

_SequenceL__resultConv = ((((((((((_SequenceL__Arg_char == '0') || (_SequenceL__Arg_char == '1')) || (_SequenceL__Arg_char == '2')) || (_SequenceL__Arg_char == '3')) || (_SequenceL__Arg_char == '4')) || (_SequenceL__Arg_char == '5')) || (_SequenceL__Arg_char == '6')) || (_SequenceL__Arg_char == '7')) || (_SequenceL__Arg_char == '8')) || (_SequenceL__Arg_char == '9'));	/*String.sl:20: char = '0' or char = '1' or char = '2' or char = '3' or char = '4' or char = '5' or char = '6' or char = '7' or char = '8' or char = '9'*/
}
void SequenceL_trimNonNumeric_6(::Sequence< char > &_SequenceL__Arg_numString, int _SequenceL__Arg_i, ::Sequence< char > &_SequenceL__resultConv)
{
int _SequenceL___Arg_i_tco;
bool _SequenceL_tmp847;
int _SequenceL_tmp850;
int _SequenceL_tmp852;

_SequenceL___Arg_i_tco = _SequenceL__Arg_i;	
trimNonNumeric_Conversion_label_tco:	
if ((_SequenceL___Arg_i_tco > _SequenceL__Arg_numString.size()))	/*Conversion.sl:53: numString when i > size(numString)	else		take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL__resultConv = _SequenceL__Arg_numString;	/*Conversion.sl:49: numString*/
}
else
{
SequenceL_isDigit_2((*(_SequenceL__Arg_numString.get_ptr(_SequenceL___Arg_i_tco))), _SequenceL_tmp847);	/*Conversion.sl:52: isDigit(numString[i])*/
if (!_SequenceL_tmp847)	/*Conversion.sl:53: take(numString, i-1) when not isDigit(numString[i])	else		 trimNonNumeric(numString, i + 1)*/
{
_SequenceL_tmp850 = (_SequenceL___Arg_i_tco - 1);	/*Conversion.sl:51: i-1*/
SequenceL_take_4(_SequenceL__Arg_numString, _SequenceL_tmp850, _SequenceL__resultConv);	/*Conversion.sl:51: take(numString, i-1)*/
}
else
{
_SequenceL_tmp852 = (_SequenceL___Arg_i_tco + 1);	/*Conversion.sl:53: i + 1*/
_SequenceL___Arg_i_tco = _SequenceL_tmp852;	
goto trimNonNumeric_Conversion_label_tco;	/*Conversion.sl:53: trimNonNumeric(numString, i + 1)*/
}
}
}
void SequenceL_isWhiteSpace_2(char _SequenceL__Arg_input, bool &_SequenceL__resultConv)
{

_SequenceL__resultConv = ((((_SequenceL__Arg_input == ' ') || (_SequenceL__Arg_input == '\n')) || (_SequenceL__Arg_input == '\t')) || (_SequenceL__Arg_input == '\r'));	/*String.sl:16: input = ' ' or input = '\n' or input = '\t' or input = '\r'*/
}
void SequenceL_trimStart_2(::Sequence< char > &_SequenceL__Arg_input, ::Sequence< char > &_SequenceL__resultConv)
{
::Sequence< char > _SequenceL___Arg_input_tco(cspace);
bool _SequenceL_tmp929;
char _SequenceL_tmp928;
::Sequence< char > _SequenceL_tmp931(cspace);

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
_SequenceL_tmp928 = _SequenceL___Arg_input_tco.head();	/*String.sl:10: head(input)*/
SequenceL_isWhiteSpace_2(_SequenceL_tmp928, _SequenceL_tmp929);	/*String.sl:11: isWhiteSpace(head(input))*/
if (_SequenceL_tmp929)	/*String.sl:12: trimStart(tail(input)) when isWhiteSpace(head(input))	else		input*/
{
_SequenceL___Arg_input_tco.tail(_SequenceL_tmp931);	/*String.sl:10: tail(input)*/
_swap(_SequenceL___Arg_input_tco, _SequenceL_tmp931);	
goto trimStart_String_label_tco;	/*String.sl:10: trimStart(tail(input))*/
}
else
{
_SequenceL__resultConv = _SequenceL___Arg_input_tco;	/*String.sl:12: input*/
}
}
_SequenceL_tmp931.delete_data(true);	
_SequenceL_tmp931.finished();	
}
void SequenceL_stringToInt_6(::Sequence< char > &_SequenceL__Arg_numString, int &_SequenceL__resultConv)
{
::Sequence< char > _SequenceL__Arg_trimmed(cspace);
char _SequenceL_tmp936;
int _SequenceL_tmp940;
::Sequence< char > _SequenceL_tmp939(cspace);
char _SequenceL_tmp942;
::Sequence< char > _SequenceL_tmp945(cspace);
::Sequence< int > _SequenceL_tmp947(cspace);
::Sequence< char > _SequenceL__Arg_justNumber(cspace);

SequenceL_trimStart_2(_SequenceL__Arg_numString, _SequenceL__Arg_trimmed);	/*Conversion.sl:36: trimStart(numString)*/
_SequenceL__Arg_numString.delete_data(true);	
if ((_SequenceL__Arg_trimmed.size() == 0))	/*Conversion.sl:45: 0 when size(trimmed) = 0	else		- stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__resultConv = 0;	/*Conversion.sl:39: 0*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
}
else
{
_SequenceL_tmp936 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:41: head(trimmed)*/
if ((_SequenceL_tmp936 == '-'))	/*Conversion.sl:45: - stringToInt(tail(trimmed)) when head(trimmed) = '-'	else		stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp939);	/*Conversion.sl:41: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
SequenceL_stringToInt_6(_SequenceL_tmp939, _SequenceL_tmp940);	/*Conversion.sl:41: stringToInt(tail(trimmed))*/
_SequenceL_tmp939.finished();	
_SequenceL__resultConv = (-_SequenceL_tmp940);	/*Conversion.sl:41: - stringToInt(tail(trimmed))*/
}
else
{
_SequenceL_tmp942 = _SequenceL__Arg_trimmed.head();	/*Conversion.sl:43: head(trimmed)*/
if ((_SequenceL_tmp942 == '+'))	/*Conversion.sl:45: stringToInt(tail(trimmed)) when head(trimmed) = '+'	else		sum(atoIWorker(justNumber))*/
{
_SequenceL__Arg_trimmed.tail(_SequenceL_tmp945);	/*Conversion.sl:43: tail(trimmed)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
SequenceL_stringToInt_6(_SequenceL_tmp945, _SequenceL__resultConv);	/*Conversion.sl:43: stringToInt(tail(trimmed))*/
_SequenceL_tmp945.finished();	
}
else
{
SequenceL_trimNonNumeric_6(_SequenceL__Arg_trimmed, 1, _SequenceL__Arg_justNumber);	/*Conversion.sl:37: trimNonNumeric(trimmed, 1)*/
_SequenceL__Arg_trimmed.delete_data(true);	
_SequenceL__Arg_trimmed.finished();	
SequenceL_atoIWorker_6(_SequenceL__Arg_justNumber, _SequenceL_tmp947);	/*Conversion.sl:45: atoIWorker(justNumber)*/
_SequenceL__Arg_justNumber.delete_data(true);	
_SequenceL__Arg_justNumber.finished();	
_SequenceL__resultConv = sum(_SequenceL_tmp947);	/*Conversion.sl:45: sum(atoIWorker(justNumber))*/
_SequenceL_tmp947.delete_data(true);	
_SequenceL_tmp947.finished();	
}
}
}
}
void SequenceL_multipleIndexes_4(::Sequence< char > &_SequenceL__Arg_list, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_indexes, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv)
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
void SequenceL_indexesOf_4(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_element, ::Sequence< int > &_SequenceL__resultConv)
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
void SequenceL_extractVals_0(::Sequence< char > &_SequenceL__Arg_s, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< ::Sequence< char > > _SequenceL_tmp984(cspace);
::Sequence< char > _SequenceL_tmp983(cspace);
::Sequence< char > _SequenceL__delete_opttmp1(cspace);

_SequenceL__Arg_s.sub_seq(4, (_SequenceL__Arg_s.size() - 1), _SequenceL_tmp983);	/*advent20_working.sl:13: s[4 ... (size(s) - 1)]*/
SequenceL_split_4(_SequenceL_tmp983, ',', _SequenceL_tmp984);	/*advent20_working.sl:13: split(s[4 ... (size(s) - 1)], ',')*/
_SequenceL_tmp983.delete_data(true);	
_SequenceL_tmp983.finished();	
_SequenceL__resultConv.setSize(_SequenceL_tmp984.size());	/*advent20_working.sl:13: stringToInt(split(s[4 ... (size(s) - 1)], ','))*/
SIMD_DIRECTIVE
for (int _SequenceL__i985=1,_stop_val__SequenceL__i985=_SequenceL__resultConv.size(); _SequenceL__i985<=_stop_val__SequenceL__i985; _SequenceL__i985+=1)
{
(*(_SequenceL_tmp984.get_ptr(_SequenceL__i985))).clone(_SequenceL__delete_opttmp1);	/*advent20_working.sl:13: stringToInt(split(s[4 ... (size(s) - 1)], ','))*/
SequenceL_stringToInt_6(_SequenceL__delete_opttmp1, (*(_SequenceL__resultConv.get_ptr(_SequenceL__i985))));	/*advent20_working.sl:13: stringToInt(split(s[4 ... (size(s) - 1)], ','))*/
_SequenceL__delete_opttmp1.finished();	
}
_SequenceL_tmp984.delete_data(true);	
_SequenceL_tmp984.finished();	
}
void SequenceL_split_4(::Sequence< char > &_SequenceL__Arg_list, char _SequenceL__Arg_delimiter, ::Sequence< ::Sequence< char > > &_SequenceL__resultConv)
{
::Sequence< Empty > _SequenceL_tmp987(cspace);
::Sequence< int > _SequenceL_tmp993(cspace);
::Sequence< int > _SequenceL_tmp989(cspace);
::Sequence< int > _SequenceL__Arg_indexes(cspace);
::Sequence< int > _SequenceL_tmp991(cspace);
::Sequence< int > _SequenceL_tmp998(cspace);
::Sequence< int > _SequenceL_tmp994(cspace);
::Sequence< int > _SequenceL_tmp996(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp999(cspace);

if ((_SequenceL__Arg_list.size() == 0))	/*Sequence.sl:54: [] when size(list) = 0	else		multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
{
_SequenceL_tmp987.setSize(0 > 0 ? 0 : 0);	
_convert(_SequenceL_tmp987, _SequenceL__resultConv);	
_SequenceL_tmp987.delete_data(true);	
_SequenceL_tmp987.finished();	
}
else
{
_SequenceL_tmp989.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp989.get_ptr(1))) = 1;	/*Sequence.sl:54: 1*/
SequenceL_indexesOf_4(_SequenceL__Arg_list, _SequenceL__Arg_delimiter, _SequenceL__Arg_indexes);	/*Sequence.sl:50: indexesOf(list, delimiter)*/
_SequenceL_tmp991.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes + 1*/
SIMD_DIRECTIVE
for (int _SequenceL__i992=1,_stop_val__SequenceL__i992=_SequenceL_tmp991.size(); _SequenceL__i992<=_stop_val__SequenceL__i992; _SequenceL__i992+=1)
{
(*(_SequenceL_tmp991.get_ptr(_SequenceL__i992))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i992))) + 1);	/*Sequence.sl:54: indexes + 1*/
}
append(_SequenceL_tmp989, _SequenceL_tmp991, _SequenceL_tmp993);	/*Sequence.sl:54: [1] ++ (indexes + 1)*/
_SequenceL_tmp989.delete_data(true);	
_SequenceL_tmp991.delete_data(true);	
_SequenceL_tmp991.finished();	
_SequenceL_tmp989.finished();	
_SequenceL_tmp994.setSize(_SequenceL__Arg_indexes.size());	/*Sequence.sl:54: indexes - 1*/
SIMD_DIRECTIVE
for (int _SequenceL__i995=1,_stop_val__SequenceL__i995=_SequenceL_tmp994.size(); _SequenceL__i995<=_stop_val__SequenceL__i995; _SequenceL__i995+=1)
{
(*(_SequenceL_tmp994.get_ptr(_SequenceL__i995))) = ((*(_SequenceL__Arg_indexes.get_ptr(_SequenceL__i995))) - 1);	/*Sequence.sl:54: indexes - 1*/
}
_SequenceL__Arg_indexes.delete_data(true);	
_SequenceL__Arg_indexes.finished();	
_SequenceL_tmp996.setSize(1 > 0 ? 1 : 0);	
(*(_SequenceL_tmp996.get_ptr(1))) = _SequenceL__Arg_list.size();	/*Sequence.sl:54: size(list)*/
append(_SequenceL_tmp994, _SequenceL_tmp996, _SequenceL_tmp998);	/*Sequence.sl:54: (indexes - 1) ++ [size(list)]*/
_SequenceL_tmp994.delete_data(true);	
_SequenceL_tmp996.delete_data(true);	
_SequenceL_tmp996.finished();	
_SequenceL_tmp994.finished();	
_SequenceL_tmp999.setSize(_SequenceL_tmp993.size());	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
SIMD_DIRECTIVE
for (int _SequenceL__i1000=1,_stop_val__SequenceL__i1000=_SequenceL_tmp999.size(); _SequenceL__i1000<=_stop_val__SequenceL__i1000; _SequenceL__i1000+=1)
{
ellipsis((*(_SequenceL_tmp993.get_ptr(_SequenceL__i1000))), (*(_SequenceL_tmp998.get_ptr(_SequenceL__i1000))), (*(_SequenceL_tmp999.get_ptr(_SequenceL__i1000))));	/*Sequence.sl:54: ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)])*/
}
_SequenceL_tmp993.delete_data(true);	
_SequenceL_tmp998.delete_data(true);	
_SequenceL_tmp998.finished();	
_SequenceL_tmp993.finished();	
SequenceL_multipleIndexes_4(_SequenceL__Arg_list, _SequenceL_tmp999, _SequenceL__resultConv);	/*Sequence.sl:54: multipleIndexes(list, ([1] ++ (indexes + 1)) ... ((indexes - 1) ++ [size(list)]))*/
_SequenceL_tmp999.delete_data(true);	
_SequenceL_tmp999.finished();	
}
}
void SequenceL_allButLast_4(::Sequence< char > &_SequenceL__Arg_list, ::Sequence< char > &_SequenceL__resultConv)
{

_SequenceL__Arg_list.sub_seq(1, (_SequenceL__Arg_list.size() - 1), _SequenceL__resultConv);	/*Sequence.sl:166: list[1 ... (size(list) - 1)]*/
}
void SequenceL_last_4(::Sequence< char > &_SequenceL__Arg_list, char &_SequenceL__resultConv)
{

_SequenceL__resultConv = (*(_SequenceL__Arg_list.get_ptr(_SequenceL__Arg_list.size())));	/*Sequence.sl:162: list[size(list)]*/
}
void SequenceL_trim_0(::Sequence< char > &_SequenceL__Arg_s, ::Sequence< char > &_SequenceL__resultConv)
{
::Sequence< char > _SequenceL___Arg_s_tco(cspace);
bool _SequenceL_tmp1036;
char _SequenceL_tmp1035;
::Sequence< char > _SequenceL_tmp1038(cspace);
bool _SequenceL_tmp1041;
char _SequenceL_tmp1040;
::Sequence< char > _SequenceL_tmp1043(cspace);

if (_SequenceL__Arg_s.onlyInstance())	
{
_SequenceL___Arg_s_tco.replaceSequence(_SequenceL__Arg_s);	
}
else
{
_SequenceL___Arg_s_tco.hard_copy(_SequenceL__Arg_s,__LINE__);	
}
trim_advent20working_label_tco:	
_SequenceL_tmp1035 = _SequenceL___Arg_s_tco.head();	/*advent20_working.sl:9: head(s)*/
SequenceL_isWhiteSpace_2(_SequenceL_tmp1035, _SequenceL_tmp1036);	/*advent20_working.sl:10: isWhiteSpace(head(s))*/
if (_SequenceL_tmp1036)	/*advent20_working.sl:11: trim(tail(s)) when isWhiteSpace(head(s))  else trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
_SequenceL___Arg_s_tco.tail(_SequenceL_tmp1038);	/*advent20_working.sl:9: tail(s)*/
_swap(_SequenceL___Arg_s_tco, _SequenceL_tmp1038);	
goto trim_advent20working_label_tco;	/*advent20_working.sl:9: trim(tail(s))*/
}
else
{
SequenceL_last_4(_SequenceL___Arg_s_tco, _SequenceL_tmp1040);	/*advent20_working.sl:10: last(s)*/
SequenceL_isWhiteSpace_2(_SequenceL_tmp1040, _SequenceL_tmp1041);	/*advent20_working.sl:11: isWhiteSpace(last(s))*/
if (_SequenceL_tmp1041)	/*advent20_working.sl:11: trim(allButLast(s)) when isWhiteSpace(last(s))  else s*/
{
SequenceL_allButLast_4(_SequenceL___Arg_s_tco, _SequenceL_tmp1043);	/*advent20_working.sl:10: allButLast(s)*/
_swap(_SequenceL___Arg_s_tco, _SequenceL_tmp1043);	
goto trim_advent20working_label_tco;	/*advent20_working.sl:10: trim(allButLast(s))*/
}
else
{
_SequenceL__resultConv = _SequenceL___Arg_s_tco;	/*advent20_working.sl:11: s*/
}
}
_SequenceL_tmp1038.delete_data(true);	
_SequenceL_tmp1043.delete_data(true);	
_SequenceL_tmp1043.finished();	
_SequenceL_tmp1038.finished();	
}
void SequenceL_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_s, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__Arg_collisions(cspace);
::Sequence< ::Sequence< ::Sequence< SL_FLOAT > > > _SequenceL_tmp1053(cspace);
::Sequence< ::Sequence< char > > _SequenceL__Arg_points(cspace);
::Sequence< char > _SequenceL_tmp1046(cspace);
::Sequence< char > _SequenceL_tmp1047(cspace);
::Sequence< ::Sequence< ::Sequence< char > > > _SequenceL__Arg_forces(cspace);
::Sequence< ::Sequence< ::Sequence< int > > > _SequenceL__Arg_vals(cspace);
::Sequence< ::Sequence< ::Sequence< int > > > _SequenceL__Arg_axes(cspace);
::Sequence< char > _SequenceL__delete_opttmp1(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp1052(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp1055(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__Arg_sorted(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp1058(cspace);
::Sequence< int > _SequenceL__Arg_remainingPoints(cspace);
::Sequence< int > _SequenceL_tmp1060(cspace);

_SequenceL__resultConv.setSize(5 > 0 ? 5 : 0);	
SequenceL_trim_0((*(_SequenceL__Arg_s.get_ptr(1))), _SequenceL_tmp1046);	/*advent20_working.sl:100: trim(s[1])*/
SequenceL_split_4(_SequenceL_tmp1046, '\n', _SequenceL__Arg_points);	/*advent20_working.sl:100: split(trim(s[1]), '\n')*/
_SequenceL_tmp1046.delete_data(true);	
_SequenceL_tmp1046.finished();	
_SequenceL_tmp1047 = "(p|v|a)=<[^>]*>";	/*advent20_working.sl:101: "(p|v|a)=<[^>]*>"*/
_SequenceL__Arg_forces.setSize(_SequenceL__Arg_points.size());	/*advent20_working.sl:101: findAll(points, "(p|v|a)=<[^>]*>")*/
_SequenceL__Arg_vals.setSize(_SequenceL__Arg_forces.size());	/*advent20_working.sl:102: extractVals(forces)*/
_SequenceL__Arg_axes.setSize(_SequenceL__Arg_vals.size());	/*advent20_working.sl:103: getAxes(vals)*/
SIMD_DIRECTIVE
for (int _SequenceL__i1048=1,_stop_val__SequenceL__i1048=_SequenceL__Arg_forces.size(); _SequenceL__i1048<=_stop_val__SequenceL__i1048; _SequenceL__i1048+=1)
{
_foreign_SequenceL_findAll((*(_SequenceL__Arg_points.get_ptr(_SequenceL__i1048))), _SequenceL_tmp1047, (*(_SequenceL__Arg_forces.get_ptr(_SequenceL__i1048))));	/*advent20_working.sl:101: findAll(points, "(p|v|a)=<[^>]*>")*/
(*(_SequenceL__Arg_vals.get_ptr(_SequenceL__i1048))).setSize((*(_SequenceL__Arg_forces.get_ptr(_SequenceL__i1048))).size());	/*advent20_working.sl:102: extractVals(forces)*/
SIMD_DIRECTIVE
for (int _SequenceL__i1050=1,_stop_val__SequenceL__i1050=(*(_SequenceL__Arg_vals.get_ptr(_SequenceL__i1048))).size(); _SequenceL__i1050<=_stop_val__SequenceL__i1050; _SequenceL__i1050+=1)
{
(*((*(_SequenceL__Arg_forces.get_ptr(_SequenceL__i1048))).get_ptr(_SequenceL__i1050))).clone(_SequenceL__delete_opttmp1);	/*advent20_working.sl:102: extractVals(forces)*/
SequenceL_extractVals_0(_SequenceL__delete_opttmp1, (*((*(_SequenceL__Arg_vals.get_ptr(_SequenceL__i1048))).get_ptr(_SequenceL__i1050))));	/*advent20_working.sl:102: extractVals(forces)*/
_SequenceL__delete_opttmp1.delete_data(true);	
_SequenceL__delete_opttmp1.finished();	
}
SequenceL_getAxes_0((*(_SequenceL__Arg_vals.get_ptr(_SequenceL__i1048))), (*(_SequenceL__Arg_axes.get_ptr(_SequenceL__i1048))));	/*advent20_working.sl:103: getAxes(vals)*/
}
_SequenceL__Arg_forces.delete_data(true);	
_SequenceL__Arg_vals.delete_data(true);	
_SequenceL_tmp1047.delete_data(true);	
_SequenceL_tmp1047.finished();	
_SequenceL__Arg_vals.finished();	
_SequenceL__Arg_forces.finished();	
_SequenceL_cast(_SequenceL__Arg_axes, _SequenceL_tmp1053);	
SequenceL_distinctPairs_0(_SequenceL__Arg_axes.size(), _SequenceL_tmp1052);	/*advent20_working.sl:104: distinctPairs(size(axes))*/
_SequenceL__Arg_axes.delete_data(true);	
_SequenceL__Arg_axes.finished();	
SequenceL_findCollisions_0(_SequenceL_tmp1053, _SequenceL_tmp1052, _SequenceL__Arg_collisions);	/*advent20_working.sl:104: findCollisions(axes, distinctPairs(size(axes)))*/
_SequenceL_tmp1053.delete_data(true);	
_SequenceL_tmp1052.delete_data(true);	
_SequenceL_tmp1052.finished();	
_SequenceL_tmp1053.finished();	
(*(_SequenceL__resultConv.get_ptr(1))) = _SequenceL__Arg_collisions.size();	/*advent20_working.sl:108: size(collisions)*/
remdups(_SequenceL__Arg_collisions, _SequenceL_tmp1055);	/*advent20_working.sl:108: removeDups(collisions)*/
(*(_SequenceL__resultConv.get_ptr(2))) = _SequenceL_tmp1055.size();	/*advent20_working.sl:108: size(removeDups(collisions))*/
_SequenceL_tmp1055.delete_data(true);	
_SequenceL_tmp1055.finished();	
SequenceL_sortBy_4(_SequenceL__Arg_collisions, _PointerSequenceL_byTime_0, _SequenceL__Arg_sorted);	/*advent20_working.sl:105: sortBy(collisions, byTime)*/
_SequenceL__Arg_collisions.delete_data(true);	
_SequenceL__Arg_collisions.finished();	
(*(_SequenceL__resultConv.get_ptr(3))) = _SequenceL__Arg_sorted.size();	/*advent20_working.sl:108: size(sorted)*/
remdups(_SequenceL__Arg_sorted, _SequenceL_tmp1058);	/*advent20_working.sl:108: removeDups(sorted)*/
(*(_SequenceL__resultConv.get_ptr(4))) = _SequenceL_tmp1058.size();	/*advent20_working.sl:108: size(removeDups(sorted))*/
_SequenceL_tmp1058.delete_data(true);	
_SequenceL_tmp1058.finished();	
ellipsis(1, _SequenceL__Arg_points.size(), _SequenceL_tmp1060);	/*advent20_working.sl:106: 1 ... size(points)*/
_SequenceL__Arg_points.delete_data(true);	
_SequenceL__Arg_points.finished();	
SequenceL_doCollisions_0(_SequenceL_tmp1060, _SequenceL__Arg_sorted, _SequenceL__Arg_remainingPoints);	/*advent20_working.sl:106: doCollisions(1 ... size(points), sorted)*/
_SequenceL_tmp1060.delete_data(true);	
_SequenceL__Arg_sorted.delete_data(true);	
_SequenceL__Arg_sorted.finished();	
_SequenceL_tmp1060.finished();	
(*(_SequenceL__resultConv.get_ptr(5))) = _SequenceL__Arg_remainingPoints.size();	/*advent20_working.sl:108: size(remainingPoints)*/
_SequenceL__Arg_remainingPoints.delete_data(true);	
_SequenceL__Arg_remainingPoints.finished();	
}
void SequenceL_sign_5(SL_FLOAT _SequenceL__Arg_X, int &_SequenceL__resultConv)
{

if ((_SequenceL__Arg_X < 0))	/*Math.sl:57: -1 when X < 0	else		0 when X = 0	else		1*/
{
_SequenceL__resultConv = (-1);	/*Math.sl:53: -1*/
}
else
{
if ((_SequenceL__Arg_X == 0))	/*Math.sl:57: 0 when X = 0	else		1*/
{
_SequenceL__resultConv = 0;	/*Math.sl:55: 0*/
}
else
{
_SequenceL__resultConv = 1;	/*Math.sl:57: 1*/
}
}
}
void SequenceL_byTime_0(::_sl_CollisionRecord_0 &_SequenceL__Arg_leftCr, ::_sl_CollisionRecord_0 &_SequenceL__Arg_rightCr, int &_SequenceL__resultConv)
{
SL_FLOAT _SequenceL_tmp1078;

_SequenceL_tmp1078 = (_SequenceL__Arg_leftCr.t - _SequenceL__Arg_rightCr.t);	/*advent20_working.sl:73: leftCr.t - rightCr.t*/
SequenceL_sign_5(_SequenceL_tmp1078, _SequenceL__resultConv);	/*advent20_working.sl:73: sign(leftCr.t - rightCr.t)*/
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
