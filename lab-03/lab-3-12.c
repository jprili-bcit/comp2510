#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    for (size_t i = 0; i < 20; ++i) {
        int num = (rand() % 6) + 1;
        printf("%d\n", num);
    }

    return 0;
}
