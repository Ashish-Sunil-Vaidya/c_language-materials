//C program to generate Fibonacci series.
//F-60 Ashish Vaidya
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int t1 = 0, t2 = 1, t3 = 0, n;
  printf("Enter number where Fibonacci series stop: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d %d ", t1, t2);
  t3 = t1 + t2;
  while (t3 <= n)
    {
        printf(" %d ", t3);
        t1 = t2;
        t2 = t3;
        t3 = t1 + t2;
    }
  return 0;
}
