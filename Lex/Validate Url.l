%{
#include <stdio.h>
#include <string.h>
%}

%option noyywrap

%%

^((http|https|ftp):\/\/)?[a-zA-Z0-9]+\.[a-zA-Z]{2,}(\.[a-zA-Z]{2,})?(\.[a-zA-Z]{2,})?((\/[a-zA-Z0-9#]+)*\/?)$ {
    printf("\nValid URL : %s\n", yytext);
}
. {
    printf("\nInvalid URL : %s\n", yytext);
}

%%

int main() {
    printf("Enter URL Link : ");
    yylex();
    return 0;
}
