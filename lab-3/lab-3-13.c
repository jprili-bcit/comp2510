#include <stdio.h>

// calculate n!
long int factorial(long int n) {
    return (n == 1) ? n : n * factorial(n - 1);
}

int main() {
    printf("%ld\n", factorial(3));
    return 0;
}
