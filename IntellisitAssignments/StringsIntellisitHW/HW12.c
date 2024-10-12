//WAP to accept 3 strings (First name, middle name and last name) from the user and concatenate them.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
char FirstName[10],MiddleName[10],LastName[10];
printf("Enter your First Name: ");
gets(FirstName);//Input from the user
printf("Enter your Middle Name: ");
gets(MiddleName);//Input from the user
printf("Enter your last Name: ");
gets(LastName);//Input from the user

strcat(FirstName,MiddleName);//Concatenates middle name to first name 'a+b'
strcat(FirstName,LastName);//Concatenates Last name to modified first name '(a+b)+c'


printf("Your Full Name is: %s",FirstName);//Output
}