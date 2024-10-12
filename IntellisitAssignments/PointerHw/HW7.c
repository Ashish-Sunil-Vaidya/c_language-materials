//WAP to perform arithmetic operations on integer variables using an array of pointers.

#include<stdio.h>

void main()
{
 int *ptr_arr[3],no1,no2,op,i;

 ptr_arr[0]=&no1;
 ptr_arr[1]=&no2;
 ptr_arr[2]=&op;

printf("Enter 2 numbers: ");
 for(i=0;i<2;++i)
 {
    scanf("%d",ptr_arr[i]);
 }
 
*ptr_arr[2]= (*ptr_arr[0] + *ptr_arr[1]);
 printf("Sum= %d",*ptr_arr[2]);
*ptr_arr[2]= (*ptr_arr[0] - *ptr_arr[1]);
 printf("\nSub= %d",*ptr_arr[2]);
*ptr_arr[2]= (*ptr_arr[0] * *ptr_arr[1]);
 printf("\nMul= %d",*ptr_arr[2]);
*ptr_arr[2]= (*ptr_arr[0] / *ptr_arr[1]);
 printf("\nDiv= %d",*ptr_arr[2]);
*ptr_arr[2]= (*ptr_arr[0] % *ptr_arr[1]);
 printf("\nMod= %d",*ptr_arr[2]);

}