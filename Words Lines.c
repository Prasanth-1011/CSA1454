#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    char c;
    int char_count = 0, word_count = 0, line_count = 0;

    printf("Enter File Name : ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("File %s not found.\n", filename);
        exit(1);
    }

    while ((c = fgetc(file)) != EOF) {
        char_count++;

        if (c == '\n')
            line_count++;

        if (c == ' ' || c == '\t' || c == '\n' || c == '\r') {
            word_count++;
        }
    }

    if (char_count > 0) {
        word_count++;
        line_count++;
    }

    fclose(file);

    printf("Characters : %d\n", char_count);
    printf("Words : %d\n", word_count);
    printf("Lines : %d\n", line_count);

    return 0;
}
