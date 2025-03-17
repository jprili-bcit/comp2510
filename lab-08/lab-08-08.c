#include <stdio.h>

int main(int argc, char* argv[]) {
    int n = 7;

    printf("%d\n%d\n%d\n",
            n & 11,
            n | 0x1001,
            n ^ 0x1111);

    return 0;
}
