// switch case is use for same purpose as if-else.


#include<stdio.h>
// int main(){
//    int a;
//    scanf("%d",&a);
//    switch(a)
//    {
//     case 1:
//     printf("Monday");
//     break;
//     case 2:
//     printf("Tuesday");
//     break;
//     case 3:
//     printf("Wednesday");
//     break;
//     case 4:
//     printf("Thursday");
//     break;
//     case 5:
//     printf("Friday");
//     break;
//     case 6:
//     printf("Saturday");
//     break;
//     case 7 :
//     printf("Sunday");
//     break;
//     default:
//     printf("invaild day");
//    }
// }

int main(){
    int a,b;
    char c;
    printf("Enter the number");
    scanf("%d %d",&a,&b);
    scanf(" %c",&c);
    switch(c){
        case '+':
        printf("sum is %d",a+b);
        break;
        case '-':
        printf("sub is %d",a-b);
        break;
        case '*':
        printf("mul is %d",a*b);
        break;
        case '/':
        printf("div is %d",a/b);
        break;
        default:
        printf("Error");
    }
}