// 

#include <stdio.h>

void reverse_string(char *str) {
    // Handle NULL or empty string to prevent undefined behavior
    if (str == NULL || *str == '\0') {
        return;
    }

    // Manually calculate string length without using strlen()
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    int left = 0;
    int right = length - 1;
    char temp = '\0';

    // Swap characters from both ends moving inward
    while (left < right) {
        // Fixed: Use %c instead of %s to print individual characters
        printf("Before swap -> left: %d ('%c'), right: %d ('%c')\n", 
               left, str[left], right, str[right]);

        temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }

    printf("\n--- Final Variable Values ---\n");
    printf("Last temp: '%c'\n", temp);
    printf("Final left: %d\n", left);
    printf("Final right: %d\n\n", right);
}

int main(void) {
    // Declared as a modifiable character array
    char my_string[] = "Hello, World!";
    
    printf("Original: %s\n\n", my_string);
    
    reverse_string(my_string);
    
    printf("Reversed: %s\n", my_string);
    
    return 0;
}
