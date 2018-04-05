%{
#include<stdio.h>

int line,word,character;

%}

ch [a-z|A-Z]
sp [' ']
nl ['\n']

%%

{ch} {character++;}
{sp}+ {word++;}
{nl}+ {line++;
        word++;}

%%

int yywrap(){
return 1;
}

int main(){
yyin=fopen("input-ex1.1.txt","r");
line=word=character=0;
yylex();
printf("%d %d %d\n",character,word,line);
return 1;
}
