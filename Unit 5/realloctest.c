#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int i;

    // Initial allocation for 3 integers
    arr = (int*) malloc(3 * sizeof(int));

    if (arr == NULL) {
        printf("Initial memory allocation failed.\n");
        return 1;
    }

    // Assign initial values
    for (i = 0; i < 3; i++) {
        arr[i] = (i + 1) * 10;
    }

    // Resize memory to hold 5 integers
    arr = (int*) realloc(arr, 5 * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    // Assign values to new elements
    arr[3] = 40;
    arr[4] = 50;

    // Print all values
    for (i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr); // Free memory
    return 0;
}