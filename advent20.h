#ifndef _SEQUENCEL_GENERATED_advent20_H
#define _SEQUENCEL_GENERATED_advent20_H

#define SL_FLOAT_SIZE 8
#if SL_FLOAT_SIZE == 4
#define SL_FLOAT float
#else
#define SL_FLOAT double
#endif

#include <SequenceL/SequenceL.h>

typedef void (*_sl_fun_pointer)(void);

struct _sl_CollisionRecord_0;
namespace SL
{
namespace RegEx
{
namespace RegEx
{
struct Token;
}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
struct Transition;
}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
struct State;
}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
struct Parsing;
}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
struct Combined;
}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
struct Processed;
}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
struct Matched;
}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
struct RegularExpression;
}
}
}
namespace SL
{
namespace Utilities
{
namespace Sequence
{
template < class T >
struct SWAP_RETURN;
}
}
}
namespace SL
{
namespace Utilities
{
namespace Sequence
{
template <> struct SWAP_RETURN< ::_sl_CollisionRecord_0 >;
}
}
}
namespace SL
{
namespace Utilities
{
namespace Sequence
{
//-----------------------------------------
// SWAP_RETURN struct definition
//------------------------------------------
template <>
struct SWAP_RETURN< ::_sl_CollisionRecord_0 >
{
int Left;
int Right;
::Sequence< ::_sl_CollisionRecord_0 > List;


SWAP_RETURN():Left(0), Right(0), List()
{
}

SWAP_RETURN(Memflags _m):Left(0), Right(0), List(_m)
{
}

SWAP_RETURN(int _SequenceL_Left, int _SequenceL_Right, ::Sequence< ::_sl_CollisionRecord_0 > _SequenceL_List):Left(_SequenceL_Left), Right(_SequenceL_Right), List(_SequenceL_List)
{
}

void _initialize(Memflags _mfp)
{
Left=0;
Right=0;
List.initialize(_mfp);

}

void _delete_data(bool _parallel)
{
List.delete_data(_parallel);

}

void _finished()
{
List.finished();

}

~SWAP_RETURN()
{
_delete_data(true);
_finished();
}
void _Reference()
{
List.Reference();

}

void _dereference()
{
List.dereference();

}

void _deFrag()
{
List.deFrag();

}

void _parallel_deFrag(int _ln)
{
List.parallel_deFrag(_ln);

}

void _fix_padding(SWAP_RETURN& _old)
{
List.fix_padding(_old.List);

}

SWAP_RETURN& operator=(const SWAP_RETURN& _rhs)
{
List = _rhs.List;
Left = _rhs.Left;
Right = _rhs.Right;

return *this;
}

void _hard_copy(SWAP_RETURN& _rhs, int _ln)
{
List.hard_copy(_rhs.List, _ln);
Left = _rhs.Left;
Right = _rhs.Right;
}

ostream& _toString(ostream& _stream) const
{
_stream<<"(";
_stream<<"Left:";
_SequenceL_toString(Left, _stream);
_stream<<","<<"List:";
_SequenceL_toString(List, _stream);
_stream<<","<<"Right:";
_SequenceL_toString(Right, _stream);
_stream<<")";
return _stream;
}

string _toString() const
{
ostringstream _stream;
_toString(_stream);
return _stream.str();
}

};

//-----------------------------------------

}
}
}
//-----------------------------------------
// _sl_CollisionRecord_0 struct definition
//------------------------------------------
struct _sl_CollisionRecord_0
{
SL_FLOAT t;
int a;
int b;


_sl_CollisionRecord_0():t(0), a(0), b(0)
{
}

_sl_CollisionRecord_0(Memflags _m):t(0), a(0), b(0)
{
}

_sl_CollisionRecord_0(SL_FLOAT _SequenceL_t, int _SequenceL_a, int _SequenceL_b):t(_SequenceL_t), a(_SequenceL_a), b(_SequenceL_b)
{
}

void _initialize(Memflags _mfp)
{
t=0;
a=0;
b=0;

}

void _delete_data(bool _parallel)
{

}

void _finished()
{

}

~_sl_CollisionRecord_0()
{
_delete_data(true);
_finished();
}
void _Reference()
{

}

void _dereference()
{

}

void _deFrag()
{

}

void _parallel_deFrag(int _ln)
{

}

void _fix_padding(_sl_CollisionRecord_0& _old)
{

}

_sl_CollisionRecord_0& operator=(const _sl_CollisionRecord_0& _rhs)
{
t = _rhs.t;
a = _rhs.a;
b = _rhs.b;

return *this;
}

void _hard_copy(_sl_CollisionRecord_0& _rhs, int _ln)
{
t = _rhs.t;
a = _rhs.a;
b = _rhs.b;
}

ostream& _toString(ostream& _stream) const
{
_stream<<"(";
_stream<<"a:";
_SequenceL_toString(a, _stream);
_stream<<","<<"b:";
_SequenceL_toString(b, _stream);
_stream<<","<<"t:";
_SequenceL_toString(t, _stream);
_stream<<")";
return _stream;
}

string _toString() const
{
ostringstream _stream;
_toString(_stream);
return _stream.str();
}

};

