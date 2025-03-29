#include <stdio.h>
#include <stdlib.h>

typedef struct node node;
struct node {
    int data;
    node* next;
};

int insert_asc(node** ptr_head, int value) {
    node* new = malloc(sizeof(node));
    if (ptr_head == NULL || new == NULL) {
        return 0;
    }
    new->data = value;

    node** curr;
    for (curr = ptr_head; *(curr) != NULL;
            curr = &(*curr)->next) {
        if (value <= (*curr)->data) { break; }
    }

    new->next = *curr;
    *curr = new;
    return 1;
}

void print_node(node* head) {
    if (head == NULL) {
        printf("\n");
        return;
    } else {
        printf("%d ", head->data);
        print_node(head->next);
    }
}

void free_list(node* head) {
    if (head == NULL) {
        return;
    } else {
        free_list(head->next);
        free(head);
    }
}

int main(void) {
    node* end = malloc(sizeof(node));
    end->data = 4;
    end->next = NULL;

    node* mid = malloc(sizeof(node));
    mid->data = 2;
    mid->next = end;

    node* beg = malloc(sizeof(node));
    beg->data = 1;
    beg->next = mid;

    node** ptr_first = &beg;

    print_node(*ptr_first);
    insert_asc(ptr_first, 3);
    print_node(*ptr_first);
    free_list(beg);
    return 0;
}
