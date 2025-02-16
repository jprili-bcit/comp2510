#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char num_in_chars_1[] = "123";
    char num_in_chars_2[] = "4567890";

    printf("%i\n", atoi(num_in_chars_1) + atoi(num_in_chars_2));

    return 0;
}
