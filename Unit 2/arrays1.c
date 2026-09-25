#include <stdio.h>

int main() {
    // Declare and initialize an integer array of size 5
    int arr[5] = {10, 20, 30, 40, 50};

    // 1. Accessing individual elements
    printf("The first element (index 0) is: %d\n", arr[0]); // Outputs 10
    printf("The third element (index 2) is: %d\n\n", arr[2]); // Outputs 30

    // 2. Updating an element
    //arr[1] = 95; // Changes 20 to 95 at index 1

    // 3. Traversing the array using a loop
    printf("All array elements after update:\n");
    for (int i = 0; i < 5; i++) {
        printf("Index %d: %d\n", i, arr[i]);
    }

    return 0;
}
