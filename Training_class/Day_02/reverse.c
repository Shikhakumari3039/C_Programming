// write a program 3 digits number reversing

#include<stdio.h>
int main(){
    int a, d1, d2, d3, rev;
    printf("Enter the number:");
    scanf("%d",&a);
    d1=a%10;
    d2=(a/10)%10;
    d3=a/100;
    rev = d1*100 + d2*10 + d3*1;
    printf("rev = %d ", rev);
}
