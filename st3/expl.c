#include<string.h>
#include"data.h"

int reg, line=1, label=0;
FILE *temp,*yyin,*out;
extern int yyparse(void);
extern int yyerror(char const *s);

void typecheck(struct tnode *t){
	
	switch(t->nodetype){
		case PLUSOP:
		case MINUSOP:
		case DIVOP:
		case MULOP:
			if((t->left->type != INTEGER) || (t->right->type != INTEGER)){
				yyerror("Type Mismatch - Expected Integer");
				exit(1);
			}
			break;
		
		case GEOP:
		case LEOP:
		case GTOP:
		case LTOP:
		case EQOP:
		case NEOP:
			if((t->left->type != INTEGER) || (t->right->type != INTEGER)){
				yyerror("Type Mismatch - Expected Integer");
				exit(1);
			}
			break;
		case ASS:
			if((t->left->type != INTEGER)){
				yyerror("Assignment operaion expects an integer variable");
				exit(1);
			}else if(t->right->type != INTEGER){
				yyerror("Invalid Assignment of a non integer value");
				exit(1);
			}
			break;
		case WRITEOP:
			if((t->left->type != INTEGER) && (t->left->type != STRING)){
				yyerror("Invalid argument type to Write() function");
				exit(1);
			}
			break;
		case IFSTMT:
			if(t->left->type != BOOL){
				yyerror("Invalid expression inside if");
				exit(1);
			}
			break;
		case WHILESTMT:
			if(t->left->type != BOOL){
				yyerror("Invalid expression inside while");
				exit(1);
			}
			break;
		
		case DOWHILESTMT:
			if(t->right->type != BOOL){
				yyerror("Invalid expression inside while");
				exit(1);
			}
			break;
		
		case UNTILSTMT:
			if(t->right->type != BOOL){
				yyerror("Invalid expression after until");
				exit(1);
			}
			break;
	}
}
		

struct tnode* createTree(int val, int type, char *c,int nodetype, struct tnode *l, struct tnode *m, struct tnode *r){

	tnode *newnode=(tnode *)malloc(sizeof(tnode));
	newnode->val=val;
	newnode->type=type;
	if(c!=NULL){
		newnode->varname=(char *)malloc((strlen(c)+2)*sizeof(char));
		strcpy(newnode->varname,c);
	}else{
		newnode->varname=NULL;
	}
	newnode->nodetype=nodetype;
	newnode->left=l;
	newnode->right=r;
	newnode->middle=m;
	typecheck(newnode);
	return newnode;
}

reg_index getReg(){
    if(reg<20)
    	return reg++;
    else{
    	printf("Out of Registers\n");
    	exit(1);
    }
}

void freeReg(){
    if(reg>0){
    	reg--;
    }
}

int getLabel(){
	return label++;
}

