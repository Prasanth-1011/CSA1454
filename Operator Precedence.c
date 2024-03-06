#include <stdio.h>

int main() {
    printf("Operator Precedence Table:\n\n");
    printf("| Precedence | Operator(s)   |\n");
    printf("|------------|----------------|\n");
    printf("| Highest    | () [] -> .     |\n");
    printf("|            | ++ --          |\n");
    printf("|            | - (unary) ~ ! |\n");
    printf("|            | * / %          |\n");
    printf("|            | + -            |\n");
    printf("|            | << >>          |\n");
    printf("|            | < <= > >=      |\n");
    printf("|            | == !=          |\n");
    printf("|            | &              |\n");
    printf("|            | ^              |\n");
    printf("|            | |              |\n");
    printf("|            | &&             |\n");
    printf("|            | ||             |\n");
    printf("|            | ?:             |\n");
    printf("|            | = += -= *= /= |\n");
    printf("|            | %= &= ^= |=    |\n");
    printf("|            | <<= >>=        |\n");
    printf("| Lowest     | ,              |\n");

    return 0;
}
