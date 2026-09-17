#include<stdio.h>
int main()
{
    int a, b;
    printf("enter the values of a and b:\n");
    scanf("%d\n %d",&a,&b);
    ++a;
    b++;
    printf("a = %d, b = %d", a, b);
    return 0;
}