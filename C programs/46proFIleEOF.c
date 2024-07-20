#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("char.txt", "w");
    if (ptr == NULL) {
        perror("Error opening file");
        return 1;
    }
    char ch;
    ch = 0;
    printf("Enter characters (end with newline):\n");

    while (ch != '\n') {
        scanf("%c", &ch);
        if (ch != '\n') {
            fputc(ch, ptr);
        }
    }
    fclose(ptr);
    return 0;
}