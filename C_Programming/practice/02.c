#include<stdio.h>
// int main(){
//     float num1;
//     double num2;

//     printf("Enter the number:");
//     scanf("%f", &num1);
//     printf("Enter the another number:");
//     scanf("%lf", &num2);

//     printf("num1 = %f\n", num1);
//     printf("num2 = %lf", num2);
    
// }

// int main(){
//     char a;
//     printf("enter the character:");
//     scanf("%c",&a);
//     printf("char=%c",a);
// }

// int main(){
//     int a;
//     float b;
//     printf("Enter the number: ");
//     scanf("%d%f", &a,&b);
//     printf("a = %d\n", a);
//     printf("b = %f", b);
// }
// int main() {
//     int age = 17;
//     printf("Age = %d", age);
// }

// int main(){
//     int age;
//     printf("Enter the age: ");
//     scanf("%d",&age);
//     printf("Age = %d",age);
// }

//int main(){
  //  int age;
    //double height;
   // printf("Enter the age: ");
    //scanf("%d",&age);
   
    //printf("Enter the height: ");
    //scanf("%lf", &height);
    
    //printf("Age = %d", age);
    //printf("\nHeight = %.1lf",height);

//}

// #include<stdio.h>
// int main(){
//     int a=3, b=4, c;

//     c=a+b;
//     printf("a+b =%d\n",c);

//     c=a-b;
//     printf("a-b =%d\n",c);

//     c=a*b; 
//     printf("a*b =%d\n",c);

//     c=a/b;
//     printf("a/b =%d\n",c);

//     c=a%b;
//     printf("Remainder when a divided by b = %d\n",c);

// }

// int main(){
//     int a = 10, b = 12;
//     float c = 10.4, d = 20.4;

//     printf("++a = %d\n",++a);
//     printf("--b = %d\n",--b);
//     printf("++d =%d\n",++c);
//     printf("--c = %d\n",--d);
// }

// int main()
// {
//     int a = 5, c;

//     c = a;      // c is 5
//     printf("c = %d\n", c);
//     c += a;     // c is 10 
//     printf("c = %d\n", c);
//     c -= a;     // c is 5
//     printf("c = %d\n", c);
//     c *= a;     // c is 25
//     printf("c = %d\n", c);
//     c /= a;     // c is 5
//     printf("c = %d\n", c);
//     c %= a;     // c = 0
//     printf("c = %d\n", c);

// }
int main(){
  int n;
  printf("Enter the numbers: ");
  scanf("%d",&n);
  for(int i=2; i<=n/2;i++){
    if(n%i==0){
      printf("%d",n);
    }
    else{
      printf("Not prime %d");
    }
  }
 
}