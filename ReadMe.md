access:

DOBJ_LENGTH(p) => length of the dobj
DOBJ_FIELD_P(p, field) => a pointer of the field, with proper type
DOBJ_FIELD_TYPE(p, field) => type of the field
DOBJ_FIELD_NUM(p, field) => number of instance in the field

construct:
DOBJ_CREATE(type_name, var_name)
DOBJ_WITH_FIELD(field_name) * n
DOBJ_WITH_VARFIELD(field_name, varlen) * n
DOBJ_CREATE_END(type_name, var_name)

definition:
DOBJ_DEF(type_name)
DOBJ_DEF_FIELD(type_name, field_name) * n
DOBJ_DEF_VARFIELD(type_name, field_name) * n
DOBJ_DEF_END(type_name)

