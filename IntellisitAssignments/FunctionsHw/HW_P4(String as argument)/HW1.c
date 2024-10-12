//WAP to find the number of vowels present in the input string, using a function.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int chk_vowel();

void main()
{
char *string;
string=(char*)malloc(sizeof(char));

printf("Enter String: ");
// scanf("%s",string);
gets(string);

printf("No of vowels: %d",chk_vowel(string));

}


int chk_vowel(char string[])
{
int cnt=0,i;
    for(i=0;string[i]!='\0';++i)
    {
        switch(string[i])
        {
           case 'a': ++cnt; break;
           case 'e': ++cnt; break;
           case 'i': ++cnt; break;
           case 'o': ++cnt; break;
           case 'u': ++cnt; break;
           case 'A': ++cnt; break;
           case 'E': ++cnt; break;
           case 'I': ++cnt; break;
           case 'O': ++cnt; break;
           case 'U': ++cnt; break; 

        }
    }
    return cnt;
}