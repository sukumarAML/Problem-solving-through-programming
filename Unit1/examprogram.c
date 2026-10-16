#include<stdio.h>
int main(){
    int n = 13;
    int d, x, y, z;
    d = n & 1;
x = n >> 2;
y = (n >= 10 && n < 20);
z = (n % 5 == 3 ? n + 2 : n - 2);
printf("d = %d\n", d);
printf("x = %d\n", x);
printf("y = %d\n", y);
printf("z = %d\n", z);
return 0;
}
