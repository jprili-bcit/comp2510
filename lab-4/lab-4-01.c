/* Task 1: Write a program which defines an int array 
 * with length 10, gives it some initial values,
 * and then prints out the values from the array along 
 * with each value’s index 
 * */

#include <stdio.h>
#define LENGTH 10

int main(void) {
    int numbers[LENGTH] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

    for (int i = 0; i < LENGTH; ++i) {
        printf("%i %i\n", i, numbers[i]);
    }

    return 0;
}
