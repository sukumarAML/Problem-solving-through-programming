#include<stdio.h>
int main()
{
int n;
printf ("Enter a number to check whether it is even or odd:");
scanf("%d", &n);

printf("%s", (n % 2 == 0) ? "Even" : "Odd");

return 0;
}