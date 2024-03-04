%{
#include <stdio.h>
%}

%option noyywrap

%%
[aeiouAEIOU][a-zA-Z]*  printf("Accepted: %s\n", yytext);
.                       printf("Rejected: %s\n", yytext);
%%

int main() {
    printf("Enter a string: ");
    yylex();
    return 0;
}
