#include <stdio.h>
#include <math.h>

int main() {
    int first;
    int second;
    printf("enter first positive integer:\n");
    scanf("%d", &first);

    printf("enter second positive integer:\n");
    scanf("%d", &second);

    printf("%f\n", log10(first + second));

    return 0;
}
