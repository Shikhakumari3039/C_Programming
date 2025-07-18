// write a program to find max element in array
#include<stdio.h>
int main(){
    int a[10], n, i, max=0;
    printf("Enter the numbers: ");
    scanf("%d", &n);
    printf("Enter the element of array: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("max=%d", max);
}
