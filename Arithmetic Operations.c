#include <stdio.h>

int main() {
    int A;
    int B;
    char Opr;
    float Res;
    
    printf("Enter Value A : ");
    scanf("%d", &A);
    
    printf("Enter Value B : ");
    scanf("%d", &B);
    
    printf("Enter Operator : ");
    scanf(" %c", &Opr);
    
    switch(Opr) {
        case '+':
            Res = A + B;
            printf("Sum : %.2f", Res);
            break;

        case '-':
            Res = A - B;
            printf("Difference : %.2f", Res);
            break;

        case '*':
            Res = A * B;
            printf("Product : %.2f", Res);
            break;

        case '/':
            if (B != 0) {
                Res = (float)A / B;
                printf("Quotient : %.2f", Res);
            } else {
                printf("Division Using zero is Not Allowed.");
            }
            break;

        case '%':
            if (B != 0) {
                Res = A % B;
                printf("Remainder : %.2f", Res);
            } else {
                printf("Division Using Zero is Not Allowed.");
            }
            break;

        default:
            printf("Unknown Or Invalid Operator Used");
            break;
    }
    
    return 0;
}