/* Task 9: Write a function which takes in a
 * two-dimensional int array (with size of n-by-10)
 * and an integer n for the row number, to find
 * and return the minimum value in the array. */

#include <stdio.h>

#define SIZE_1 1
#define SIZE_2 5
#define COL_NUM 10

int minimum(const int arr[][10], const size_t n) {
    int min = 2147483647; // INT_MAX
    for (size_t i = 0; i < 10; ++i) {
        for (size_t j = 0; j < n; ++j) {
           if (arr[j][i] < min) {
               min = arr[j][i];
           }
        }
    }
    return min;
}

int main(void) {
    int arr1[SIZE_1][COL_NUM] = {{1}};
    printf("%i\n", minimum(arr1, SIZE_1));

    int arr2[SIZE_2][COL_NUM] = {{0}, {-1, 1, 0, 2, 3}};
    printf("%i\n", minimum(arr2, SIZE_2));
    return 0;
}
