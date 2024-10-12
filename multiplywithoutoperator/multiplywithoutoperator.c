#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=2,b=3,sum=0;
    do
    {
        sum=sum+a;
        b--;
    }
     while (b>0);
    printf("Addition of the two numbers is %d",sum);
}