#include <stdio.h>

void pushZerosToEnd(int arr[], int n) {
    int j = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
}

// Utility function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Example usage
int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    pushZerosToEnd(arr, n);

    printf("Array after pushing zeros to end: ");
    printArray(arr, n);

    return 0;
}
