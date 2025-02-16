#include <stdio.h>
#include <string.h>

#define SIZE 3

int main(void) {
    char* arr_1[SIZE] = {"Az", "ABCDEF", "sushi-roll"};
    char* arr_2[SIZE] = {"aZ", "a", "unagi"};

    for (size_t i = 0; i < SIZE; ++i) {
        printf("%s\n", strcmp(arr_1[i], arr_2[i]) > 0 ? 
                arr_1[i] : arr_2[i]
                );
    }
    return 0;
}
