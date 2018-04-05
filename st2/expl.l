%{

#include<stdio.h>
#include<stdlib.h>
#include"data.h"
#define YYSTYPE tnode*
#include "y.tab.h"

extern int yyerror(char const *);

extern struct tnode* createTree(int val, int type, char *c,int nodetype, struct tnode *l, struct tnode *r);

%}

%option noyywrap

%%

[0-9]+ {yylval=createTree(atoi(yytext),INTEGER,NULL,CONS,NULL,NULL); return NUM;}
[+] {return PLUS;}
[-] {return MINUS;}
[/] {return DIV;}
[*] {return MUL;}
[ \t\n] {}
[();] {return *yytext;}
begin {return BEGINTK;}
end {return END;}
read {return READ;}
write {return WRITE;}
[=] {return ASSIGN;}
[a-z] {yylval=createTree(0,INTEGER,yytext,VAR,NULL,NULL); return ID;}
. {fprintf(stderr,"%s -",yytext); yyerror("Unknown Character\n");}

%%
