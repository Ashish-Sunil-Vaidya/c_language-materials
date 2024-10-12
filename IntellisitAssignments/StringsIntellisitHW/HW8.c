//WAP to accept a string from the user and check whether it is Palindrome or not.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
char str[10],strrv[10];
int result;

printf("Enter a string: ");
gets(str);//Input from the user

strcpy(strrv,str);//copies string from 'str' to 'strrv'

strrev(strrv);//reverses 'strrv'

result=strcmp(str,strrv);//if value of strcmp is 0, then it same else, it is not same

if(result==0) printf("The following string '%s' is a palindrome",str);//output[condition pass]

else printf("The following string '%s' is [not] a palindrome",str);//output[condition fail]


}