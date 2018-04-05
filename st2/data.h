//definitions for tnode.type
#define INTEGER 1
#define STRING 2
#define BOOL 3

//definitions for tnode.nodetype
#define VAR 1
#define CONS 2
#define OP 3
#define ASS 4
#define WRITEOP 5
#define READOP 6
#define CONN 7

#define reg_index int


typedef struct tnode{
	int val;
	int type;
	char *varname;
	int nodetype;
	struct tnode *left, *right;
}tnode;

