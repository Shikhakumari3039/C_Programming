// ctb5nsp7(Google_classroom)
//Loop

// write a program to find factorial.
#include<stdio.h>
int main(){
    int a, fac=1;
    printf("Enter the number: ");
    scanf("%d",&a);
    for(int i=1; i<=a; i++){
        fac *= i;
    }
    printf("Factorial = %d", a, fac);
}
