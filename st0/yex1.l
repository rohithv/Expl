%{
#include "y.tab.h"
#include<stdio.h>

%}

%option noyywrap
%%

if {return IF;}
endif {return ENDIF;}
p {return 'p';}
[\n ] {;}

%%


