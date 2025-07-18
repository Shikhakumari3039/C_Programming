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
int main(){
    int a, b, *p, *q, sum;
    printf("Enter the values: ");
    scanf("%d%d", &a, &b);
    p=&a;
    q=&b;
    sum = *p + *q;
    printf("Sum = %d\n", sum);
}


//Bubble sort

//second largest
//to find duplicate or unique element in arry
// binary searching



