//WAP to count the number of capitals, smalls, digits and symbols present in the input string.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int chk_capital();
int chk_small();
int chk_digits();
int chk_symbols();



void main()
{
char *string;
string=(char*)malloc(sizeof(char));

printf("Enter String: ");
// scanf("%s",string);
gets(string);

printf("\nNo of Capitals: %d\nNo of smalls: %d\nNo of Digits: %d\nNo of symbols: %d\n\n",chk_capital(string),chk_small(string),chk_digits(string),chk_symbols(string));
}



int chk_capital(char string[])
{
    int cnt=0;

    for(int i=0;string[i]!='\0';++i)
    {
        if(string[i]>='A' && string[i]<='Z' ) ++cnt;
    }

    return cnt;
}

int chk_small(char string[])
{
    int cnt=0;

    for(int i=0;string[i]!='\0';++i)
    {
        if(string[i]>='a' && string[i]<='z' ) ++cnt;
    }

    return cnt;
}

int chk_digits(char string[])
{
    int cnt=0;

    for(int i=0;string[i]!='\0';++i)
    {
        if(string[i]>='0' && string[i]<='9' ) ++cnt;
    }

    return cnt;
}

int chk_symbols(char string[])
{
    int cnt=0;

    for(int i=0;string[i]!='\0';++i)
    {
        if(string[i]>='!' && string[i]<='/' || string[i]=='@' ) ++cnt;
    }

    return cnt;
}