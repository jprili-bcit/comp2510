#include <stdio.h>

int main(void) {
    int n = 0;
    int* p = &n;

    // compiler wants to use %p instead of %d
    printf("%p\n", p);
    return 0;
}
