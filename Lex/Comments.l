%{
#include<stdio.h>
int n = 0;
%}

%%
"/"[a-zA-Z0-9 \n\t]+ {n++;}
"//"[a-zA-Z0-9 \n\t]+ {n++;}
%%

int yywrap()
{}
int main()
{
printf("\nEnter :\n");
yylex();
printf("\nNumber of Comment Lines : %d\n", n);
}s : %d\n", n);
}