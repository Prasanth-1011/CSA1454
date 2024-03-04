%{
#include <stdio.h>
#include <stdlib.h>
%}

%option noyywrap

%%
[0-9]{2}-[0-9]{2}-[0-9]{4} {
    int Year, Month, Day;
    sscanf(yytext, "%d-%d-%d", &Day, &Month, &Year);

    if (Year >= 1900 && Year <= 2024 && Month >= 1 && Month <= 12 && Day >= 1 && Day <= 31) {
        printf("Valid Date of Birth : %s\n", yytext);
    } else {
        printf("Invalid Date of Birth : %s\n", yytext);
    }
}
. {
    printf("Invalid Input!\n");
}
%%

int main() {
    printf("Enter Your Date of Birth (DD-MM-YYYY) : ");
    yylex();
    return 0;
}
