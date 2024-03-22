#include<stdio.h>
// int main(){
//     short a;
//     long b;
//     long long c;
//     long double d;

//     printf("sizee of short = %hd\n",sizeof(a));
//     printf("size of long = %1d\n",sizeof(b));
//     printf("size of long long = %11d\n",sizeof(c));
//     printf("size of long double = %Lf",sizeof(d));
// }

// int main(){
//     printf("C Programming");
// }

// int main(){
//     int a = 6;
//     printf("Number = %d", a);
// }

// int main (){
//     float a = 12.4;
//     double b = 11.5;
//     printf("a=%f\n",a);
//     printf("b=%1f\n",b);
// }

// int main(){
//     char ch = 'a';
//     printf("char = %c", ch);
// }

// int main(){
//     int a;
//     printf("Enter the number");
//     scanf("%d",&a);
//     printf("number = %d",a);
// }

// int main(){
//     int a, b,c;
//     scanf("%d%d%d",&a, &b, &c);
//     if((a+b)>c){
//         printf("Acute");
//     }
//     else{
//         printf("Not Acute");
//     }
// }

// int main(){
//     int a,b,c;
//     printf("Enter the numbers: ");
//     scanf("%d%d%d",&a, &b, &c);
//     if(a<=b){
//         if(a<=c){
//             printf("%d",a);
//         }
//         else{
//             printf("%d",c);
//         }
//     }
//     else{
//         if(b<=c){
//             printf("%d",b);
//         }
//         else{
//             printf("%d",c);
//         }
//     }
// }
    
// int main ()   { 
// 		int a; 
//         printf("Enter the number: ");
//     scanf("%d",&a);
//     if(a%6==0){
//         if(a%4==0){
//             printf("%d is divisible by 6 and 4\n",a);
//         }
//     }
// }
int main(){
    int a, s;
    s=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    while(!(a==-1)){
        s=s+a;
        scanf("%d",&a);
    }
}
