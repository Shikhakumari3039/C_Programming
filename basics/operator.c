/*
C divides the operators into the following groups:

Arithmetic operators---> +,-,/,*,++,--
Assignment operators--->> =,+=,-=,*=,/=
Comparison operators---> ==, >=<=,>,<
Logical operators--->> &&(and),||(or), !(not)
Bitwise operators--->> 
*/


// we can check the size of variable by using "sizeof()"
#include <stdio.h>
// int main(){
//     double a;
//     int a;
//     float a;
//     printf("%d",sizeof(a));

// int main(){
//     int a,b;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     printf("subtraction is %d",a-b);
// }

/*
    important points
    1) % --> this will give the remainder
    2) /--> this will give quotient
*/

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int s=a%b;
    int t=a/b;
    printf("%d\n,"s);
    printf("%d\n",t);
}