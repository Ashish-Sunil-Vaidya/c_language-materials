//WAP to perform logical operations on variables, using pointers.

#include<stdio.h>

void main()
{
 int a = 0, b = 1;
 int *ptr_a,*ptr_b;
 ptr_a=&a;
 ptr_b=&b;

    printf("\nLogical AND Operator using pointers:");
    printf("\n%d && %d = %d", *ptr_a, *ptr_a, (*ptr_a && *ptr_a));
    printf("\n%d && %d = %d", *ptr_a, *ptr_b, (*ptr_a && *ptr_b));
    printf("\n%d && %d = %d", *ptr_b, *ptr_a, (*ptr_b && *ptr_a));
    printf("\n%d && %d = %d", *ptr_b, *ptr_b, (*ptr_b && *ptr_b));

    printf("\n\nLogical OR Operator using pointers:");
    printf("\n%d || %d = %d", *ptr_a, *ptr_a, (*ptr_a || *ptr_a));
    printf("\n%d || %d = %d", *ptr_a, *ptr_b, (*ptr_a || *ptr_b));
    printf("\n%d || %d = %d", *ptr_b, *ptr_a, (*ptr_b || *ptr_a));
    printf("\n%d || %d = %d", *ptr_b, *ptr_b, (*ptr_b || *ptr_b));

    printf("\n\nLogical NOT Operator using pointers:");
    printf("\n!%d = %d", *ptr_a, !(*ptr_a));
    printf("\n!%d = %d", *ptr_b, !(*ptr_b));

}