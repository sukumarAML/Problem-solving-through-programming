#include <stdio.h>

int main()
{
    int n, prime;

    printf("Enter a number: ");
    scanf("%d", &n);

    /* Even or Odd */
    printf("%d is %s\n", n, (n % 2 == 0) ? "Even" : "Odd");

    /* Prime or Not Prime */
    prime = (n >= 2 && (n == 2 || n == 3 || n == 5 || n == 7 ||(n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0))) ? 1 : 0;

    printf("%d is %s\n", n, prime ? "Prime" : "Not Prime");
    
    return 0;
}