//write a program to insert in AVL TREE

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
    int height;
};

struct node *root = NULL;

// Utility functions
int max(int a, int b) {
    return (a > b) ? a : b;
}

int get_height(struct node *root) {
    if (root == NULL)
        return 0;
    return root->height;
}

// Get balance factor
int getBalance(struct node *root) {
    if (root == NULL)
        return 0;
    return get_height(root->left) - get_height(root->right);
}

// Create new node
struct node* create(int data) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    temp->height = 1; 
    return temp;
}

// Right rotation
struct node* right_Rotation(struct node* root) {
    struct node* child = root->left;
    struct node* childRight = child->right;

    child->right = root;
    root->left = childRight;

    root->height = 1 + max(get_height(root->left), get_height(root->right));
    child->height = 1 + max(get_height(child->left), get_height(child->right));

    return child; 
}

// Left rotation
struct node* left_Rotation(struct node *root) {
    struct node *child = root->right;
    struct node *childLeft = child->left;

    child->left = root;
    root->right = childLeft;

    root->height = 1 + max(get_height(root->left), get_height(root->right));
    child->height = 1 + max(get_height(child->left), get_height(child->right));

    return child; 
}

// Insert function
struct node* insert(struct node *root, int data) {
    // Normal BST insertion
    if (root == NULL)
        return create(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);
    else // no duplicates
        return root;

    // Update height
    root->height = 1 + max(get_height(root->left), get_height(root->right));

    // Get balance factor
    int balance_f = getBalance(root);

    // LL case
    if (balance_f > 1 && data < root->left->data)
        return right_Rotation(root);

    // RR case
    if (balance_f < -1 && data > root->right->data)
        return left_Rotation(root);

    // LR case
    if (balance_f > 1 && data > root->left->data) {
        root->left = left_Rotation(root->left);
        return right_Rotation(root);
    }

    // RL case
    if (balance_f < -1 && data < root->right->data) {
        root->right = right_Rotation(root->right);
        return left_Rotation(root);
    }

    return root;
}

// Inorder traversal
void inorder(struct node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    int a, val;
    while (1) {
        printf("\n1. Insert\n2. Display (Inorder)\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &a);

        switch (a) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                root = insert(root, val);
                break;
            case 2: 
                printf("Inorder Traversal: ");
                inorder(root);
                printf("\n");
                break;
            case 3:
                exit(0);
            default: 
                printf("Invalid choice\n");
        }
    }
}
