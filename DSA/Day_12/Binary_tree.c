// Write a program to create node in binary tree
#include <stdio.h>
#include <stdlib.h>

// Define structure for a tree node
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int main() {
    // Create root node
    struct Node* root = createNode(10);

    // Create left and right children
    root->left = createNode(20);
    root->right = createNode(30);

    // Print the tree nodes
    printf("Root: %d\n", root->data);
    printf("Left Child: %d\n", root->left->data);
    printf("Right Child: %d\n", root->right->data);
}

