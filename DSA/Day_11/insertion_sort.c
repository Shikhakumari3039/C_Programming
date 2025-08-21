//write a program to insertion sort

#include <stdio.h>
void insertionSort(int arr[], int n) {
    int temp, j;
    for (int i = 1; i < n; i++) {   // Start from 1
        temp = arr[i];              // Current element to insert
        j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
int main() {
    int arr[] = {13, 7, 12, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // print value, not address
    }

}
