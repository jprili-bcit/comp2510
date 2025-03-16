#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*) a - *(int*) b;
}

// inclusive
void sort_subarray(int ints[], size_t start, 
        size_t end, size_t size) {
    if (end >= size) {
        printf("WARNING: end index too large. \n");
        end = size - 1;
    } 

    if (start >= size) {
        printf("WARNING: start index is too small or too large. \n");
        start = 0;
    }

    // swap
    if (start > end) {
        size_t hold = start;
        start = end;
        end = hold;
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
