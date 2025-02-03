#include <stdio.h>

int print_reverse(int number) {
    if (number < 10) {
        return number;
    } else {
        printf("%d", number % 10);
        return print_reverse(number / 10);
    }
}

int main() {
    printf("%d\n", print_reverse(100));
    return 0;
}
