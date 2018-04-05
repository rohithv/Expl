%{
#include<stdio.h>
#include<stdlib.h>
#include "expl.c"
#define YYSTYPE tnode *
int yyerror(char const *);
int yylex(void);

%}

%token NUM PLUS MINUS MUL DIV ASSIGN WRITE READ ID BEGINTK END EQ NE LT GT LE GE IF THEN ELSE ENDIF WHILE DO ENDWHILE BREAKTK CONTINUETK BRKPTK REPEAT UNTIL
%left LT GT LE GE EQ NE
%left PLUS MINUS
%left MUL DIV

%%

Program : BEGINTK Slist END 	{$$=$2;
			  	 codeGen($$);}
	| BEGINTK END 	{$$=NULL;};

Slist : Slist Stmt {$$=createTree(0,NOTYPE,NULL,CONN,$1,NULL,$2);}
	| Stmt {$$=$1;};

Stmt : 	InputStmt 	{$$=$1;}
	| OutputStmt 	{$$=$1;}
	| AsgStmt 	{$$=$1;}
	| IfStmt 	{$$=$1;}
	| WhileStmt 	{$$=$1;}
	| DoWhileStmt	{$$=$1;}
	| UntilStmt 	{$$=$1;}
	| PlainStmt 	{$$=$1;}
	;

InputStmt : READ '(' ID ')' ';' {$$=createTree(0,NOTYPE,NULL,READOP,$3,NULL,NULL);};

OutputStmt : WRITE '(' expr ')' ';' {$$=createTree(0,NOTYPE,NULL,WRITEOP,$3,NULL,NULL);};

AsgStmt : ID ASSIGN expr ';' {$$=createTree(0,NOTYPE,NULL,ASS,$1,NULL,$3);};

IfStmt : IF '(' expr ')' THEN Slist ELSE Slist ENDIF ';' {$$=createTree(0,NOTYPE,NULL,IFSTMT,$3,$6,$8);}
	| IF '(' expr ')' THEN Slist ENDIF ';' {$$=createTree(0,NOTYPE,NULL,IFSTMT,$3,$6,NULL);}
	;
	
WhileStmt : WHILE '(' expr ')' DO Slist ENDWHILE ';' {$$=createTree(0,NOTYPE,NULL,WHILESTMT,$3,NULL,$6);};

DoWhileStmt : DO Slist WHILE '(' expr ')' ';' { $$=createTree(0,NOTYPE,NULL,DOWHILESTMT,$2,NULL,$5); };

UntilStmt : REPEAT Slist UNTIL expr ';' { $$=createTree(0,NOTYPE,NULL,UNTILSTMT,$2,NULL,$4); };

PlainStmt : BRKPTK ';' 		{$$=createTree(0,NOTYPE,NULL,BRKP,NULL,NULL,NULL);}
	   | BREAKTK ';'	{$$=createTree(0,NOTYPE,NULL,BREAK,NULL,NULL,NULL);}
	   | CONTINUETK ';'	{$$=createTree(0,NOTYPE,NULL,CONTINUE,NULL,NULL,NULL);}
	   ;

expr :	expr PLUS expr 	  {$$=createTree(0,INTEGER,NULL,PLUSOP,$1,NULL,$3);}
	| expr MINUS expr {$$=createTree(0,INTEGER,NULL,MINUSOP,$1,NULL,$3);}
	| expr MUL expr   {$$=createTree(0,INTEGER,NULL,MULOP,$1,NULL,$3);}
	| expr DIV expr   {$$=createTree(0,INTEGER,NULL,DIVOP,$1,NULL,$3);}
	| '(' expr ')' {$$=$2;}
	| expr LT expr {$$=createTree(0,BOOL,NULL,LTOP,$1,NULL,$3);}
	| expr GT expr {$$=createTree(0,BOOL,NULL,GTOP,$1,NULL,$3);}
	| expr LE expr {$$=createTree(0,BOOL,NULL,LEOP,$1,NULL,$3);}
	| expr GE expr {$$=createTree(0,BOOL,NULL,GEOP,$1,NULL,$3);}
	| expr EQ expr {$$=createTree(0,BOOL,NULL,EQOP,$1,NULL,$3);}
	| expr NE expr {$$=createTree(0,BOOL,NULL,NEOP,$1,NULL,$3);}
	| NUM {$$=$1;}
	| ID {$$=$1;}
	;

%%

int yyerror(char const *s){
	fprintf(stderr,"error, %d : %s\n",line,s);
	return 1;
}
