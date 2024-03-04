%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int count = 0;
%}

%option noyywrap

%%

[a-zA-Z]+   {
                int len = strlen(yytext);
                char *word = (char *)malloc(len + 1); // Allocate Memory Dynamically
                if (word == NULL) {
                    fprintf(stderr, "Memory Allocation Failed\n");
                    exit(EXIT_FAILURE);
                }
                
                count++;
            }
.           ;
%%


int main() {
    printf("Enter Sentence : ");
    yylex();
    printf("\nNumber of Word Used in Sentence : %d\n", count);
    return 0;
}
