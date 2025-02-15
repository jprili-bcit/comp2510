#include <stdio.h>

int main(void) {
    int data[3] = {11, 12, 13};
    int* dptr = data;
    *(dptr + 1) = 60;

    printf("%i\n", *(dptr + 1));

    return 0;
}
