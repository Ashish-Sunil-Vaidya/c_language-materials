#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
int n,len;

printf("Enter number: ");
scanf("%d",&n);

len=2*n-1;


for(int i=n;i>0;i--)
{
    printf("\n");


   
     for(int j=0;j<2*i-1;j++)
       {  
        printf("* ");
       }
   

   
}
}