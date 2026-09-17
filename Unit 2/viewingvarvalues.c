#include<stdio.h>
int main()
{
    int a=5, b=6;
    //printf("enter the values of a and b:\n");
    //scanf("%d\n %d",&a,&b);
    ++a;
    b++;
    printf("a = %d, b = %d \n", a, b);


    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("\n i = %d j = %d", i,j);
        }
        printf("\n loop completed for i = %d", i);
    }

  int time = 0;
    printf("\n Enter the time of the day: \n");
    scanf("%d",&time);

  if (time < 12) {
    printf("Good morning.");
  } else if (time < 18) {
    printf("Good day.");
  } else {
    printf("Good evening.");
  }
    return 0;
}