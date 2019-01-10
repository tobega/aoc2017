#include "advent3.h"
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
void SequenceL_position_0(int _SequenceL__Arg_n, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL_abs_2(int _SequenceL__Arg_x, int &_SequenceL__resultConv);
void SequenceL_findLarger_0(int _SequenceL__Arg_n, int &_SequenceL__resultConv);
void SequenceL_nextSpiralPoint_0(int _SequenceL__Arg_i, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_field, int _SequenceL__Arg_n, int &_SequenceL__resultConv);
void SequenceL_updateField_0(::Sequence< int > &_SequenceL__Arg_pos, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_field, int _SequenceL__Arg_val, ::Sequence< ::Sequence< int > > &_SequenceL__resultConv);
void SequenceL_ceiling_2(SL_FLOAT _SequenceL__Arg_x, int &_SequenceL__resultConv);
void SequenceL_intToFloat_3(int _SequenceL__Arg_int, SL_FLOAT &_SequenceL__resultConv);
void SequenceL__parallel_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_s, ::Sequence< int > &_SequenceL__resultConv);
class SequenceL__sl_main_nt1_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL_tmp300;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result2;

	public:
		SequenceL__sl_main_nt1_(::Sequence< int > &_inp1, int _inp2, int _inp3, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL_tmp300(_inp1), _SequenceL__start(_inp2), _SequenceL__stop(_inp3), _SequenceL__result2(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
int _SequenceL_input_0;
void SequenceL__parallel_position_0(int _SequenceL__Arg_n, ::Sequence< int > &_SequenceL__resultConv);
void SequenceL__parallel_abs_2(int _SequenceL__Arg_x, int &_SequenceL__resultConv);
void SequenceL__parallel_findLarger_0(int _SequenceL__Arg_n, int &_SequenceL__resultConv);
int _SequenceL_offset_0;
::Sequence< ::Sequence< int > > _SequenceL_createField_0(cspace);
class SequenceL__sl_main_nt3_: public NTObj
{
	private:
		int _SequenceL_tmp242;
		int _SequenceL_tmp243;
		int _SequenceL_tmp245;
		 ::Sequence< ::Sequence< int > > &_SequenceL__result4;

	public:
		SequenceL__sl_main_nt3_(int _inp1, int _inp2, int _inp3, ::Sequence< ::Sequence< int > > &_out1): NTObj(__LINE__,false), _SequenceL_tmp242(_inp1), _SequenceL_tmp243(_inp2), _SequenceL_tmp245(_inp3), _SequenceL__result4(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_nextSpiralPoint_0(int _SequenceL__Arg_i, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_field, int _SequenceL__Arg_n, int &_SequenceL__resultConv);
class SequenceL__sl_main_nt10_: public NTObj
{
	private:
		::Sequence< ::Sequence< int > > &_SequenceL__Arg_indicesAround;
		::Sequence< ::Sequence< int > > &_SequenceL__Arg_field;
		 ::Sequence< ::Sequence< int > > &_SequenceL__result11;

	public:
		SequenceL__sl_main_nt10_(::Sequence< ::Sequence< int > > &_inp1, ::Sequence< ::Sequence< int > > &_inp2, ::Sequence< ::Sequence< int > > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_indicesAround(_inp1), _SequenceL__Arg_field(_inp2), _SequenceL__result11(_out1)
		{
		}
		void operator() (const blocked_range2d<int, int> &range) const;
};
class SequenceL__sl_main_nt8_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_pos;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result9;

	public:
		SequenceL__sl_main_nt8_(::Sequence< int > &_inp1, int _inp2, int _inp3, ::Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_pos(_inp1), _SequenceL__start(_inp2), _SequenceL__stop(_inp3), _SequenceL__result9(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt5_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL_tmp204;
		int _SequenceL_tmp205;
		int _SequenceL__start;
		int _SequenceL__stop;
		 ::Sequence< int > &_SequenceL__result6;
		 ::Sequence< int > &_SequenceL__result7;

	public:
		SequenceL__sl_main_nt5_(::Sequence< int > &_inp1, int _inp2, int _inp3, int _inp4, ::Sequence< int > &_out1, ::Sequence< int > &_out2): NTObj(__LINE__,false), _SequenceL_tmp204(_inp1), _SequenceL_tmp205(_inp2), _SequenceL__start(_inp3), _SequenceL__stop(_inp4), _SequenceL__result6(_out1), _SequenceL__result7(_out2)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_updateField_0(::Sequence< int > &_SequenceL__Arg_pos, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_field, int _SequenceL__Arg_val, ::Sequence< ::Sequence< int > > &_SequenceL__resultConv);
class SequenceL__sl_main_nt14_: public NTObj
{
	private:
		::Sequence< ::Sequence< int > > &_SequenceL__Arg_field;
		::Sequence< int > &_SequenceL__Arg_pos;
		int _SequenceL__Arg_val;
		 ::Sequence< ::Sequence< int > > &_SequenceL__result15;

	public:
		SequenceL__sl_main_nt14_(::Sequence< ::Sequence< int > > &_inp1, ::Sequence< int > &_inp2, int _inp3, ::Sequence< ::Sequence< int > > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_field(_inp1), _SequenceL__Arg_pos(_inp2), _SequenceL__Arg_val(_inp3), _SequenceL__result15(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
class SequenceL__sl_main_nt12_: public NTObj
{
	private:
		::Sequence< int > &_SequenceL__Arg_pos;
		int _SequenceL__Arg_val;
		 ::Sequence< ::Sequence< int > > &_SequenceL__result13;

	public:
		SequenceL__sl_main_nt12_(::Sequence< int > &_inp1, int _inp2, ::Sequence< ::Sequence< int > > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_pos(_inp1), _SequenceL__Arg_val(_inp2), _SequenceL__result13(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_ceiling_2(SL_FLOAT _SequenceL__Arg_x, int &_SequenceL__resultConv);
void SequenceL__parallel_intToFloat_3(int _SequenceL__Arg_int, SL_FLOAT &_SequenceL__resultConv);


void _SequenceL_init_sl_main_globals()
{
{

_SequenceL_input_0 = 277678;	/*advent3.sl:5: 277678*/
}
{

_SequenceL_offset_0 = 50;	/*advent3.sl:20: 50*/
}
{
int _SequenceL_tmp240;
int _SequenceL_tmp239;
int _SequenceL_tmp242;
int _SequenceL_tmp241;
int _SequenceL_tmp243;
int _SequenceL_tmp245;
bool _SequenceL_tmp244;

_SequenceL_tmp239 = _SequenceL_offset_0;	/*advent3.sl:24: offset*/
_SequenceL_tmp240 = (_SequenceL_tmp239 * 2);	/*advent3.sl:24: offset * 2*/
_SequenceL_createField_0.setSize(_SequenceL_tmp240 > 0 ? _SequenceL_tmp240 : 0);	/*advent3.sl:24: 1 when i = offset and j = offset  else 0*/
if ((_SequenceL_tmp240 >= 1))	
{
_SequenceL_tmp241 = _SequenceL_offset_0;	/*advent3.sl:25: offset*/
_SequenceL_tmp242 = (_SequenceL_tmp241 * 2);	/*advent3.sl:25: offset * 2*/
_SequenceL_tmp243 = _SequenceL_offset_0;	/*advent3.sl:22: offset*/
_SequenceL_tmp245 = _SequenceL_offset_0;	/*advent3.sl:23: offset*/
}
else
{
_SequenceL_tmp242 = 0;	
_SequenceL_tmp241 = 0;	
_SequenceL_tmp243 = 0;	
_SequenceL_tmp245 = 0;	
}
if (((((SL_FLOAT)(_SequenceL_tmp240 - 1)) * (1 + ((_SequenceL_tmp242 + -1) * 4))) > (sl_get_num_units() * ((WORK_SHARE_VALUE * WORK_SHARE_VALUE) * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt3_ SequenceL__sl_main_nt3__val(_SequenceL_tmp242, _SequenceL_tmp243, _SequenceL_tmp245, _SequenceL_createField_0);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL_tmp240 + 1, SequenceL__sl_main_nt3__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL_tmp240; _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL_createField_0.get_ptr(_SequenceL__Index_i))).setSize(_SequenceL_tmp242 > 0 ? _SequenceL_tmp242 : 0);	/*advent3.sl:24: 1 when i = offset and j = offset  else 0*/
_SequenceL_tmp244 = (_SequenceL__Index_i == _SequenceL_tmp243);	/*advent3.sl:22: i = offset*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_j=1,_stop_val__SequenceL__Index_j=_SequenceL_tmp242; _SequenceL__Index_j<=_stop_val__SequenceL__Index_j; _SequenceL__Index_j+=1)
{
if ((_SequenceL_tmp244 && (_SequenceL__Index_j == _SequenceL_tmp245)))	/*advent3.sl:24: 1 when i = offset and j = offset  else 0*/
{
(*((*(_SequenceL_createField_0.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index_j))) = 1;	/*advent3.sl:22: 1*/
}
else
{
(*((*(_SequenceL_createField_0.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index_j))) = 0;	/*advent3.sl:24: 0*/
}
}
}
}
}

}

void _SequenceL_delete_sl_main_globals()
{
_SequenceL_createField_0.delete_data(false);
_SequenceL_createField_0.finished();

}

#ifdef _WIN32
::Sequence< ::Sequence< char > > _sl_vc10_advent3_dummy_1(cspace);
::Sequence< int > _sl_vc10_advent3_dummy_2(cspace);
::Sequence< ::Sequence< int > > _sl_vc10_advent3_dummy_3(cspace);
#endif

void SequenceL__parallel_intToFloat_3(int _SequenceL__Arg_int, SL_FLOAT &_SequenceL__resultConv)
{
SL_FLOAT _SequenceL_tmp118;
int _SequenceL_tmp117;
int _SequenceL_tmp121;
SL_FLOAT _SequenceL_tmp120;

if ((_SequenceL__Arg_int < 0))	/*Conversion.sl:132: -intToFloat(-int) when int < 0	else		floor(int * 1.0) * 1.0*/
{
_SequenceL_tmp117 = (-_SequenceL__Arg_int);	/*Conversion.sl:130: -int*/
SequenceL__parallel_intToFloat_3(_SequenceL_tmp117, _SequenceL_tmp118);	/*Conversion.sl:130: intToFloat(-int)*/
_SequenceL__resultConv = (-_SequenceL_tmp118);	/*Conversion.sl:130: -intToFloat(-int)*/
}
else
{
_SequenceL_tmp120 = (_SequenceL__Arg_int * 1.0);	/*Conversion.sl:132: int * 1.0*/
_SequenceL_tmp121 = ((int) floor(_SequenceL_tmp120));	/*Conversion.sl:132: floor(int * 1.0)*/
_SequenceL__resultConv = (_SequenceL_tmp121 * 1.0);	/*Conversion.sl:132: floor(int * 1.0) * 1.0*/
}
}
void SequenceL__parallel_ceiling_2(SL_FLOAT _SequenceL__Arg_x, int &_SequenceL__resultConv)
{
int _SequenceL_tmp122;
int _SequenceL_tmp126;

_SequenceL_tmp122 = ((int) floor(_SequenceL__Arg_x));	/*Math.sl:27: floor(x)*/
if ((_SequenceL_tmp122 == _SequenceL__Arg_x))	/*Math.sl:29: floor(x) when floor(x) = x	else		floor(x) + 1*/
{
_SequenceL__resultConv = ((int) floor(_SequenceL__Arg_x));	/*Math.sl:27: floor(x)*/
}
else
{
_SequenceL_tmp126 = ((int) floor(_SequenceL__Arg_x));	/*Math.sl:29: floor(x)*/
_SequenceL__resultConv = (_SequenceL_tmp126 + 1);	/*Math.sl:29: floor(x) + 1*/
}
}
void SequenceL__sl_main_nt12_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
bool _SequenceL_tmp162;

_SequenceL_tmp162 = (_SequenceL__Index_i == (*(_SequenceL__Arg_pos.get_ptr(1))));	/*advent3.sl:28: i = pos[1]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_j=1,_stop_val__SequenceL__Index_j=(*(_SequenceL__result13.get_ptr(_SequenceL__Index_i))).size(); _SequenceL__Index_j<=_stop_val__SequenceL__Index_j; _SequenceL__Index_j+=1)
{
if ((_SequenceL_tmp162 && (_SequenceL__Index_j == (*(_SequenceL__Arg_pos.get_ptr(2))))))	/*advent3.sl:29: val when i = pos[1] and j = pos[2]  else field[i,j]*/
{
(*((*(_SequenceL__result13.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index_j))) = _SequenceL__Arg_val;	/*advent3.sl:28: val*/
}
}
}
}
void SequenceL__sl_main_nt14_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
bool _SequenceL_tmp162;

(*(_SequenceL__result15.get_ptr(_SequenceL__Index_i))).setSize((*(_SequenceL__Arg_field.get_ptr(_SequenceL__Index_i))).size());	/*advent3.sl:29: val when i = pos[1] and j = pos[2]  else field[i,j]*/
_SequenceL_tmp162 = (_SequenceL__Index_i == (*(_SequenceL__Arg_pos.get_ptr(1))));	/*advent3.sl:28: i = pos[1]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_j=1,_stop_val__SequenceL__Index_j=(*(_SequenceL__Arg_field.get_ptr(_SequenceL__Index_i))).size(); _SequenceL__Index_j<=_stop_val__SequenceL__Index_j; _SequenceL__Index_j+=1)
{
if ((_SequenceL_tmp162 && (_SequenceL__Index_j == (*(_SequenceL__Arg_pos.get_ptr(2))))))	/*advent3.sl:29: val when i = pos[1] and j = pos[2]  else field[i,j]*/
{
(*((*(_SequenceL__result15.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index_j))) = _SequenceL__Arg_val;	/*advent3.sl:28: val*/
}
else
{
(*((*(_SequenceL__result15.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index_j))) = (*((*(_SequenceL__Arg_field.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index_j)));	/*advent3.sl:29: field[i,j]*/
}
}
}
}
void SequenceL__parallel_updateField_0(::Sequence< int > &_SequenceL__Arg_pos, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_field, int _SequenceL__Arg_val, ::Sequence< ::Sequence< int > > &_SequenceL__resultConv)
{

if (_SequenceL__Arg_field.onlyInstance())	/*advent3.sl:29: val when i = pos[1] and j = pos[2]  else field[i,j]*/
{
_SequenceL__resultConv.replaceSequence(_SequenceL__Arg_field);	/*advent3.sl:29: val when i = pos[1] and j = pos[2]  else field[i,j]*/
SequenceL__sl_main_nt12_ SequenceL__sl_main_nt12__val(_SequenceL__Arg_pos, _SequenceL__Arg_val, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__resultConv.size() + 1, SequenceL__sl_main_nt12__val);
}
else
{
_SequenceL__resultConv.setSize(_SequenceL__Arg_field.size());	/*advent3.sl:29: val when i = pos[1] and j = pos[2]  else field[i,j]*/
SequenceL__sl_main_nt14_ SequenceL__sl_main_nt14__val(_SequenceL__Arg_field, _SequenceL__Arg_pos, _SequenceL__Arg_val, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_field.size() + 1, SequenceL__sl_main_nt14__val);
}
}
void SequenceL__sl_main_nt5_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i206 = _r.begin(); _SequenceL__i206 < _e; _SequenceL__i206++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__i206 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__i206 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result6.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL_tmp204.get_ptr(_SequenceL__no_share_iter))) + _SequenceL_tmp205);	/*advent3.sl:32: position(i) + offset*/
(*(_SequenceL__result7.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL__result6.get_ptr(_SequenceL__no_share_iter))) - 1);	/*advent3.sl:33: pos - 1*/
}
}
}
void SequenceL__sl_main_nt8_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i210 = _r.begin(); _SequenceL__i210 < _e; _SequenceL__i210++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__i210 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__i210 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
(*(_SequenceL__result9.get_ptr(_SequenceL__no_share_iter))) = ((*(_SequenceL__Arg_pos.get_ptr(_SequenceL__no_share_iter))) + 1);	/*advent3.sl:33: pos + 1*/
}
}
}
void SequenceL__sl_main_nt10_::operator() (const blocked_range2d<int, int> &range) const {
int start_row    = range.rows().begin();
int end_row      = range.rows().end();
int start_column = range.cols().begin();
int end_column   = range.cols().end() - 1;
for(int _SequenceL__scope__Index_val__tmp_index3 = start_row; _SequenceL__scope__Index_val__tmp_index3 < end_row; _SequenceL__scope__Index_val__tmp_index3++)
 {

SIMD_DIRECTIVE
for (int _SequenceL__scope__Index_val__tmp_index4=start_column,_stop_val__SequenceL__scope__Index_val__tmp_index4=end_column; _SequenceL__scope__Index_val__tmp_index4<=_stop_val__SequenceL__scope__Index_val__tmp_index4; _SequenceL__scope__Index_val__tmp_index4+=1)
{
(*((*(_SequenceL__result11.get_ptr(_SequenceL__scope__Index_val__tmp_index3))).get_ptr(_SequenceL__scope__Index_val__tmp_index4))) = (*((*(_SequenceL__Arg_field.get_ptr((*((*(_SequenceL__Arg_indicesAround.get_ptr(1))).get_ptr(_SequenceL__scope__Index_val__tmp_index3)))))).get_ptr((*((*(_SequenceL__Arg_indicesAround.get_ptr(2))).get_ptr(_SequenceL__scope__Index_val__tmp_index4))))));	/*advent3.sl:34: field[indicesAround[1], indicesAround[2]]*/
}
}
}
void SequenceL__parallel_nextSpiralPoint_0(int _SequenceL__Arg_i, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_field, int _SequenceL__Arg_n, int &_SequenceL__resultConv)
{
int _SequenceL___Arg_i_tco;
::Sequence< ::Sequence< int > > _SequenceL___Arg_field_tco(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp202(cspace);
int _SequenceL_tmp205;
int _SequenceL__Arg_val;
::Sequence< int > _SequenceL_tmp212(cspace);
::Sequence< ::Sequence< int > > _SequenceL__Arg_indicesAround(cspace);
::Sequence< int > _SequenceL_tmp204(cspace);
::Sequence< int > _SequenceL__Arg_pos(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp211(cspace);
int _SequenceL_tmp216;

_SequenceL___Arg_i_tco = _SequenceL__Arg_i;	
if (_SequenceL__Arg_field.onlyInstance())	
{
_SequenceL___Arg_field_tco.replaceSequence(_SequenceL__Arg_field);	
}
else
{
_SequenceL___Arg_field_tco.hard_copy(_SequenceL__Arg_field,__LINE__);	
}
_SequenceL_tmp202.setSize(3 > 0 ? 3 : 0);	
_SequenceL_tmp205 = _SequenceL_offset_0;	/*advent3.sl:32: offset*/
_parallel_nextSpiralPoint_advent3_label_tco:	
SequenceL__parallel_position_0(_SequenceL___Arg_i_tco, _SequenceL_tmp204);	/*advent3.sl:32: position(i)*/
_SequenceL__Arg_pos.setSize(_SequenceL_tmp204.size());	/*advent3.sl:32: position(i) + offset*/
(*(_SequenceL_tmp202.get_ptr(1))).setSize(_SequenceL__Arg_pos.size());	/*advent3.sl:33: pos - 1*/
if (((((SL_FLOAT)(_SequenceL__Arg_pos.size() - 1)) * 2) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt5_ SequenceL__sl_main_nt5__val(_SequenceL_tmp204, _SequenceL_tmp205, 1, _SequenceL__Arg_pos.size(), _SequenceL__Arg_pos, (*(_SequenceL_tmp202.get_ptr(1))));
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt5__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__i206=1,_stop_val__SequenceL__i206=_SequenceL__Arg_pos.size(); _SequenceL__i206<=_stop_val__SequenceL__i206; _SequenceL__i206+=1)
{
(*(_SequenceL__Arg_pos.get_ptr(_SequenceL__i206))) = ((*(_SequenceL_tmp204.get_ptr(_SequenceL__i206))) + _SequenceL_tmp205);	/*advent3.sl:32: position(i) + offset*/
(*((*(_SequenceL_tmp202.get_ptr(1))).get_ptr(_SequenceL__i206))) = ((*(_SequenceL__Arg_pos.get_ptr(_SequenceL__i206))) - 1);	/*advent3.sl:33: pos - 1*/
}
}
(*(_SequenceL_tmp202.get_ptr(2))) = _SequenceL__Arg_pos;	/*advent3.sl:33: pos*/
(*(_SequenceL_tmp202.get_ptr(3))).setSize(_SequenceL__Arg_pos.size());	/*advent3.sl:33: pos + 1*/
if (((((SL_FLOAT)((*(_SequenceL_tmp202.get_ptr(3))).size() - 1)) * 1) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt8_ SequenceL__sl_main_nt8__val(_SequenceL__Arg_pos, 1, (*(_SequenceL_tmp202.get_ptr(3))).size(), (*(_SequenceL_tmp202.get_ptr(3))));
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt8__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__i210=1,_stop_val__SequenceL__i210=(*(_SequenceL_tmp202.get_ptr(3))).size(); _SequenceL__i210<=_stop_val__SequenceL__i210; _SequenceL__i210+=1)
{
(*((*(_SequenceL_tmp202.get_ptr(3))).get_ptr(_SequenceL__i210))) = ((*(_SequenceL__Arg_pos.get_ptr(_SequenceL__i210))) + 1);	/*advent3.sl:33: pos + 1*/
}
}
_SequenceL_parallel_transpose(_SequenceL_tmp202, __LINE__, _SequenceL__Arg_indicesAround);	/*advent3.sl:33: transpose([pos - 1, pos, pos + 1])*/
_SequenceL_tmp211.setSize((*(_SequenceL__Arg_indicesAround.get_ptr(1))).size());	/*advent3.sl:34: field[indicesAround[1], indicesAround[2]]*/
SIMD_DIRECTIVE
for (int _SequenceL__scope__Index_val__tmp_index3=1,_stop_val__SequenceL__scope__Index_val__tmp_index3=_SequenceL_tmp211.size(); _SequenceL__scope__Index_val__tmp_index3<=_stop_val__SequenceL__scope__Index_val__tmp_index3; _SequenceL__scope__Index_val__tmp_index3+=1)
{
(*(_SequenceL_tmp211.get_ptr(_SequenceL__scope__Index_val__tmp_index3))).setSize((*(_SequenceL__Arg_indicesAround.get_ptr(2))).size());	/*advent3.sl:34: field[indicesAround[1], indicesAround[2]]*/
}
if (((((SL_FLOAT)(_SequenceL_tmp211.size() - 1)) * ((*(_SequenceL_tmp211.get_ptr(1))).size() + (-1 * 1))) > (sl_get_num_units() * ((WORK_SHARE_VALUE * WORK_SHARE_VALUE) * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt10_ SequenceL__sl_main_nt10__val(_SequenceL__Arg_indicesAround, _SequenceL___Arg_field_tco, _SequenceL_tmp211);
sl_redistribute_mem();
sl_add_new_nt_2d(1, _SequenceL_tmp211.size() + 1, 1, (*(_SequenceL_tmp211.get_ptr(1))).size() + 1, _SequenceL_tmp211.base_elem_size(),SequenceL__sl_main_nt10__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__scope__Index_val__tmp_index3=1,_stop_val__SequenceL__scope__Index_val__tmp_index3=_SequenceL_tmp211.size(); _SequenceL__scope__Index_val__tmp_index3<=_stop_val__SequenceL__scope__Index_val__tmp_index3; _SequenceL__scope__Index_val__tmp_index3+=1)
{
SIMD_DIRECTIVE
for (int _SequenceL__scope__Index_val__tmp_index4=1,_stop_val__SequenceL__scope__Index_val__tmp_index4=(*(_SequenceL_tmp211.get_ptr(1))).size(); _SequenceL__scope__Index_val__tmp_index4<=_stop_val__SequenceL__scope__Index_val__tmp_index4; _SequenceL__scope__Index_val__tmp_index4+=1)
{
(*((*(_SequenceL_tmp211.get_ptr(_SequenceL__scope__Index_val__tmp_index3))).get_ptr(_SequenceL__scope__Index_val__tmp_index4))) = (*((*(_SequenceL___Arg_field_tco.get_ptr((*((*(_SequenceL__Arg_indicesAround.get_ptr(1))).get_ptr(_SequenceL__scope__Index_val__tmp_index3)))))).get_ptr((*((*(_SequenceL__Arg_indicesAround.get_ptr(2))).get_ptr(_SequenceL__scope__Index_val__tmp_index4))))));	/*advent3.sl:34: field[indicesAround[1], indicesAround[2]]*/
}
}
}
_SequenceL_parallel_appends(_SequenceL_tmp211, __LINE__, _SequenceL_tmp212);	/*advent3.sl:34: join(field[indicesAround[1], indicesAround[2]])*/
_SequenceL__Arg_val = _SequenceL_parallel_sum(_SequenceL_tmp212, __LINE__);	/*advent3.sl:34: sum(join(field[indicesAround[1], indicesAround[2]]))*/
if ((_SequenceL__Arg_val > _SequenceL__Arg_n))	/*advent3.sl:37: val when val > n     else nextSpiralPoint(i+1, newField, n)*/
{
_SequenceL__resultConv = _SequenceL__Arg_val;	/*advent3.sl:36: val*/
}
else
{
_SequenceL_tmp216 = (_SequenceL___Arg_i_tco + 1);	/*advent3.sl:37: i+1*/
SequenceL__sl_main_nt12_ SequenceL__sl_main_nt12__val(_SequenceL__Arg_pos, _SequenceL__Arg_val, _SequenceL___Arg_field_tco);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL___Arg_field_tco.size() + 1, SequenceL__sl_main_nt12__val);
_SequenceL___Arg_i_tco = _SequenceL_tmp216;	
goto _parallel_nextSpiralPoint_advent3_label_tco;	/*advent3.sl:37: nextSpiralPoint(i+1, newField, n)*/
}
_SequenceL_tmp212.delete_data(false);	
_SequenceL__Arg_indicesAround.delete_data(false);	
_SequenceL_tmp204.delete_data(false);	
_SequenceL__Arg_pos.delete_data(false);	
_SequenceL_tmp202.delete_data(false);	
_SequenceL_tmp211.delete_data(false);	
_SequenceL_tmp211.finished();	
_SequenceL_tmp202.finished();	
_SequenceL__Arg_pos.finished();	
_SequenceL_tmp204.finished();	
_SequenceL__Arg_indicesAround.finished();	
_SequenceL_tmp212.finished();	
}
void SequenceL__sl_main_nt3_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_i = _r.begin(); _SequenceL__Index_i < _e; _SequenceL__Index_i++)
{
bool _SequenceL_tmp244;

(*(_SequenceL__result4.get_ptr(_SequenceL__Index_i))).setSize(_SequenceL_tmp242 > 0 ? _SequenceL_tmp242 : 0);	/*advent3.sl:24: 1 when i = offset and j = offset  else 0*/
_SequenceL_tmp244 = (_SequenceL__Index_i == _SequenceL_tmp243);	/*advent3.sl:22: i = offset*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_j=1,_stop_val__SequenceL__Index_j=_SequenceL_tmp242; _SequenceL__Index_j<=_stop_val__SequenceL__Index_j; _SequenceL__Index_j+=1)
{
if ((_SequenceL_tmp244 && (_SequenceL__Index_j == _SequenceL_tmp245)))	/*advent3.sl:24: 1 when i = offset and j = offset  else 0*/
{
(*((*(_SequenceL__result4.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index_j))) = 1;	/*advent3.sl:22: 1*/
}
else
{
(*((*(_SequenceL__result4.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index_j))) = 0;	/*advent3.sl:24: 0*/
}
}
}
}
void SequenceL__parallel_findLarger_0(int _SequenceL__Arg_n, int &_SequenceL__resultConv)
{
::Sequence< ::Sequence< int > > _SequenceL__Arg_field(cspace);

if ((_SequenceL__Arg_n == 0))	/*advent3.sl:42: field[offset,offset] when n = 0     else nextSpiralPoint(2, field, n)*/
{
_SequenceL__Arg_field = _SequenceL_createField_0;	/*advent3.sl:40: createField()*/
_SequenceL__resultConv = (*((*(_SequenceL__Arg_field.get_ptr(_SequenceL_offset_0))).get_ptr(_SequenceL_offset_0)));	/*advent3.sl:41: field[offset,offset]*/
_SequenceL__Arg_field.delete_data(false);	
_SequenceL__Arg_field.finished();	
}
else
{
_SequenceL__Arg_field = _SequenceL_createField_0;	/*advent3.sl:40: createField()*/
SequenceL__parallel_nextSpiralPoint_0(2, _SequenceL__Arg_field, _SequenceL__Arg_n, _SequenceL__resultConv);	/*advent3.sl:42: nextSpiralPoint(2, field, n)*/
_SequenceL__Arg_field.delete_data(false);	
_SequenceL__Arg_field.finished();	
}
}
void SequenceL__parallel_abs_2(int _SequenceL__Arg_x, int &_SequenceL__resultConv)
{

if ((_SequenceL__Arg_x < 0))	/*Math.sl:23: -x when x < 0 else x*/
{
_SequenceL__resultConv = (-_SequenceL__Arg_x);	/*Math.sl:23: -x*/
}
else
{
_SequenceL__resultConv = _SequenceL__Arg_x;	/*Math.sl:23: x*/
}
}
void SequenceL__parallel_position_0(int _SequenceL__Arg_n, ::Sequence< int > &_SequenceL__resultConv)
{
int _SequenceL__Arg_side;
SL_FLOAT _SequenceL_tmp277;
SL_FLOAT _SequenceL_tmp275;
int _SequenceL__Arg_onCircumference;
SL_FLOAT _SequenceL_tmp274;
int _SequenceL__Arg_ringSize;
int _SequenceL__Arg_radius;
int _SequenceL_tmp270;
int _SequenceL_tmp269;
SL_FLOAT _SequenceL_tmp268;
int _SequenceL__Arg_other;
int _SequenceL__Arg_adjust;

if ((_SequenceL__Arg_n == 1))	/*advent3.sl:18: [0,0] when n = 1     else [radius, -other] when side = 1     else [other, radius] when side = 2     else [-radius, other] when side = 3     else [-other, -radius]*/
{
_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))) = 0;	/*advent3.sl:14: 0*/
(*(_SequenceL__resultConv.get_ptr(2))) = 0;	/*advent3.sl:14: 0*/
}
else
{
_SequenceL_tmp268 = sqrt(_SequenceL__Arg_n);	/*advent3.sl:8: sqrt(n)*/
SequenceL__parallel_ceiling_2(_SequenceL_tmp268, _SequenceL_tmp269);	/*advent3.sl:8: ceiling(sqrt(n))*/
_SequenceL_tmp270 = (_SequenceL_tmp269 / 2);	/*advent3.sl:8: ceiling(sqrt(n)) / 2*/
_SequenceL__Arg_radius = ((int) floor(_SequenceL_tmp270));	/*advent3.sl:8: floor(ceiling(sqrt(n)) / 2)*/
_SequenceL__Arg_ringSize = ((_SequenceL__Arg_radius * 2) + 1);	/*advent3.sl:9: radius * 2 + 1*/
_SequenceL_tmp274 = (_SequenceL__Arg_n - SequenceL__square((_SequenceL__Arg_ringSize - 2)));	/*advent3.sl:10: n - (ringSize - 2)^2*/
_SequenceL__Arg_onCircumference = ((int) floor(_SequenceL_tmp274));	/*advent3.sl:10: floor(n - (ringSize - 2)^2)*/
SequenceL__parallel_intToFloat_3(_SequenceL__Arg_onCircumference, _SequenceL_tmp275);	/*advent3.sl:11: intToFloat(onCircumference)*/
_SequenceL_tmp277 = (_SequenceL_tmp275 / (_SequenceL__Arg_ringSize - 1));	/*advent3.sl:11: intToFloat(onCircumference) / (ringSize - 1)*/
SequenceL__parallel_ceiling_2(_SequenceL_tmp277, _SequenceL__Arg_side);	/*advent3.sl:11: ceiling(intToFloat(onCircumference) / (ringSize - 1))*/
_SequenceL__Arg_adjust = (((_SequenceL__Arg_onCircumference - 1) % (_SequenceL__Arg_ringSize - 1)) + 1);	/*advent3.sl:12: ((onCircumference - 1) mod (ringSize - 1)) + 1*/
_SequenceL__Arg_other = (_SequenceL__Arg_radius - _SequenceL__Arg_adjust);	/*advent3.sl:13: radius - adjust*/
if ((_SequenceL__Arg_side == 1))	/*advent3.sl:18: [radius, -other] when side = 1     else [other, radius] when side = 2     else [-radius, other] when side = 3     else [-other, -radius]*/
{
_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))) = _SequenceL__Arg_radius;	/*advent3.sl:15: radius*/
(*(_SequenceL__resultConv.get_ptr(2))) = (-_SequenceL__Arg_other);	/*advent3.sl:15: -other*/
}
else
{
if ((_SequenceL__Arg_side == 2))	/*advent3.sl:18: [other, radius] when side = 2     else [-radius, other] when side = 3     else [-other, -radius]*/
{
_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))) = _SequenceL__Arg_other;	/*advent3.sl:16: other*/
(*(_SequenceL__resultConv.get_ptr(2))) = _SequenceL__Arg_radius;	/*advent3.sl:16: radius*/
}
else
{
if ((_SequenceL__Arg_side == 3))	/*advent3.sl:18: [-radius, other] when side = 3     else [-other, -radius]*/
{
_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))) = (-_SequenceL__Arg_radius);	/*advent3.sl:17: -radius*/
(*(_SequenceL__resultConv.get_ptr(2))) = _SequenceL__Arg_other;	/*advent3.sl:17: other*/
}
else
{
_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))) = (-_SequenceL__Arg_other);	/*advent3.sl:18: -other*/
(*(_SequenceL__resultConv.get_ptr(2))) = (-_SequenceL__Arg_radius);	/*advent3.sl:18: -radius*/
}
}
}
}
}
void SequenceL__sl_main_nt1_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i302 = _r.begin(); _SequenceL__i302 < _e; _SequenceL__i302++)
{
int _SequenceL__no_share_pos;
int _SequenceL__no_share_start;
int _SequenceL__no_share_stop;

_SequenceL__no_share_pos = (((_SequenceL__stop - _SequenceL__start) / (sl_get_num_units() * WORK_SHARE_VALUE)) + 1);	
_SequenceL__no_share_start = (((_SequenceL__i302 - 1) * _SequenceL__no_share_pos) + _SequenceL__start);	
_SequenceL__no_share_stop = SequenceL_min(((_SequenceL__i302 * _SequenceL__no_share_pos) + (_SequenceL__start - 1)), _SequenceL__stop);	
SIMD_DIRECTIVE
for (int _SequenceL__no_share_iter=_SequenceL__no_share_start,_stop_val__SequenceL__no_share_iter=_SequenceL__no_share_stop; _SequenceL__no_share_iter<=_stop_val__SequenceL__no_share_iter; _SequenceL__no_share_iter+=1)
{
SequenceL_abs_2((*(_SequenceL_tmp300.get_ptr(_SequenceL__no_share_iter))), (*(_SequenceL__result2.get_ptr(_SequenceL__no_share_iter))));	/*advent3.sl:45: abs(position(input))*/
}
}
}
void SequenceL__parallel_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_s, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL_tmp300(cspace);
int _SequenceL_tmp299;
::Sequence< int > _SequenceL_tmp301(cspace);
int _SequenceL_tmp304;

