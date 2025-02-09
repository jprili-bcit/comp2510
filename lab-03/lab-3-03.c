#include <stdio.h>

float print_abs(float number) {
    float abs = (number < 0) ? -number : number; 
    printf("%f\n", abs);
    return abs;
}

int main() {
    print_abs(-100.01);
    print_abs(-1);
    print_abs(0);
    print_abs(1);
    return 0;
}
