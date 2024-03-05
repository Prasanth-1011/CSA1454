%{
%}

%%
[https://]+[www.]+[a-z]+".com" {printf("\n Valid Url\n");}
.+ {printf("\n Invalid Url\n");}
%%

int yywrap()
{}
int main()
{
printf("\nEnter Url For Validation : ");
yylex();
}