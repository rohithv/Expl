%{
#include<stdio.h>
int count;
%}

%token IF ENDIF

%%

stmt: IF stmt ENDIF {count++;}
	| 'p'
	;
	
%%

yyerror(){
printf("error");
}

int main(){
extern yyin;
yyin=fopen("input-yex1.txt","r");
count=0;
yyparse();
printf("%d",count);
return 1;
}
