%{
#include <stdio.h>
%}

%option noyywrap

%%
[a-z]   { printf("%c", yytext[0] - 32); }
.       { printf("%c", yytext[0]); }
%%

int main() {
    printf("\nEnter String : ");
    yylex();
    return 0;
}
