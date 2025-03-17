#include <stdio.h>
#include <string.h>

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

    struct student jenny;
    strcpy(jenny.field_1.name, "Jenny Simpson");
    jenny.field_2.gender = 'F';
    jenny.field_2.age = 26;
    
    
    return 0;
}

