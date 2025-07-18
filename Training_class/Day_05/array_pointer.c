// ARRAY USING POINTER
#include<stdio.h>
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
int main(){
    int a[5], i, *p[5];
    printf("Enter the elemnt of array: ");
    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
        p[i] = &a[i];
    }
    printf("Display the element of array\n");
    for(i=0; i<5; i++){
        printf("%d\t", *(p+i));
    }

}