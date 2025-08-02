//circular singly lin list
#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
//to create 
struct node *head = NULL;
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
// at first node
void at_first() {
    struct node *temp, *p;
    temp=create();
    if(head==NULL){
        head=temp;
        head->next=head;
    }
    else{
        p=head;
        while(p->next!=head){
            p=p->next;
        }
        temp->next=head;
        head=temp;
        p->next=head;
    }
}
// Display list
void display() {
    if (head == NULL) {
        printf("List is empty...\n");
        return;
    }
    struct node *temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
}
//insert at last node
void at_last() {
    struct node *temp, *p;
    temp = create();
    if (head == NULL) {
        head = temp;
        head->next = head; 
    } else {
        p = head;
        while (p->next != head) {
            p = p->next;
        }
        p->next = temp;
        temp->next = head; 
    }
}
int main() {
    int a;
    printf("\nCircular Singly Linked List Operations:\n");
    printf("1. Insert at first node\n");
    printf("2. Display\n");
    printf("3. Insert at last node\n");
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
            default:
                printf("Invalid choice!\n");
        }
    }
}