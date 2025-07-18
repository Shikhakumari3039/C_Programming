//write aprogram to check scalene, isosceles triangle , equilateral triangle.

#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter the sides:");
    scanf("%d%d%d", &a, &b, &c);

    if(a == b&& b== c&& a==c){
        printf("equilateral triangle");
    }
    else if(a ==b&& a==c|| b!=c){
        printf("isosceles triangle");
    }
    else{
        printf("scalene triagle");
    }
}