#include<stdio.h>
void main()
{
    int i = 17;
    char ch = 'K';
    float f = 4.6;
    printf("\ni = %d, ch = %c, f = %f", i, ch, f);
    i--;
    ch--;
    f--;
    printf("\nAfter decrement : i = %d, ch = %c, f = %f", i, ch, f);
}
