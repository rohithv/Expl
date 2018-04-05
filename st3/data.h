//definitions for tnode.type
#define INTEGER 1
#define STRING 2
#define BOOL 3
#define NOTYPE 4

//definitions for tnode.nodetype
#define VAR 1
#define CONS 2
#define OP 3
#define ASS 4
#define WRITEOP 5
#define READOP 6
#define CONN 7
#define PLUSOP 8
#define MINUSOP 9
#define DIVOP 10
#define MULOP 11
#define LTOP 12
#define LEOP 13
#define GTOP 14
#define GEOP 15
#define EQOP 16
#define NEOP 17
#define IFSTMT 18
#define WHILESTMT 19
#define BREAK 20
#define CONTINUE 21
#define BRKP 22
#define DOWHILESTMT 23
#define UNTILSTMT 24

//macros used in codegen for loop type
#define NOLOOP 0
#define WHILELOOP 1
#define DOWHILELOOP 2
#define UNTILLOOP 3

#define reg_index int


typedef struct tnode{
	int val;
	int type;
	char *varname;
	int nodetype;
	struct tnode *left, *middle, *right;
}tnode;

