#include <stdio.h>

int main(int argc, char* argv[]) {
    typedef struct EmptyNode EmptyNode;
    struct EmptyNode {
        EmptyNode* next;
    };
    
    return 0;
}
