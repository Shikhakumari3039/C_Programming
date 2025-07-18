//Write a program in C to search an element in an array using linear search.
#include<stdio.h>
int main(){
    int a[100], n;
    printf("Enter the numbers:");
    scanf("%d",&n); 
        for(int i=0; i<n; i++){
           scanf("%d", &a[i]); 
        }
    int b;
    int temp=0;
    printf("Enter the searching number: ");
    scanf("%d",&b);
    for(int j=0; j<n; j++){
        if(a[j]==b){
        temp=1;
        }
    }
    if(temp==1){
        printf("Present");
    }
    else{
        printf("Absent");
    }
}