//write a program to passing character into a function
#include <stdio.h>
void displayChar(char ch) {
    printf("You entered character: %c\n", ch);
}
int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c); 
    displayChar(c);
}