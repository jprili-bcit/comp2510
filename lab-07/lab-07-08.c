#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int  age;
    char name[128];
} Person;

int compare_person(const void* a, const void* b) {
    Person* person_a = (Person*) a;
    Person* person_b = (Person*) b;
    if (person_a->age == person_b->age) {
        return strcmp(person_b->name, person_a->name);
    } else {
        return person_a->age - person_b->age;
    }
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
    Person person_0, person_1, person_2, person_3;
    person_0.age = 2; sscanf("aaa", "%s", person_0.name);
    person_1.age = 0; sscanf("bbb", "%s", person_1.name);
    person_2.age = 1; sscanf("ccc", "%s", person_2.name);
    person_3.age = 1; sscanf("ddd", "%s", person_3.name);
    Person persons[] = {person_0, person_1, person_2, person_3};
    size_t num_persons = 4;

    qsort(persons, num_persons, 
            sizeof(Person), compare_person);

    print_array(persons, num_persons);
    return 0; 
}
