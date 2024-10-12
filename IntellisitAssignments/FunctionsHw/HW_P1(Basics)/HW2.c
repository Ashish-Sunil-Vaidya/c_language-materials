//WAP to perform Logical Operations using functions.
#include<stdio.h>



int a = 0, b = 1;


void logicAND()
{
    printf("\nLogical AND Operator:");
    printf("\n%d && %d = %d", a, a, (a && a));
    printf("\n%d && %d = %d", a, b, (a && b));
    printf("\n%d && %d = %d", b, a, (b && a));
    printf("\n%d && %d = %d", b, b, (b && b));
}

void logicOR()
{
    printf("\n\nLogical OR Operator:");
    printf("\n%d || %d = %d", a, a, (a || a));
    printf("\n%d || %d = %d", a, b, (a || b));
    printf("\n%d || %d = %d", b, a, (b || a));
    printf("\n%d || %d = %d", b, b, (b || b));
}

void logicNOT()
{
    printf("\n\nLogical NOT Operator:");
    printf("\n!%d = %d", a, !a);
    printf("\n!%d = %d\n\n", b, (!b));
}

void main()
{
printf("All the logic operators: \n\n\n");
logicAND();
logicOR();
logicNOT();
}