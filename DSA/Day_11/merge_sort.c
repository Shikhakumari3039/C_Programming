//write a program to merge two array in single sorted array
#include <stdio.h>
void mergeAndSort(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i, j, k;
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }
    int size = n1 + n2;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (merged[j] > merged[j + 1]) {
                int temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }
}
int main() {
    int arr1[50], arr2[50], merged[100];
    int n1, n2, i;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    mergeAndSort(arr1, n1, arr2, n2, merged);
    printf("Merged and Sorted Array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
}
