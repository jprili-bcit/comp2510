/* Task 5: Write a function which takes in an input 
 * integer array and the length of the array.
 * The function is to reverse the array values. */

#include <stdio.h>
#define SIZE 3

void reverse(int arr[], size_t length) {
    size_t lo = 0, hi = length - 1;

    while (lo < hi) {
        int hold = arr[lo];
        arr[lo] = arr[hi];
        arr[hi] = hold;
        ++lo; --hi;
    }
}

int main(void) {
    int arr[SIZE] = {1, 2, 3};
    reverse(arr, SIZE);
    printf("[");
    for (size_t i = 0; i < SIZE; ++i) {
        printf(" %i ", arr[i]);
    }
    printf("]\n");
    return 0;
}
