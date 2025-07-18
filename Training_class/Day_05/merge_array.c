// write a program to merge two array then display in sorting array.
#include <stdio.h>
int main() {
    int a1[100], a2[100], merged[200];
    int n1, n2, i, j, temp;
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &a1[i]);
    }
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &a2[i]);
    }
    for(i = 0; i < n1; i++) {
        merged[i] = a1[i];
    }
    for(j = 0; j < n2; j++) {
        merged[i + j] = a2[j];
    }
    int total = n1 + n2;
    for(i = 0; i < total - 1; i++) {
        for(j = 0; j < total - i - 1; j++) {
            if(merged[j] > merged[j + 1]) {
                temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }
    printf("Sorted Merged Array:\n");
    for(i = 0; i < total; i++) {
        printf("%d ", merged[i]);
    }
}