//-----------------------------------------

namespace SL
{
namespace RegEx
{
namespace RegEx
{
//-----------------------------------------
// Token struct definition
//------------------------------------------
struct Token
{
::Sequence< char > Value;
::Sequence< char > Type;


Token():Value(), Type()
{
}

Token(Memflags _m):Value(_m), Type(_m)
{
}

Token(::Sequence< char > _SequenceL_Value, ::Sequence< char > _SequenceL_Type):Value(_SequenceL_Value), Type(_SequenceL_Type)
{
}

void _initialize(Memflags _mfp)
{
Value.initialize(_mfp);
Type.initialize(_mfp);

}

void _delete_data(bool _parallel)
{
Value.delete_data(_parallel);
Type.delete_data(_parallel);

}

void _finished()
{
Value.finished();
Type.finished();

}

~Token()
{
_delete_data(true);
_finished();
}
void _Reference()
{
Value.Reference();
Type.Reference();

}

void _dereference()
{
Value.dereference();
Type.dereference();

}

void _deFrag()
{
Value.deFrag();
Type.deFrag();

}

void _parallel_deFrag(int _ln)
{
Value.parallel_deFrag(_ln);
Type.parallel_deFrag(_ln);

}

void _fix_padding(Token& _old)
{
Value.fix_padding(_old.Value);
Type.fix_padding(_old.Type);

}

Token& operator=(const Token& _rhs)
{
Value = _rhs.Value;
Type = _rhs.Type;

return *this;
}

void _hard_copy(Token& _rhs, int _ln)
{
Value.hard_copy(_rhs.Value, _ln);
Type.hard_copy(_rhs.Type, _ln);
}

ostream& _toString(ostream& _stream) const
{
_stream<<"(";
_stream<<"Type:";
_SequenceL_toString(Type, _stream);
_stream<<","<<"Value:";
_SequenceL_toString(Value, _stream);
_stream<<")";
return _stream;
}

string _toString() const
{
ostringstream _stream;
_toString(_stream);
return _stream.str();
}

};

//-----------------------------------------

}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
//-----------------------------------------
// Transition struct definition
//------------------------------------------
struct Transition
{
int State;
SLStruct< SL::RegEx::RegEx::Token > Token;


Transition():State(0), Token(false)
{
}

Transition(Memflags _m):State(0), Token(false,_m)
{
}

Transition(int _SequenceL_State, SLStruct< SL::RegEx::RegEx::Token > _SequenceL_Token):State(_SequenceL_State), Token(_SequenceL_Token)
{
}

void _initialize(Memflags _mfp)
{
State=0;
Token.initialize_empty(_mfp);

}

void _delete_data(bool _parallel)
{
Token.delete_data(_parallel);

}

void _finished()
{
Token.finished();

}

~Transition()
{
_delete_data(true);
_finished();
}
void _Reference()
{
Token.Reference();

}

void _dereference()
{
Token.dereference();

}

void _deFrag()
{
Token.deFrag();

}

void _parallel_deFrag(int _ln)
{
Token.parallel_deFrag(_ln);

}

void _fix_padding(Transition& _old)
{

}

Transition& operator=(const Transition& _rhs)
{
Token = _rhs.Token;
State = _rhs.State;

return *this;
}

void _hard_copy(Transition& _rhs, int _ln)
{
Token.hard_copy(_rhs.Token, _ln);
State = _rhs.State;
}

ostream& _toString(ostream& _stream) const
{
_stream<<"(";
_stream<<"State:";
_SequenceL_toString(State, _stream);
_stream<<","<<"Token:";
_SequenceL_toString(Token, _stream);
_stream<<")";
return _stream;
}

string _toString() const
{
ostringstream _stream;
_toString(_stream);
return _stream.str();
}

};

//-----------------------------------------

}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
//-----------------------------------------
// State struct definition
//------------------------------------------
struct State
{
int ID;
bool Starting;
bool Accepting;
::Sequence< int > IDSet;
::Sequence< SL::RegEx::RegEx::Transition > Transitions;


State():ID(0), Starting(0), Accepting(0), IDSet(), Transitions()
{
}

State(Memflags _m):ID(0), Starting(0), Accepting(0), IDSet(_m), Transitions(_m)
{
}

State(int _SequenceL_ID, bool _SequenceL_Starting, bool _SequenceL_Accepting, ::Sequence< int > _SequenceL_IDSet, ::Sequence< SL::RegEx::RegEx::Transition > _SequenceL_Transitions):ID(_SequenceL_ID), Starting(_SequenceL_Starting), Accepting(_SequenceL_Accepting), IDSet(_SequenceL_IDSet), Transitions(_SequenceL_Transitions)
{
}

void _initialize(Memflags _mfp)
{
ID=0;
Starting=0;
Accepting=0;
IDSet.initialize(_mfp);
Transitions.initialize(_mfp);

}

void _delete_data(bool _parallel)
{
IDSet.delete_data(_parallel);
Transitions.delete_data(_parallel);

}

void _finished()
{
IDSet.finished();
Transitions.finished();

}

~State()
{
_delete_data(true);
_finished();
}
void _Reference()
{
IDSet.Reference();
Transitions.Reference();

}

void _dereference()
{
IDSet.dereference();
Transitions.dereference();

}

void _deFrag()
{
IDSet.deFrag();
Transitions.deFrag();

}

void _parallel_deFrag(int _ln)
{
IDSet.parallel_deFrag(_ln);
Transitions.parallel_deFrag(_ln);

}

void _fix_padding(State& _old)
{
IDSet.fix_padding(_old.IDSet);
Transitions.fix_padding(_old.Transitions);

}

State& operator=(const State& _rhs)
{
ID = _rhs.ID;
IDSet = _rhs.IDSet;
Starting = _rhs.Starting;
Accepting = _rhs.Accepting;
Transitions = _rhs.Transitions;

return *this;
}

void _hard_copy(State& _rhs, int _ln)
{
ID = _rhs.ID;
IDSet.hard_copy(_rhs.IDSet, _ln);
Starting = _rhs.Starting;
Accepting = _rhs.Accepting;
Transitions.hard_copy(_rhs.Transitions, _ln);
}

ostream& _toString(ostream& _stream) const
{
_stream<<"(";
_stream<<"Accepting:";
_SequenceL_toString(Accepting, _stream);
_stream<<","<<"ID:";
_SequenceL_toString(ID, _stream);
_stream<<","<<"IDSet:";
_SequenceL_toString(IDSet, _stream);
_stream<<","<<"Starting:";
_SequenceL_toString(Starting, _stream);
_stream<<","<<"Transitions:";
_SequenceL_toString(Transitions, _stream);
_stream<<")";
return _stream;
}

string _toString() const
{
ostringstream _stream;
_toString(_stream);
return _stream.str();
}

};

//-----------------------------------------

}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
//-----------------------------------------
// Parsing struct definition
//------------------------------------------
struct Parsing
{
int Current;
int MaxID;
::Sequence< SL::RegEx::RegEx::Token > Tokens;
::Sequence< SL::RegEx::RegEx::State > States;


Parsing():Current(0), MaxID(0), Tokens(), States()
{
}

Parsing(Memflags _m):Current(0), MaxID(0), Tokens(_m), States(_m)
{
}

Parsing(int _SequenceL_Current, int _SequenceL_MaxID, ::Sequence< SL::RegEx::RegEx::Token > _SequenceL_Tokens, ::Sequence< SL::RegEx::RegEx::State > _SequenceL_States):Current(_SequenceL_Current), MaxID(_SequenceL_MaxID), Tokens(_SequenceL_Tokens), States(_SequenceL_States)
{
}

void _initialize(Memflags _mfp)
{
Current=0;
MaxID=0;
Tokens.initialize(_mfp);
States.initialize(_mfp);

}

void _delete_data(bool _parallel)
{
Tokens.delete_data(_parallel);
States.delete_data(_parallel);

}

void _finished()
{
Tokens.finished();
States.finished();

}

~Parsing()
{
_delete_data(true);
_finished();
}
void _Reference()
{
Tokens.Reference();
States.Reference();

}

void _dereference()
{
Tokens.dereference();
States.dereference();

}

void _deFrag()
{
Tokens.deFrag();
States.deFrag();

}

void _parallel_deFrag(int _ln)
{
Tokens.parallel_deFrag(_ln);
States.parallel_deFrag(_ln);

}

void _fix_padding(Parsing& _old)
{
Tokens.fix_padding(_old.Tokens);
States.fix_padding(_old.States);

}

Parsing& operator=(const Parsing& _rhs)
{
Current = _rhs.Current;
Tokens = _rhs.Tokens;
States = _rhs.States;
MaxID = _rhs.MaxID;

return *this;
}

void _hard_copy(Parsing& _rhs, int _ln)
{
Current = _rhs.Current;
Tokens.hard_copy(_rhs.Tokens, _ln);
States.hard_copy(_rhs.States, _ln);
MaxID = _rhs.MaxID;
}

ostream& _toString(ostream& _stream) const
{
_stream<<"(";
_stream<<"Current:";
_SequenceL_toString(Current, _stream);
_stream<<","<<"MaxID:";
_SequenceL_toString(MaxID, _stream);
_stream<<","<<"States:";
_SequenceL_toString(States, _stream);
_stream<<","<<"Tokens:";
_SequenceL_toString(Tokens, _stream);
_stream<<")";
return _stream;
}

string _toString() const
{
ostringstream _stream;
_toString(_stream);
return _stream.str();
}

};

