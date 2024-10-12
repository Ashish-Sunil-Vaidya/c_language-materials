//(Q.4) Write a C program to find factorial of a given number using for loop.
//F-60 Ashish Vaidya
#include <stdio.h>

int main()
{
    int num,i,fact=1,n;
    
    printf("Enter a number:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
    fact=fact*i;
    }
    printf("The factorial of %d is %d",num,fact);

}