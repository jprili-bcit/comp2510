/* Task 6: Write a function which takes in an int array 
 * and the length of it, finds and returns the 
 * mean of the array */ 

#include <stdio.h>

#define SIZE_1 1
#define SIZE_2 3

double mean(int arr[], size_t length) {
    if (length <= 0) { return 0; }

    double sumSoFar = 0;
    for (size_t i = 0; i < length; ++i) {
        sumSoFar += arr[i];
    }

    return sumSoFar / length;
}

int main(void) {
    int arr1[SIZE_1] = {1};
    printf("%f\n", mean(arr1, SIZE_1));

    int arr2[SIZE_2] = {1, 2, 3};
    printf("%f\n", mean(arr2, SIZE_2));

    return 0;
}
