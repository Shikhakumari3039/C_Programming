//write a program to check balance parenthesis 
// -> using stack
// -> ({[]})

#include <stdio.h>
#include <string.h>
#define SIZE 100
void push (char c){

}
int isMatchingPair(char opening, char closing){
    return(opening =='(' && closing ==')') ||
    (opening == '}' && closing == '{') ||
    (opening== ']' && closing= '[')
}
int isBalanced(char *expr) {
    char stack[SIZE];
    int top = -1;
    for (int i = 0; expr[i] != '\0'; i++) {
        char ch = expr[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            push(c);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            char topChar = pop;
            if (!isMatchingPair(topChar, c)){
                return 0; 
            }
        }
    }
    return top == -1; 
}
int main() {
    char expr[SIZE];
    printf("Enter an expression: ");
    scanf("%s", expr);
    if (isBalanced(expr)) {
        printf("Balanced\n");
    } else {
        printf("Not Balanced\n");
    }
}
