#include<stdio.h>
int main(){
FILE *fptr;

// Create a file
fptr = fopen("sukumar.txt", "w");

// Close the file
fclose(fptr);

}