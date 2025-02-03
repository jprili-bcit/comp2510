#include <stdio.h>

int main() {
    int user_input;
    printf("Enter an integer:\n");
    scanf("%d", &user_input);

    for (int i = 1; i < user_input; i++) {
        if (i > 15) {
            break;
        } else if (!(i % 2)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
