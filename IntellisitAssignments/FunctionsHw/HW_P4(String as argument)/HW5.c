// WAP to concatenate the second string into first, using a user defined function.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void join();
int len();


void main()
{
char *string1,*string2;

string1=(char*)malloc(sizeof(char));
string2=(char*)malloc(sizeof(char));

printf("Input String 1: ");
gets(string1);

printf("Input String 2: ");
gets(string2);

printf("\nEntered String 1: %s\n",string1);
printf("Entered String 2: %s\n",string2);

join(string1,string2);
}

int len(char string1[])
{
    int len;
    while(string1[len] != '\0') //for storing lenght of the str1 for further use
    len++;
    return len;
}


void join(char string1[],char string2[])
{   
    int lenght=len(string1);

for(int i=0;string2[i]!='\0';++i,++lenght)
string1[lenght]=string2[i];
                                                      
string1[lenght]='\0';
printf("Concatenated String 1: %s",string1);
    
}