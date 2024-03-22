// #include <stdio.h>

// void printTillN(int N) {
//     if (N > 0) {
//         printTillN(N - 1);
//         printf("%d ", N);
//     } else {
//         printf("\n");
//     }
// }

// int main() {
//     int N;

//     // You can change N to the desired value
//     N = 5;
    
//     // Calling the function to print numbers from 1 to N
//     printTillN(N);

//     return 0;
// }

#include<stdio.h>
int sum(int n){
    int temp =0;
    int i=0;
    while(i<=n){
        temp =temp+i;
        i++;
    }
    printf("%d\n",temp);
}
 
int even(int n){
    if(n%2==0){
        printf("even\n");
    }
    else{
        printf("odd");
    }
}
// int fun(int n){
//     int a=0;
//     int b=1;
//     int c=0;
//     printf("%d %d", a, b);
//     for(int i=0; i<=n; i++){
//         c=a+b;
//         a=b;
//         b=c;
//         printf("%d ",c);
//     }
// }
int f(int n){
    if(n<=1){
        return n;
    }
    return f(n-1)+ f(n-2);
    
}
int main(){
    int n=10;
    int p;
    // sum(n);
    // even(n);
    // fun(n);
    p=f(n);
    printf("%d",p);

}

