/* Task 2: Write a program which reads in a string name, 
 * Eg, “Tom”, and then prints out a greeting “Hello Tom!” */

#include <stdio.h>

int main(void) {
    char name[100];
    printf("Enter a name: \n");
    scanf("%s", name);

    printf("Hello %s!\n", name);

    return 0;
}
