//write a program find the greater b/w 3 number without using conditional operator

#include<stdio.h>
#include<stdlib.h>
int main() {
    int a, b,c, max, max_ab;
    printf("Enter the number:");
    scanf("%d%d%d",&a,&b,&c);
    max_ab=(a+b+abs(a-b))/2;
    max=(max_ab+c+abs(max_ab-c))/2;
    printf("max number=%d",max);
}
