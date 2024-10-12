//	WAP to print the fibonacci series using a function.
#include <stdio.h>

void fibonacci(int stop)
{
     int t1 = 0, t2 = 1, t3 = 0;
  
  printf("Fibonacci Series: %d %d ", t1, t2);
  t3 = t1 + t2;
  while (t3 <= stop)
    {
        printf(" %d ", t3);
        t1 = t2;
        t2 = t3;
        t3 = t1 + t2;
    }
   
}

void main()
{   int n;
    printf("Enter number where Fibonacci series stop: ");
  scanf("%d", &n);
  fibonacci(n);
}