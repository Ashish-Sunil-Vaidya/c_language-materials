#include <stdio.h>

void num(int a);

int main()
{
    int n;
    printf("Enter the number of elements you want to add:\n");
    scanf("%d",&n);
    num(n);
    return 0;
}

void num(int a)
{
    int i,sum=0;
    for(i=0;i<=a;i++)
    {
    sum=sum+i;
    }
    printf("SUM=%d",sum);
     
}