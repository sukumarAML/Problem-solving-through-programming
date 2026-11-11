#include<stdio.h>
int main()
{
FILE *fptr;

// Open a file in writing mode
fptr = fopen("sukumar.txt", "w");

// Write some text to the file
fprintf(fptr, "Important text");

// Close the file
fclose(fptr);

}