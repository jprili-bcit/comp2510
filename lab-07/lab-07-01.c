#include <stdio.h>

int main(void) {
    int input = 0;
    printf("Enter a decimal integer: ");
    scanf("%d", &input);
    printf("%#o\n%d\n%#x\n", input, input, input);
    return 0;
}
