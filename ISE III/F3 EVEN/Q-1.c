#include <stdio.h>

int fact(int i);

int main()
{
    int i,n,factorial[10],expression;
    printf("Enter the numbers\n");
    for(i=0;i<4;i++)
    {
    scanf("%d",&n);
    factorial[i]=fact(n);
    printf("Factorial of %d is %d\n\n",n,factorial[i]);
    expression=factorial[i]*factorial[i-1]*factorial[i-2]*factorial[i-3];
    }
    printf("Expression value is %d",expression);
    
}

int fact(int i)
{
if(i==0) return 1;
else if(i==1) return 1;
else return i*fact(i-1);
}
