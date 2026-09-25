#include <stdio.h>

int main() {
    int dataset[6] = {14, 52, 8, 91, 37, 45};
    
    // Assume the first element is the largest initially
    int max = dataset[0]; 

    printf("All array elements in the dataset:\n");
    for (int i = 0; i < 6; i++) {
        printf("Index %d: %d\n", i, dataset[i]);
    }

    // Loop through the rest of the array to find a larger number
    for (int i = 1; i < 6; i++) {
        if (dataset[i] > max) {
            max = dataset[i]; // Update max if a larger value is found
        }
    }

    printf("The highest value in the array is: %d\n", max);
    return 0;
}
