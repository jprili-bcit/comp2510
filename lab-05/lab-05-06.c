#include <stdio.h>

int swap(int* x, int* y) {
    int hold = *x;
    // change the value in x's address to y's value
    *x = *y; 
    // change the value in y's address to hold's target value
    *y = hold; 

    return (*x > *y) ? *x : *y;
}

int main(void) {
    int m = 22, n = 11;
    printf("%d\n", swap(&m, &n)); // 22
    printf("%d\n", m); // 11

    return 0;
}
