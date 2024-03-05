%{
#include <stdio.h>
int w=0, l=0, c=0;
%}

%% 
[\n] {l++;}
[ ] ;
[a-zA-Z0-9]+ {w++; c += yyleng;}
. {c++;}
%%

int yywrap()
{
return 1;
}

int main()
{ 
printf("\nEnter String :\n");
yylex(); 
printf("\nLines: %d", l);
printf("\nWords: %d", w);
printf("\nCharacters: %d\n", c);
return 0;
}
