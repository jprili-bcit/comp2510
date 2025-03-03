#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*) a - *(int*) b;
}

// inclusive
void sort_subarray(int ints[], size_t start, 
        size_t end, size_t size) {
    if (start > end) {
        size_t hold = start;
        start = end;
        end = hold;
    }
    if (end >= size) {
        end = size - 1;
    } 
    printf("%lu, %lu\n", start, end);
    qsort(ints + start, end - start + 1,
            sizeof(int), compare);
}

int main(void) {
    int ints[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    size_t size = sizeof(ints)/sizeof(int);
    sort_subarray(ints, 3, 12, size);
    for (size_t i = 0; i < size; ++i) {
        printf("%i\n", ints[i]);
    }

    return 0; 
}
