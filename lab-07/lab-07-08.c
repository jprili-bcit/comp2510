#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int  age;
    char name[128];
} Person;

int compare_person_asc(const void* a, const void* b) {
    return ((Person*) a)->age - ((Person*) b)->age;
}

int compare_person_desc(const void* a, const void* b) {
    return ((Person*) b)->age - ((Person*) a)->age;
}

void print_array(Person persons[], size_t size) {
    for (size_t i = 0; i < size; ++i) {
        printf("%s: %d\n", persons[i].name, persons[i].age);
    }
}

// NOTE: comparator functions take in two const void pointers
//       then we have to cast them into the correct
//       types, then get the value.
int main(void) {
    Person person_0, person_1, person_2;
    person_0.age = 2; sscanf("aaa", "%s", person_0.name);
    person_1.age = 0; sscanf("bbb", "%s", person_1.name);
    person_2.age = 1; sscanf("ccc", "%s", person_2.name);
    Person persons[] = {person_0, person_1, person_2};
    size_t num_persons = 3;
    print_array(persons, num_persons);

    qsort(persons, num_persons, 
            sizeof(Person), compare_person_asc);

    printf("Sorted by Person age (ascending):\n");
    print_array(persons, num_persons);

    qsort(persons, num_persons, 
            sizeof(Person), compare_person_desc);
    printf("Sorted by Person age (descending):\n");
    print_array(persons, num_persons);
    return 0; 
}
