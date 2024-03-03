%{
int ln=0;
%}
%%
.* {ln++; fprintf(yyout,"\n%d:%s",ln,yytext);}
%%
int yywrap(){}
int main()
{
yyin=fopen("Input.txt","r");
yyout=fopen("Output.txt","w");
yylex();
}