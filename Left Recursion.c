#include <stdio.h>
#include <string.h>

void eliminateLeftRecursion(char production[], char non_terminal) {
    int i, j, k, l;
    char newProduction[100][100], alpha[100], beta[100];
    int found = 0, pos = 0;
    for (i = 0; i < strlen(production); i++) {
        if (production[i] == '|') {
            found = 1;
            pos = 0;
            continue;
        }
        if (!found) {
            newProduction[non_terminal - 'A'][pos++] = production[i];
        } else {
            newProduction[non_terminal - 'A' + 1][pos++] = production[i];
        }
    }
    newProduction[non_terminal - 'A'][pos] = '\0';
    newProduction[non_terminal - 'A' + 1][pos] = '\0';
    printf("%c->%s%c'\n", non_terminal, newProduction[non_terminal - 'A'], non_terminal);
    printf("%c'->", non_terminal);
    for (i = 0; i < strlen(newProduction[non_terminal - 'A']); i++) {
        if (newProduction[non_terminal - 'A'][i] == non_terminal) {
            for (j = 0; j < strlen(newProduction[non_terminal - 'A' + 1]); j++) {
                if (newProduction[non_terminal - 'A' + 1][j] != '|') {
                    printf("%c", newProduction[non_terminal - 'A' + 1][j]);
                }
            }
            printf("%c'|", non_terminal);
        }
    }
    printf("e\n");
}

int main() {
    char production[10][100];
    int n, i;
    printf("Enter Number of Productions : ");
    scanf("%d", &n);
    printf("Enter Productions (Ex : S->Sa|b) : \n");
    for (i = 0; i < n; i++) {
        scanf("%s", production[i]);
    }
    for (i = 0; i < n; i++) {
        eliminateLeftRecursion(production[i], production[i][0]);
    }
    return 0;
}
