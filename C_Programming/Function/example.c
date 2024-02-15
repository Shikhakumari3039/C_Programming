#include <stdio.h>

void printTillN(int N) {
    if (N > 0) {
        printTillN(N - 1);
        printf("%d ", N);
    } else {
        printf("\n");
    }
}

int main() {
    int N;

    // You can change N to the desired value
    N = 5;
    
    // Calling the function to print numbers from 1 to N
    printTillN(N);

    return 0;
}

