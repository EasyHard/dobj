#include "dobj.h"

DOBJ_DEF(myobj)
DOBJ_DEF_FIELD(int, x)
DOBJ_DEF_FIELD(char, y)
DOBJ_DEF_VARFIELD(char*, z)
DOBJ_DEF_END(myobj)