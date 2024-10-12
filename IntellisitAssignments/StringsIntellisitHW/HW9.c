//WAP to accept a string from the user and count the number of Uppercase letters present in it.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
char str[10];
int i,cnt;

printf("Enter a string: ");
scanf("%s",str);//Input from the user

cnt=0;//It is intialised to zero to avoid garbage values

for(i=0;str[i]!='\0';++i)//Loops works till null termination

if(str[i]>='A' && str[i]<='Z')//The following code checks whether the character is uppercase or not
++cnt;                        //If yes the 'cnt' will be incremented

printf("No of uppercase letters in the string is %d",cnt); //output
}