//WAP to perform increment and decrement operations on variables, using pointers.
#include<stdio.h>

void main()
{
int N = 4;
 
   
    int *ptr1;
 
    
    ptr1 = &N;
 
    printf("Value at Pointer ptr1 before Increment: ");
    printf("%d \n", *ptr1);
 
    
    (*ptr1)++;
 
    printf("Value at Pointer ptr1 after Increment: ");
    printf("%d \n\n", *ptr1);
 
    printf("Value at Pointer ptr1 before Decrement: ");
    printf("%d \n", *ptr1);
 
    
    (*ptr1)--;
 
    printf("Value at Pointer ptr1 after Decrement: ");
    printf("%d \n\n", *ptr1);
 
}

