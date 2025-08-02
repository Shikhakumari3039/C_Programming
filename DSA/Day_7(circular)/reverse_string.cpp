//write a program to reverse a string using stack

#include<stdio.h>
#include<string.h>
#define SIZE 100
char stack[SIZE];
int top = -1;

// Push function
void push(char ch) {
    if (top == SIZE - 1) {
        printf("Stack overflow\n");
    }
    else{
        top++;
        stack[top]=ch;
    }
}
// Pop function
char pop() {
    if (top == -1) {
        printf("Stack underflow\n");
    }
    return stack[top--];
}
int main(){
    char str[SIZE];
    printf("Enter a string: ");
    gets(str);  
    for (int i = 0; i < strlen(str); i++) {
        push(str[i]);
    }
    printf("Reversed string: ");
    while (top != -1) {
        printf("%c", pop());
    }
}