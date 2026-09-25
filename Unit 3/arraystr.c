#include <stdio.h>

int main() {
    // Declaration and initialization
    // The compiler automatically sizes this array to 6 elements: 'H','e','l','l','o','\0'
    char greeting[] = "Hello"; 

    //print all the characters in the string using a loop
    printf("All array elements in string:\n");
    for (int i = 0; i < 5; i++) {
        printf("Index %d: %c\n", i, greeting[i]);
    }
    
    // Accessing individual characters using indices
    printf("First character: %c\n", greeting[0]); // Outputs: H
    
    // Modifying a specific character
    greeting[0] = 'J'; // Changes "Hello" to "Jello"
    
    // Printing the full string using the %s format specifier
    printf("Modified string: %s\n", greeting); 
    
    return 0;
}
