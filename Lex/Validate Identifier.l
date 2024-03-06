%{
#include <stdio.h>
#include <string.h>
%}

%option noyywrap

%%
[a-zA-Z_][a-zA-Z0-9_]*     { printf("%s is Valid\n", yytext); }
.                           { printf("%s is Not Valid\n", yytext); }
%%

int main() {
    printf("Enter Identifier : ");
    yylex();
    return 0;
}
