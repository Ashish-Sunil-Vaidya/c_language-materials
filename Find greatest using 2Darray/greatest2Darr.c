#include <stdio.h>
#include <stdlib.h>

int main()
{
int arr[2][2],i,j;
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("enter a number:");
        scanf("%d",&arr[i][j]);
    }
}
//-----------------------------------------------------
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        if(arr[0][0]<arr[i][j])
        arr[0][0]=arr[i][j];
    }
}

printf("The greatest value is  %d",arr[0][0]);
return 0;

}