//write a program to find FACTORIAL RECURSION
#include<stdio.h>
 int fact (int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
    printf("%d", n);
 }
 int main(){
    int n;
    printf("Enter the numbers:");
    scanf("%d", &n);
    fact(n);
 }