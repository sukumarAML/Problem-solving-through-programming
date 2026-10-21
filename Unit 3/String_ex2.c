#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
system("clear");
char str1[20] = "Hello ";
char str2[] = "World!";

// Concatenate str2 to str1 (result is stored in str1)
strcat(str1, str2);

// Print str1
printf("the concatinated string is:  %s\n", str1);

char str3[20] = "Hello ";
char str4[20];
strcpy(str4, str3); // Copy Str3 to str4
printf("the copied string is:   %s\n", str4);


char str5[] = "Hello";
char str6[] = "Hello";
char str7[] = "Hi";

// Compare str5 and str6, and print the result
printf("%d\n", strcmp(str5, str6));  // Returns 0 (the strings are equal)

// Compare str5 and str7, and print the result
printf("%d\n", strcmp(str5, str7));  // Returns -4 (the strings are not equal)

return 0;
}