#include <stdio.h>

int factorial(int a);

int main()
{
    int n,fact;
    printf("Enter a number:\n");
    scanf("%d",&n);
    fact=factorial(n);
    printf("The Factorial of the number is %d",fact);
    return 0;
}

int factorial(int n)
{
    if(n>0)
    {
      return n*factorial(n-1);
    }

    else
    {
        return 1;
    }
}
