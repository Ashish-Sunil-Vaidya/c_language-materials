//WAP to accept a string from the user and replace Uppercase letters with lowercase letters and vise-versa.


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
char str[10];
int i;
printf("Enter a string: ");
gets(str);//Input from the user

//The below code checks character by character whether its lwr case or upr case

for(i=0;str[i]!='\0';++i)//loop works till null termination
{
 if(str[i]>='A' && str[i]<='Z') //If the character is between uprcase aplhabets it will convert it to lwrcase character
  str[i]=str[i]+32;//Example: A [Ascii code:65] --> 65+32 = 97[Ascii code of 'a']
 
 else if(str[i]>='a' && str[i]<='z') //If the character is between lwrcase aplhabets it will convert it to uprcase character
  str[i]=str[i]-32;//Example: a [Ascii code:97] --> 97-32 = 65[Ascii code of 'A']

 }
printf("The character by Character conversion of string: ");
puts(str);//Output
}