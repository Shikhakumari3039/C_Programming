#include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);

//     if(n<0){
//         printf("%d\n",n);
//     }
//     printf("Display");
// }

// int main(){
//     int a;
//     printf("Enter the number: ");
//     scanf("%d",&a);
//     if(a%2==0){
//         printf("Even");
//     }
//     else{
//         printf("Not Even");
//     }
// }

int main(){
    int a, b;
    printf("Enter the number: ");
    scanf("%d %d", &a,&b);
    if (a=b) {
        printf("%d = %d", a, b);
    }
    else if (a>b) { 
        printf("%d > %d", a, b);
    }
    else {
        printf("%d < %d", a, b);
    }
}