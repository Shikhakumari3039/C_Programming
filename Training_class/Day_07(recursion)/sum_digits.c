//write a program TO FIND THE SUM ALL DIGITS OF A GIVEN NUMBER
#include<stdio.h>
int sum(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + sum(n / 10);
}
int main() {
    int n;
    printf("Enter the numbers: ");
    scanf("%d", &n);
    sum(n);
    printf("Sum of digits = %d\n", sum(n));
}