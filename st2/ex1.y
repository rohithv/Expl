%{
#include<stdio.h>
#include<stdlib.h>
#include "ex1.c"
#define YYSTYPE tnode *
int yyerror(char const *);
int yylex(void);
int result;

%}

%token NUM PLUS MINUS MUL DIV ASSIGN WRITE READ ID BEGINTK END
%left PLUS MINUS
%left MUL DIV

%%

Program : BEGINTK Slist END {$$=$2;
			   result=evaluate($$);
			   return result;}
	| BEGINTK END {$$=NULL;};

Slist : Slist Stmt {$$=createTree(0,INTEGER,NULL,CONN,$1,$2);}
	| Stmt {$$=$1;};

Stmt : 	InputStmt {$$=$1;}
	| OutputStmt {$$=$1;}
	| AsgStmt {$$=$1;};

InputStmt : READ '(' ID ')' ';' {$$=createTree(0,INTEGER,NULL,READOP,$3,NULL);};

OutputStmt : WRITE '(' expr ')' ';' {$$=createTree(0,INTEGER,NULL,WRITEOP,$3,NULL);};

AsgStmt : ID ASSIGN expr ';' {$$=createTree(0,INTEGER,"=",ASS,$1,$3);};

expr :	expr PLUS expr {$$=createTree(0,INTEGER,"+",OP,$1,$3);}
	| expr MINUS expr {$$=createTree(0,INTEGER,"-",OP,$1,$3);}
	| expr MUL expr {$$=createTree(0,INTEGER,"*",OP,$1,$3);}
	| expr DIV expr {$$=createTree(0,INTEGER,"/",OP,$1,$3);}
	| '(' expr ')' {$$=$2;}
	| NUM {$$=$1;}
	| ID {$$=$1;}
	;

%%

int yyerror(char const *s){
	fprintf(stderr,"yyerror : %s",s);
	return 1;
}
