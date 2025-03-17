#include <stdio.h>
#include <string.h>


int main(int argc, char* argv[]) {
    struct student {
        char firstname[20];
        char lastname[20];
        int  age;
    };
    
    struct student s1, s2;
    struct student* s2Ptr = &s2;
    strcpy(s1.firstname, "Rupert");
    strcpy(s1.lastname, "Grint");
    s1.age = 33;
    
    strcpy(s2Ptr->firstname, "Emma");
    strcpy(s2Ptr->lastname, "Watson");
    s2Ptr->age = 31;

    return 0;
}
