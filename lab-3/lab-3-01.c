#include <stdio.h>

void print_triple(int number) {
    printf("%d\n", number * 3);
}

int main() {
    print_triple(-1);
    print_triple(0);
    print_triple(1);
    return 0;
}
