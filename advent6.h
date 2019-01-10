#ifndef _SEQUENCEL_GENERATED_advent6_H
#define _SEQUENCEL_GENERATED_advent6_H

#define SL_FLOAT_SIZE 8
#if SL_FLOAT_SIZE == 4
#define SL_FLOAT float
#else
#define SL_FLOAT double
#endif

#include <SequenceL/SequenceL.h>

typedef void (*_sl_fun_pointer)(void);

struct _sl_StepRecord_0;
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
//-----------------------------------------
// _sl_StepRecord_0 struct definition
//------------------------------------------
struct _sl_StepRecord_0
{
int steps;
::Sequence< int > state;


_sl_StepRecord_0():steps(0), state()
{
}

_sl_StepRecord_0(Memflags _m):steps(0), state(_m)
{
}

_sl_StepRecord_0(int _SequenceL_steps, ::Sequence< int > _SequenceL_state):steps(_SequenceL_steps), state(_SequenceL_state)
{
}

void _initialize(Memflags _mfp)
{
steps=0;
state.initialize(_mfp);

}

void _delete_data(bool _parallel)
{
state.delete_data(_parallel);

}

void _finished()
{
state.finished();

}

~_sl_StepRecord_0()
{
_delete_data(true);
_finished();
}
void _Reference()
{
state.Reference();

}

void _dereference()
{
state.dereference();

}

void _deFrag()
{
state.deFrag();

}

void _parallel_deFrag(int _ln)
{
state.parallel_deFrag(_ln);

}

void _fix_padding(_sl_StepRecord_0& _old)
{
state.fix_padding(_old.state);

}

_sl_StepRecord_0& operator=(const _sl_StepRecord_0& _rhs)
{
steps = _rhs.steps;
state = _rhs.state;

return *this;
}

void _hard_copy(_sl_StepRecord_0& _rhs, int _ln)
{
steps = _rhs.steps;
state.hard_copy(_rhs.state, _ln);
}

ostream& _toString(ostream& _stream) const
{
_stream<<"(";
_stream<<"state:";
_SequenceL_toString(state, _stream);
_stream<<","<<"steps:";
_SequenceL_toString(steps, _stream);
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
ostream &operator<<(ostream &stream, const _sl_StepRecord_0& s);
bool operator==(const _sl_StepRecord_0&_lhs, const _sl_StepRecord_0&_rhs);
bool operator!=(const _sl_StepRecord_0&_lhs, const _sl_StepRecord_0&_rhs);
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


#define _sl_StepRecord ::_sl_StepRecord_0

void sl_main(::Sequence< ::Sequence< char > > &_SequenceL__Arg_arg1, int _n, ::Sequence< int > &_SequenceL_);

#endif
