// TOPIC IS FUNCTION
// 1-TYPE = NO ARG AND NO RETURN VALUES
#include<stdio.h>
// void fact();
// void fact(){
//     int n, i, f=1;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     for(i=1; i<=n; i++){
//         f=f*i;
//     }
//     printf("Factorial = %d", f);
// }
// void main(){
//     fact();
// }

// 2-TYPE = WITH ARG AND NO RETURN VALUES
// void fact(int);
// void fact(int n) {
//     int i, f = 1;
//     for (i = 1; i <= n; i++) {
//         f = f * i;
//     }
//     printf("Factorial = %d\n", f);
// }
// int main() {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     fact(n);
//     return 0;
// }

// 3-TYPE = NO ARG AND WITH RETURN VALUES
// int fact();
// int fact() {
//     int i, f = 1, n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++) {
//         f = f * i;
//     }
//     return f;
// }
// void main() {
//     int res= fact();
//     printf("Factorial = %d\n", res);
// }

//4-TYPE = WITH ARG AND WITH RETURN VALUES
// int fact(int);
// int fact(int n) {
//     int i, f = 1;
//     for (i = 1; i <= n; i++) {
//         f = f * i;
//     }
//     return f;
// }
// int main() {
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     printf("Factorial = %d\n", fact(n));
// }

//call by address
int fact(int*);
int fact(int *n) {
    int i, f = 1;
    for (i = 1; i <= *n; i++) {
        f = f * i;
    }
    return f;
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Factorial = %d\n", fact(&n));
}

// call by values