_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
_SequenceL_tmp299 = _SequenceL_input_0;	/*advent3.sl:45: input*/
SequenceL__parallel_position_0(_SequenceL_tmp299, _SequenceL_tmp300);	/*advent3.sl:45: position(input)*/
_SequenceL_tmp301.setSize(_SequenceL_tmp300.size());	/*advent3.sl:45: abs(position(input))*/
if (((((SL_FLOAT)(_SequenceL_tmp301.size() - 1)) * 4) > (sl_get_num_units() * (WORK_SHARE_VALUE * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_main_nt1_ SequenceL__sl_main_nt1__val(_SequenceL_tmp300, 1, _SequenceL_tmp301.size(), _SequenceL_tmp301);
sl_redistribute_mem();
sl_add_new_nt(1, (sl_get_num_units() * WORK_SHARE_VALUE) + 1, SequenceL__sl_main_nt1__val);
_SequenceL_tmp300.delete_data(false);	
_SequenceL_tmp300.finished();	
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__i302=1,_stop_val__SequenceL__i302=_SequenceL_tmp301.size(); _SequenceL__i302<=_stop_val__SequenceL__i302; _SequenceL__i302+=1)
{
SequenceL_abs_2((*(_SequenceL_tmp300.get_ptr(_SequenceL__i302))), (*(_SequenceL_tmp301.get_ptr(_SequenceL__i302))));	/*advent3.sl:45: abs(position(input))*/
}
_SequenceL_tmp300.delete_data(false);	
_SequenceL_tmp300.finished();	
}
(*(_SequenceL__resultConv.get_ptr(1))) = _SequenceL_parallel_sum(_SequenceL_tmp301, __LINE__);	/*advent3.sl:45: sum(abs(position(input)))*/
_SequenceL_tmp301.delete_data(false);	
_SequenceL_tmp301.finished();	
_SequenceL_tmp304 = _SequenceL_input_0;	/*advent3.sl:45: input*/
SequenceL__parallel_findLarger_0(_SequenceL_tmp304, (*(_SequenceL__resultConv.get_ptr(2))));	/*advent3.sl:45: findLarger(input)*/
}
void SequenceL_intToFloat_3(int _SequenceL__Arg_int, SL_FLOAT &_SequenceL__resultConv)
{
SL_FLOAT _SequenceL_tmp118;
int _SequenceL_tmp117;
int _SequenceL_tmp121;
SL_FLOAT _SequenceL_tmp120;

if ((_SequenceL__Arg_int < 0))	/*Conversion.sl:132: -intToFloat(-int) when int < 0	else		floor(int * 1.0) * 1.0*/
{
_SequenceL_tmp117 = (-_SequenceL__Arg_int);	/*Conversion.sl:130: -int*/
SequenceL_intToFloat_3(_SequenceL_tmp117, _SequenceL_tmp118);	/*Conversion.sl:130: intToFloat(-int)*/
_SequenceL__resultConv = (-_SequenceL_tmp118);	/*Conversion.sl:130: -intToFloat(-int)*/
}
else
{
_SequenceL_tmp120 = (_SequenceL__Arg_int * 1.0);	/*Conversion.sl:132: int * 1.0*/
_SequenceL_tmp121 = ((int) floor(_SequenceL_tmp120));	/*Conversion.sl:132: floor(int * 1.0)*/
_SequenceL__resultConv = (_SequenceL_tmp121 * 1.0);	/*Conversion.sl:132: floor(int * 1.0) * 1.0*/
}
}
void SequenceL_ceiling_2(SL_FLOAT _SequenceL__Arg_x, int &_SequenceL__resultConv)
{
int _SequenceL_tmp122;
int _SequenceL_tmp126;

_SequenceL_tmp122 = ((int) floor(_SequenceL__Arg_x));	/*Math.sl:27: floor(x)*/
if ((_SequenceL_tmp122 == _SequenceL__Arg_x))	/*Math.sl:29: floor(x) when floor(x) = x	else		floor(x) + 1*/
{
_SequenceL__resultConv = ((int) floor(_SequenceL__Arg_x));	/*Math.sl:27: floor(x)*/
}
else
{
_SequenceL_tmp126 = ((int) floor(_SequenceL__Arg_x));	/*Math.sl:29: floor(x)*/
_SequenceL__resultConv = (_SequenceL_tmp126 + 1);	/*Math.sl:29: floor(x) + 1*/
}
}
void SequenceL_updateField_0(::Sequence< int > &_SequenceL__Arg_pos, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_field, int _SequenceL__Arg_val, ::Sequence< ::Sequence< int > > &_SequenceL__resultConv)
{
bool _SequenceL_tmp162;

if (_SequenceL__Arg_field.onlyInstance())	/*advent3.sl:29: val when i = pos[1] and j = pos[2]  else field[i,j]*/
{
_SequenceL__resultConv.replaceSequence(_SequenceL__Arg_field);	/*advent3.sl:29: val when i = pos[1] and j = pos[2]  else field[i,j]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__resultConv.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
_SequenceL_tmp162 = (_SequenceL__Index_i == (*(_SequenceL__Arg_pos.get_ptr(1))));	/*advent3.sl:28: i = pos[1]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_j=1,_stop_val__SequenceL__Index_j=(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))).size(); _SequenceL__Index_j<=_stop_val__SequenceL__Index_j; _SequenceL__Index_j+=1)
{
if ((_SequenceL_tmp162 && (_SequenceL__Index_j == (*(_SequenceL__Arg_pos.get_ptr(2))))))	/*advent3.sl:29: val when i = pos[1] and j = pos[2]  else field[i,j]*/
{
(*((*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index_j))) = _SequenceL__Arg_val;	/*advent3.sl:28: val*/
}
}
}
}
else
{
_SequenceL__resultConv.setSize(_SequenceL__Arg_field.size());	/*advent3.sl:29: val when i = pos[1] and j = pos[2]  else field[i,j]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_i=1,_stop_val__SequenceL__Index_i=_SequenceL__Arg_field.size(); _SequenceL__Index_i<=_stop_val__SequenceL__Index_i; _SequenceL__Index_i+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))).setSize((*(_SequenceL__Arg_field.get_ptr(_SequenceL__Index_i))).size());	/*advent3.sl:29: val when i = pos[1] and j = pos[2]  else field[i,j]*/
_SequenceL_tmp162 = (_SequenceL__Index_i == (*(_SequenceL__Arg_pos.get_ptr(1))));	/*advent3.sl:28: i = pos[1]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_j=1,_stop_val__SequenceL__Index_j=(*(_SequenceL__Arg_field.get_ptr(_SequenceL__Index_i))).size(); _SequenceL__Index_j<=_stop_val__SequenceL__Index_j; _SequenceL__Index_j+=1)
{
if ((_SequenceL_tmp162 && (_SequenceL__Index_j == (*(_SequenceL__Arg_pos.get_ptr(2))))))	/*advent3.sl:29: val when i = pos[1] and j = pos[2]  else field[i,j]*/
{
(*((*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index_j))) = _SequenceL__Arg_val;	/*advent3.sl:28: val*/
}
else
{
(*((*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index_j))) = (*((*(_SequenceL__Arg_field.get_ptr(_SequenceL__Index_i))).get_ptr(_SequenceL__Index_j)));	/*advent3.sl:29: field[i,j]*/
}
}
}
}
}
void SequenceL_nextSpiralPoint_0(int _SequenceL__Arg_i, ::Sequence< ::Sequence< int > > &_SequenceL__Arg_field, int _SequenceL__Arg_n, int &_SequenceL__resultConv)
{
int _SequenceL___Arg_i_tco;
::Sequence< ::Sequence< int > > _SequenceL___Arg_field_tco(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp202(cspace);
int _SequenceL_tmp205;
int _SequenceL__Arg_val;
::Sequence< int > _SequenceL_tmp212(cspace);
::Sequence< ::Sequence< int > > _SequenceL_tmp211(cspace);
::Sequence< ::Sequence< int > > _SequenceL__Arg_indicesAround(cspace);
::Sequence< int > _SequenceL_tmp204(cspace);
::Sequence< int > _SequenceL__Arg_pos(cspace);
int _SequenceL_tmp216;
bool _SequenceL__inline_opttmp7;

_SequenceL___Arg_i_tco = _SequenceL__Arg_i;	
if (_SequenceL__Arg_field.onlyInstance())	
{
_SequenceL___Arg_field_tco.replaceSequence(_SequenceL__Arg_field);	
}
else
{
_SequenceL___Arg_field_tco.hard_copy(_SequenceL__Arg_field,__LINE__);	
}
_SequenceL_tmp202.setSize(3 > 0 ? 3 : 0);	
_SequenceL_tmp205 = _SequenceL_offset_0;	/*advent3.sl:32: offset*/
nextSpiralPoint_advent3_label_tco:	
SequenceL_position_0(_SequenceL___Arg_i_tco, _SequenceL_tmp204);	/*advent3.sl:32: position(i)*/
_SequenceL__Arg_pos.setSize(_SequenceL_tmp204.size());	/*advent3.sl:32: position(i) + offset*/
(*(_SequenceL_tmp202.get_ptr(1))).setSize(_SequenceL__Arg_pos.size());	/*advent3.sl:33: pos - 1*/
SIMD_DIRECTIVE
for (int _SequenceL__i206=1,_stop_val__SequenceL__i206=_SequenceL__Arg_pos.size(); _SequenceL__i206<=_stop_val__SequenceL__i206; _SequenceL__i206+=1)
{
(*(_SequenceL__Arg_pos.get_ptr(_SequenceL__i206))) = ((*(_SequenceL_tmp204.get_ptr(_SequenceL__i206))) + _SequenceL_tmp205);	/*advent3.sl:32: position(i) + offset*/
(*((*(_SequenceL_tmp202.get_ptr(1))).get_ptr(_SequenceL__i206))) = ((*(_SequenceL__Arg_pos.get_ptr(_SequenceL__i206))) - 1);	/*advent3.sl:33: pos - 1*/
}
(*(_SequenceL_tmp202.get_ptr(2))) = _SequenceL__Arg_pos;	/*advent3.sl:33: pos*/
(*(_SequenceL_tmp202.get_ptr(3))).setSize(_SequenceL__Arg_pos.size());	/*advent3.sl:33: pos + 1*/
SIMD_DIRECTIVE
for (int _SequenceL__i210=1,_stop_val__SequenceL__i210=(*(_SequenceL_tmp202.get_ptr(3))).size(); _SequenceL__i210<=_stop_val__SequenceL__i210; _SequenceL__i210+=1)
{
(*((*(_SequenceL_tmp202.get_ptr(3))).get_ptr(_SequenceL__i210))) = ((*(_SequenceL__Arg_pos.get_ptr(_SequenceL__i210))) + 1);	/*advent3.sl:33: pos + 1*/
}
transpose(_SequenceL_tmp202, _SequenceL__Arg_indicesAround);	/*advent3.sl:33: transpose([pos - 1, pos, pos + 1])*/
_SequenceL_tmp211.setSize((*(_SequenceL__Arg_indicesAround.get_ptr(1))).size());	/*advent3.sl:34: field[indicesAround[1], indicesAround[2]]*/
SIMD_DIRECTIVE
for (int _SequenceL__scope__Index_val__tmp_index3=1,_stop_val__SequenceL__scope__Index_val__tmp_index3=_SequenceL_tmp211.size(); _SequenceL__scope__Index_val__tmp_index3<=_stop_val__SequenceL__scope__Index_val__tmp_index3; _SequenceL__scope__Index_val__tmp_index3+=1)
{
(*(_SequenceL_tmp211.get_ptr(_SequenceL__scope__Index_val__tmp_index3))).setSize((*(_SequenceL__Arg_indicesAround.get_ptr(2))).size());	/*advent3.sl:34: field[indicesAround[1], indicesAround[2]]*/
SIMD_DIRECTIVE
for (int _SequenceL__scope__Index_val__tmp_index4=1,_stop_val__SequenceL__scope__Index_val__tmp_index4=(*(_SequenceL_tmp211.get_ptr(_SequenceL__scope__Index_val__tmp_index3))).size(); _SequenceL__scope__Index_val__tmp_index4<=_stop_val__SequenceL__scope__Index_val__tmp_index4; _SequenceL__scope__Index_val__tmp_index4+=1)
{
(*((*(_SequenceL_tmp211.get_ptr(_SequenceL__scope__Index_val__tmp_index3))).get_ptr(_SequenceL__scope__Index_val__tmp_index4))) = (*((*(_SequenceL___Arg_field_tco.get_ptr((*((*(_SequenceL__Arg_indicesAround.get_ptr(1))).get_ptr(_SequenceL__scope__Index_val__tmp_index3)))))).get_ptr((*((*(_SequenceL__Arg_indicesAround.get_ptr(2))).get_ptr(_SequenceL__scope__Index_val__tmp_index4))))));	/*advent3.sl:34: field[indicesAround[1], indicesAround[2]]*/
}
}
appends(_SequenceL_tmp211, _SequenceL_tmp212);	/*advent3.sl:34: join(field[indicesAround[1], indicesAround[2]])*/
_SequenceL__Arg_val = sum(_SequenceL_tmp212);	/*advent3.sl:34: sum(join(field[indicesAround[1], indicesAround[2]]))*/
if ((_SequenceL__Arg_val > _SequenceL__Arg_n))	/*advent3.sl:37: val when val > n     else nextSpiralPoint(i+1, newField, n)*/
{
_SequenceL__resultConv = _SequenceL__Arg_val;	/*advent3.sl:36: val*/
}
else
{
_SequenceL_tmp216 = (_SequenceL___Arg_i_tco + 1);	/*advent3.sl:37: i+1*/
SIMD_DIRECTIVE
for (int _SequenceL__inline_opttmp4=1,_stop_val__SequenceL__inline_opttmp4=_SequenceL___Arg_field_tco.size(); _SequenceL__inline_opttmp4<=_stop_val__SequenceL__inline_opttmp4; _SequenceL__inline_opttmp4+=1)
{
_SequenceL__inline_opttmp7 = (_SequenceL__inline_opttmp4 == (*(_SequenceL__Arg_pos.get_ptr(1))));	/*advent3.sl:28: i = pos[1]*/
SIMD_DIRECTIVE
for (int _SequenceL__inline_opttmp5=1,_stop_val__SequenceL__inline_opttmp5=(*(_SequenceL___Arg_field_tco.get_ptr(_SequenceL__inline_opttmp4))).size(); _SequenceL__inline_opttmp5<=_stop_val__SequenceL__inline_opttmp5; _SequenceL__inline_opttmp5+=1)
{
if ((_SequenceL__inline_opttmp7 && (_SequenceL__inline_opttmp5 == (*(_SequenceL__Arg_pos.get_ptr(2))))))	/*advent3.sl:29: val when i = pos[1] and j = pos[2]  else field[i,j]*/
{
(*((*(_SequenceL___Arg_field_tco.get_ptr(_SequenceL__inline_opttmp4))).get_ptr(_SequenceL__inline_opttmp5))) = _SequenceL__Arg_val;	/*advent3.sl:28: val*/
}
}
}
_SequenceL___Arg_i_tco = _SequenceL_tmp216;	
goto nextSpiralPoint_advent3_label_tco;	/*advent3.sl:37: nextSpiralPoint(i+1, newField, n)*/
}
_SequenceL_tmp212.delete_data(true);	
_SequenceL_tmp211.delete_data(true);	
_SequenceL__Arg_indicesAround.delete_data(true);	
_SequenceL_tmp204.delete_data(true);	
_SequenceL__Arg_pos.delete_data(true);	
_SequenceL_tmp202.delete_data(true);	
_SequenceL___Arg_field_tco.delete_data(true);	
_SequenceL___Arg_field_tco.finished();	
_SequenceL_tmp202.finished();	
_SequenceL__Arg_pos.finished();	
_SequenceL_tmp204.finished();	
_SequenceL__Arg_indicesAround.finished();	
_SequenceL_tmp211.finished();	
_SequenceL_tmp212.finished();	
}
void SequenceL_findLarger_0(int _SequenceL__Arg_n, int &_SequenceL__resultConv)
{
::Sequence< ::Sequence< int > > _SequenceL__Arg_field(cspace);

if ((_SequenceL__Arg_n == 0))	/*advent3.sl:42: field[offset,offset] when n = 0     else nextSpiralPoint(2, field, n)*/
{
_SequenceL__Arg_field = _SequenceL_createField_0;	/*advent3.sl:40: createField()*/
_SequenceL__resultConv = (*((*(_SequenceL__Arg_field.get_ptr(_SequenceL_offset_0))).get_ptr(_SequenceL_offset_0)));	/*advent3.sl:41: field[offset,offset]*/
_SequenceL__Arg_field.delete_data(true);	
_SequenceL__Arg_field.finished();	
}
else
{
_SequenceL__Arg_field = _SequenceL_createField_0;	/*advent3.sl:40: createField()*/
SequenceL_nextSpiralPoint_0(2, _SequenceL__Arg_field, _SequenceL__Arg_n, _SequenceL__resultConv);	/*advent3.sl:42: nextSpiralPoint(2, field, n)*/
_SequenceL__Arg_field.delete_data(true);	
_SequenceL__Arg_field.finished();	
}
}
void SequenceL_abs_2(int _SequenceL__Arg_x, int &_SequenceL__resultConv)
{

if ((_SequenceL__Arg_x < 0))	/*Math.sl:23: -x when x < 0 else x*/
{
_SequenceL__resultConv = (-_SequenceL__Arg_x);	/*Math.sl:23: -x*/
}
else
{
_SequenceL__resultConv = _SequenceL__Arg_x;	/*Math.sl:23: x*/
}
}
void SequenceL_position_0(int _SequenceL__Arg_n, ::Sequence< int > &_SequenceL__resultConv)
{
int _SequenceL__Arg_side;
SL_FLOAT _SequenceL_tmp277;
SL_FLOAT _SequenceL_tmp275;
int _SequenceL__Arg_onCircumference;
SL_FLOAT _SequenceL_tmp274;
int _SequenceL__Arg_ringSize;
int _SequenceL__Arg_radius;
int _SequenceL_tmp270;
int _SequenceL_tmp269;
SL_FLOAT _SequenceL_tmp268;
int _SequenceL__Arg_other;
int _SequenceL__Arg_adjust;

if ((_SequenceL__Arg_n == 1))	/*advent3.sl:18: [0,0] when n = 1     else [radius, -other] when side = 1     else [other, radius] when side = 2     else [-radius, other] when side = 3     else [-other, -radius]*/
{
_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))) = 0;	/*advent3.sl:14: 0*/
(*(_SequenceL__resultConv.get_ptr(2))) = 0;	/*advent3.sl:14: 0*/
}
else
{
_SequenceL_tmp268 = sqrt(_SequenceL__Arg_n);	/*advent3.sl:8: sqrt(n)*/
SequenceL_ceiling_2(_SequenceL_tmp268, _SequenceL_tmp269);	/*advent3.sl:8: ceiling(sqrt(n))*/
_SequenceL_tmp270 = (_SequenceL_tmp269 / 2);	/*advent3.sl:8: ceiling(sqrt(n)) / 2*/
_SequenceL__Arg_radius = ((int) floor(_SequenceL_tmp270));	/*advent3.sl:8: floor(ceiling(sqrt(n)) / 2)*/
_SequenceL__Arg_ringSize = ((_SequenceL__Arg_radius * 2) + 1);	/*advent3.sl:9: radius * 2 + 1*/
_SequenceL_tmp274 = (_SequenceL__Arg_n - SequenceL__square((_SequenceL__Arg_ringSize - 2)));	/*advent3.sl:10: n - (ringSize - 2)^2*/
_SequenceL__Arg_onCircumference = ((int) floor(_SequenceL_tmp274));	/*advent3.sl:10: floor(n - (ringSize - 2)^2)*/
SequenceL_intToFloat_3(_SequenceL__Arg_onCircumference, _SequenceL_tmp275);	/*advent3.sl:11: intToFloat(onCircumference)*/
_SequenceL_tmp277 = (_SequenceL_tmp275 / (_SequenceL__Arg_ringSize - 1));	/*advent3.sl:11: intToFloat(onCircumference) / (ringSize - 1)*/
SequenceL_ceiling_2(_SequenceL_tmp277, _SequenceL__Arg_side);	/*advent3.sl:11: ceiling(intToFloat(onCircumference) / (ringSize - 1))*/
_SequenceL__Arg_adjust = (((_SequenceL__Arg_onCircumference - 1) % (_SequenceL__Arg_ringSize - 1)) + 1);	/*advent3.sl:12: ((onCircumference - 1) mod (ringSize - 1)) + 1*/
_SequenceL__Arg_other = (_SequenceL__Arg_radius - _SequenceL__Arg_adjust);	/*advent3.sl:13: radius - adjust*/
if ((_SequenceL__Arg_side == 1))	/*advent3.sl:18: [radius, -other] when side = 1     else [other, radius] when side = 2     else [-radius, other] when side = 3     else [-other, -radius]*/
{
_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))) = _SequenceL__Arg_radius;	/*advent3.sl:15: radius*/
(*(_SequenceL__resultConv.get_ptr(2))) = (-_SequenceL__Arg_other);	/*advent3.sl:15: -other*/
}
else
{
if ((_SequenceL__Arg_side == 2))	/*advent3.sl:18: [other, radius] when side = 2     else [-radius, other] when side = 3     else [-other, -radius]*/
{
_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))) = _SequenceL__Arg_other;	/*advent3.sl:16: other*/
(*(_SequenceL__resultConv.get_ptr(2))) = _SequenceL__Arg_radius;	/*advent3.sl:16: radius*/
}
else
{
if ((_SequenceL__Arg_side == 3))	/*advent3.sl:18: [-radius, other] when side = 3     else [-other, -radius]*/
{
_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))) = (-_SequenceL__Arg_radius);	/*advent3.sl:17: -radius*/
(*(_SequenceL__resultConv.get_ptr(2))) = _SequenceL__Arg_other;	/*advent3.sl:17: other*/
}
else
{
_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
(*(_SequenceL__resultConv.get_ptr(1))) = (-_SequenceL__Arg_other);	/*advent3.sl:18: -other*/
(*(_SequenceL__resultConv.get_ptr(2))) = (-_SequenceL__Arg_radius);	/*advent3.sl:18: -radius*/
}
}
}
}
}
void SequenceL_main_0(::Sequence< ::Sequence< char > > &_SequenceL__Arg_s, ::Sequence< int > &_SequenceL__resultConv)
{
::Sequence< int > _SequenceL_tmp300(cspace);
int _SequenceL_tmp299;
::Sequence< int > _SequenceL_tmp301(cspace);
int _SequenceL_tmp304;

_SequenceL__resultConv.setSize(2 > 0 ? 2 : 0);	
_SequenceL_tmp299 = _SequenceL_input_0;	/*advent3.sl:45: input*/
SequenceL_position_0(_SequenceL_tmp299, _SequenceL_tmp300);	/*advent3.sl:45: position(input)*/
_SequenceL_tmp301.setSize(_SequenceL_tmp300.size());	/*advent3.sl:45: abs(position(input))*/
SIMD_DIRECTIVE
for (int _SequenceL__i302=1,_stop_val__SequenceL__i302=_SequenceL_tmp301.size(); _SequenceL__i302<=_stop_val__SequenceL__i302; _SequenceL__i302+=1)
{
SequenceL_abs_2((*(_SequenceL_tmp300.get_ptr(_SequenceL__i302))), (*(_SequenceL_tmp301.get_ptr(_SequenceL__i302))));	/*advent3.sl:45: abs(position(input))*/
}
_SequenceL_tmp300.delete_data(true);	
_SequenceL_tmp300.finished();	
(*(_SequenceL__resultConv.get_ptr(1))) = sum(_SequenceL_tmp301);	/*advent3.sl:45: sum(abs(position(input)))*/
_SequenceL_tmp301.delete_data(true);	
_SequenceL_tmp301.finished();	
_SequenceL_tmp304 = _SequenceL_input_0;	/*advent3.sl:45: input*/
SequenceL_findLarger_0(_SequenceL_tmp304, (*(_SequenceL__resultConv.get_ptr(2))));	/*advent3.sl:45: findLarger(input)*/
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
