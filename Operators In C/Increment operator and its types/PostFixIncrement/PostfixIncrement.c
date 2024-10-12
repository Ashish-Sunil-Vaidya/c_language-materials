#include<stdio.h>
void main()
{
    int i = 60, j;
    char ch = 'S', d;
    printf("\ni = %d, ch = %c", i, ch);
    i++;
    ch++;
    printf("\nAfter incrementation, i = %d, ch = %c", i, ch);
    j = i++;
    printf("\nAfter postfix incrementation (j = i++), i = %d, j = %d", i, j);
    d = ch++;
    printf("\nAfter postfix incrementation (d = ch++), ch = %c, d = %c", ch, d);
    printf("\nIncrementation inside printf() (i++) = %d", i++);
    printf("\nAfter incrementation in printf(), i = %d", i);
    printf("\nIncrementation inside printf() (ch++) = %c", ch++);
    printf("\nAfter incrementation in printf(), ch = %c", ch);
}
