#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main()
{   
    int n;
    printf("Sum of the numbers are :\n");
    printf("%d",factorial(n));

    
}

int factorial(int n)
{ 
    
 if(n == 1) return 1;
return n*factorial(n-1);

}
