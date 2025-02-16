#include <stdio.h>
#include <ctype.h>

int main(void) {
    char input[32];
    printf("Enter a string (max 32 characters):\n");
    scanf("%s", input);
    
    if (input[0] != 'a' && input[0] != 'A') {
        printf("no\n");
        return 0;
    }

    size_t i = 1;
    while (input[i] != '\0') {
        char curr = input[i];
        if (!isdigit(curr)) {
            printf("no\n");
            return 0;
        }
        ++i;
    }

    printf("%s\n", i == 9 ? "yes" : "no");
    return 0;
}
