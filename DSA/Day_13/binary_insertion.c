// write a program to insertion using recursion in binary search
#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int data;
    struct node *left, *right;
};

struct node *root = NULL;

// Function to create new node
struct node* createNode(int value) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = value;
    temp->left = temp->right = NULL;
    return temp;
}

// ---------------- Iterative Insert ----------------
void insert1(int value) {
    struct node *temp = createNode(value);
    struct node *cur = root, *p = NULL;

    if (root == NULL) {
        root = temp;
        return;
    }

    while (cur != NULL) {
        p = cur;
        if (value > cur->data) {
            cur = cur->right;
        } else {
            cur = cur->left;
        }
    }

    if (value > p->data)
        p->right = temp;
    else
        p->left = temp;
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

// Traversals
void inorder(struct node *r) {
    if (r != NULL) {
        inorder(r->left);
        printf("%d ", r->data);
        inorder(r->right);
    }
}

void preorder(struct node *r) {
    if (r != NULL) {
        printf("%d ", r->data);
        preorder(r->left);
        preorder(r->right);
    }
}

void postorder(struct node *r) {
    if (r != NULL) {
        postorder(r->left);
        postorder(r->right);
        printf("%d ", r->data);
    }
}

// ---------------- Display Function ----------------
void display(struct node *r, int space) {
    if (r == NULL) return;

    // Increase distance between levels
    space += 5;

    // Process right child first
    display(r->right, space);

    // Print current node after spaces
    printf("\n");
    for (int i = 5; i < space; i++) {
        printf(" ");
    }
    printf("%d\n", r->data);

    // Process left child
    display(r->left, space);
}

// ---------------- Main Program ----------------
int main() {
    int choice, value;
    while (1) {
        printf("1. Insert (Iterative)\n");
        printf("2. Insert (Recursive)\n");
        printf("3. Inorder Traversal\n");
        printf("4. Preorder Traversal\n");
        printf("5. Postorder Traversal\n");
        printf("6. Display Tree\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insert1(value);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                root = insert2(createNode(value), root);
                break;

            case 3:
                printf("Inorder Traversal: ");
                inorder(root);
                printf("\n");
                break;

            case 4:
                printf("Preorder Traversal: ");
                preorder(root);
                printf("\n");
                break;

            case 5:
                printf("Postorder Traversal: ");
                postorder(root);
                printf("\n");
                break;

            case 6:
                printf("\nBinary Search Tree Structure:\n");
                display(root, 0);
                printf("\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
