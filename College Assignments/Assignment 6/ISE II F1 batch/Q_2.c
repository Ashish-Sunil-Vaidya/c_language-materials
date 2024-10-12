/**C program to accept a string and checks whether a
given string is palindrome or not ? and find the length of
string without using inbuilt function.**/
//F-60 Ashish Vaidya 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    int i,n=0;
    printf(" Enter any String : ");
    scanf("%s",&a);
    strcpy(b,a);
    strrev(a);
    if(strcmp(a,b) == 0)
    {
        printf(" String is Palindrome.\n");
    }
    else
    {
        printf(" String is Not Palindrome.\n");
    }
    for(i=0;a[i] != '\0';i++)
    {
        n++;
    }
    printf(" Length of String is %d.\n",n);
}