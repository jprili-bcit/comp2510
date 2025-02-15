#include <stdio.h>

void max_min(int x, int y, int* pmin, int* pmax) {
    if (x > y) {
        *pmin = y;
        *pmax = x;
    } else {
        *pmin = x;
        *pmax = y;
    }
}

int main(void) {
    int m, n, *pmin = &m, *pmax = &n;
    max_min(1, 0, pmin, pmax);
    printf("max: %i; min: %i\n", *pmax, *pmin);

    max_min(-1, 0, pmin, pmax);
    printf("max: %i; min: %i\n", *pmax, *pmin);
    return 0;
}