//-----------------------------------------

}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
//-----------------------------------------
// Combined struct definition
//------------------------------------------
struct Combined
{
::Sequence< SL::RegEx::RegEx::Token > RemainingTokens;
SLStruct< SL::RegEx::RegEx::Token > Class;


Combined():RemainingTokens(), Class(false)
{
}

Combined(Memflags _m):RemainingTokens(_m), Class(false,_m)
{
}

Combined(::Sequence< SL::RegEx::RegEx::Token > _SequenceL_RemainingTokens, SLStruct< SL::RegEx::RegEx::Token > _SequenceL_Class):RemainingTokens(_SequenceL_RemainingTokens), Class(_SequenceL_Class)
{
}

void _initialize(Memflags _mfp)
{
RemainingTokens.initialize(_mfp);
Class.initialize_empty(_mfp);

}

void _delete_data(bool _parallel)
{
RemainingTokens.delete_data(_parallel);
Class.delete_data(_parallel);

}

void _finished()
{
RemainingTokens.finished();
Class.finished();

}

~Combined()
{
_delete_data(true);
_finished();
}
void _Reference()
{
RemainingTokens.Reference();
Class.Reference();

}

void _dereference()
{
RemainingTokens.dereference();
Class.dereference();

}

void _deFrag()
{
RemainingTokens.deFrag();
Class.deFrag();

}

void _parallel_deFrag(int _ln)
{
RemainingTokens.parallel_deFrag(_ln);
Class.parallel_deFrag(_ln);

}

void _fix_padding(Combined& _old)
{
RemainingTokens.fix_padding(_old.RemainingTokens);

}

Combined& operator=(const Combined& _rhs)
{
Class = _rhs.Class;
RemainingTokens = _rhs.RemainingTokens;

return *this;
}

void _hard_copy(Combined& _rhs, int _ln)
{
Class.hard_copy(_rhs.Class, _ln);
RemainingTokens.hard_copy(_rhs.RemainingTokens, _ln);
}

ostream& _toString(ostream& _stream) const
{
_stream<<"(";
_stream<<"Class:";
_SequenceL_toString(Class, _stream);
_stream<<","<<"RemainingTokens:";
_SequenceL_toString(RemainingTokens, _stream);
_stream<<")";
return _stream;
}

string _toString() const
{
ostringstream _stream;
_toString(_stream);
return _stream.str();
}

};

