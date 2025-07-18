//write a program to check a given is perfect or not.
#include<stdio.h>
int main(){
    int a, sum=0, i;
    printf("Enter the number: ");
    scanf("%d", &a);
    for(i=1; i<a; i++){
        if(a%i==0){
            sum+=i;
        }
    }
    if(sum==a){
        printf("Perfect number");
    }
    else{
        printf("Not perfect number");
    }
}