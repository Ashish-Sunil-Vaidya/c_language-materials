//WAP to get the count of words present in a string.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int chk_words();

void main()
{
char *string;
string=(char*)malloc(sizeof(char));

printf("Enter String: ");
// scanf("%s",string);
gets(string);

printf("No of words: %d",chk_words(string));
}

int chk_words(char string[])
{
    int cnt=1;//It is intialised to 1 as there is no whitespace at the end of the sentence therefore, it wont consider the last string as a word.

    for(int i=0;string[i]!='\0';++i)//Loops works till null termination
    if(string[i]==' ')//When a word completes in a sentence/text we give a whitespace 
    {              //this code will check whether a whitespace appears in a string
    ++cnt;         //If appears, then the cnt variable will increment
    }

    return cnt;
    
}