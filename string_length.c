#include <stdio.h>
int main() {
    char string[] = "String Length";
    int i;

    // Repeat loop until we get \0 means end of the line
    for (i = 0; string[i] != '\0'; i++);
        printf("Length of the string: %d", i);

    return 0;
}