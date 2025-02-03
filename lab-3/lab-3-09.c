#include <stdio.h>
#include <math.h>

int main() {
    float x;
    printf("Enter a positive float: \n");
    scanf("%f", &x);

    printf("%f\n", sin(2*x));

    return 0;
}
