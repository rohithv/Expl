%{
	#include <stdio.h>
	#include <stdlib.h>

	#define YYSTYPE tnode *

	#include "expr.h"
	#include "expr.c"

	int yylex(void);
	void codestart(void);
	void codeend(void);
	void output(int p);
	FILE *yyin;
	FILE *out;

%}

%token NUM PLUS MINUS MUL DIV END
%left PLUS MINUS
%left MUL DIV

%%

program : expr END	{
				$$ = $2;
				//printf("Answer : %d\n",evaluate($1));
				output(codeGen($1));
				freeReg();
				//exit(1);
			}
		;

expr : PLUS expr expr		{$$ = makeOperatorNode('+',$2,$3);}
	 | MINUS expr expr  	{$$ = makeOperatorNode('-',$2,$3);}
	 | MUL expr expr	{$$ = makeOperatorNode('*',$2,$3);}
	 | DIV expr expr	{$$ = makeOperatorNode('/',$2,$3);}
	 | '(' expr ')'		{$$ = $2;}
	 | NUM			{$$ = $1;}
	 ;

%%

yyerror(char const *s)
{
    printf("yyerror %s",s);
}


int main(int argc, char *argv[]) {
	extern reg;
	
	int tmp;
	if(argc==3){
		yyin=fopen(argv[1],"r");
		out=fopen(argv[2],"w+");
	}else if(argc==2){
		yyin=stdin;
		out=fopen(argv[1],"w+");
	}
	else{
		yyin=stdin;
		out=stdout;
	}
	reg=0;
	
	codestart();
	yyparse();
	codeend();
	return 0;
}

reg_index codeGen(tnode *t){
	//static FILE *out;
	reg_index p,q;
	if(t->op==NULL){
		p=getReg();
		fprintf(out,"MOV R%d, %d\n",p,t->val);
	}else{
		p=codeGen(t->left);
		q=codeGen(t->right);
		switch(*(t->op)){
			case '+':
				fprintf(out,"ADD R%d, R%d\n",p,q);
				break;
			case '-':
				fprintf(out,"SUB R%d, R%d\n",p,q);
				break;
			case '*':
				fprintf(out,"MUL R%d, R%d\n",p,q);
				break;
			case '/':
				fprintf(out,"DIV R%d, R%d\n",p,q);
				break;
		}
		freeReg();
	}
	return p;
}

void codestart(){
	
	//static FILE *out;
	fprintf(out,"0\n2056\n0\n0\n0\n0\n0\n0\n");
}

void codeend(){
	
	//static FILE *out;
	fprintf(out,"MOV R1, \"Exit\"\nPUSH R1\nPUSH R0\nPUSH R0\nPUSH R0\nPUSH R0\nCALL 0\n");
}

void output(int p){
	
	fprintf(out,"PUSH R%d\nMOV R19, \"Write\"\nPUSH R19\nMOV R19, -2\nPUSH R19\nPUSH R%d\nPUSH R0\nPUSH R0\nCALL 0\n",p,p);
	fprintf(out,"POP R0\nPOP R0\nPOP R0\nPOP R0\nPOP R0\nPOP R%d\n",p);
}
