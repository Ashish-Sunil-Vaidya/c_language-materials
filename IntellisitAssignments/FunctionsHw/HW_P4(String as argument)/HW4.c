// WAP to copy one string into another using a user defined function.

#include<stdio.h>
#include<stdlib.h>

void copy();



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

copy(string1,string2);
}



void copy(char string1[], char string2[])
{    
     int option;

     printf("\nEnter '1' to copy str 1 to str 2 and '2' for vice versa: ");
   scanf("%d",&option);

    if(option==1)
    { 
        for(int i=0;string1[i]!='\0';i++)
        string2[i]=string1[i];
    }

    else if(option==2)
    { 
        for(int i=0;string2[i]!='\0';i++)
        string1[i]=string2[i];
    }
    
    else printf("Invaild option");

    if(option==1 || option==2)
    {
    printf("\nString 1: %s\n",string1);
    printf("String 2: %s\n",string2);
    }
}