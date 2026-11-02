#include <stdio.h>
int main(void)
{
char test[5] = "test";
printf("%s \n",test);

for(int i =0; i<5;i++)
{
    printf("test[%d]='%c' \n", i, test[i]);
    printf("Last character null is unprintable");
}
return 0;

}