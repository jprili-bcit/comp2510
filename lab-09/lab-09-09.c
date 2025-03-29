#include <stdio.h>
#include <stdlib.h>

#define FILENAME "out1.txt"
#define NAME_CHARS 20

typedef struct record record;
struct record {
    char name[NAME_CHARS];
    int age;
};

int main(void) {
    FILE* target = fopen(FILENAME, "w");
    if (target == NULL) {
        return 1;
    }
    record records[3] = {
        {"Sam", 25},
        {"Tom", 30},
        {"Kim", 16}
    };
    fwrite(records, sizeof(record), 3, target);
    fclose(target);
    return 0;
}
