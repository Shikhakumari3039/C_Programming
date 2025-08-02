//stack implement using array

#include<stdio.h>
#define size 5
int stack[size];
int top=-1;
int data;
void push(){
    printf("Enter a data");
    scanf("%d",&data);
    if(top==size-1){
        printf("stack overflow");
    }
    else{
        top++;
        stack[top]=data;
    }
}
void display(){
        if(top==-1){
            printf("underflow");
        }
        else{
            for(int i=top; i>=0; i--){
                printf("%d\t",stack[i]);
            }
        }
    }
void pop(){
    if(top==-1){
        printf("stack underflow");
    }
    else{
        data=stack[top];
        printf("Deleted element =%d",data);
        top--;
    }
}
void peep() {
    if (top == -1) {
        printf("Stack is empty (Underflow).\n");
    } else {
        data=stack[top];
        printf("Top element = %d\n", data);
    }
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