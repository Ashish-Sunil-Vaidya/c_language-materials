#include <stdio.h>
#include <stdlib.h>

int main()
{
 int arr[5],i;
 for(i=0;i<5;i++)
 {
     printf("enter the number:");
     scanf("%d",&arr[i]);
 }
printf("\n");
for (i=0;i<5;i++)
{
 if(arr[0]<arr[i]);
 arr[0]=arr[i];

}

printf("largest number is:%d",arr[0]);
return 0;

}