#include <stdio.h>
#include <string.h>

void my_concat(const char* a, const char* b, char* c) {
    strcat(c, a);
    strcat(c, b);
}

int main(void) {
    char* hello = "hello ";
    char* world = "world!";
    char hello_world[sizeof(hello) + sizeof(world)];

    my_concat(hello, world, hello_world);
    printf("%s\n", hello_world);
    return 0;
}
