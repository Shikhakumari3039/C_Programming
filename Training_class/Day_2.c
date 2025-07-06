// write a program 3 digits number reversing

#include<stdio.h>
// int main(){
//     int a, d1, d2, d3, rev;
//     printf("Enter the number:");
//     scanf("%d",&a);
//     d1=a%10;
//     d2=(a/10)%10;
//     d3=a/100;
//     rev = d1*100 + d2*10 + d3*1;
//     printf("rev = %d ", rev);
// }

//find the greater b/w 3 number without using conditional operat

// #include<stdlib.h>
// int main() {
//     int a, b,c, max, max_ab;
//     printf("Enter the number:");
//     scanf("%d%d%d",&a,&b,&c);
//     max_ab=(a+b+abs(a-b))/2;
//     max=(max_ab+c+abs(max_ab-c))/2;
//     printf("max number=%d",max);
// }

//write a program to check the leap year

// int main(){
//     int a;
//     printf("Enter the year:");
//     scanf("%d",&a);
//     if(a%4==0){
//         if(a%100==0){
//             if(a%400==0){
//                 printf("leap year");
//             } else{
//                 printf("not leap year");
//             }
//         } else{
//             printf("leap year");
//         }
//     } else{
//     printf("not leap year");
//     }
// }
// int main(){
//     int a;
//     printf("Enter the year:");
//     scanf("%d",&a);
//     if(a%4==0 || a%100==0 || a%400==0){
//         printf("leap year");
//     } else{
//     printf("not leap year");
//     }
// }

//write a program to fing the roots of quadratic equa.
// #include<math.h>
// int main(){
//     int a, b, c, x1, x2, d;
//     printf("Enter the number:");
//     scanf("%f%f%f", &a,&b,&c);
//     d=b*b-4*a*c;
//     if(d==0){
//         printf("roots are real and equal\n");
//         x1=-b/(2*a);
//         x2=x1;
//         printf("Root1=%f\n",x1);
//         printf("Root= %f\n",x2);

//     }
//     else if(d>0){
//         printf("roots are real and distinct");
//         x1=(-b+sqrt(d)/(2*a));
//         x2=(-b-sqrt(d)/(2*a));
//         printf("Root1=%f\n",x1);
//         printf("Root2= %f\n",x2);
//     }
//     else{
//         printf("roots are imaginary ");
//     }

// }

// write a program to check either to pass or fail
//  int main(){
//     float s1, s2, s3, s4,s5, count=0;
//     printf("Enter the marks:");
//     scanf("%f%f%f%f%f", &s1, &s2, &s3, &s4, &s5);
//     if(s1>33)
//         count++;
//         if(s2<33)
//             count++;
//             if(s3<33)
//                 count++;
//                 if(s4<33)
//                     count++;
//                     if(s4<33)
//                         count++;
//                         if(count==0)
//                             printf("pass");
//                             else if(count==1)
//                             printf("supply");
//                             else
//                             printf("fail");
// }    

// write aprogram to check scalene, isosceles triangle , equilateral triangle.

// int main(){
//     int a, b, c;
//     printf("Enter the sides:");
//     scanf("%d%d%d", &a, &b, &c);

//     if(a == b&& b== c&& a==c){
//         printf("equilateral triangle");
//     }
//     else if(a ==b&& a==c|| b!=c){
//         printf("isosceles triangle");
//     }
//     else{
//         printf("scalene triagle");
//     }
// }

//to check the number even or odd

// int main(){
//     int a, b,c;
//     printf("Enter the number:");
//     scanf("%d%d%d",&a,&b,&c);
    
//     switch(a>b){
//         case 1:
//         switch (a>c){
//         case 1:
//         printf("A is greater");
//         break;
//         case 0:
//         printf("C is greater");
//         break;
//         }
//     break;
//     case 0:
//     switch (b>c){
//     case 1:
//     printf("B is greater");
//     break;
//     case 0:
//     printf("C is greater");
//     break;
//      }
//   }
// }

// write menu driven programming 
void main(){
    int choice;
    float a,b;
    printf("Press 1 for addition !!!\n");
    printf("Press 2 for subtraction !!!\n");
    printf("Press 3 for multiplication !!!\n");
    printf("Press 4 for division !!!\n");
    printf("Enter your choice");
    scanf("%d",&choice);

    switch(choice){
        case :1
        printf("Enter the value of a and b");
        scanf("%f%f", &a, &b);
        printf("sum=%f",a+b);
        break;
        case :2
        printf("Enter the value of a and b");
        scanf("%f%f", &a, &b);
        printf("sub=%f",a-b);
        break;
        case :3
        printf("Enter the value of a and b");
        scanf("%f%f", &a, &b);
        printf("mul=%f",a*b);
        break;
        case :4
        printf("Enter the value of a and b");
        scanf("%f%f", &a, &b);
        printf("div=%f",a/b);
        break;
        default:
        printf("Invaild");
    }
}
