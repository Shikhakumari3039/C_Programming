//write a program to reverse sorting array using pointer
#include<stdio.h>
int main() {
    int a[100], n, i, j, temp, *p;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }           
    for(i=0; i<n; i++){
       for (j=i+1; j<n; j++){
        if(*(a+i)>*(a+j)){
            temp = *(a+i);
            *(a+i) = *(a+j);
            *(a+j) = temp;
        }
       } 
    }
    printf("Sorting Order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", *(a+i)); 
    }
}