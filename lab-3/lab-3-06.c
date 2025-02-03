#include <stdio.h>

void print_divide(int dividend, int divisor) {
    printf("%f\n", (double) dividend / divisor);
}

int main() {
    print_divide(-1, 2);
    print_divide(0, 1);
    print_divide(1, 4);
    print_divide(0, 0);
    print_divide(4, 0);
    return 0;
}
