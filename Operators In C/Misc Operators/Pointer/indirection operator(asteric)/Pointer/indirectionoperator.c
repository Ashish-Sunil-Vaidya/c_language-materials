#include<stdio.h>
void main()
{
    int i = 24;
    float f = 3.2022;
    char c = 'P';
    int *ptrI;
    float *ptrF;
    char *pc;
    ptrI = &i;
    ptrF = &f;
    pc = &c;
    printf("\nValues of variables are:");
    printf("\ni = %d, f = %f, c = %c.", i, f, c);

    printf("\n\nValues of variables, using pointers, are:");
    printf("\n*ptrI = %d, *ptrF = %f, *pc = %c.", *ptrI, *ptrF, *pc);

    printf("\n\nAddresses of variables are:");
    printf("\n&i = %x, &f = %x, &c = %x.", &i, &f, &c);

    printf("\n\nAddresses of variables, using pointers, are:");
    printf("\nptrI = %x, ptrF = %x, pc = %x.", ptrI, ptrF, pc);
}
