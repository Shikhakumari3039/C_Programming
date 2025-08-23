// write a program deletion in binary search

#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int data;
    struct node *left, *right;
};
struct node *root = NULL;

// Create new node
struct node* createNode(int value) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = value;
    temp->left = temp->right = NULL;
    return temp;
}

// ---------------- Iterative Insert ----------------
void insert1(int value) {
    struct node *temp = createNode(value);
    struct node *cur = root, *h = NULL;

    if (root == NULL) {
        root = temp;
        return;
    }
    while (cur != NULL) {
        h = cur;
        if (value > cur->data) {
            cur = cur->right;
        } else {
            cur = cur->left;
        }
    }

    if (value > h->data)
        h->right = temp;
    else
        h->left = temp;
}

// ---------------- Recursive Insert ----------------
struct node* insert2(struct node *temp, struct node *h) {
    if (h == NULL) {
        return temp;
    } else if (temp->data > h->data) {
        h->right = insert2(temp, h->right);
    } else if (temp->data < h->data) {
        h->left = insert2(temp, h->left);
    }
    return h;
}

// Inorder traversal
void inorder(struct node *r) {
    if (r != NULL) {
        inorder(r->left);
        printf("%d ", r->data);
        inorder(r->right);
    }
}

// Find minimum
struct node* min(struct node *temp) {
    while (temp->left != NULL) {
        temp = temp->left;
    }
    return temp;
}

// ---------------- Delete Function ----------------
struct node* deleteNode(struct node *h, int item) {
    if (h == NULL) {
        printf("Tree is empty or item not found\n");
        return NULL;
    }
    if (item < h->data) {
        h->left = deleteNode(h->left, item);
    }
    else if (item > h->data) {
        h->right = deleteNode(h->right, item);
    }
    else { // item found
        if (h->left == NULL && h->right == NULL) {  // no child
            free(h);
            return NULL;
        }
        else if (h->left == NULL) {  // only right child
            struct node *temp = h->right;
            free(h);
            return temp;
        }
        else if (h->right == NULL) {  // only left child
            struct node *temp = h->left;
            free(h);
            return temp;
        }
        else {  // two children
            struct node *temp = min(h->right);
            h->data = temp->data;
            h->right = deleteNode(h->right, temp->data);
        }
    }
    return h;
}

// ---------------- Display Function ----------------
void display(struct node *r, int space) {
    if (r == NULL) return;
    space += 5;
    display(r->right, space);
    printf("\n");
    for (int i = 5; i < space; i++) {
        printf(" ");
    }
    printf("%d\n", r->data);
    display(r->left, space);
}

// ---------------- Main Program ----------------
int main() {
    int choice, value;
    struct node *temp;

    while (1) {
        printf("\n--- Binary Search Tree Menu ---\n");
        printf("1. Insert ");
        printf("2. Display Tree\n");
        printf("3. Insert (Recursive)\n");
        printf("4. Delete Node\n");
        printf("5. Inorder Traversal\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insert1(value);
                break;

            case 2:
                printf("\nBinary Search Tree Structure:\n");
                display(root, 0);
                printf("\n");
                break;

            case 3:
                printf("Enter value: ");
                scanf("%d", &value);
                temp = createNode(value);
                root = insert2(temp, root);
                break;

            case 4:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                root = deleteNode(root, value);
                break;

            case 5:
                printf("Inorder Traversal: ");
                inorder(root);
                printf("\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}

