// TOPIC IS LINER SEARCH
// BINARY SEARCH
#include<stdio.h>
// int main(){
//     int a[100], first=0, last, j, temp, mid, n, ser=4, i;
//     printf("Enter the numbers: ");
//     scanf("%d", &n);
//     printf("Enter the elements:\n");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }
//     mid=(first + last)/2;
//     last=n-1;
//     while (first <= last){
//         if(a[mid]< ser){
//             first = mid+1;
//         }
//         else if(a[mid]== ser){
//             printf("Element found =%d", ser);
//             break;
//         }
//         else{
//             last =mid-1;
//         }
//         mid = (first+last)/2;
//     }
//     if(first >last){
//         printf("Element not found");
//     }
// }

// ARRAY USING POINTER

// int main(){
//     int a[5], i, *p;
//     printf("Enter the elemnt of array: ");
//     for(i=0; i<5; i++){
//         scanf("%d", &a[i]);
//         p[i] = &a[i];
//     }
//     printf("Display the element of array\n");
//     for(i=0; i<5; i++){
//         printf("%d\t", *p[i]);
//     }

// }

// int main(){
//     int a[5], i, *p;
//     printf("Enter the elemnt of array: ");
//     for(i=0; i<5; i++){
//         scanf("%d", &a[i]);
//     }
//     p=a;
//     printf("Display the element of array\n");
//     for(i=0; i<5; i++){
//         printf("%d\t", *p);
//     }
// }
// int main(){
//     int a[5], i, *p[5];
//     printf("Enter the elemnt of array: ");
//     for(i=0; i<5; i++){
//         scanf("%d", &a[i]);
//         p[i] = &a[i];
//     }
//     printf("Display the element of array\n");
//     for(i=0; i<5; i++){
//         printf("%d\t", *p++);
//     }

// }
// int main(){
//     int a[5], i, *p[5];
//     printf("Enter the elemnt of array: ");
//     for(i=0; i<5; i++){
//         scanf("%d", &a[i]);
//         p[i] = &a[i];
//     }
//     printf("Display the element of array\n");
//     for(i=0; i<5; i++){
//         printf("%d\t", *(p+i));
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

// // OR

// // sorting using pointer
// int main() {
//     int a[100], n, i, j, temp, *p;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }           
//     for(i=0; i<n; i++){
//        for (j=i+1; j<n; j++){
//         if(*(a+i)>*(a+j)){
//             temp = *(a+i);
//             *(a+i) = *(a+j);
//             *(a+j) = temp;
//         }
//        } 
//     }
//     printf("Sorting Order:\n");
//     for(i = 0; i < n; i++) {
//         printf("%d ", *(a+i)); 
//     }
// }

// LINEAR SEARCH USING POINTER
// int main(){
//     int a[100], n, i, flag=0, *p, ser;
//     printf("Enter the elements: ");
//     scanf("%d", &n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter the element to search: ");
//     scanf("%d", &ser);
//     p=a;
//     for(i = 0; i < n; i++) {
//         if(*(p + i) == ser) {
//             flag = 1;
//             break;
//         }
//     }
//     if(flag == 1) {
//         printf("Element %d found %d\n", ser, i + 1);
//     } else {
//         printf("Element %d not found in the array.\n", ser);
//     }
// }

// write a program to merge two array then display in sorting array
// int main(){
//     int a1[100], a2[100], n, i,j, merged;
//     printf("Enter the elements: ");
//     scanf("%d", &n);
//     for(i=0; i<i; i++){
//         merged[i]= a1[i];
//     }
//     for(i=0;)

// }