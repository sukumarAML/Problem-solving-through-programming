#include <stdio.h>
#include <string.h>

// Recursive function to check palindrome (returns 1 if true, 0 if false)
int isPalindromeRecursive(char str[], int left, int right) {
    // Base case: pointers have met or crossed
    if (left >= right) {
        return 1;
    }

    // Mismatch found
    if (str[left] != str[right]) {
        return 0;
    }

    // Move inward and check the remaining substring
    return isPalindromeRecursive(str, left + 1, right - 1);
}

// Iterative function to check palindrome (returns 1 if true, 0 if false)
int isPalindromeIterative(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // Mismatch found
        }
        left++;
        right--;
    }

    return 1; // All character pairs matched
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    int len = strlen(str);

    printf("\n--- Recursive Check ---\n");
    if (isPalindromeRecursive(str, 0, len - 1)) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    printf("\n--- Iterative Check ---\n");
    if (isPalindromeIterative(str)) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
