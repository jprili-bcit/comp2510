#include <stdio.h>

int main() {
    printf("Enter a character:\n");
    char user_input = getchar();

    switch (user_input) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            // 0x20 apart (see unicode table)
            printf("%c", user_input - 0x20);
            break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c", user_input);
            break;
        default:
            printf("X");
    }
    printf("\n");
    return 0;
}
