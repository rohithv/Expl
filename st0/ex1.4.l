%{ 
#include<stdio.h>

%}

sl "//"
ml1 "/*"
ml2 \*+"/"

%%

{sl}(.)*['\n'] { printf("%d 1:%s",yyleng,yytext);}
{ml1}([^*]|(\*+[^/]))*{ml2} { printf("%d 2:%s",yyleng,yytext);}


%%

int yywrap(){
return 1;
}

int main(){
yyin=fopen("input-ex1.4.txt","r");
yylex();
return 1;
}
