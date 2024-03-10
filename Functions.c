#include <stdio.h>
#include <stdlib.h>


void bubbleSort(int arr[], int n);

int main() {
    int arr[7] = {67, 59, 29, 12, 20, 100, 58};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
