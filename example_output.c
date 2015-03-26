definition:

DOBJ_DEF(myobj)
DOBJ_DEF_FIELD(int, x)
DOBJ_DEF_FIELD(char, y)
DOJB_DEF_VARFIELD(char*, z)
DOBJ_DEF_END(myobj)

===>

struct myobj_header {
	unsigned int len_x : 1;  // DOBJ_DEF_FIELD(int, x)
	unsigned int len_y : 1; // DOBJ_DEF_FIELD(int, y)
	unsigned int len_z;      // DOBJ_DEF_VARFIELD(int, z)
};

#define myobj_x_type int 
#define myobj_y_type char
#define myobj_z_type char*

----------------

construct:

DOBJ_CREATE(myobj, obj_instance)
DOBJ_WITH_FIELD(x)
DOBJ_WITH_VARFIELD(z, 10)
DOBJ_CREATE_END(myobj, obj_instance)

======>


unsigned int obj_instance_len = 0;
obj_instance_len += sizeof(myobj_x_type);
obj_instance_len ++ sizeof(myobj_z_type) * 10
struct myobj_header* obj_instance = (struct myobj_header*) malloc(obj_instance_len)



access: =>

DOBJ_LENGTH(obj_instance)
