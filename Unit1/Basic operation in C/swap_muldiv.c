#include <stdio.h>
int main()
{
int a = 10;
int b = 20;
printf("a=%d\nb=%d\n",a,b);
a = a * b;
b = a / b;
a = a / b;
printf("the swapped values are:\n");
printf("a = %d\n", a);
printf("b = %d", b);
return 0;
}