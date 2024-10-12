//WAP to accept a string and print ASCII code of each character along with the character.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    char str[40];
    int i;
    printf("Enter a String: ");
    gets(str);//Input from the user

    
    //The below code does character by character conversion into decimal form
    printf("The Decimal form of string '%s' is: ",str);
    for(i=0;str[i]!='\0';++i)
    {
        str[i]=(int)str[i];//Typecasting string into a integer 
        //As character is a subtype of integer each character/digit/symbol has its own Ascii code which is a integer.
        
        printf("%d",str[i]);//Output

    }
  

}