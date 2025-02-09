#include <stdio.h>

void print_difference(double number_1, double number_2) {
    double difference = number_1 - number_2;
    printf("%f\n", (difference < 0) ? -difference : difference);
}

int main() {
    print_difference(-1.001, 1);
    print_difference(1.0, 1.0);
    print_difference(1, -1.001);
    return 0;
}
