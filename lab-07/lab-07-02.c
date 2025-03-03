#include <stdio.h>

int main(void) {
    float input = 0;
    printf("Enter a float: ");
    scanf("%f", &input);
    printf("%e\n%f\n%g\n", input, input, input);
    return 0;
}
