#include <stdio.h>

int main()
{
  int arr[10],i,n,p,sum;
  printf("Enter the amnt of integer array must hold\n");
  scanf("%d",&n);
  printf("\nEnter the integers\n");
  for(i=0;i<n;++i){
  scanf("%d",&arr[i]);
  }

  printf("Enter where the array must stop\n");
  scanf("%d",&p);
  sum=0;
  for(i=0;i<=n-p;++i)
  sum=sum+arr[i];

printf("\n%d",sum); 

}