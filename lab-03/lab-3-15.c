#include <stdio.h>

// calculate the nth fibonacci number.
// 1-indexed.
int fibonacci(int number) {
    if (number == 1) {
        return 0;
    } else if (number < 4) {
        return 1;
    } else {
        return fibonacci(number - 1) + fibonacci(number - 2);
    }
}

// print the fibonacci numbers from start to end
void print_fibonnaci(int start, int end) {
    if (start == end) {
        printf("%d\n", fibonacci(start));
    } else if (start < end) {
        printf("%d ", fibonacci(start));
        print_fibonnaci(++start, end);
    } 
}

int main() {
    print_fibonnaci(1, 20);
    return 0;
}
