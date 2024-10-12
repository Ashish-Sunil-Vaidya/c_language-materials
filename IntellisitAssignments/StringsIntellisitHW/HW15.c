//WAP to accept a string from the user and print the entire string in lowercase.


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
char str[10];
printf("Enter a string: ");
gets(str);//Input from the user

strlwr(str);//This inbuilt function comes with string.h header file which cnverts uppercase to lowercase
printf("The converted string: ");
puts(str);//Output
}