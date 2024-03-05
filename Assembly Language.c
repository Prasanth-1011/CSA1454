#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int c = a + b;
    
    printf("Result: %d\n", c);
    
    return 0;
}

gcc -S -o Output.s Assemly_Language.c