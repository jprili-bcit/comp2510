/* Task 7: Write a function which takes in an
 * int array and the length of it, finds and
 * returns one number from the array which has
 * the biggest absolute value. */

#include <stdio.h>

#define SIZE_1 1
#define SIZE_2 3

int max_abs(int arr[], size_t length) {
    int max_so_far = 0;
    int max_element = 0;
    for (size_t i = 0; i < length; ++i) {
        int element_sq = arr[i] * arr[i];
        if (element_sq > max_so_far) {
            max_so_far = element_sq;
            max_element = arr[i] > 0 ? arr[i] : -arr[i];
        }
    }
    return max_element;
}

int main(void) {
    int one_element[SIZE_1] = {1};
    printf("%i\n", max_abs(one_element, SIZE_1));

    int neg_element[SIZE_1] = {-1};
    printf("%i\n", max_abs(neg_element, SIZE_1));

    int three_elements[SIZE_2] = {1, -2, 3};
    printf("%i\n", max_abs(three_elements, SIZE_2));

    int max_negative_element[SIZE_2] = {1, 2, -3};
    printf("%i\n", max_abs(max_negative_element, SIZE_2));
    return 0;
}
