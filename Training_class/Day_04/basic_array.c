//TOPIC IS ARRAY 
#include<stdio.h>
int main(){
    int a[100], n, i;
    printf("Enter the number of any elements:");
    scanf("%d", &n);
    printf("Enter the element of array: ");
    for(i=0; i<n; i++){
         scanf("%d", &a[i]);

    }
    printf("Display the element of array: ");
    for(i=0; i<n; i++){
         printf("%d\t", &a[i]);

    }
}