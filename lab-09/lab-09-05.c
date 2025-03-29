#include <stdio.h>
#include <stdlib.h>

typedef struct node node;
struct node {
    int data;
    node* next;
};

// can't name 'remove', already defined in headers
int nodes_remove(node** ptr_head, int value) {
    int remove_status = 0;
    node* to_remove;
    node** curr = ptr_head;
    while (*curr != NULL) {
        if (value == (*curr)->data) {
            remove_status = 0;
            to_remove = (*curr);
            // assign *curr to the
            // address of the previous pointer
            *curr = (*curr)->next;
            free(to_remove);
            remove_status = 1;
            continue;
        }
        curr = &(*curr)->next; 
    }
    return remove_status;
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
    mid->data = 3;
    mid->next = end;

    node* beg = malloc(sizeof(node));
    beg->data = 1;
    beg->next = mid;

    node** ptr_first = &beg;

    print_node(*ptr_first);
    nodes_remove(ptr_first, 3);
    print_node(*ptr_first);
    free_list(beg);
    return 0;
}
