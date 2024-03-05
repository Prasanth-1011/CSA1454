%{
int Vows=0;
int Cons=0;
%}
%%
[aeiouAEIOU] {Vows++;}
[a-z,A-Z] {Cons++;}
%%
int yywrap(){}
int main()
{
printf("\nEnter String With Vowels And Consonants : ");
yylex();
printf("\nVowels Count : %d \n",Vows);
printf("\nConsonants Count : %d \n",Cons);
}