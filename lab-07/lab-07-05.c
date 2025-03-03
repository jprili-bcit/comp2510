#include <stdio.h>

int main(void) {
    int input_0, input_1;
    float input_2;
    printf("Enter three positive numbers: ");
    scanf("%d %x %f", &input_0, &input_1, &input_2);
    printf("%o, %o, %o\n", input_0, input_1, (int) input_2);
    printf("%#x, %#x, %#x\n", input_0, input_1, (int) input_2);
    printf("%.2f, %.2f, %.2f\n", (float) input_0, (float) input_1, input_2);
    return 0;
}
