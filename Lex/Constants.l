%{
int Cons = 0;
%}

digit [0-9]

%%
{digit}+"."{digit}+ { Cons++; printf("%s is a Floating Point Constant\n", yytext); }
{digit}+            { Cons++; printf("%s is an Integer Constant\n", yytext); }
.|\n                { }
%%

int yywrap() {
    return 1;
}

int main() {
    printf("Enter Code :\n");
    yylex();
    printf("Number of Constants : %d\n", Cons);
    return 0;
}
