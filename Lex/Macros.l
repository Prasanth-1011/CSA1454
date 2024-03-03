%{
int nmacro, nheader;
%}

%%
"#define" {nmacro++;}
"#include" {nheader++;}
.|\n {}
%%

int yywrap()
{
return 1;
}

int main()
{
printf("\nEnter String :\n");
yylex();
printf("\nNumber of Macros Defined : %d\n", nmacro);
printf("Number of Header Files Included : %d\n", nheader);
return 0;
}
