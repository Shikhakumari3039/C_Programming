//TOPIC IS POINTERS
// basic pointer

#include<stdio.h>
// int main(){
//     int a=10, *p, **q;
//     printf("Enter the value of a =%d\n", a );
//     printf("Address of a =%u\n", &a);
//     p=&a;
//     printf("Value of p= %u\n", p);
//     printf("value of a though p=%d\n", *p);
//     printf("Address of p= %u\n ", &p);
//     q=&p;
//     printf("Value of q= %u\n", q);
//     printf("value of a though q=%u\n", *q);
//     printf("value of a though a=%u\n", **q);
//     printf("Address of q= %u\n ", &q);
//  }

// write a program to add two number using pointer
// int main(){
//     int a, b, *p, *q, sum;
//     printf("Enter the values: ");
//     scanf("%d%d", &a, &b);
//     p=&a;
//     q=&b;
//     sum = *p + *q;
//     printf("Sum = %d\n", sum);
// }

// TOPIC IS ARRAY 
// int main(){
//     int a[100], n, i;
//     printf("Enter the number of any elements:");
//     scanf("%d", &n);
//     printf("Enter the element of array: ");
//     for(i=0; i<n; i++){
//          scanf("%d", &a[i]);

//     }
//     printf("Display the element of array: ");
//     for(i=0; i<n; i++){
//          printf("%d\t", &a[i]);

//     }
// }

// write a program to find max element in array
// int main(){
//     int a[10], n, i, max=0;
//     printf("Enter the numbers: ");
//     scanf("%d", &n);
//     printf("Enter the element of array: ");
//     for(i=0; i<n; i++){
//         scanf("%d", &a[i]);
//     }
//     for(i=0; i<n; i++){
//         if(max<a[i]){
//             max=a[i];
//         }
//     }
//     printf("max=%d", max);
// }

// write a program to reverse an array 
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

// write a program to reverse a array using pointer
// int main() {
//     int a[100], n, i, temp;
//     int *p, *q;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     printf("Enter the elements:\n");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }
//     p = a;            
//     q = a + n - 1;    
//     while(p < q) {
//         temp = *p;
//         *p = *q;
//         *q = temp;

//         p++;
//         q--;
//     }
//     printf("Reversed array:\n");
//     for(i = 0; i < n; i++) {
//         printf("%d ", a[i]);
//     }
// }

// sorting array, acesending , desecding,
int main(){
    int a[100], n, i, j, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    } 
    for(i=0; i<n; i++){
       for (j=i+1; j<n; j++){
        if(a[i]>a[j]){
            temp= a[i];
            a[i] = a[j];
            a[j]= temp;
        }
       } 
    }
    printf("\nSorted in Ascending Order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", (a[i])); 
    }
}

//Bubble sort

//second largest
//to find duplicate or unique element in arry
// binary searching



