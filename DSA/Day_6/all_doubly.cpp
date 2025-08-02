//ALL DOUBLY LINK LIST
#include <stdio.h>
#include <stdlib.h>
struct node {
    struct node *pre;
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *create() {
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &temp->data);
    temp->pre = NULL;
    temp->next = NULL;
    return temp;
}
//insert at first node
void at_begin() {
    struct node *temp = create();
    if (head == NULL) {
        head = temp;
    } else {
        temp->next = head;
        head->pre = temp;
        head = temp;
    }
}
//insert at last node
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
        temp->pre = p;
    }
}
//at display
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
//to calculate length
int length() {
    int count = 0;
    struct node *temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}
//insert at speific loction
void insert_at_location() {
    int loc, i = 1;
    printf("Enter the location: ");
    scanf("%d", &loc);
    int len = length();
    if (loc < 1 || loc > len + 1) {
        printf("Invalid location!\n");
        return;
    }
    if (loc == 1) {
        at_begin();
        return;
    }
    struct node *temp = create();
    struct node *ptr = head;
    while (i < loc - 1) {
        ptr = ptr->next;
        i++;
    }
    temp->next = ptr->next;
    if (ptr->next != NULL)
        ptr->next->pre = temp;
    ptr->next = temp;
    temp->pre = ptr;
}
//delete at first node
void delete_at_first() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct node *temp = head;
    head = head->next;
    if (head != NULL)
        head->pre = NULL;
    free(temp);
}
//delet at last node
void delete_at_last() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct node *temp = head;
    if (head->next == NULL) {
        head = NULL;
        free(temp);
        return;
    }
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->pre->next = NULL;
    free(temp);
}
//deletion at specific loction
void delete_at_location() {
    int loc, i = 1;
    printf("Enter the location to delete: ");
    scanf("%d", &loc);
    int len = length();
    if (loc < 1 || loc > len) {
        printf("Invalid location!\n");
        return;
    }
    if (loc == 1) {
        delete_at_first();
        return;
    }
    struct node *temp = head;
    while (i < loc) {
        temp = temp->next;
        i++;
    }
    temp->pre->next = temp->next;
    if (temp->next != NULL)
        temp->next->pre = temp->pre;
        free(temp);
}
// Search an element
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
// Sort the list
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
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
    printf("List sorted in ascending order.\n");
}
int main() {
    int choice;
    printf("\nDoubly Linked List Operations:\n");
    printf("1. Insert at first node\n");
    printf("2. Display\n");
    printf("3. Insert at last node\n");
    printf("4. Insert at specific location\n");
    printf("5. Delete first node\n");
    printf("6. Delete last node\n");
    printf("7. Delete at specific location\n");
    printf("8. searching\n");
    printf("soring\n");
    while(1){
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            at_begin();
            break;
        case 2:
            display();
            break;
        case 3:
            at_last();
            break;
        case 4:
            insert_at_location();
            break;
        case 5:
            delete_at_first();
            break;
        case 6:
            delete_at_last();
            break;
        case 7:
            delete_at_location();
            break;
        case 8:
            search();
            break;
        case 9:
            sort_list();
            break;
        default:
            printf("Invalid choice!\n");
        }
    }
}
