

#define DOBJ_DEF(type_name) struct type_name##header { 
#define DOBJ_DEF_END(type_name) };

#define DOBJ_DEF_FIELD(type, field) unsigned int len_##field : 1; 
#define DOBJ_DEF_VARFIELD(type, field) unsigned int len_##field;