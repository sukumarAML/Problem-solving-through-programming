#include <stdio.h>

// Function to concatenate s2 at the end of s1 using for loops only
void mergeStrings(char s1[], char s2[], char result[]) {
    int i, j;

    // Copy characters of s1 into result
    for (i = 0; s1[i] != '\0'; i++) {
        result[i] = s1[i];
    }

    // Append characters of s2 starting from the end of s1
    for (j = 0; s2[j] != '\0'; j++) {
        result[i + j] = s2[j];
    }

    // Terminate the merged string with a null character
    result[i + j] = '\0';
}

int main() {
    char str1[] = "Hello, ";
    char str2[] = "World!";
    char merged[50]; // Ensure sufficient buffer size

    mergeStrings(str1, str2, merged);

    printf("Merged String: %s\n", merged);

    return 0;
}
