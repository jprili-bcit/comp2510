#include <stdio.h>
#include <ctype.h>

int main(void) {
    char input[128];
    printf("Enter a string (max 128 string):\n");
    scanf("%s", input);

    for (size_t i = 0; input[i] != '\0'; ++i) {
        char curr = input[i];
        printf("%c", islower(curr) ? toupper(curr) : curr);
    }
    printf("\n");

    return 0;
}
