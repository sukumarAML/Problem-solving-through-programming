#include<stdio.h>

int main()
{
    int n =10; //initialized n with value 10
    void *ptr = &n; // pointer which has no associated datatype with it

    printf("%d",*(int*)ptr); //typecasting to integer pointer and dereference the pointer
    return 0; //do not dereference a pointer without typecasting
}