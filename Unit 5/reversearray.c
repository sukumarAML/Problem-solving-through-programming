#include <stdio.h>

// Function to print the array with index and value in reverse order
void printReverse(int arr[], int size) {
    int i;
    for (i = size - 1; i >= 0; i--) {
        printf("Index %d: %d\n", i, arr[i]);
    }
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers);

    printf("Array in reverse order:\n");
    printReverse(numbers, size);

    return 0;
}
