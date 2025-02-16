#include <stdio.h>
#include <string.h>

int main(void) {
	int array1[] = {1,2,3,4,5,6,7,8,9,0};
	int array2[10];

    memcpy(array2, array1, sizeof(array1));

    for (size_t i = 0; i < 10; ++i) {
        printf("%d", array2[i]);
    }

    printf("\n");
    return 0;
}
