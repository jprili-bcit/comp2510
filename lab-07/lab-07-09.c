#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_custom(const void* a, const void* b) {
    const char* _a = *(const char**) a;
    const char* _b = *(const char**) b;
    size_t _a_len = strlen(_a);
    size_t _b_len = strlen(_b);

    if (_a_len != _b_len) {
        return _a_len - _b_len;
    } else {
        return strcmp(_a, _b);
    }
}

void print_array(char* strs[], size_t size) {
    for (size_t i = 0; i < size; ++i) {
        printf("%s\n", strs[i]);
    }
}

int main(void) {
    char* strs[] = {
        "aaaa",
        "bbb",
        "aba",
        "aab",
        "bba",
        "bbbbb",
        "bbbba",
        "x",
        "y",
        "z"
    };

    size_t size = sizeof(strs)/sizeof(char*);

    qsort(strs, size,
            sizeof(char*), compare_custom);

    print_array(strs, size);

    return 0; 
}
