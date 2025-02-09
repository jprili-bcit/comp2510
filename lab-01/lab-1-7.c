#include <stdio.h>

int main() {
    printf("Enter two integers separated by space: ");
    int num_1, num_2;
    scanf("%i %i", &num_1, &num_2);
    
    if (num_1 > num_2) {
        printf("%i\n", num_1);
    } else if (num_1 < num_2) {
        printf("%i\n", num_2);
    } else {
        printf("they are the same\n");
    }

    return 0;
}


