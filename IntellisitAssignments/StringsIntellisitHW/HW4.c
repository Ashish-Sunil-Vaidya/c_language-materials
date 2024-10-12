//WAP to compare 2 strings, without using built-in functions.
#include<stdio.h>
#include<stdlib.h>


void main()
{
char str1[10],str2[10];
int i,j,flag=0;

printf("Enter string 1:");//input from the user
scanf("%s",str1);

printf("Enter string 2:");//input from the user
scanf("%s",str2);

for(i=0;str1[i]!='\0';++i)//Character by character comparsion test
for(j=i;str2[j]!='\0';++j)
if(str1[i]!=str2[j])//During this if loop comes across unequal condition the loop breaks with flag=0
{
    flag=0;
    break;
}

else 
{
flag=1;//If loop gets null terminated without unequal condition, then flag=1
break;
}

switch (flag)//Output for above conditions
{
case 0:
printf("The two strings are not equal");
break;

case 1:
printf("The two strings are equal");
break;

default:
printf("Unexpected Error");
break;
}
}