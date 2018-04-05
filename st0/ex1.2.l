%{
#include<stdio.h>
int i,f;
%}

in [0-9]+
fl [0-9]+[.][0-9]+

%%

{in} {i++;}
{fl} {f++;}
[' '|'\n'] {}

%%

int yywrap(){
return 1;
}

int main(){
i=f=0;
yyin=fopen("input-ex1.2.txt","r");
yylex();
printf("No of int %d\nNo of floats %d",i,f);
return 1;
}
