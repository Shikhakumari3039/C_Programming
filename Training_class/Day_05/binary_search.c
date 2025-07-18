// write a program to find BINARY SEARCH
#include<stdio.h>
int main(){
    int a[100], first=0, last, j, temp, mid, n, ser=4, i;
    printf("Enter the numbers: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    mid=(first + last)/2;
    last=n-1;
    while (first <= last){
        if(a[mid]< ser){
            first = mid+1;
        }
        else if(a[mid]== ser){
            printf("Element found =%d", ser);
            break;
        }
        else{
            last =mid-1;
        }
        mid = (first+last)/2;
    }
    if(first >last){
        printf("Element not found");
    }
}
