#include <stdio.h>
#include <stdlib.h>

#define FILENAME "salutation.txt"
#define MAX_CHAR_COUNT 256

int main(void) {
    FILE* target = fopen(FILENAME, "w");
    if (target == NULL) {
        return 1;
    }
    char buffer[MAX_CHAR_COUNT] = {0};
    printf("Enter one line: ");
    fgets(buffer, MAX_CHAR_COUNT, stdin);

    fprintf(target, "%s", buffer);
    fclose(target);

    return 0;
}
