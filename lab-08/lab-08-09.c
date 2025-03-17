#include <stdio.h>

int main(int argc, char* argv[]) {
    int n = 7;

    printf("%d\n%d\n%d\n",
            n << 2,
            n >> 2,
            ~n);

    return 0;
}

