#include <stdio.h>

int main() {
    int user_input;
    printf("Enter an integer:\n");
    scanf("%d", &user_input);
    
    switch (user_input % 2) {
        case 1:
            printf("positive odd number\n");
            break;
        case -1:
            printf("negative odd number\n");
            break;
        default:
            printf("even number\n");
    }

    return 0;
}
