#include <stdio.h>

int main(void) {
    char input[32];
    printf("Enter a string (max 32 characters):\n");
    scanf("%s", input);
    input[2] = '?';
    printf("%s\n", input);

    return 0;
}
