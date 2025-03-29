#include <stdio.h>
#include <stdlib.h>

#define FILENAME "salutation.txt"
#define MAX_CHAR_COUNT 256

int main(void) {
    FILE* target = fopen(FILENAME, "r");
    if (target == NULL) {
        printf("File does not exist!");
        return 1;
    }
    char buffer[MAX_CHAR_COUNT] = {0};

    fgets(buffer, MAX_CHAR_COUNT, target);
    printf("%s", buffer);

    fclose(target);

    return 0;
}
