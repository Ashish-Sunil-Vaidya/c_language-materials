#include <stdio.h>
#include <conio.h>

int main(){

int arr[3][3],i,j;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("\n Enter a element:\n");
        scanf("%d",&arr[i][j]);
    }
}
printf("\nThe enter numbers in array form");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
      printf("%d\t",arr[i][j]);
    }
}
printf("\n");
return 0;
}