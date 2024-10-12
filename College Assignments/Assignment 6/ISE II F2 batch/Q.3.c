/* C program for using string manipulation functions:
    strlen(), strcpy(),strcmp(), strcat(), strrev()*/
    //F-60 Ashish Vaidya
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[20],b[20],c[20];
    printf(" Enter any String A: ");
    scanf("%s",&a);
    printf(" Enter any String B: ");
    scanf("%s",&b);
    printf(" Length of String A is %d.\n",strlen(a));
    printf(" Length of String B is %d.\n",strlen(b));
    printf(" Copied String C from String A is %s.\n",strcpy(c,a));
    if(strcmp(a,b)==0)
    {
        printf(" A and B strings are same.\n");
    }
    else
    {
        printf(" A and B strings are not same.\n");
    }
    printf(" String B at end of String A is %s.\n",strcat(a,b));
    printf(" Reverse of String A is %s",strrev(c));
    return 0;
}
