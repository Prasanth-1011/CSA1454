#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isValidIdentifier(const char *input) {
    if (!isalpha(input[0]) && input[0] != '_')
        return false;

    for (int i = 1; i < strlen(input); i++)
        if (!isalnum(input[i]) && input[i] != '_')
            return false;
    return true;
}

int main() {
    char input[100];
    printf("Enter Identifier For Validation : ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    
    if (isValidIdentifier(input))
        printf("Valid identifier");
    else
        printf("Invalid identifier");
    return 0;
}