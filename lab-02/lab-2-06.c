#include <stdio.h>

int main() {
    for (size_t i = 1; i <= 70; ++i) {
        if ((i % 15) && !((i % 5) && (i % 3))) {
            printf("%lu\n", i);
        }
    }

    return 0;
}