//-----------------------------------------

}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
//-----------------------------------------
// Processed struct definition
//------------------------------------------
struct Processed
{
::Sequence< SL::RegEx::RegEx::State > ReturnedStates;
SLStruct< SL::RegEx::RegEx::State > ReturnedState;


Processed():ReturnedStates(), ReturnedState(false)
{
}

Processed(Memflags _m):ReturnedStates(_m), ReturnedState(false,_m)
{
}

Processed(::Sequence< SL::RegEx::RegEx::State > _SequenceL_ReturnedStates, SLStruct< SL::RegEx::RegEx::State > _SequenceL_ReturnedState):ReturnedStates(_SequenceL_ReturnedStates), ReturnedState(_SequenceL_ReturnedState)
{
}

void _initialize(Memflags _mfp)
{
ReturnedStates.initialize(_mfp);
ReturnedState.initialize_empty(_mfp);

}

void _delete_data(bool _parallel)
{
ReturnedStates.delete_data(_parallel);
ReturnedState.delete_data(_parallel);

}

void _finished()
{
ReturnedStates.finished();
ReturnedState.finished();

}

~Processed()
{
_delete_data(true);
_finished();
}
void _Reference()
{
ReturnedStates.Reference();
ReturnedState.Reference();

}

void _dereference()
{
ReturnedStates.dereference();
ReturnedState.dereference();

}

void _deFrag()
{
ReturnedStates.deFrag();
ReturnedState.deFrag();

}

void _parallel_deFrag(int _ln)
{
ReturnedStates.parallel_deFrag(_ln);
ReturnedState.parallel_deFrag(_ln);

}

void _fix_padding(Processed& _old)
{
ReturnedStates.fix_padding(_old.ReturnedStates);

}

Processed& operator=(const Processed& _rhs)
{
ReturnedState = _rhs.ReturnedState;
ReturnedStates = _rhs.ReturnedStates;

return *this;
}

void _hard_copy(Processed& _rhs, int _ln)
{
ReturnedState.hard_copy(_rhs.ReturnedState, _ln);
ReturnedStates.hard_copy(_rhs.ReturnedStates, _ln);
}

ostream& _toString(ostream& _stream) const
{
_stream<<"(";
_stream<<"ReturnedState:";
_SequenceL_toString(ReturnedState, _stream);
_stream<<","<<"ReturnedStates:";
_SequenceL_toString(ReturnedStates, _stream);
_stream<<")";
return _stream;
}

string _toString() const
{
ostringstream _stream;
_toString(_stream);
return _stream.str();
}

};

