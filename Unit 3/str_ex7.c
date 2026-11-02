#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "abcdef";

    str1[0] = 'X';
    // str1++; // This line increments the pointer str1 to point to the next character in the array.

    printf("str1: %s \n:", str1);
    
    //str1 = "New String";

    char *str2 = "abcdef";

   // str2[0] = 'X'; // This line will cause a compilation error because str2 points to a string literal, which is read-only.
   
    str2++; // This line increments the pointer str2 to point to the next character in the string literal.
    
    printf("str2: %s \n", str2);

    const char *str2 = "New String";

    printf("str2: %s \n", str2);
    return 0;

    

}