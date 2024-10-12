//2. WAP to copy a string into another, without using built-in functions.

#include<stdio.h>
#include<stdlib.h>


void main()
{
int i;
char str[20],strcpy[20];
printf("Enter a string\n");
scanf("%[^\n]s",str);//Modified scanf which can take input even though you have given whitespace, that means this function will only end by pressing 'Enter' 

//Below code copies character by character into another string
for(i=0;str[i]!='\0';++i)
    strcpy[i]=str[i];

printf("Copied string is %s",strcpy);//Output


}