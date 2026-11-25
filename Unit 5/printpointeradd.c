#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num;

    // 1. Print the address stored inside the pointer (address of 'num')
    printf("Address stored in ptr: %p\n", (void*)ptr);

    // 2. Print the address of the pointer variable itself
    printf("Address of ptr itself: %p\n", (void*)&ptr);

    return 0;
}
