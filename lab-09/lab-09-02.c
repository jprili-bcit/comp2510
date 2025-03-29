#include <stdio.h>
#include <stdlib.h>

typedef struct node node;
struct node {
    int data;
    node* next;
};

int find_sum(node* head) {
    int sum_so_far = 0;

    node* this;
    for (this = head; this != NULL; this = this->next) {
        sum_so_far += this->data;
    }
    return sum_so_far;
}

int main(void) {
    node tail = (node) {1, NULL};
    node middle = (node) {2, &tail};
    node first = (node) {3, &middle};

    printf("%d\n", find_sum(&first));

    return 0;
}
