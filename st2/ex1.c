#include<string.h>
#include"data.h"

int reg;
FILE *temp,*yyin,*out;
int arr[26];
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

int evaluate(tnode *t){
	
	reg_index p,q,r;
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
		
		case OP:
		
		    	l=evaluate(t->left);
		    	m=evaluate(t->right);
		    	    
		    	switch(*(t->varname)){
		    	    case '+':
		    	        n=l+m;
		    	        break;
		    	    case '-':
		    	        n=l-m;
		    	        break;
		    	    case '*':
		    	        n=l*m;
		    	        break;
		    	    case '/':
		    	        n=l/m;
		    	        break;
		    	}
		    	return n;
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

