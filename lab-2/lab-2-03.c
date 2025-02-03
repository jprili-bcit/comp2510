#include <stdio.h>

int main() {
    int max_number = 0;
    printf("Enter a positive integer:\n");
    scanf("%d", &max_number);
    for (size_t count = 1; count < max_number; ++count) {
        if (max_number < 0) {
            break;
        }

        printf("%zu\n", count);
    }

    return 0;
}
