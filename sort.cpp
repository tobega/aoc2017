#include "sort.h"
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
namespace
{
void SequenceL_byTime_0(::_sl_CollisionRecord_0 &_SequenceL__Arg_leftCr, ::_sl_CollisionRecord_0 &_SequenceL__Arg_rightCr, int &_SequenceL__resultConv);
void SequenceL_sign_1(SL_FLOAT _SequenceL__Arg_X, int &_SequenceL__resultConv);
void SequenceL_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_args, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL_insertionSortBy_2(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL_insertionSortByHelper_2(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_first, int _SequenceL__Arg_last, int _SequenceL__Arg_i, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL_insertionByWork_2(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, ::_sl_CollisionRecord_0 &_SequenceL__Arg_val, int _SequenceL__Arg_first, int _SequenceL__Arg_j, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL_setElementAt_2(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, int _SequenceL__Arg_location, ::_sl_CollisionRecord_0 &_SequenceL__Arg_newElement, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL__parallel_byTime_0(::_sl_CollisionRecord_0 &_SequenceL__Arg_leftCr, ::_sl_CollisionRecord_0 &_SequenceL__Arg_rightCr, int &_SequenceL__resultConv);
void SequenceL__parallel_sign_1(SL_FLOAT _SequenceL__Arg_X, int &_SequenceL__resultConv);
void SequenceL__parallel_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_args, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL__parallel_insertionSortBy_2(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL__parallel_insertionSortByHelper_2(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_first, int _SequenceL__Arg_last, int _SequenceL__Arg_i, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL__parallel_insertionByWork_2(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, ::_sl_CollisionRecord_0 &_SequenceL__Arg_val, int _SequenceL__Arg_first, int _SequenceL__Arg_j, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
void SequenceL__parallel_setElementAt_2(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, int _SequenceL__Arg_location, ::_sl_CollisionRecord_0 &_SequenceL__Arg_newElement, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv);
class SequenceL__sl_main_nt1_: public NTObj
{
	private:
		int _SequenceL__Arg_location;
		::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list;
		::_sl_CollisionRecord_0 &_SequenceL__Arg_newElement;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__result2;

	public:
		SequenceL__sl_main_nt1_(int _inp1, ::Sequence< ::_sl_CollisionRecord_0 > &_inp2, ::_sl_CollisionRecord_0 &_inp3, int _inp4, int _inp5, ::Sequence< ::_sl_CollisionRecord_0 > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_location(_inp1), _SequenceL__Arg_list(_inp2), _SequenceL__Arg_newElement(_inp3), _SequenceL__start(_inp4), _SequenceL__stop(_inp5), _SequenceL__result2(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};

_sl_fun_pointer _PointerSequenceL_byTime_0[1] = { (_sl_fun_pointer)((void (*)(::_sl_CollisionRecord_0&,::_sl_CollisionRecord_0&,int&))SequenceL_byTime_0)};

void _SequenceL_init_sl_main_globals()
{

}

void _SequenceL_delete_sl_main_globals()
{

}

#ifdef _WIN32
::Sequence< ::Sequence< char > > _sl_vc10_sort_dummy_1(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _sl_vc10_sort_dummy_2(cspace);
#endif

void SequenceL__sl_main_nt1_::operator() (const blocked_range<int>& _r) const {
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
(*(_SequenceL__result2.get_ptr(_SequenceL__no_share_iter))) = (*(_SequenceL__Arg_list.get_ptr(_SequenceL__no_share_iter)));	/*Sequence.sl:76: list[i]*/
}
else
{
(*(_SequenceL__result2.get_ptr(_SequenceL__no_share_iter))) = _SequenceL__Arg_newElement;	/*Sequence.sl:78: newElement*/
}
}
}
}
void SequenceL__parallel_setElementAt_2(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, int _SequenceL__Arg_location, ::_sl_CollisionRecord_0 &_SequenceL__Arg_newElement, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
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
SequenceL__sl_main_nt1_ SequenceL__sl_main_nt1__val(_SequenceL__Arg_location, _SequenceL__Arg_list, _SequenceL__Arg_newElement, 1, _SequenceL__Arg_list.size(), _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt1__val);
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
void SequenceL__parallel_insertionByWork_2(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, ::_sl_CollisionRecord_0 &_SequenceL__Arg_val, int _SequenceL__Arg_first, int _SequenceL__Arg_j, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL___Arg_x_tco(cspace);
int _SequenceL___Arg_j_tco;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__Arg_return(cspace);
int _SequenceL_tmp86;
int _SequenceL_tmp88;
int _SequenceL_tmp91;
int _SequenceL_tmp93;
int _SequenceL_tmp95;

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
_SequenceL_tmp86 = (_SequenceL___Arg_j_tco + 1);	/*Sequence.sl:287: j+1*/
_SequenceL__Arg_val._Reference();	/*Sequence.sl:287: setElementAt(x, j+1, val)*/
SequenceL__parallel_setElementAt_2(_SequenceL___Arg_x_tco, _SequenceL_tmp86, _SequenceL__Arg_val, _SequenceL__Arg_return);	/*Sequence.sl:287: setElementAt(x, j+1, val)*/
_SequenceL__Arg_val._dereference();	
_SequenceL__resultConv = _SequenceL__Arg_return;	/*Sequence.sl:289: return*/
}
else
{
((void (*)(::_sl_CollisionRecord_0&,::_sl_CollisionRecord_0&,int&))_SequenceL__Arg_compFunc[0])((*(_SequenceL___Arg_x_tco.get_ptr(_SequenceL___Arg_j_tco))), _SequenceL__Arg_val, _SequenceL_tmp88);	/*Sequence.sl:291: compFunc(x[j], val)*/
if ((_SequenceL_tmp88 <= 0))	/*Sequence.sl:293: return when compFunc(x[j], val) <= 0	else		insertionByWork(setElementAt(x, j+1, x[j]), compFunc, val, first, j-1)*/
{
_SequenceL_tmp91 = (_SequenceL___Arg_j_tco + 1);	/*Sequence.sl:287: j+1*/
_SequenceL__Arg_val._Reference();	/*Sequence.sl:287: setElementAt(x, j+1, val)*/
SequenceL__parallel_setElementAt_2(_SequenceL___Arg_x_tco, _SequenceL_tmp91, _SequenceL__Arg_val, _SequenceL__Arg_return);	/*Sequence.sl:287: setElementAt(x, j+1, val)*/
_SequenceL__Arg_val._dereference();	
_SequenceL__resultConv = _SequenceL__Arg_return;	/*Sequence.sl:291: return*/
}
else
{
_SequenceL_tmp93 = (_SequenceL___Arg_j_tco + 1);	/*Sequence.sl:293: j+1*/
(*(_SequenceL___Arg_x_tco.get_ptr(_SequenceL___Arg_j_tco)))._Reference();	/*Sequence.sl:293: setElementAt(x, j+1, x[j])*/
if (((_SequenceL_tmp93 >= 1) && (_SequenceL_tmp93 <= _SequenceL___Arg_x_tco.size())))	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
{
(*(_SequenceL___Arg_x_tco.get_ptr(_SequenceL_tmp93))) = (*(_SequenceL___Arg_x_tco.get_ptr(_SequenceL___Arg_j_tco)));	/*Sequence.sl:78: newElement*/
}
(*(_SequenceL___Arg_x_tco.get_ptr(_SequenceL___Arg_j_tco)))._dereference();	
_SequenceL_tmp95 = (_SequenceL___Arg_j_tco - 1);	/*Sequence.sl:293: j-1*/
_SequenceL___Arg_j_tco = _SequenceL_tmp95;	
goto _parallel_insertionByWork_Sequence_label_tco;	/*Sequence.sl:293: insertionByWork(setElementAt(x, j+1, x[j]), compFunc, val, first, j-1)*/
}
}
_SequenceL__Arg_return.delete_data(false);	
_SequenceL___Arg_x_tco.delete_data(false);	
_SequenceL___Arg_x_tco.finished();	
_SequenceL__Arg_return.finished();	
}
void SequenceL__parallel_insertionSortByHelper_2(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_first, int _SequenceL__Arg_last, int _SequenceL__Arg_i, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL___Arg_x_tco(cspace);
int _SequenceL___Arg_i_tco;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp100(cspace);
::_sl_CollisionRecord_0 _SequenceL__Arg_val(cspace);
int _SequenceL_tmp99;
int _SequenceL_tmp101;

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
_SequenceL_tmp99 = (_SequenceL___Arg_i_tco - 1);	/*Sequence.sl:282: i-1*/
SequenceL__parallel_insertionByWork_2(_SequenceL___Arg_x_tco, _SequenceL__Arg_compFunc, _SequenceL__Arg_val, _SequenceL__Arg_first, _SequenceL_tmp99, _SequenceL_tmp100);	/*Sequence.sl:282: insertionByWork(x, compFunc, val, first, i-1)*/
_SequenceL_tmp101 = (_SequenceL___Arg_i_tco + 1);	/*Sequence.sl:282: i+1*/
_swap(_SequenceL___Arg_x_tco, _SequenceL_tmp100);	
_SequenceL___Arg_i_tco = _SequenceL_tmp101;	
goto _parallel_insertionSortByHelper_Sequence_label_tco;	/*Sequence.sl:282: insertionSortByHelper(insertionByWork(x, compFunc, val, first, i-1), compFunc, first, last, i+1)*/
}
_SequenceL_tmp100.delete_data(false);	
_SequenceL__Arg_val._delete_data(false);	
_SequenceL__Arg_val._finished();	
_SequenceL_tmp100.finished();	
}
void SequenceL__parallel_insertionSortBy_2(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{

SequenceL__parallel_insertionSortByHelper_2(_SequenceL__Arg_x, _SequenceL__Arg_compFunc, 1, _SequenceL__Arg_x.size(), 1, _SequenceL__resultConv);	/*Sequence.sl:274: insertionSortByHelper(x, compFunc, 1, size(x), 1)*/
}
void SequenceL__parallel_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_args, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__Arg_s(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__Arg_a(cspace);

_SequenceL__Arg_a.setSize(3 > 0 ? 3 : 0);	
(*(_SequenceL__Arg_a.get_ptr(1))).a = 482;	/*sort.sl:11: 482*/
(*(_SequenceL__Arg_a.get_ptr(1))).b = 481;	/*sort.sl:11: 481*/
(*(_SequenceL__Arg_a.get_ptr(1))).t = ((SL_FLOAT)23);	
(*(_SequenceL__Arg_a.get_ptr(2))).a = 481;	/*sort.sl:11: 481*/
(*(_SequenceL__Arg_a.get_ptr(2))).b = 480;	/*sort.sl:11: 480*/
(*(_SequenceL__Arg_a.get_ptr(2))).t = ((SL_FLOAT)23);	
(*(_SequenceL__Arg_a.get_ptr(3))).a = 479;	/*sort.sl:11: 479*/
(*(_SequenceL__Arg_a.get_ptr(3))).b = 475;	/*sort.sl:11: 475*/
(*(_SequenceL__Arg_a.get_ptr(3))).t = ((SL_FLOAT)18);	
SequenceL__parallel_insertionSortBy_2(_SequenceL__Arg_a, _PointerSequenceL_byTime_0, _SequenceL__Arg_s);	/*sort.sl:12: insertionSortBy(a, byTime)*/
_SequenceL__Arg_a.delete_data(false);	
_SequenceL__Arg_a.finished();	
_SequenceL__resultConv = _SequenceL__Arg_s;	/*sort.sl:13: s*/
_SequenceL__Arg_s.delete_data(false);	
_SequenceL__Arg_s.finished();	
}
void SequenceL__parallel_sign_1(SL_FLOAT _SequenceL__Arg_X, int &_SequenceL__resultConv)
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
SL_FLOAT _SequenceL_tmp125;

_SequenceL_tmp125 = (_SequenceL__Arg_leftCr.t - _SequenceL__Arg_rightCr.t);	/*sort.sl:6: leftCr.t - rightCr.t*/
SequenceL__parallel_sign_1(_SequenceL_tmp125, _SequenceL__resultConv);	/*sort.sl:6: sign(leftCr.t - rightCr.t)*/
}
void SequenceL_setElementAt_2(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_list, int _SequenceL__Arg_location, ::_sl_CollisionRecord_0 &_SequenceL__Arg_newElement, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
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
void SequenceL_insertionByWork_2(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, ::_sl_CollisionRecord_0 &_SequenceL__Arg_val, int _SequenceL__Arg_first, int _SequenceL__Arg_j, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL___Arg_x_tco(cspace);
int _SequenceL___Arg_j_tco;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__Arg_return(cspace);
int _SequenceL_tmp86;
int _SequenceL_tmp88;
int _SequenceL_tmp91;
int _SequenceL_tmp93;
int _SequenceL_tmp95;

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
_SequenceL_tmp86 = (_SequenceL___Arg_j_tco + 1);	/*Sequence.sl:287: j+1*/
_SequenceL__Arg_val._Reference();	/*Sequence.sl:287: setElementAt(x, j+1, val)*/
SequenceL_setElementAt_2(_SequenceL___Arg_x_tco, _SequenceL_tmp86, _SequenceL__Arg_val, _SequenceL__Arg_return);	/*Sequence.sl:287: setElementAt(x, j+1, val)*/
_SequenceL__Arg_val._dereference();	
_SequenceL__resultConv = _SequenceL__Arg_return;	/*Sequence.sl:289: return*/
}
else
{
((void (*)(::_sl_CollisionRecord_0&,::_sl_CollisionRecord_0&,int&))_SequenceL__Arg_compFunc[0])((*(_SequenceL___Arg_x_tco.get_ptr(_SequenceL___Arg_j_tco))), _SequenceL__Arg_val, _SequenceL_tmp88);	/*Sequence.sl:291: compFunc(x[j], val)*/
if ((_SequenceL_tmp88 <= 0))	/*Sequence.sl:293: return when compFunc(x[j], val) <= 0	else		insertionByWork(setElementAt(x, j+1, x[j]), compFunc, val, first, j-1)*/
{
_SequenceL_tmp91 = (_SequenceL___Arg_j_tco + 1);	/*Sequence.sl:287: j+1*/
_SequenceL__Arg_val._Reference();	/*Sequence.sl:287: setElementAt(x, j+1, val)*/
SequenceL_setElementAt_2(_SequenceL___Arg_x_tco, _SequenceL_tmp91, _SequenceL__Arg_val, _SequenceL__Arg_return);	/*Sequence.sl:287: setElementAt(x, j+1, val)*/
_SequenceL__Arg_val._dereference();	
_SequenceL__resultConv = _SequenceL__Arg_return;	/*Sequence.sl:291: return*/
}
else
{
_SequenceL_tmp93 = (_SequenceL___Arg_j_tco + 1);	/*Sequence.sl:293: j+1*/
(*(_SequenceL___Arg_x_tco.get_ptr(_SequenceL___Arg_j_tco)))._Reference();	/*Sequence.sl:293: setElementAt(x, j+1, x[j])*/
if (((_SequenceL_tmp93 >= 1) && (_SequenceL_tmp93 <= _SequenceL___Arg_x_tco.size())))	/*Sequence.sl:78: list[i] when not(i = location)	else		newElement*/
{
(*(_SequenceL___Arg_x_tco.get_ptr(_SequenceL_tmp93))) = (*(_SequenceL___Arg_x_tco.get_ptr(_SequenceL___Arg_j_tco)));	/*Sequence.sl:78: newElement*/
}
(*(_SequenceL___Arg_x_tco.get_ptr(_SequenceL___Arg_j_tco)))._dereference();	
_SequenceL_tmp95 = (_SequenceL___Arg_j_tco - 1);	/*Sequence.sl:293: j-1*/
_SequenceL___Arg_j_tco = _SequenceL_tmp95;	
goto insertionByWork_Sequence_label_tco;	/*Sequence.sl:293: insertionByWork(setElementAt(x, j+1, x[j]), compFunc, val, first, j-1)*/
}
}
_SequenceL__Arg_return.delete_data(true);	
_SequenceL___Arg_x_tco.delete_data(true);	
_SequenceL___Arg_x_tco.finished();	
_SequenceL__Arg_return.finished();	
}
void SequenceL_insertionSortByHelper_2(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, int _SequenceL__Arg_first, int _SequenceL__Arg_last, int _SequenceL__Arg_i, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL___Arg_x_tco(cspace);
int _SequenceL___Arg_i_tco;
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_tmp100(cspace);
::_sl_CollisionRecord_0 _SequenceL__Arg_val(cspace);
int _SequenceL_tmp99;
int _SequenceL_tmp101;

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
_SequenceL_tmp99 = (_SequenceL___Arg_i_tco - 1);	/*Sequence.sl:282: i-1*/
SequenceL_insertionByWork_2(_SequenceL___Arg_x_tco, _SequenceL__Arg_compFunc, _SequenceL__Arg_val, _SequenceL__Arg_first, _SequenceL_tmp99, _SequenceL_tmp100);	/*Sequence.sl:282: insertionByWork(x, compFunc, val, first, i-1)*/
_SequenceL_tmp101 = (_SequenceL___Arg_i_tco + 1);	/*Sequence.sl:282: i+1*/
_swap(_SequenceL___Arg_x_tco, _SequenceL_tmp100);	
_SequenceL___Arg_i_tco = _SequenceL_tmp101;	
goto insertionSortByHelper_Sequence_label_tco;	/*Sequence.sl:282: insertionSortByHelper(insertionByWork(x, compFunc, val, first, i-1), compFunc, first, last, i+1)*/
}
_SequenceL_tmp100.delete_data(true);	
_SequenceL__Arg_val._delete_data(true);	
_SequenceL__Arg_val._finished();	
_SequenceL_tmp100.finished();	
}
void SequenceL_insertionSortBy_2(::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__Arg_x, _sl_fun_pointer* _SequenceL__Arg_compFunc, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{

SequenceL_insertionSortByHelper_2(_SequenceL__Arg_x, _SequenceL__Arg_compFunc, 1, _SequenceL__Arg_x.size(), 1, _SequenceL__resultConv);	/*Sequence.sl:274: insertionSortByHelper(x, compFunc, 1, size(x), 1)*/
}
void SequenceL_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_args, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
{
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__Arg_s(cspace);
::Sequence< ::_sl_CollisionRecord_0 > _SequenceL__Arg_a(cspace);

_SequenceL__Arg_a.setSize(3 > 0 ? 3 : 0);	
(*(_SequenceL__Arg_a.get_ptr(1))).a = 482;	/*sort.sl:11: 482*/
(*(_SequenceL__Arg_a.get_ptr(1))).b = 481;	/*sort.sl:11: 481*/
(*(_SequenceL__Arg_a.get_ptr(1))).t = ((SL_FLOAT)23);	
(*(_SequenceL__Arg_a.get_ptr(2))).a = 481;	/*sort.sl:11: 481*/
(*(_SequenceL__Arg_a.get_ptr(2))).b = 480;	/*sort.sl:11: 480*/
(*(_SequenceL__Arg_a.get_ptr(2))).t = ((SL_FLOAT)23);	
(*(_SequenceL__Arg_a.get_ptr(3))).a = 479;	/*sort.sl:11: 479*/
(*(_SequenceL__Arg_a.get_ptr(3))).b = 475;	/*sort.sl:11: 475*/
(*(_SequenceL__Arg_a.get_ptr(3))).t = ((SL_FLOAT)18);	
SequenceL_insertionSortBy_2(_SequenceL__Arg_a, _PointerSequenceL_byTime_0, _SequenceL__Arg_s);	/*sort.sl:12: insertionSortBy(a, byTime)*/
_SequenceL__Arg_a.delete_data(true);	
_SequenceL__Arg_a.finished();	
_SequenceL__resultConv = _SequenceL__Arg_s;	/*sort.sl:13: s*/
_SequenceL__Arg_s.delete_data(true);	
_SequenceL__Arg_s.finished();	
}
void SequenceL_sign_1(SL_FLOAT _SequenceL__Arg_X, int &_SequenceL__resultConv)
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
SL_FLOAT _SequenceL_tmp125;

_SequenceL_tmp125 = (_SequenceL__Arg_leftCr.t - _SequenceL__Arg_rightCr.t);	/*sort.sl:6: leftCr.t - rightCr.t*/
SequenceL_sign_1(_SequenceL_tmp125, _SequenceL__resultConv);	/*sort.sl:6: sign(leftCr.t - rightCr.t)*/
}

}
void sl_main(::Sequence< ::Sequence< char > > &_SequenceL__Arg_arg1, int _n, ::Sequence< ::_sl_CollisionRecord_0 > &_SequenceL__resultConv)
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
::Sequence< ::_sl_CollisionRecord_0 > result;
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
