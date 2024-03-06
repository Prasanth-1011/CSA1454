%{
#include <stdio.h>
%}

%%

[0-9]+              { printf("Number : %s\n", yytext); }
"+"                 { printf("Add\n"); }
"-"                 { printf("Subtract\n"); }
"*"                 { printf("Multiply\n"); }
"/"                 { printf("Divide\n"); }
"("                 { printf("Left Parenthesis\n"); }
")"                 { printf("Right Parenthesis\n"); }
[ \t\n]             ;
.                   { printf("Inavlid Character : %s\n", yytext); }

%%

int main() {
    yylex();
    return 0;
}
