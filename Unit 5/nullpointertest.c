//Null pointer is a pointer that does not point to any memory location. it representa an invlaid memory location
//usefull for handling errors when using malloc pointer.
//it is used to initialize a pointer when that pointer is not assigned any memory address.

#include<stdio.h>

int main()
{
    int *ptr = NULL;

     printf("the size of null pointer is :%d", sizeof(*ptr));

    if(ptr == NULL)
    printf("\n Memory cannot be allocated \n");
    else
    printf("Memory allocated succesfully");


    return 0;

}