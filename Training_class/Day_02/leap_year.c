//write a program to check the leap year

#include<stdio.h>
int main(){
    int a;
    printf("Enter the year:");
    scanf("%d",&a);
    if(a%4==0){
        if(a%100==0){
            if(a%400==0){
                printf("leap year");
            } else{
                printf("not leap year");
            }
        } else{
            printf("leap year");
        }
    } else{
    printf("not leap year");
    }
}
int main(){
    int a;
    printf("Enter the year:");
    scanf("%d",&a);
    if(a%4==0 || a%100==0 || a%400==0){
        printf("leap year");
    } else{
    printf("not leap year");
    }
}