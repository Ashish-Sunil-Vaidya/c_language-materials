//	WAP to print the tribonacci series using a function.
#include<stdio.h>
void Tribonacci(int stop)
{
     int t1 = 0, t2 = 1, t3 = 1,t4;

  printf("Tribonacci Series: %d  %d  %d ", t1, t2 , t3);
  t4 = t1 + t2 + t3;
  while (t4 <= stop)
    {
        printf(" %d ", t4);
        t1 = t2;
        t2 = t3;
        t3 = t4;
        t4 = t1 + t2 + t3;
    }

}

void main()
{   int n;
    printf("Enter number where Tribonacci series stop: ");
  scanf("%d", &n);
  Tribonacci(n);
}
