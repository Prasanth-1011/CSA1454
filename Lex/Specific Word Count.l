%{
#include <stdio.h>
#include <string.h>
%}

%option noyywrap

%%
[a-zA-Z]+   {
                if (strcmp(yytext, "specific_word") == 0) {
                    count++;
                }
            }
.           ;
%%

int count = 0;

int main() {
    printf("Enter Sentence : ");
    yylex();
    printf("Count Frequency of 'specific_word' in the Sentence : %d\n", count);
    return 0;
}
