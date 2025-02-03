/* Task 10: Write a function which takes in
 * a two-dimensional int array (with size of n-by-7)
 * and integer n for the row number, to find and
 * return how many even numbers are in the array. */

#include <stdio.h>

#define SIZE_1 1
#define SIZE_2 5
#define COL_NUM 7

size_t count_even(const int data[][7], const size_t n) {
    size_t even_count = 0;
    for (size_t i = 0; i < 7; ++i) {
        for (size_t j = 0; j < n; ++j) {
           if (!(data[j][i] % 2)) {
               ++even_count;
           }
        }
    }
    return even_count;
}

int main(void) {
    int arr1[SIZE_1][COL_NUM] = {{1}};
    printf("%zu\n", count_even(arr1, SIZE_1));

    int arr2[SIZE_2][COL_NUM] = {{0}, {-1, -1, -2, 3}};
    printf("%zu\n", count_even(arr2, SIZE_2));
    return 0;
}
