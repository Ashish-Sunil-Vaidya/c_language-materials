//WAP to accept a string from the user and print its reverse.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
char str[10];
printf("Enter String: ");
gets(str);
strrev(str);
printf("Reversed string is :");
puts(str);
}