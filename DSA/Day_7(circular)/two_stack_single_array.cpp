// write a program to implement two stack in a single array
#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int arr[SIZE];
int top1 = -1;
int top2 = SIZE;

// Push in Stack 1
void push1(int data) {
    if (top1 + 1 == top2) {
        printf("Stack Overflow in Stack 1!\n");
        return;
    }
    arr[++top1] = data;
    printf("%d pushed to Stack 1\n", data);
}

// Push in Stack 2
void push2(int data) {
    if (top1 + 1 == top2) {
        printf("Stack Overflow in Stack 2!\n");
        return;
    }
    arr[--top2] = data;
    printf("%d pushed to Stack 2\n", data);
}

// Pop from Stack 1
void pop1() {
    if (top1 == -1) {
        printf("Stack 1 Underflow!\n");
    } else {
        printf("Popped from Stack 1: %d\n", arr[top1--]);
    }
}

// Pop from Stack 2
void pop2() {
    if (top2 == SIZE) {
        printf("Stack 2 Underflow!\n");
    } else {
        printf("Popped from Stack 2: %d\n", arr[top2++]);
    }
}

// Display Stack 1
void display1() {
    if (top1 == -1) {
        printf("Stack 1 is empty.\n");
        return;
    }
    printf("Stack 1: ");
    for (int i = 0; i <= top1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Display Stack 2
void display2() {
    if (top2 == SIZE) {
        printf("Stack 2 is empty.\n");
        return;
    }
    printf("Stack 2: ");
    for (int i = SIZE - 1; i >= top2; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int choice, value;
    printf("Two Stacks in One Array\n");
    while (1) {
        printf("1. Push in Stack 1\n");
        printf("2. Push in Stack 2\n");
        printf("3. Pop from Stack 1\n");
        printf("4. Pop from Stack 2\n");
        printf("5. Display Stack 1\n");
        printf("6. Display Stack 2\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to push in Stack 1: ");
                scanf("%d", &value);
                push1(value);
                break;
            case 2:
                printf("Enter value to push in Stack 2: ");
                scanf("%d", &value);
                push2(value);
                break;
            case 3:
                pop1();
                break;
            case 4:
                pop2();
                break;
            case 5:
                display1();
                break;
            case 6:
                display2();
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
}
