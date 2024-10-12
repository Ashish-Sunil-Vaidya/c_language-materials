//WAP to swap 2 integer values using an array of pointers.

#include<stdio.h>

void main()
{
int *ptr_arr[3],no1,no2,tempno,i;

ptr_arr[0]=&no1;
ptr_arr[1]=&no2;
ptr_arr[2]=&tempno;

printf("Enter 2 numbers to swap: ");
 for(i=0;i<2;++i)
 {
    scanf("%d",ptr_arr[i]);
 }

*ptr_arr[2]=*ptr_arr[0];
*ptr_arr[0]=*ptr_arr[1];
*ptr_arr[1]=*ptr_arr[2];

printf("Swapped integers: %d %d",*ptr_arr[0],*ptr_arr[1]);

}