#include <stdio.h>

int main() {
    double input;
    printf("enter a double:\n");
    scanf("%lf", &input);

    printf("%d\n", (int) input);
    printf("%f\n", input);
    printf("%f\n", (float) input);

    return 0;
}