reg_index codeGen(tnode *t){
	
	reg_index p,q,r;
	int l,m,n,oldloop,oldblabel,oldclabel;
	static int loop=NOLOOP,blabel=-1,clabel=-1;
	switch(t->nodetype){
		case CONN:
			if(t->left)
			    p=codeGen(t->left);
			    freeReg();
			if(t->right)
			    p=codeGen(t->right);
			    return p;
			break;
		
		case CONS:
			p=getReg();
			fprintf(temp,"MOV R%d, %d\n",p,t->val);
			return p;
			break;
		
		case VAR:
			l=t->varname[0] - 'a';
			l=l+4096;
			p=getReg();
			fprintf(temp,"MOV R%d, [%d]\n",p,l);
			return p;
			break;
		    
		case ASS:
			p=codeGen(t->right);
			l=t->left->varname[0] - 'a';
			l+=4096;
			fprintf(temp,"MOV [%d], R%d\n",l,p);
			return p;
			break;
		
		case READOP:
			l=t->left->varname[0] - 'a';
			l+=4096;
			p=getReg();
			n=0;
			while(n<p){
			    fprintf(temp,"PUSH R%d\n",n);
		    	n++;
			}
			fprintf(temp,"MOV R%d, \"Read\"\n",p);
			fprintf(temp,"PUSH R%d\n",p);
			fprintf(temp,"MOV R%d, -1\n",p);
			fprintf(temp,"PUSH R%d\n",p);
			fprintf(temp,"MOV R%d, %d\n",p,l);
			fprintf(temp,"PUSH R%d\n",p);
			fprintf(temp,"PUSH R0\n");
			fprintf(temp,"PUSH R0\n");
			fprintf(temp,"CALL 0\n");
			fprintf(temp,"POP R%d\n",p);
			fprintf(temp,"POP R0\n");
			fprintf(temp,"POP R0\n");
			fprintf(temp,"POP R0\n");
			fprintf(temp,"POP R0\n");
			n=p-1;
			while(n>=0){
			    fprintf(temp,"POP R%d\n",n);
		 	    n--;
			}
			return p;
			break;
		
		case WRITEOP:
			p=getReg();
			q=codeGen(t->left);
			n=0;
			while(n<p){
		    	    fprintf(temp,"PUSH R%d\n",n);
		    	    n++;
			}
			fprintf(temp,"MOV R%d, \"Write\"\n",p);
			fprintf(temp,"PUSH R%d\n",p);
			fprintf(temp,"MOV R%d, -2\n",p);
			fprintf(temp,"PUSH R%d\n",p);
			//fprintf(temp,"MOV R%d, %d\n",p,l);
			fprintf(temp,"PUSH R%d\n",q);
			fprintf(temp,"PUSH R0\n");
			fprintf(temp,"PUSH R0\n");
			fprintf(temp,"CALL 0\n");
			fprintf(temp,"POP R%d\n",p);
			fprintf(temp,"POP R0\n");
			fprintf(temp,"POP R0\n");
			fprintf(temp,"POP R0\n");
			fprintf(temp,"POP R0\n");
			n=p-1;
			while(n>=0){
		    	    fprintf(temp,"POP R%d\n",n);
		    	    n--;
			}
			freeReg();
			return p;
			break;

	    	case PLUSOP:
	    		p=codeGen(t->left);
		    	q=codeGen(t->right);
	    	        fprintf(temp,"ADD R%d, R%d\n",p,q);
	    	        freeReg();
	    	        return p;
    	        	break;
    	    	case MINUSOP:
    	    		p=codeGen(t->left);
		    	q=codeGen(t->right);
    	        	fprintf(temp,"SUB R%d, R%d\n",p,q);
    	        	freeReg();
    	        	return p;
    	        	break;
    	    	case MULOP:
    	    		p=codeGen(t->left);
		    	q=codeGen(t->right);
    	        	fprintf(temp,"MUL R%d, R%d\n",p,q);
    	        	freeReg();
    	        	return p;
    	        	break;
    	    	case DIVOP:
    	    		p=codeGen(t->left);
		    	q=codeGen(t->right);
    	        	fprintf(temp,"DIV R%d, R%d\n",p,q);
    	        	freeReg();
    	        	return p;
    	        	break;
    	        
    	        case IFSTMT:
    	        	l=getLabel();
    	        	p=codeGen(t->left);
    	        	fprintf(temp,"JZ R%d, L%d\n",p,l);
    	        	freeReg();
    	        	q=codeGen(t->middle);
    	        	if(t->right){
    	        		m=getLabel();
    	        		fprintf(temp,"JMP L%d\n",m);
    	        	}
    	        	fprintf(temp,"L%d:\n",l);
    	        	if(t->right){
    	        		freeReg();
    	        		q=codeGen(t->right);
    	        		fprintf(temp,"L%d:\n",m);
    	        	}
    	        	return q;
    	        	break;
    	        
    	        case WHILESTMT:
    	        	l=getLabel();
    	        	m=getLabel();
    	        	oldloop=loop;
    	        	oldblabel=blabel;
    	        	oldclabel=clabel;
    	        	loop=WHILELOOP;
    	        	blabel=m;
    	        	clabel=l;
    	        	fprintf(temp,"L%d:\n",l);
    	        	p=codeGen(t->left);
    	        	fprintf(temp,"JZ R%d, L%d\n",p,m);
    	        	q=codeGen(t->right);
    	        	freeReg();
    	        	fprintf(temp,"JMP L%d\n",l);
    	        	fprintf(temp,"L%d:\n",m);
    	        	loop=oldloop;
    	        	blabel=oldblabel;
    	        	clabel=oldclabel;
    	        	return p;
    	        	break;
    	        
    	        case DOWHILESTMT:
    	        	l=getLabel();
    	        	m=getLabel();
    	        	n=getLabel();
    	        	oldloop=loop;
    	        	oldblabel=blabel;
    	        	oldclabel=clabel;
    	        	loop=DOWHILELOOP;
    	        	blabel=n;
    	        	clabel=m;
    	        	fprintf(temp,"L%d:\n",l);
    	        	p=codeGen(t->left);
    	        	freeReg();
    	        	fprintf(temp,"L%d:\n",m);
    	        	q=codeGen(t->right);
    	        	fprintf(temp,"JNZ R%d, L%d\n",q,l);
    	        	fprintf(temp,"L%d:\n",n);
    	        	loop=oldloop;
    	        	blabel=oldblabel;
    	        	clabel=oldclabel;
    	        	return q;
    	        	break;
    	        
    	        case UNTILSTMT:
    	        	l=getLabel();
    	        	m=getLabel();
    	        	n=getLabel();
    	        	oldloop=loop;
    	        	oldblabel=blabel;
    	        	oldclabel=clabel;
    	        	loop=UNTILLOOP;
    	        	blabel=n;
    	        	clabel=m;
    	        	fprintf(temp,"L%d:\n",l);
    	        	p=codeGen(t->left);
    	        	freeReg();
    	        	fprintf(temp,"L%d:\n",m);
    	        	q=codeGen(t->right);
    	        	fprintf(temp,"JZ R%d, L%d\n",q,l);
    	        	fprintf(temp,"L%d:\n",n);
    	        	loop=oldloop;
    	        	blabel=oldblabel;
    	        	clabel=oldclabel;
    	        	return q;
    	        	break;
    	        
    	        case EQOP:
    	        	p=codeGen(t->left);
		    	q=codeGen(t->right);
    	        	fprintf(temp,"EQ R%d, R%d\n",p,q);
    	        	freeReg();
    	        	return p;
    	        	break;
    	        
    	        case NEOP:
    	        	p=codeGen(t->left);
		    	q=codeGen(t->right);
    	        	fprintf(temp,"NE R%d, R%d\n",p,q);
    	        	freeReg();
    	        	return p;
    	        	break;
    	        
    	        case LTOP:
    	        	p=codeGen(t->left);
		    	q=codeGen(t->right);
    	        	fprintf(temp,"LT R%d, R%d\n",p,q);
    	        	freeReg();
    	        	return p;
    	        	break;
    	        
    	        case LEOP:
    	        	p=codeGen(t->left);
		    	q=codeGen(t->right);
    	        	fprintf(temp,"LE R%d, R%d\n",p,q);
    	        	freeReg();
    	        	return p;
    	        	break;
    	        
    	        case GTOP:
    	        	p=codeGen(t->left);
		    	q=codeGen(t->right);
    	        	fprintf(temp,"GT R%d, R%d\n",p,q);
    	        	freeReg();
    	        	return p;
    	        	break;
    	        
    	        case GEOP:
    	        	p=codeGen(t->left);
		    	q=codeGen(t->right);
    	        	fprintf(temp,"GE R%d, R%d\n",p,q);
    	        	freeReg();
    	        	return p;
    	        	break;
    	        
    	        case BRKP:
    	        	p=getReg();
    	        	fprintf(temp,"BRKP\n");
    	        	return p;
    	        	break;
    	        
    	        case BREAK:
    	        	p=getReg();
    	        	if(loop!=NOLOOP)
    	        		fprintf(temp,"JMP L%d\n",blabel);
    	        	return p;
    	        	break;
    	        
    	        case CONTINUE:
    	        	p=getReg();
    	        	if(loop!=NOLOOP)
    	        		fprintf(temp,"JMP L%d\n",clabel);
    	        	return p;
    	        	break;
    	        
    	        
	 
	}
	
	return p;
		    
}

void codestart(){
	
	fprintf(temp,"0\n2056\n0\n0\n0\n0\n0\n0\n");
	fprintf(temp,"MOV SP, 4121\n");
}

void codeend(){
	
	fprintf(temp,"MOV R1, \"Exit\"\nPUSH R1\nPUSH R0\nPUSH R0\nPUSH R0\nPUSH R0\nCALL 0\n");
}

int main(int argc, char *argv[]){
	
	extern int reg;
	char ch;
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
	temp=fopen(".temp","w");
	
	codestart();
	yyparse();
	codeend();
	
	fclose(temp);
	temp=fopen(".temp","r");
	while((ch=fgetc(temp))!=EOF){
		fputc(ch, out);
	}
	fclose(out);
	fclose(yyin);
	
	return 0;
}

