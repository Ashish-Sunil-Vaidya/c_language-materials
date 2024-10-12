//WAP to accept 2 separate strings from the user and swap them.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
char str1[10],str2[10],strtemp[10];
printf("Enter String 1: ");
gets(str1);//Input from the user
printf("Enter String 2: ");
gets(str2);//Input from the user

strcpy(strtemp,str1);//Data of 'str1' is stored in 'strtemp'
strcpy(str1,str2);//then the data of 'str2' overwrites the data of 'str1'
strcpy(str2,strtemp);//then the 'strtemp' conataining the data of 'str1' overwrites the data of str2, interchanging the data between str1 and str2


printf("After swapping\n String 1: %s\nString 2: %s",str1,str2);//Output
}