//-----------------------------------------

}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
//-----------------------------------------
// Matched struct definition
//------------------------------------------
struct Matched
{
bool Flag;
int Begin;
int End;


Matched():Flag(0), Begin(0), End(0)
{
}

Matched(Memflags _m):Flag(0), Begin(0), End(0)
{
}

Matched(bool _SequenceL_Flag, int _SequenceL_Begin, int _SequenceL_End):Flag(_SequenceL_Flag), Begin(_SequenceL_Begin), End(_SequenceL_End)
{
}

void _initialize(Memflags _mfp)
{
Flag=0;
Begin=0;
End=0;

}

void _delete_data(bool _parallel)
{

}

void _finished()
{

}

~Matched()
{
_delete_data(true);
_finished();
}
void _Reference()
{

}

void _dereference()
{

}

void _deFrag()
{

}

void _parallel_deFrag(int _ln)
{

}

void _fix_padding(Matched& _old)
{

}

Matched& operator=(const Matched& _rhs)
{
Flag = _rhs.Flag;
Begin = _rhs.Begin;
End = _rhs.End;

return *this;
}

void _hard_copy(Matched& _rhs, int _ln)
{
Flag = _rhs.Flag;
Begin = _rhs.Begin;
End = _rhs.End;
}

ostream& _toString(ostream& _stream) const
{
_stream<<"(";
_stream<<"Begin:";
_SequenceL_toString(Begin, _stream);
_stream<<","<<"End:";
_SequenceL_toString(End, _stream);
_stream<<","<<"Flag:";
_SequenceL_toString(Flag, _stream);
_stream<<")";
return _stream;
}

string _toString() const
{
ostringstream _stream;
_toString(_stream);
return _stream.str();
}

};

