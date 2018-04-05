#include<string.h>
#include"data.h"

int reg, line=1;
int arr[26];
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

int evaluate(tnode *t){
	
	int l,m,n;
	switch(t->nodetype){
		case CONN:
		    if(t->left)
		        l=evaluate(t->left);
		    if(t->right)
		        m=evaluate(t->right);
		        return m;
		    break;
		
		case CONS:
		    return t->val;
		    break;
		
		case VAR:
		    l=t->varname[0] - 'a';
		    return arr[l];
		    break;
		    
		case ASS:
		    m=evaluate(t->right);
		    l=t->left->varname[0] - 'a';
		    arr[l]=m;
		    return m;
		    break;
		
		case READOP:
		    l=t->left->varname[0] - 'a';
		    scanf("%d",&arr[l]);
		    return arr[l];
		    break;
		
		case WRITEOP:
		    m=evaluate(t->left);
		    printf("%d\n",m);
		    return m;
		    break;
		    	    
		case PLUSOP:
		    l=evaluate(t->left);
		    m=evaluate(t->right);
		    n=l+m;
		    return n;
		    break;
		    
		case MINUSOP:
		    l=evaluate(t->left);
		    m=evaluate(t->right);
		    n=l-m;
		    return n;
		    break;
		    	        
		case MULOP:
		    l=evaluate(t->left);
		    m=evaluate(t->right);
		    n=l*m;
		    return n;
		    break;
		    	        
		case DIVOP:
		    l=evaluate(t->left);
		    m=evaluate(t->right);
		    n=l/m;
		    return n;
		    break;
		    
		case EQOP:
		    l=evaluate(t->left);
		    m=evaluate(t->right);
		    return l==m;
		    break;
		    
		case NEOP:
		    l=evaluate(t->left);
		    m=evaluate(t->right);
		    return l!=m;
		    break;
		    
		case LTOP:
		    l=evaluate(t->left);
		    m=evaluate(t->right);
		    return l<m;
		    break;
		    
		case GTOP:
		    l=evaluate(t->left);
		    m=evaluate(t->right);
		    return l>m;
		    break;
		    
		case LEOP:
		    l=evaluate(t->left);
		    m=evaluate(t->right);
		    return l<=m;
		    break;
		    
		case GEOP:
		    l=evaluate(t->left);
		    m=evaluate(t->right);
		    return l>=m;
		    break;
		
		case IFSTMT:
		    l=evaluate(t->left);
		    if(l){
		    	evaluate(t->middle);
		    }else{
		    	if(t->right){
		    	    m=evaluate(t->right);
		    	}
		    }
		    return m;
		    break;
		
		case WHILESTMT:
		    while(l=evaluate(t->left)){
		    	m=evaluate(t->right);
		    }
		    return m;
		    break;
		    
		
	}
		    
}

int main(int argc, char *argv[]){
	
	int result;
	if(argc==2){
		yyin=fopen(argv[1],"r");
	}else{
		yyin=stdin;
	}
	
	result=yyparse();
	printf("OUT : %d\n",result);
	
	fclose(yyin);
	
	return 0;
}

