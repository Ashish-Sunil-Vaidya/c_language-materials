#include <stdio.h>

void main()
{
  int remainder,no,output,reverse=0,no1;
  printf("Enter a number\n");
  scanf("%d",&no);
  no1=no;
  while(no!=0)
  { 
   
    remainder=no%10;
    reverse=reverse*10+remainder;
    no/=10;
  }
  printf("Reverse is %d\n",reverse);
  output=no1-reverse;
  printf("Aradhya's game output: %d",output);

}

