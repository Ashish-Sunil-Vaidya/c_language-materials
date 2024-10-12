// (Q.1) Write a c program to find maximum between two numbers using if else.
//F-60 Ashish Vaidya

#include <stdio.h>
#include <stdlib.h>

int main()
{

int x,y;
printf("Enter the value of x and y respectively\n");
scanf("%d%d",&x,&y);
if(x>y)
{
    printf("Value of x is maximum i.e. x=%d",x);
}
else if(x<y)
{
    printf("Value of y is maximum i.e. y=%d",y);

    
}
else if(x=y)
{
    printf("Value x is equal to y i.e. x=y=%d",x,y);
}
return 0;

}