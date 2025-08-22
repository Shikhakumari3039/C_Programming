// Write a program to create node in binary tree
#include <stdio.h>
#include <stdlib.h>

// Define the structure
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *root= NULL;
struct Node* create() {
    struct Node* temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data: ");
    scanf("%d", &temp->data);
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void inorder(struct Node *root) {
    if(root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
void preorder(struct Node *root) {
    if(root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct Node *root) {
    if(root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}
int main() {
    struct node *temp, *templeft, *tempright;
    temp=create();
    templeft= create();
    tempright= create();
    root = temp;
    root->left = templeft;
    root->right = tempright;
    root->right->left = create();
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
}

