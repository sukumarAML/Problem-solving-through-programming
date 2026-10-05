#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    // 1. Create a pointer pointing to the first element of the array
    int *ptr = arr; 

    // 2. Create a pointer to the entire array (advanced)
    int (*arr_ptr)[5] = &arr;

    printf("--- Using the Array Name ---\n");
    // The array name 'arr' automatically points to &arr[0]
    printf("Address using array name (arr)     : %p\n", (void*)arr);
    printf("Address of the first element (&arr[0]): %p\n", (void*)&arr[0]);

    printf("\n--- Using a Pointer Variable ---\n");
    // Printing the address stored in our pointer variable
    printf("Address stored in 'ptr'            : %p\n", (void*)ptr);
    printf("Address of the next element (ptr+1): %p\n", (void*)(ptr + 1)); // Moves by sizeof(int)

    printf("\n--- Using a Pointer to the Entire Array ---\n");
    // This points to the memory block of the entire array
    printf("Address using array pointer (&arr) : %p\n", (void*)arr_ptr);

    return 0;
}
