#include <stdio.h>

int main() {
    printf("Enter an integer: ");
    int num_1;
    scanf("%i", &num_1);
    
    if (num_1 > 0) {
        printf("positive\n");
    } else if (num_1 < 0) {
        printf("negative\n");
    } else {
        printf("zero\n");
    }

    return 0;
}
