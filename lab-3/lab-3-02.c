#include <stdio.h>

int min(int number_1, int number_2) {
    return (number_1 < number_2) ? number_1 : number_2;
}

int main() {
    printf("%d\n", min(-1, 0));
    printf("%d\n", min(0, 0));
    printf("%d\n", min(0, 1));
    return 0;
}
