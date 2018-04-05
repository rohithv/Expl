%{
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define YYSTYPE char *

int yylex(void);
int yyerror();

%}

%token NUM END
%left '+' '-'
%left '*' '/'

%%

start : expr END	{printf("prefix: %s\n",$$); exit(1);}
	;

expr:  expr '+' expr	{$$=(char*)malloc((strlen($1)+strlen($3)+3)*sizeof(char));
				strcpy($$,"+"); strcat($$,$1); strcat($$,$3);
				printf("yacc : %s\n",$$);}
	| expr '*' expr	{$$=(char*)malloc((strlen($1)+strlen($3)+3)*sizeof(char));
				strcpy($$,"*"); strcat($$,$1); strcat($$,$3);
				printf("yacc : %s\n",$$);}
	| '(' expr ')' {$$=$2;}
	| NUM	   {$$=(char*)malloc((strlen($1)+1)*sizeof(char));
			strcpy($$,$1);
			printf("yacc : %s\n",$$);}
	;

%%

int yyerror(){
printf("yyerror\n");
return 1;
}

int main(){

yyparse();

return 1;

}
