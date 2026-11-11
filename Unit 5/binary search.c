#include <stdio.h>

// Recursive Binary Search
int binarySearchRecursive(int arr[], int low, int high, int target, int *recCalls) {
    (*recCalls)++; // Increment counter on every function call

    if (low > high) {
        return -1; // Base case: target not found
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] > target) {
        return binarySearchRecursive(arr, low, mid - 1, target, recCalls);
    } else {
        return binarySearchRecursive(arr, mid + 1, high, target, recCalls);
    }
}

// Iterative Binary Search
int binarySearchIterative(int arr[], int n, int target, int *iterCount) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        (*iterCount)++; // Increment counter on every loop iteration
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; // Target not found
}

int main() {
    int arr[] = {5, 12, 19, 24, 31, 45, 58, 67, 73, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    int recCalls = 0;
    int iterCount = 0;

    printf("Array Elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Index %d -> %d\n", i, arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Run Recursive Search
    int recResult = binarySearchRecursive(arr, 0, n - 1, target, &recCalls);

    // Run Iterative Search
    int iterResult = binarySearchIterative(arr, n, target, &iterCount);

    printf("\n--- Recursive Binary Search ---\n");
    if (recResult != -1) {
        printf("Element %d found at index %d.\n", target, recResult);
    } else {
        printf("Element %d not found.\n", target);
    }
    printf("Total recursive calls made: %d\n", recCalls);

    printf("\n--- Iterative Binary Search ---\n");
    if (iterResult != -1) {
        printf("Element %d found at index %d.\n", target, iterResult);
    } else {
        printf("Element %d not found.\n", target);
    }
    printf("Total iterations made: %d\n", iterCount);

    return 0;
}