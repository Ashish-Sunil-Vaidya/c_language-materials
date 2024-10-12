#include <stdio.h>

int numbers(int a,int b);//Function call

int main()//function call
{
 int n1,n2,sum;
 printf("Enter the two numbers:\n");
 scanf("%d%d",&n1,&n2);
 sum=numbers(n1,n2);
 printf("Sum=%d",sum);
 return 0;
}

int numbers(int a,int b)//function definition
{
    int result;
    result=a+b;
    return result;
}
