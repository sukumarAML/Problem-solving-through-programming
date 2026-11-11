#include <stdio.h>

// Function to count and print the frequency of each element
void countFrequency(int arr[], int n) {
    int visited[n];
    int i, j, count;

    // Initialize all elements as unvisited (0)
    for (i = 0; i < n; i++) {
        visited[i] = 0;
    }

    // Outer loop picks each element one by one
    for (i = 0; i < n; i++) {
        // Skip if this element was already counted
        if (visited[i] == 1) {
            continue;
        }

        count = 1;

        // Inner loop compares arr[i] with remaining elements
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark duplicate as visited
            }
        }

        printf("%d occurs %d time(s)\n", arr[i], count);
    }
}

int main() {
    int arr[] = {10, 20, 10, 30, 20, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    countFrequency(arr, n);

    return 0;
}
