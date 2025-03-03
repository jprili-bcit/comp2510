#include <stdio.h>

int main(void) {
    float input = 0;
    printf("Enter a float: ");
    scanf("%f", &input);
    printf("%.2f%%\n", input * 100);
    return 0;
}
