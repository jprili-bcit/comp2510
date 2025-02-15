#include <stdio.h>

int main(void) {
    int n;
    int* p = &n;
    printf("Enter an integer:\n");
    scanf("%i", p);

    printf("You entered: %i\n", *p);

    return 0;
}
