// make a program which reads two integers from user, and then print them with the second number first, followed by the first input with a space in between
#include <stdio.h>

int main() {
    printf("Enter two integers separated by space:");
    int num_1, num_2;
    scanf("%i %i", &num_1, &num_2);
    printf("%i %i\n", num_2, num_1);

    return 0;
}

