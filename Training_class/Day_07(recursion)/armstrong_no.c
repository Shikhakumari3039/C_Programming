//Write a program TO PRINT THE SERIES OF ARMSTRONg NUMBER USING RECURSION
#include <stdio.h>
#include <math.h>
int main() {
    int num, n, rem, sum, temp, count;
    printf("Enter the upper limit: ");
    scanf("%d", &n);
    printf("Armstrong numbers up to %d are:\n", n);
    for (num = 1; num <= n; num++) {
        temp = num;
        count = 0;
        sum = 0;
        while (temp != 0) {
            count++;
            temp = temp / 10;
        }
        temp = num;
        while (temp != 0) {
            rem = temp % 10;
            sum += pow(rem, count);
            temp = temp / 10;
        }

        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
