// (Q.2)Write a C program to check whether given number is positive, negative or zero using if else
//F-60 Ashish Vaidya

#include <stdio.h>
#include <stdlib.h>

int main()
{

int x;
printf("Enter the value for x\n");
scanf("%d",&x);
if(x>0)
{
    printf("Value of x is positive");
}
else if(x<0)
{
    printf("Value of y is negative");   
}
else if(x==0)
{
    printf("Value x is equal to 0");
}
return 0;

}