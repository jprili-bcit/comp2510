/* Task 4: Write a function (named “nonStart”)
 * which takes in two char arrays, and then
 * prints their concatenation, except omit the
 * first char of each. The strings will be at least length 1. */

#include <stdio.h>

void nonStart(char first[], char second[]) {
    printf("%s", first + 1);
    printf("%s\n", second + 1);
}

int main(void) {
    nonStart("Hello", "There");
    nonStart("java", "code");
    nonStart("shotl", "java");

    return 0;
}
