// stack implement using link list

#include<stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *top = NULL;

void push(){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    if (!temp) {
        printf("Memory allocation failed!\n");
    }
    printf("Enter a data: ");
    scanf("%d", &temp->data);
    temp->next = top;
    top=temp;
}
void display(){
    if (top == NULL) {
        printf("Stack is empty.\n");
    }
    else{
        struct node *temp = top;
        while (temp != NULL) {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}
void pop(){
    if (top == NULL) {
        printf("Stack Underflow! Nothing to pop.\n");
    }
    struct node *temp = top;
    printf("Delete element = %d\n", temp->data);
    top = top->next;
    free(temp);
}
void peep(){
    if (top == NULL) {
        printf("Stack is empty (Underflow).\n");
        return;
    }
    printf("Top element = %d\n", top->data);
}
int main(){
    int a;
    printf("\nSingly Linked List Operations:\n");
    printf("1. Insert at first node\n");
    printf("2. Display\n");
    printf("3. Delete top\n");
    printf("4. peep at top\n");
    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &a);
        switch (a) { 
            case 1:
                push();
                break;
            case 2:
                display();
                break;
            case 3:
                pop();
                break;
            case 4:
                peep();
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
}