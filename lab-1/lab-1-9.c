#include <stdio.h>

int main() {
    int counter = 1;
    int current_num = 10;
    while (current_num <= 70) {
        printf(counter % 7 ? "%i " : "%i\n", current_num);
        ++counter;
        ++current_num;
    }
    printf("\n");

    return 0;
}

