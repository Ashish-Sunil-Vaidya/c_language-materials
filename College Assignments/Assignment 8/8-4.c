#include <stdio.h>

int fibonacci(int);

int main()
{
    int n,i;
    printf("Enter the number tof elements:\n");
    scanf("%d",&n);
    printf("Fibonacci Series is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",fibonacci(i));
    }
}

int fibonacci(int i)
{
    if(i==0) return 0;
    else if(i==1) return 1;
    else return (fibonacci(i-1)+fibonacci(i-2));
}