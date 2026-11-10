#include <stdio.h>
#include <string.h>

void reverse_string(char *str) {
    // Handle NULL or empty string to prevent undefined behavior
    if (str == NULL || *str == '\0') {
        return;
    }

    int left = 0;
    int right = strlen(str) - 1;
    char temp;

    // Swap characters from both ends moving inward
    while (left < right) {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main(void) {
    // String must be declared as a modifiable character array, 
    // NOT a string literal pointer (e.g., char *str = "Hello"), 
    // which resides in read-only memory.
    char my_string[] = "Hello, World!";
    
    printf("Original: %s\n", my_string);
    
    reverse_string(my_string);
    
    printf("Reversed: %s\n", my_string);
    
    return 0;
}
