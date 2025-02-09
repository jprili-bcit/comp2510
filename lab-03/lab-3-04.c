#include <stdio.h>

void print_100_times(char c) {
    for (size_t i = 0; i < 100; ++i) {
        printf("%c ", c);
    }
}

int main() {
    print_100_times('h');
    return 0;
}
