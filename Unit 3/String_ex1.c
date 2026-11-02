#include<stdio.h>
#include <string.h>

int main(){
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZssssSSSSS";
    printf("%zu\n", strlen(alphabet));
    printf("%zu\n", sizeof(alphabet));
    int length = strlen(alphabet);
    printf("length of the string is : %d\n", length);

int count_s = 0;
for (int i =0;i<length; i++)
{
    if (alphabet[i] =='s'|| alphabet[i]=='S')
    {
        count_s++;
    }
}
printf("String count of s is :%d\n", count_s);
char s2[100];
strcpy(s2, alphabet);
printf("the copied string is : %s \n", s2);
return 0;
}