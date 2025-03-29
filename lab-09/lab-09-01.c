#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* ints = malloc(10 * sizeof(int));
    ints = realloc(ints, 20 * sizeof(int));

    free(ints);
    return 0;
}
