#include <stdio.h>

void swap(int a,int b);
int swapping(int *n1,int *n2);

int main()
{
    int n1,n2;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&n1,&n2);
    printf("The Entered values are n1=%d, n2=%d \n",n1,n2);
    swap(n1,n2);
    printf("Numbers after swapping by value is n1=%d, n2=%d \n",n1,n2);
    swapping(&n1,&n2);
    printf("Numbers after swapping by reference is n1*=%d \n, n2*=%d",n1,n2);
    return 0;
}

void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    
}

int swapping(int *n1,int *n2)
{
 int temp=*n1;
 *n1=*n2;
 *n2=temp;
}