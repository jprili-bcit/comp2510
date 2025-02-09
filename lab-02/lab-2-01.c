#include <stdio.h>

int main() {
    int times, counter = 0;
    printf("Enter a positive integer:\n");
    scanf("%d", &times);
    while (counter < times) {
        printf("hi\n");
        ++counter;
    }

    return 0;
}
