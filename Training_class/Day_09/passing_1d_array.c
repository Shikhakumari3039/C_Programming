//write a program to passing 1d array into a function
#include<stdio.h>
void display(int a[], int n){
    int i;
    printf("Arrays elements are: ");
    for(i=0; i<n; i++){
        printf("%d", a[i]);
    }
}
int main(){
    int a[100], i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the elements of array: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    display(a,n);             // base array or size
}