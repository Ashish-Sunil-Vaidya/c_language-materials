#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i,j;
 for(i=2;i<=5;i++)
 {
     for(j=1;j<=5;j++)
     {
      if((i*j)>=10)
      break;
      printf("%d ",i*j);
     }
     printf("\n");
 } 
 
 return 0;
}