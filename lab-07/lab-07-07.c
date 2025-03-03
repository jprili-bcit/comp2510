#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return -(*(int*) a - *(int*) b);
}

void sort_desc(int array[], int size) {
    qsort(array, size, sizeof(int), compare);
}

int main(void) {
    int array[] = {5, 4, 3, -1, 2, 1, 0};
    for (size_t i = 0; i < sizeof(array)/sizeof(int); ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
    sort_desc(array, sizeof(array)/sizeof(int));
    for (size_t i = 0; i < sizeof(array)/sizeof(int); ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0; 
}
