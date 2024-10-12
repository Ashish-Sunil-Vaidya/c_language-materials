#include <stdio.h>
int add(int *n1, int *n2);
int main()
{  
   int a,b,sum;
        printf("Enter Two numbers:\n");
        scanf("%d%d",&a,&b);
        sum=add(&a,&b);
        printf("Addition of numbers is: %d",sum);
        return 0;
}

int add(int *n1,int *n2)
{
    int result;
    //result=*n1+*n2;
    return(result=*n1+*n2);
}