#include <stdio.h>

int main(int argc, char* argv[]) {
    struct ure {
        int eger;         // 4
        char acter[3];    // 3
        double precision; // 8
    };
    
    printf("%zu\n", sizeof(struct ure));
    return 0;
}
