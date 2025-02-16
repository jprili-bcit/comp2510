#include <stdio.h>
#include <ctype.h>

int main(void) {
    char input[32];
    printf("Enter a string (max 32 characters):\n");
    scanf("%s", input);
    
    size_t i = 0;
    while (input[i] != '\0') {
        char curr = input[i];
        for (size_t j = 0; j < 3; ++j) {
            printf("%c", curr);
        }
        ++i;
    }

    printf("\n");
    return 0;
}
