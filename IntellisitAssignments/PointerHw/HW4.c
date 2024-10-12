//WAP to perform bitwise operations on variables, using pointers.

#include<stdio.h>

void main()
{
int a = 50, b = 17;
int *ptr_a,*ptr_b;
ptr_a=&a;
ptr_b=&b;

/*printf("\nEnter 2 numbers:");
scanf("%d %d", ptr_a, ptr_b); */

    printf("\nValues of pointers : a = %i, b = %i", *ptr_a, *ptr_b);
    printf("\nBitwise AND (&) using pointers:");
    printf("\n%d & %d = %d", *ptr_a, *ptr_b, (*ptr_a & *ptr_b));
    printf("\nBitwise OR (|) using pointers:");
    printf("\n%d | %d = %d", *ptr_a, *ptr_b, (*ptr_a | *ptr_b));
    printf("\nBitwise ExOR (^) using pointers:");
    printf("\n%d ^ %d = %d", *ptr_a, *ptr_b, (*ptr_a ^ *ptr_b));

    printf("\nBitwise Left Shift (<<) using pointers:");
    printf("\n%d << 3 = %d", *ptr_a, (*ptr_a << 3));
    printf("\n%d << 4 = %d", *ptr_b, (*ptr_b << 4));
    printf("\nBitwise Right Shift (>>) using pointers:");
    printf("\n%d >> 2 = %d", *ptr_a, (*ptr_a >> 2));
    printf("\n%d >> 3 = %d", *ptr_b, (*ptr_b >> 3));

    printf("\nBitwise NOT (~) using pointers:");
    printf("\n~%d = %d", *ptr_a, ~(*ptr_a));
    printf("\n~%d = %d", *ptr_b, ~(*ptr_b));
    *ptr_a = -*ptr_a;
    *ptr_b = -*ptr_b;
    printf("\n~%d = %d", *ptr_a, ~(*ptr_a));
    printf("\n~%d = %d", *ptr_b, ~(*ptr_b));

}