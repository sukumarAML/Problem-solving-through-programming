#include<stdio.h>
int main()
{
    char ch = 'A';
    int x = ch;
    printf("The character is: %c\n", ch);
    printf("The ASCII value is: %d\n", x);
    int n =  ch - '0';
    printf("The numeric value is: %d\n", n);
    return 0;
}
