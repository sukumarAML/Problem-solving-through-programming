
#include<stdio.h>
#include<string.h>
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];  // String
};

int main() {
  struct myStructure s1;

  // Trying to assign a value to the string
  //s1.myString = "Some text";

    // Assign a value to the string using the strcpy function
  strcpy(s1.myString, "Important text");

  // Trying to print the value
  printf("My string1: %s\n", s1.myString);

  struct myStructure s2 = {13, 'B', "Some text"};
  struct myStructure s3;

  s3 = s2;

printf("My string2: %s \n", s2.myString);

  return 0;
}