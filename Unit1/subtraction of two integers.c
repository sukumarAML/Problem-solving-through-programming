#include<stdio.h>
int main()
{ int a,b,sum;
  printf("Addition of two numbers:\n");
  printf("Enter the first number:");
  scanf("%d",&a);
  printf("Enter the second number:");
  scanf("%d",&b);
  sum = a-b;
  printf("the sum of %d and %d is %d",a,b,sum);
  return 0;
}
