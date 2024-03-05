#include <stdio.h>
#include <stdlib.h>

int main() {
    char equation[100];
    char op, result;
    char operand1, operand2;
    
    printf("Enter Equation in Form of a = b + c * d - e : ");
    scanf("%s", equation);
    
    sscanf(equation, "%c = %c %c %c %c", &result, &operand1, &op, &operand2);
    
    printf("Three Address Code :\n");
    printf("%c = %c %c %c\n", result, operand1, op, operand2);
    
    return 0;
}
