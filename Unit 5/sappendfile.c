#include<stdio.h>
int main()
{
FILE *fptr;

// Open a file in append mode
fptr = fopen("sukumar.txt", "a");

// Append some text to the file
fprintf(fptr, "\nHi everybody!");

// Close the file
fclose(fptr);

}