#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 1000

int main() {
    char filename[100];
    char buffer[MAX_LINES][100];
    FILE *file;
    int line_count = 0;

    printf("Enter File Name : ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("File %s Not Found.\n", filename);
        exit(1);
    }

    while (fgets(buffer[line_count], sizeof(buffer[line_count]), file)) {
        line_count++;
    }

    fclose(file);

    int i, j;
    for (i = 0; i < line_count; i++) {
        for (j = i + 1; j < line_count; j++) {
            if (strcmp(buffer[i], buffer[j]) == 0) {
                buffer[j][0] = '\0';
            }
        }
    }

    printf("Optimized Code :\n");
    for (i = 0; i < line_count; i++) {
        if (buffer[i][0] != '\0') {
            printf("%s", buffer[i]);
        }
    }

    return 0;
}
