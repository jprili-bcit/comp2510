#include <stdio.h>

int main() {
    int success, sum_so_far;
    int user_input = success = sum_so_far = 0;
    do {
        printf("Enter an integer:\n");
        success = scanf("%d", &user_input);

        if (success) {
            printf("%d\n", sum_so_far += user_input);
        }

    } while (sum_so_far <= 100 && success);

    return 0;
}
