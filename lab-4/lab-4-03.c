/* Task 3: Write a program which reads in a string
 * from the user, and then prints a version without
 * the first and last char, so for "Hello" prints "ell". */

#include <stdio.h>

int main(void) {
    char string[100];
    printf("Enter a string (length < 100): \n");
    scanf("%s", string);

    for (size_t i = 0; string[i] != '\0'; ++i) {
        if (string[i + 1] == '\0') {
            string[i] = '\0';
        }
    }

    printf("%s\n", string + 1);

    return 0;
}
