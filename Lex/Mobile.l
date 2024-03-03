%{
%}

%%

[6-9][0-9]{9} {printf("Valid Mobile Number\n");}
.+ {printf("Invalid Mobile Number\n");}
"exit" { exit(0); }

%%

int yywrap(void) {}

int main()
{
    printf("\nEnter Mobile Number : ");
    yylex();
    printf("\n");
    return 0;
}