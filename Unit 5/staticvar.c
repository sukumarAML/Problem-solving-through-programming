#include<stdio.h>

void f();


int main()
{
    f();
    f();
    f();

    return 0;
}

void f()
{
    static int calls =0;
    calls++;
    printf("calls:%d\n", calls);
}