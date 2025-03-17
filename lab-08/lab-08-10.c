#include <stdio.h>

enum seasons {
    SPRING = 1, SUMMER, FALL, WINTER
};

enum weekdays {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main(int argc, char* argv[]) {
    printf("%d\n", WEDNESDAY);
    printf("%d\n", FALL);

    return 0;
}
