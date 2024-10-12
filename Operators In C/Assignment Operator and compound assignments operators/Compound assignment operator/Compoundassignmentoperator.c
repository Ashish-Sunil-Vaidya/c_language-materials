#include<stdio.h>
void main()
{
    int a, b;
    printf("\nEnter 2 numbers:");
    scanf("%d %d", &a, &b);
    printf("\nValues of variables : a = %d, b = %d.", a, b); // a = 17, b = 6
    a += b;
    printf("\nAddition assignment : a = %d, b = %d.", a, b); // a = 23, b = 6
    a -= b;
    printf("\nSubtraction assignment : a = %d, b = %d.", a, b); // a = 17, b = 6
    b *= a;
    printf("\nMultiplication assignment : a = %d, b = %d.", a, b); // a = 17, b = 102
    b /= a;
    printf("\nDivision assignment : a = %d, b = %d.", a, b); // a = 17, b = 6
    b %= b;
    printf("\nReminder of division assignment : a = %d, b = %d.", a, b); // a = 17, b = 0
}
