#include <stdio.h>
#include <ctype.h>

int main() {
    char paragraph[1000];
    int lines = 0;
    int whitespaces = 0;

    printf("Enter Paragraph :\n");
	
    fgets(paragraph, sizeof(paragraph), stdin);
	
    for (int i = 0; paragraph[i] != '\0'; i++) {
        if (paragraph[i] == '\n') {
            lines++;
        }
        if (isspace(paragraph[i])) {
            whitespaces++;
        }
    }

    if (paragraph[strlen(paragraph) - 1] != '\n') {
        lines++;
    }

    printf("Number of Lines : %d\n", lines);
    printf("Number of White Spaces : %d\n", whitespaces);

    return 0;
}
