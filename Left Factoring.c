#include <stdio.h>
#include <string.h>

void eliminateLeftFactoring(char production[], char non_terminal) {
    int i, j;
    printf("%c->", non_terminal);
    for (i = 0; i < strlen(production); i++) {
        if (production[i] == non_terminal) {
            printf("%c'", non_terminal);
            break;
        }
        printf("%c", production[i]);
    }
    printf("|");
    for (j = i + 1; j < strlen(production); j++) {
        if (production[j] != non_terminal) {
            printf("%c", production[j]);
        }
    }
    printf("\n%c'->", non_terminal);
    for (i = i + 1; i < strlen(production); i++) {
        if (production[i] != non_terminal) {
            printf("%c", production[i]);
        } else {
            break;
        }
    }
    printf("|e\n");
}

int main() {
    char production[10][100];
    int n, i;
    printf("Enter Number of Productions : ");
    scanf("%d", &n);
    printf("Enter Productions (Ex : S->aAb|aAc) : \n");
    for (i = 0; i < n; i++) {
        scanf("%s", production[i]);
    }
    for (i = 0; i < n; i++) {
        eliminateLeftFactoring(production[i], production[i][0]);
    }
    return 0;
}
