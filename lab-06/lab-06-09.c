#include <stdio.h>
#include <string.h>

int main(void) {
    char a_p[] = "apple-pineapple";
    char* substr = strchr(a_p, 'a');
    size_t remaining_a = 2;

    while (substr != NULL && remaining_a > 0) {
        substr = strchr(substr, 'a');
        if (substr != NULL) {
            --remaining_a;
        }

        if (remaining_a == 0) {
            printf("yes\n");
            // distance in bytes 
            printf("%ld\n", substr - a_p);
            return 0;
        }

        ++substr;
    }

    printf("no\n");
    return 0;
}