//-----------------------------------------

}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
//-----------------------------------------
// RegularExpression struct definition
//------------------------------------------
struct RegularExpression
{
::Sequence< char > RegEx;
::Sequence< SL::RegEx::RegEx::State > DFA;


RegularExpression():RegEx(), DFA()
{
}

RegularExpression(Memflags _m):RegEx(_m), DFA(_m)
{
}

RegularExpression(::Sequence< char > _SequenceL_RegEx, ::Sequence< SL::RegEx::RegEx::State > _SequenceL_DFA):RegEx(_SequenceL_RegEx), DFA(_SequenceL_DFA)
{
}

void _initialize(Memflags _mfp)
{
RegEx.initialize(_mfp);
DFA.initialize(_mfp);

}

void _delete_data(bool _parallel)
{
RegEx.delete_data(_parallel);
DFA.delete_data(_parallel);

}

void _finished()
{
RegEx.finished();
DFA.finished();

}

~RegularExpression()
{
_delete_data(true);
_finished();
}
void _Reference()
{
RegEx.Reference();
DFA.Reference();

}

void _dereference()
{
RegEx.dereference();
DFA.dereference();

}

void _deFrag()
{
RegEx.deFrag();
DFA.deFrag();

}

void _parallel_deFrag(int _ln)
{
RegEx.parallel_deFrag(_ln);
DFA.parallel_deFrag(_ln);

}

void _fix_padding(RegularExpression& _old)
{
RegEx.fix_padding(_old.RegEx);
DFA.fix_padding(_old.DFA);

}

RegularExpression& operator=(const RegularExpression& _rhs)
{
RegEx = _rhs.RegEx;
DFA = _rhs.DFA;

return *this;
}

void _hard_copy(RegularExpression& _rhs, int _ln)
{
RegEx.hard_copy(_rhs.RegEx, _ln);
DFA.hard_copy(_rhs.DFA, _ln);
}

ostream& _toString(ostream& _stream) const
{
_stream<<"(";
_stream<<"DFA:";
_SequenceL_toString(DFA, _stream);
_stream<<","<<"RegEx:";
_SequenceL_toString(RegEx, _stream);
_stream<<")";
return _stream;
}

string _toString() const
{
ostringstream _stream;
_toString(_stream);
return _stream.str();
}

};

