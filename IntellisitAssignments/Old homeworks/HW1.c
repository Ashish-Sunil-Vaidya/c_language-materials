//WAP to accept a number from the user and print whether it is EVEN or ODD.

#include <stdio.h>

void main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("%d is a even number\n",a);
    }

    else
    {
        printf("%d is a odd number\n",a);
    }
}