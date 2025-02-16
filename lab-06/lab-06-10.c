#include <stdio.h>
#include <string.h>

void print_longer(const char* str_1, const char* str_2) {
    printf("%s\n", 
            strlen(str_1) > strlen(str_2) ?
            str_1 : str_2
    );
}

int main(void) {
    char* hi = "hi";
    char* world = "world";

    print_longer(hi, world);
    return 0;
}
