//WAP to perform relational operations on variables, using pointers.
#include<stdio.h>

void main()
{
    int no1, no2, result;
    int *ptr_no1, *ptr_no2, *ptr_result;
  
    ptr_no1=&no1;
    ptr_no2=&no2;
    ptr_result=&result;

    printf("\nEnter 2 numbers:");
    scanf("%d %d", ptr_no1, ptr_no2);
    *ptr_result = *ptr_no1 == *ptr_no2;
    printf("\n%d is equal to %d : %d", *ptr_no1, *ptr_no2, *ptr_result);
    *ptr_result = *ptr_no1 != *ptr_no2;
    printf("\n%d is not equal to %d : %d", *ptr_no1, *ptr_no2, *ptr_result);
    *ptr_result = *ptr_no1 > *ptr_no2;
    printf("\n%d is greater than %d : %d", *ptr_no1, *ptr_no2, *ptr_result);
    *ptr_result = *ptr_no1 < *ptr_no2;
    printf("\n%d is less than %d : %d", *ptr_no1, *ptr_no2, *ptr_result);
    *ptr_result = *ptr_no1 >= *ptr_no2;
    printf("\n%d is greater than or is equal to %d : %d", *ptr_no1, *ptr_no2, *ptr_result);
    *ptr_result = *ptr_no1 <= *ptr_no2;
    printf("\n%d is less than or is equal to %d : %d", *ptr_no1, *ptr_no2, *ptr_result);

}