#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char* numbers = "123 256 789";
    int to_add[3];
    sscanf(numbers, "%i %i %i", 
            to_add, to_add + 1, to_add + 2);

    char s[32];
    sprintf(s, "The result is %d\n", 
            to_add[0] + to_add[1] + to_add[2]);

    printf("%s", s);
    return 0;
}
