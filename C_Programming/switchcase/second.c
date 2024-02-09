#include<stdio.h>
int main(){
    char operation;
    int a, b;
    printf("Enter the number:");
    scanf("%c",&operation);
    printf("Enter two operator");
    scanf("%d %d", &a, &b);

    switch(operation){
        case '+':
        printf("%d + %d = %d", a,b);
        break;
        case '-':
        printf("%d - %d = %d", a,b);
        break;
        case '*':
        printf("%d*%d=%d",a,b);
        break;
        case '/':
        printf("%d/%d=%d",a,b);
        break;
        default:
        printf("Error");
    }
}