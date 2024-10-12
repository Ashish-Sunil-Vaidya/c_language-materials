//WAP to perform swapping of 2 numbers using pointers.

#include<stdio.h>

void main()
{
int no1,no2,tempno;
int *ptr_no1,*ptr_no2,*ptr_tempno;

ptr_no1=&no1;
ptr_no2=&no2;
ptr_tempno=&tempno;

printf("Enter two numbers to swap: ");
scanf("%d%d",ptr_no1,ptr_no2);

ptr_tempno=ptr_no1;
ptr_no1=ptr_no2;
ptr_no2=ptr_tempno;

printf("Swappped integers are: %d %d",*ptr_no1,*ptr_no2);

}