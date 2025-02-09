#include <stdio.h>

int main() {
    int success;
    int user_input = success = 0;
    do {
        printf("Enter an integer:\n");
        success = scanf("%d", &user_input);

        if (user_input > 0 && success) {
            printf("%d\n", 2 * user_input);
        }

    } while (user_input > 0 && success);

    return 0;
}
