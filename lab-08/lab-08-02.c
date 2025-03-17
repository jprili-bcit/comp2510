#include <stdio.h>
#include <string.h>


int main(int argc, char* argv[]) {
    struct student {
        char firstname[20];
        char lastname[20];
        int  age;
    };
    
    struct student s1, s2;
    s1 = (struct student) {"Rupert", "Grint", 33};
    s2 = (struct student) {"Emma", "Watson", 31};

    return 0;
}

