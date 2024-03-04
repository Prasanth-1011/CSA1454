%{
#include <stdio.h>
%}

%option noyywrap

%%
[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Za-z]{2,}    { printf("Valid Email Address : %s\n", yytext); }
.    { printf("Invalid Email Address : %s\n", yytext); }
%%

int main() {
    printf("Enter Your Email Address : ");
    yylex();
    return 0;
}
