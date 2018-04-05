%{
#include<stdio.h>
#include<string.h>
#define YYSTYPE char *
#include "y.tab.h"
#include<stdlib.h>

%}
%option noyywrap

%%

[0-9]+ {yylval=(char *)malloc((yyleng+1)*sizeof(char));
	strcpy(yylval,yytext);
	printf("lex : %s\n",yylval);
	return NUM;
	}
[\n] { printf("lex : %s",yytext);
	return END;}
. {printf("lex : %s\n",yytext);
   return *yytext;}
   
%%

