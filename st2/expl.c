#include<string.h>
#include"data.h"

int reg;
FILE *temp,*yyin,*out;
extern int yyparse(void);

struct tnode* createTree(int val, int type, char *c,int nodetype, struct tnode *l, struct tnode *r){

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

reg_index codeGen(tnode *t){
	
	reg_index p,q,r;
	int l,m,n;
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
		
		case OP:
		
		    	p=codeGen(t->left);
		    	q=codeGen(t->right);
		    	    
		    	switch(*(t->varname)){
		    	    case '+':
		    	        fprintf(temp,"ADD R%d, R%d\n",p,q);
		    	        break;
		    	    case '-':
		    	        fprintf(temp,"SUB R%d, R%d\n",p,q);
		    	        break;
		    	    case '*':
		    	        fprintf(temp,"MUL R%d, R%d\n",p,q);
		    	        break;
		    	    case '/':
		    	        fprintf(temp,"DIV R%d, R%d\n",p,q);
		    	        break;
		    	}
		    	freeReg();
		    	return p;
		    	break;
	}
		    
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

