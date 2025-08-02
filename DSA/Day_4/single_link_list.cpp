//Single link list create(),insertion at first node() and last node() and last,display()
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

// Function to create a node
struct node* create() {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    if (!temp) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    printf("Enter a data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    return temp;
}

// Insert at first
void at_first() {
    struct node *temp = create();
    temp->next = head;
    head = temp;
}

// Insert at last
void at_last() {
    struct node *temp = create();
    if (head == NULL) {
        head = temp;
    } else {
        struct node *p = head;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = temp;
    }
}

// Display list
void display() {
    if (head == NULL) {
        printf("List is empty...\n");
    } else {
        struct node *temp = head;
        printf("Linked list: ");
        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

// Calculate length
int length() {
    int count = 0;
    struct node *temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Insert at specific location
void at_loc() {
    int loc, i;
    struct node *temp = create();

    printf("Enter the location where you want to insert: ");
    scanf("%d", &loc);
    int len = length();

    if (loc < 1 || loc > len + 1) {
        printf("Invalid location!\n");
        free(temp);
    } else if (loc == 1) {
        temp->next = head;
        head = temp;
    } else {
        struct node *p = head;
        for (i = 1; i < loc - 1; i++) {
            p = p->next;
        }
        temp->next = p->next;
        p->next = temp;
    }
}

// Delete at first
void delete_at_first() {
    if (head == NULL) {
        printf("List is already empty.\n");
    } else {
        struct node *temp = head;
        head = head->next;
        printf("Deleted: %d\n", temp->data);
        free(temp);
    }
}

// Delete at last
void delete_at_last() {
    if (head == NULL) {
        printf("List is already empty.\n");
    } else if (head->next == NULL) {
        printf("Deleted: %d\n", head->data);
        free(head);
        head = NULL;
    } else {
        struct node *p = head;
        while (p->next->next != NULL) {
            p = p->next;
        }
        printf("Deleted: %d\n", p->next->data);
        free(p->next);
        p->next = NULL;
    }
}

// Search for an element
void search() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    int key, pos = 1;
    printf("Enter value to search: ");
    scanf("%d", &key);
    struct node *temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            printf("Value %d found at position %d.\n", key, pos);
            return;
        }
        temp = temp->next;
        pos++;
    }
    printf("Value %d not found in the list.\n", key);
}

// Reverse the list
void reverse() {
    struct node *prev = NULL, *current = head, *next = NULL;
    if (head == NULL) {
        printf("List is empty, cannot reverse.\n");
        return;
    }
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    printf("List reversed successfully.\n");
}

//sorting 
void sort_list() {
    if (head == NULL || head->next == NULL) {
        printf("List is too short to sort.\n");
        return;
    }
    struct node *i, *j;
    int temp;
    for (i = head; i->next != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) {
                temp = i->data;                  // Swap data
                i->data = j->data;
                j->data = temp;
            }
        }
    }
    printf("List sorted in ascending order.\n");
}

// deletion for specific location
void delete_at_loc() {
    int loc, i;
    struct node *temp, *p;
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Enter the location to delete: ");
    scanf("%d", &loc);
    int len = length();

    if (loc < 1 || loc > len) {
        printf("Invalid location!\n");
        return;
    }
    if (loc == 1) {                         // Delete head node
        temp = head;
        head = head->next;
        printf("Deleted: %d\n", temp->data);
        free(temp);
    } else {
        p = head;
        for (i = 1; i < loc - 1; i++) {
            p = p->next;
        }
        temp = p->next;
        p->next = temp->next;
        printf("Deleted: %d\n", temp->data);
        free(temp);
    }
}

// Main function with menu
int main() {
    int a;
    printf("\nSingly Linked List Operations:\n");
    printf("1. Insert at first node\n");
    printf("2. Display\n");
    printf("3. Insert at last node\n");
    printf("4. Insert at specific location\n");
    printf("5. Delete first node\n");
    printf("6. Delete last node\n");
    printf("7. Search element\n");
    printf("8. Reverse list\n");
    printf("9. Sort the list\n");
    printf("10. Delete at specific location\n");
    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &a);
        switch (a) { 
            case 1:
                at_first();
                break;
            case 2:
                display();
                break;
            case 3:
                at_last();
                break;
            case 4:
                at_loc();
                break;
            case 5:
                delete_at_first();
                break;
            case 6:
                delete_at_last();
                break;
            case 7:
                search();
                break;
            case 8:
                reverse();
                break;
            case 9:
                sort_list();
                break;
            case 10:
                delete_at_loc();
                break;

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
