//write a program to solve a problem tower of hanoi using recursive function.
// using scanner ya from user
#include <stdio.h>

// void towerOfHanoi(int n, char source, char auxiliary, char destination) {
//     if (n == 1) {
//         printf("Move disk 1 from %c to %c\n", source, destination);
//         return;
//     }
//     towerOfHanoi(n - 1, source, destination, auxiliary);
//     printf("Move disk %d from %c to %c\n", n, source, destination);
//     towerOfHanoi(n - 1, auxiliary, source, destination);
// }
// int main() {
//     int n;
//     printf("Enter number of disks: ");
//     scanf("%d", &n);
//     printf("Steps to solve Tower of Hanoi for %d disks:\n", n);
//     towerOfHanoi(n, 'A', 'B', 'C');             // A = source, B = auxiliary, C = destination
// }

void hanoi(int n, char from, char to, char via){
    if(n==1){
        printf("Move disk 1 from %c to %c\n", from, to);
    }
    else{
        hanoi(n-1, from, via, to);
        printf("Move disk %d from %c to %c\n", n, from, to);
        hanoi(n-1, via, to, from);
    }
}
int main(){
    int n=3;
    char from='A';
    char via='B';
    char to='C';
    hanoi(n, from, via, to);
}