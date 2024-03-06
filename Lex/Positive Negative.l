%{ 
int Pos=0, Neg=0; 
%} 
%% 
[-][0-9]+ {Neg++; 
              printf("Negative Number : %s\n",yytext);} 
[0-9]+ {positive_no++;  
               printf("Positive Number : %s\n",yytext);} 
%% 
int yywrap(){} 
int main() 
{ 
yylex(); 
printf("Number of Positive Integers : %d," 
               "Number of Negative Numbers : %d\n", 
                        Pos, Neg);
return 0; 
}