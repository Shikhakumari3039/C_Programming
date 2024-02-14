#include<stdio.h>
// void table(int a){
//     int i=1;
//     for(int i=1; i<=10; i++){
//         printf("%d * %d = %d\n", a,i,a*i);

//     }
// }

 
//  int main(){
//     int n;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     table(n);
//  }

void sum(int c, int d){
    int temp=0;
    while(c<=d){
        temp=temp+c;
        c++;
    }
    printf("sum is %d", temp);
}

int main(){
    int a, b;
    printf("Enter the number:");
    scanf("%d %d", &a, &b);
    sum(a,b);
}
