// write a program to check a given number is armstrong number.
#include <stdio.h>
#include <math.h>
int main() {
    int n, count = 0, rem, sum = 0, temp;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp = n;
    int tempCount = n;
    while (tempCount != 0) {
        tempCount = tempCount / 10;
        count++;
    }
    n = temp;
    while (n != 0) {
        rem = n % 10;
        sum += pow(rem, count);
        n = n / 10;
    }
    if (sum == temp) {
        printf("Armstrong Number\n");
    } else {
        printf("Not an Armstrong Number\n");
    }
}
