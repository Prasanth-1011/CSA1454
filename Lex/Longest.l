%{
#include <stdio.h>
#include <string.h>

char longest_word[100];
int max_length = 0;
%}

%%
[a-zA-Z]+ {
    int len = yyleng;
    if (len > max_length) {
        max_length = len;
        strncpy(longest_word, yytext, len);
        longest_word[len] = '\0';
    }
}
. ;
%%

int yywrap() {
    return 1;
}

int main() {
    printf("Enter Inputs Below :\n");
    yylex();
    printf("\nLongest Word : %s\nLength : %d\n", longest_word, max_length);
    return 0;
}
