//write a program to check a given number is prime or not
#include<stdio.h>
int main(){
    int a, c=0, i;
    printf("Enter the number: ");
    scanf("%d",&a);
    while(i<=a){
        if(a%i==0){
            c++;
        }
        i++;
    }
    if(c==2){
        printf("Prime number");
    }
    else{
        printf("Not prime number");
    }
}