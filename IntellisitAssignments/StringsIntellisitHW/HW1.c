//1. WAP to find the length of a string, without using built-in functions.

#include<stdio.h>
#include<stdlib.h>


void main()
{
char str[10];
int len;
printf("Enter the string\n");
scanf("%s",str);//Input from the user

// for(len=1;str[len]!='\0';++len)
// {
    //empty
// }

while(str[len]!='\0') ++len;//Untill null it will increment len++ giving the lenght of the string

printf("Lenght of the string is %d",len);//Output

}