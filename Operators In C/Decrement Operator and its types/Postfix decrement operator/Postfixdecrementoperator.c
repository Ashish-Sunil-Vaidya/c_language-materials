#include<stdio.h>
void main()
{
    int i = 60, j;
    char ch = 'S', d;
    printf("\ni = %d, ch = %c", i, ch);
    i--;
    ch--;
    printf("\nAfter decrementation, i = %d, ch = %c", i, ch);
    j = i--;
    printf("\nAfter postfix decrementation (j = i--), i = %d, j = %d", i, j);
    d = ch--;
    printf("\nAfter postfix decrementation (d = ch--), ch = %c, d = %c", ch, d);
    printf("\nDecrementation inside printf() (i--) = %d", i--);
    printf("\nAfter decrementation in printf(), i = %d", i);
    printf("\nDecrementation inside printf() (ch--) = %c", ch--);
    printf("\nAfter decrementation in printf(), ch = %c", ch);
}
