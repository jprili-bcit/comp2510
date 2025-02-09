/* Task 8: Write a function which takes in
 * an int array and the length of it,
 * along with two other integers val_1 and val_2,
 * finds and returns how many numbers in the
 * array is between val_1 and val_2, inclusively. */

#include <stdio.h>

#define SIZE_1 1
#define SIZE_2 5

size_t in_between(int arr[], size_t length, int val_1, int val_2) {
    size_t num = 0;
    for (size_t i = 0; i < length; ++i) {
        int element = arr[i];
        if (((val_1 <= element) && (element <= val_2)) ||
            ((val_1 >= element) && (element >= val_2))) {
            ++num;
        }
    }
    return num;
}

int main(void) {
    int arr1[SIZE_1] = {1};
    printf("%zu\n", in_between(arr1, SIZE_1, 0, 2));

    int arr2[SIZE_2] = {-1, 1, 0, 2, 3};
    printf("%zu\n", in_between(arr2, SIZE_2, 0, 2));
    printf("%zu\n", in_between(arr2, SIZE_2, 2, 0));
    return 0;
}
