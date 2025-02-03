#include <stdio.h>

int main() {
    printf("Enter two integers separated by space:");
    int num_1, num_2;
    scanf("%i %i", &num_1, &num_2);
    if (num_1 >= num_2) {
        printf("%i\n", num_1);
    }

    if (num_1 < num_2) {
        printf("%i\n", num_2);
    }

    return 0;
}
