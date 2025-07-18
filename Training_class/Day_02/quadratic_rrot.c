//write a program to fing the roots of quadratic equation.

#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c, x1, x2, d;
    printf("Enter the number:");
    scanf("%f%f%f", &a,&b,&c);
    d=b*b-4*a*c;
    if(d==0){
        printf("roots are real and equal\n");
        x1=-b/(2*a);
        x2=x1;
        printf("Root1=%f\n",x1);
        printf("Root= %f\n",x2);

    }
    else if(d>0){
        printf("roots are real and distinct");
        x1=(-b+sqrt(d)/(2*a));
        x2=(-b-sqrt(d)/(2*a));
        printf("Root1=%f\n",x1);
        printf("Root2= %f\n",x2);
    }
    else{
        printf("roots are imaginary ");
    }

}