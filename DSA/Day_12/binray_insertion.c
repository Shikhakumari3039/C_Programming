// write a program to insertion in binary search

#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *left, *right;
};
struct node *root = NULL;
struct node* create() {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    int value;
    scanf("%d", &value);
    temp->data = value;
    temp->left = temp->right = NULL;
    return temp;
}

// Iterative Insert Function
void insert() {
    struct node *temp, *cur, *p;
    temp = create();
    if (root == NULL) {
        root = temp;
    } else {
        cur = root;
        p = NULL;
        while (cur != NULL) {
            p = cur;
            if (temp->data > cur->data) {
                cur = cur->right;
            } else {
                cur = cur->left;
            }
        }
        if (temp->data > p->data) {
            p->right = temp;
        } else {
            p->left = temp;
        }
    }
}

// Inorder traversal (sorted output)
void inorder(struct node *r) {
    if (r != NULL) {
        inorder(r->left);
        printf("%d ", r->data);
        inorder(r->right);
    }
}
int main() {
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        insert();
    }
    printf("Inorder Traversal of BST: ");
    inorder(root);
    printf("\n");
}
