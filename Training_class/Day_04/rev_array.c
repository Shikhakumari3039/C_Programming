//write a program to reverse an array 

#include<stdio.h>
// int main(){
//     int a[100], n, i, swap=0, f, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     printf("Enter the element of array:\n ");
//     for(i=0; i<n; i++){
//         scanf("%d",&a[i]);
//     }
//     for(i=0; i<n/2; i++){
//     swap=a[i];
//     a[i]=a[n-1-i];
//     a[n-1-i]=swap;
//     }
//      printf("Reversed array:\n");
//     for(i = 0; i < n; i++) {
//         printf("%d ", a[i]);
//     }
// }

//write a program to reverse a array using pointer
int main() {
    int a[100], n, i, temp;
    int *p, *q;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    p = a;            
    q = a + n - 1;    
    while(p < q) {
        temp = *p;
        *p = *q;
        *q = temp;
        p++;
        q--;
    }
    printf("Reversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

