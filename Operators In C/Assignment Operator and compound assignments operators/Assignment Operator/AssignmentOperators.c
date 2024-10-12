#include<stdio.h>
void main()
{
    int i = 36, j;
    char c = 'D', d;
    float f = 12.3, g;
    printf("\nDefault initial values:");
    printf("\ni = %d, j = %d, c = %c, d = %c, f = %g, g = %g", i, j, c , d, f, g);
    j = 51;
    d = 'E';
    g = 3.2022;
    printf("\nAfter assigning values to variable j, d and g:");
    printf("\ni = %d, j = %d, c = %c, d = %c, f = %g, g = %g", i, j, c , d, f, g);
    i = j;
    c = d;
    f = g;
    printf("\nAfter assigning variable j, d and g to variables i, c, and f:");
    printf("\ni = %d, j = %d, c = %c, d = %c, f = %g, g = %g", i, j, c , d, f, g);
    i = j * 2;
    c = d * 2;
    f = g * 4;
    printf("\nAfter assigning expression to variables i, c, and f:");
    printf("\ni = %d, j = %d, c = %c, d = %c, f = %g, g = %g", i, j, c , d, f, g);
}
