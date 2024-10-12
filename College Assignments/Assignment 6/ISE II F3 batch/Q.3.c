/*
C program to print the following pattern.

*
* *
* * *
* * * *
* * * * *

*/
//F-60 Ashish Vaidya
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=i;j>=0;j--)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
