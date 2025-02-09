#include <stdio.h>

int is_multiple(int number, int base) {
    return !(number % base);
}

int main() {
    int counter = 1;
    while (counter <= 100) {
        if (!is_multiple(counter, 6)) {
            if (is_multiple(counter, 2)) {
                printf("%i\n", counter);
            } else if (is_multiple(counter, 3)) {
                printf("%i\n", counter);
            }
        }

        ++counter;
    }

    return 0;
}

