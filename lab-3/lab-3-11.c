#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int num = (rand() % ((9 - 4) + 1)) + 4;
    printf("%d\n", num);

    return 0;
}
