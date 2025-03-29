#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode TreeNode;
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

void postOrder(TreeNode* pNode) {
    if (pNode != NULL) {
        postOrder(pNode->left);
        postOrder(pNode->right);
        printf("%d ", pNode->data);
    }
}

void free_tree(TreeNode* pNode) {
    if (pNode != NULL) {
        free_tree(pNode->left);
        free_tree(pNode->right);
        free(pNode);
    }
}

int main(void) {
    TreeNode* l1 = malloc(sizeof(TreeNode));
    l1->data = 1;
    l1->left = NULL;
    l1->right = NULL;


    TreeNode* l2 = malloc(sizeof(TreeNode));
    l2->data = 9;
    l2->left = NULL;
    l2->right = NULL;

    TreeNode* r1 = malloc(sizeof(TreeNode));
    r1->data = 3;
    r1->left = l2;
    r1->right = NULL;

    TreeNode* root = malloc(sizeof(TreeNode));
    root->data = 2;
    root->left = l1;
    root->right = r1;

    postOrder(root);
    printf("\n");
    free_tree(root);
    return 0;
}
