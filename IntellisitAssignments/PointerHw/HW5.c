//WAP to perform assignment operations on variables, using pointers.

#include<stdio.h>

void main()
{
int i = 36, j;
int *ptr_i,*ptr_j;

ptr_i=&i;
ptr_j=&j;

char c = 'D', d;
char *ptr_c,*ptr_d;

float f = 12.3, g;
float *ptr_f,*ptr_g;

ptr_c=&c;
ptr_f=&f;
ptr_g=&g;
ptr_d=&d;

    printf("\nDefault initial values:");
    printf("\n*ptr_i = %d, *ptr_j = %d, *ptr_c = %c, *ptr_d = %c, *ptr_f = %g, *ptr_g = %g", *ptr_i, *ptr_j, *ptr_c , *ptr_d, *ptr_f, *ptr_g);
    *ptr_j = 51;
    *ptr_d = 'E';
    *ptr_g = 3.2022;
    printf("\nAfter assigning values to pointers *ptr_j, *ptr_d and *ptr_g:");
    printf("\n*ptr_i = %d, *ptr_j = %d, *ptr_c = %c, *ptr_d = %c, *ptr_f = %g, *ptr_g = %g", *ptr_i, *ptr_j, *ptr_c , *ptr_d, *ptr_f, *ptr_g);
    ptr_i = ptr_j;
    ptr_c = ptr_d;
    ptr_f = ptr_g;
    printf("\nAfter assigning variable *ptr_j, *ptr_d and *ptr_g to pointers *ptr_i, *ptr_c, and *ptr_f:");
    printf("\ni = %d, *ptr_j = %d, *ptr_c = %c, *ptr_d = %c, *ptr_f = %g, g = %g", *ptr_i, *ptr_j, *ptr_c , *ptr_d, *ptr_f, *ptr_g);
    *ptr_i = *ptr_j * 2;
    *ptr_c = *ptr_d * 2;
    *ptr_f = *ptr_g * 4;
    printf("\nAfter assigning expression to pointers *ptr_i, *ptr_c, and *ptr_f:");
    printf("\n*ptr_i = %d, *ptr_j = %d, *ptr_c = %c, *ptr_d = %c, *ptr_f = %g, *ptr_g = %g", *ptr_i, *ptr_j, *ptr_c , *ptr_d, *ptr_f, *ptr_g);

}