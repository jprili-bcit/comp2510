#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "out1.txt"
#define NAME_CHARS 20

typedef struct record record;
struct record {
    char name[NAME_CHARS];
    int age;
};

int main(void) {
    FILE* target = fopen(FILENAME, "r");
    if (target == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    record records[3];
    fread(records, sizeof(record), 3, target);
    fclose(target);
    for (int i = 0; i < 3; ++i) {
        printf("%s, %d\n", records[i].name, records[i].age);
    }
    for (int i = 0; i < 3; ++i) {
        if (!strcmp(records[i].name, "Kim")) {
            strcpy(records[i].name, "Kimmy");
        } else if (!strcmp(records[i].name, "Sam")) {
            records[i].age = 26;
        }
    }
    target = fopen(FILENAME, "w");
    fwrite(records, sizeof(record), 3, target);
    fclose(target);
    return 0;
}
