#include <stdio.h>

int main(int argc, char* argv[]) {
    union student_info {
        char name[20];
        char gender;
        int  age;
    };

    struct student {
        union student_info field_1;
        union student_info field_2;
        union student_info field_3;
    };
    
    return 0;
}
