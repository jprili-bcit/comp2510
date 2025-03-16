#include <stdio.h>

void print_primes(int n, int divisor, int seen[], int length) {
    if (!(n % divisor)) {
        for (size_t i = 0; i < length; ++i) {
            if (seen[i] == divisor) {
                break;
            }

            if (!seen[i]) {
                seen[i] = divisor;
                printf("%d, ", divisor);
                break;
            }
        }
    } else if (n == 1) {
        return;
    } else {
        print_primes(n / divisor, divisor + 1, seen, length);
    }
}

int main(void) {
    int n;
    scanf("%d", &n);
    int seen[128];
    print_primes(n, 2, seen, 128);
    printf("\b\n");
    return 0;
}
