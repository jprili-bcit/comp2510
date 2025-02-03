include <stdio.h>

int main() {
    printf("Enter an integer: ");

    int num_1;
    scanf("%i", &num_1);

    if (num_1 > 0) {
        printf("positive\n");
    }

    if (num_1 == 0) { 
        printf("zero\n");
    }

    if (num_1 < 0) {
        printf("negative\n");
    }

    return 0;
}

