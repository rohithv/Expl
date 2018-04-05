%{

#include<stdio.h>
#include<stdlib.h>
#include"data.h"
#define YYSTYPE tnode*
#include "y.tab.h"

extern int yyerror(char const *);
extern int line, declflag;

extern struct tnode* createTree(int val, int type, char *c,int nodetype, struct tnode *l, struct tnode *m, struct tnode *r);

%}

%option noyywrap

%%

[0-9]+ 	{yylval=createTree(atoi(yytext),INTEGER,NULL,CONS,NULL,NULL,NULL); return NUM;}
[+] 	{return PLUS;}
[-] 	{return MINUS;}
"/" 	{return DIV;}
[*] 	{return MUL;}
"<" 	{return LT;}
">" 	{return GT;}
"<=" 	{return LE;}
">=" 	{return GE;}
"==" 	{return EQ;}
"!=" 	{return NE;}
[=] 	{return ASSIGN;}
[&]		{return ADDRTK;}
[ \t] 	{}
[\n] 	{line++;}
[();] 	{return *yytext;}
if 	{return IF;}
then 	{return THEN;}
else 	{return ELSE;}
endif 	{return ENDIF;}
while 	{return WHILE;}
do 	{return DO;}
endwhile {return ENDWHILE;}
begin 	{return BEGINTK;}
end 	{return END;}
read 	{return READ;}
write 	{return WRITE;}
breakpoint {return BRKPTK;}
break 	{return BREAKTK;}
continue {return CONTINUETK;}
repeat 	{return REPEAT;}
until 	{return UNTIL;}
decl 	{declflag=1; return DECL;}
enddecl	{declflag=0; return ENDDECL;}
int 	{return INT;}
str 	{return STR;}
,	{return *yytext;}
[\[\]]	{return *yytext;}
[a-zA-Z][a-zA-Z0-9]* {yylval=createTree(0,NOTYPE,yytext,VAR,NULL,NULL,NULL); return ID;}
. 	{yyerror("Unknown Character"); fprintf(stderr,"\t\t%s\n",yytext); }

%%