//-----------------------------------------

}
}
}
namespace SL
{
namespace Utilities
{
namespace Sequence
{
//-----------------------------------------
// SWAP_RETURN struct definition
//------------------------------------------
template < class T >
struct SWAP_RETURN
{
int Left;
int Right;
::Sequence< T > List;


SWAP_RETURN():Left(0), Right(0), List()
{
}

SWAP_RETURN(Memflags _m):Left(0), Right(0), List(_m)
{
}

SWAP_RETURN(int _SequenceL_Left, int _SequenceL_Right, ::Sequence< T > _SequenceL_List):Left(_SequenceL_Left), Right(_SequenceL_Right), List(_SequenceL_List)
{
}

void _initialize(Memflags _mfp)
{
Left=0;
Right=0;
List.initialize(_mfp);

}

void _delete_data(bool _parallel)
{
List.delete_data(_parallel);

}

void _finished()
{
List.finished();

}

~SWAP_RETURN()
{
_delete_data(true);
_finished();
}
void _Reference()
{
List.Reference();

}

void _dereference()
{
List.dereference();

}

void _deFrag()
{
List.deFrag();

}

void _parallel_deFrag(int _ln)
{
List.parallel_deFrag(_ln);

}

void _fix_padding(SWAP_RETURN& _old)
{
List.fix_padding(_old.List);

}

SWAP_RETURN& operator=(const SWAP_RETURN& _rhs)
{
List = _rhs.List;
Left = _rhs.Left;
Right = _rhs.Right;

return *this;
}

void _hard_copy(SWAP_RETURN& _rhs, int _ln)
{
List.hard_copy(_rhs.List, _ln);
Left = _rhs.Left;
Right = _rhs.Right;
}

ostream& _toString(ostream& _stream) const
{
_stream<<"(";
_stream<<"Left:";
_SequenceL_toString(Left, _stream);
_stream<<","<<"List:";
_SequenceL_toString(List, _stream);
_stream<<","<<"Right:";
_SequenceL_toString(Right, _stream);
_stream<<")";
return _stream;
}

string _toString() const
{
ostringstream _stream;
_toString(_stream);
return _stream.str();
}

};

//-----------------------------------------

}
}
}
ostream &operator<<(ostream &stream, const _sl_CollisionRecord_0& s);
bool operator==(const _sl_CollisionRecord_0&_lhs, const _sl_CollisionRecord_0&_rhs);
bool operator!=(const _sl_CollisionRecord_0&_lhs, const _sl_CollisionRecord_0&_rhs);
namespace SL
{
namespace RegEx
{
namespace RegEx
{
ostream &operator<<(ostream &stream, const Token& s);
bool operator==(const Token&_lhs, const Token&_rhs);
bool operator!=(const Token&_lhs, const Token&_rhs);
}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
ostream &operator<<(ostream &stream, const Transition& s);
bool operator==(const Transition&_lhs, const Transition&_rhs);
bool operator!=(const Transition&_lhs, const Transition&_rhs);
}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
ostream &operator<<(ostream &stream, const State& s);
bool operator==(const State&_lhs, const State&_rhs);
bool operator!=(const State&_lhs, const State&_rhs);
}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
ostream &operator<<(ostream &stream, const Parsing& s);
bool operator==(const Parsing&_lhs, const Parsing&_rhs);
bool operator!=(const Parsing&_lhs, const Parsing&_rhs);
}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
ostream &operator<<(ostream &stream, const Combined& s);
bool operator==(const Combined&_lhs, const Combined&_rhs);
bool operator!=(const Combined&_lhs, const Combined&_rhs);
}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
ostream &operator<<(ostream &stream, const Processed& s);
bool operator==(const Processed&_lhs, const Processed&_rhs);
bool operator!=(const Processed&_lhs, const Processed&_rhs);
}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
ostream &operator<<(ostream &stream, const Matched& s);
bool operator==(const Matched&_lhs, const Matched&_rhs);
bool operator!=(const Matched&_lhs, const Matched&_rhs);
}
}
}
namespace SL
{
namespace RegEx
{
namespace RegEx
{
ostream &operator<<(ostream &stream, const RegularExpression& s);
bool operator==(const RegularExpression&_lhs, const RegularExpression&_rhs);
bool operator!=(const RegularExpression&_lhs, const RegularExpression&_rhs);
}
}
}
namespace SL
{
namespace Utilities
{
namespace Sequence
{
template < class T >
ostream &operator<<(ostream &stream, const SWAP_RETURN< T >& s)
{
return s._toString(stream);
}

template < class T >
bool operator==(const SWAP_RETURN< T >&_lhs, const SWAP_RETURN< T >&_rhs)
{
return ((_lhs.List == _rhs.List)&&(_lhs.Left == _rhs.Left)&&(_lhs.Right == _rhs.Right));
}
template < class T >
bool operator!=(const SWAP_RETURN< T >&_lhs, const SWAP_RETURN< T >&_rhs)
{
 return ((_lhs.List != _rhs.List)||(_lhs.Left != _rhs.Left)||(_lhs.Right != _rhs.Right));
}
}
}
}

#ifdef _WIN32
#endif

void _foreign_SequenceL_matches(::Sequence< char >&,::Sequence< char >&,bool&);
void _foreign_SequenceL_firstMatch(::Sequence< char >&,::Sequence< char >&,SL::RegEx::RegEx::Matched&);
void _foreign_SequenceL_replaceFirst(::Sequence< char >&,::Sequence< char >&,::Sequence< char >&,::Sequence< char >&);
void _foreign_SequenceL_replaceAll(::Sequence< char >&,::Sequence< char >&,::Sequence< char >&,::Sequence< char >&);
void _foreign_SequenceL_findFirst(::Sequence< char >&,::Sequence< char >&,::Sequence< char >&);
void _foreign_SequenceL_findAll(::Sequence< char >&,::Sequence< char >&,::Sequence< ::Sequence< char > >&);

#define _sl_CollisionRecord ::_sl_CollisionRecord_0
#define _sl_Matched SL::RegEx::RegEx::Matched

void sl_main(::Sequence< ::Sequence< char > > &_SequenceL__Arg_arg1, int _n, ::Sequence< int > &_SequenceL_);

#endif
