#include <stdio.h>
#include <stdlib.h>
int main()
{
int  i,j;
for(i=6;i<=10;i++)
{
    printf("\n%d =>",i);
    for(j=1;j<=i;j++)
    {
        if(i%j==0)
        printf("%d ",j);
    }
}

}





















