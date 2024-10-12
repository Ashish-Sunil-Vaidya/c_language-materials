//WAP to accept a text from the user and count the number of words present in it.

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

void main()
{   
    char str[100];
    int i,cnt;

    printf("Enter string: ");
    gets(str);//Input from the user

     
    cnt=1;//It is intialised to 1 as there is no whitespace at the end of the sentence therefore, it wont consider the last string as a word.

    for(i=0;str[i]!='\0';++i)//Loops works till null termination
    if(str[i]==' ')//When a word completes in a sentence/text we give a whitespace 
    {              //this code will check whether a whitespace appears in a string
    ++cnt;         //If appears, then the cnt variable will increment
    }
    printf("No of words= %d",cnt);//Output
    

    
    
    

}