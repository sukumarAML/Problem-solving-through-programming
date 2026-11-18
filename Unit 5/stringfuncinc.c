#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char copyStr[100];
    char boundedStr[100];
    char sentence[] = "C,Programming,Is,Powerful";

    // 1. strlen() - Find the length of a string (excluding '\0')
    printf("1. strlen(str1): %zu\n", strlen(str1));

    // 2. strcpy() - Copy one string completely into another
    strcpy(copyStr, str1);
    printf("2. strcpy(copyStr, str1): %s\n", copyStr);

    // 3. strncpy() - Copy a specific number of characters safely
    strncpy(boundedStr, str2, 3);
    boundedStr[3] = '\0'; // Manually add null terminator
    printf("3. strncpy(boundedStr, str2, 3): %s\n", boundedStr);

    // 4. strcat() - Join (concatenate) str2 onto the end of str1
    strcat(str1, " ");
    strcat(str1, str2);
    printf("4. strcat(str1, \" World\"): %s\n", str1);

    // 5. strncat() - Append a specific number of characters
    strncat(copyStr, " Everyone!", 6);
    printf("5. strncat(copyStr, \" Everyone!\", 6): %s\n", copyStr);

    // 6. strcmp() - Compare two strings (0 means identical)
    int cmpResult = strcmp("Apple", "Banana");
    printf("6. strcmp(\"Apple\", \"Banana\"): %d (negative means Apple < Banana)\n", cmpResult);

    // 7. strncmp() - Compare the first 'n' characters of two strings
    int nCmpResult = strncmp("Programming", "Program", 7);
    printf("7. strncmp(\"Programming\", \"Program\", 7): %d (0 means match)\n", nCmpResult);

    // 8. strchr() - Find the first occurrence of a character
    char *firstO = strchr(str1, 'o');
    if (firstO != NULL) {
        printf("8. strchr(str1, 'o'): Found starting at \"%s\"\n", firstO);
    }

    // 9. strrchr() - Find the last occurrence of a character
    char *lastO = strrchr(str1, 'o');
    if (lastO != NULL) {
        printf("9. strrchr(str1, 'o'): Found starting at \"%s\"\n", lastO);
    }

    // 10. strstr() - Find a substring inside a larger string
    char *sub = strstr(str1, "World");
    if (sub != NULL) {
        printf("10. strstr(str1, \"World\"): Found \"%s\"\n", sub);
    }

    // 11. strspn() & strcspn() - Measure matching or non-matching prefix lengths
    printf("11a. strspn(\"12345abc\", \"0123456789\"): %zu leading digits\n", strspn("12345abc", "0123456789"));
    printf("11b. strcspn(\"abc123\", \"0123456789\"): %zu characters before first digit\n", strcspn("abc123", "0123456789"));

    // 12. strtok() - Split a string into tokens using a delimiter
    printf("12. strtok(sentence, \",\"): ");
    char *token = strtok(sentence, ",");
    while (token != NULL) {
        printf("[%s] ", token);
        token = strtok(NULL, ",");
    }
    printf("\n");

    return 0;
}






// strlen()	Returns the number of characters before \0.
// strcpy() / strncpy()	Copies a source string into a destination buffer.
// strcat() / strncat()	Appends one string onto the end of another.
// strcmp() / strncmp()	Compares two strings alphabetically (0 = equal).
// strchr() / strrchr()	Searches for the first or last occurrence of a single character.
// strstr()	Searches for the first occurrence of a substring.
// strspn() / strcspn()	Counts initial characters matching or excluding a character set.
// strtok()	Breaks a string into smaller tokens based on delimiters.
