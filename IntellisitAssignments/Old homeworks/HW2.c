//WAP to accept an alphabet from the user and print whether it is a CAPITAL letter or small letter.

#include <stdio.h>

void main()
{
    char a,b;
    printf("Enter a character:\n");
    scanf("%c",&a);

    if(a>=65 && a<=90)
    {
       printf("%c is a uppercase alphabet\n",a);
    }

    else
    {
       printf("%c is a lowercase alphabet\n",a);
    }
    
    printf("Enter another character:\n");
    fflush(stdin);
    scanf("%c",&b);

    if(b>=65 && b<=90)
    {
       printf("%c is a uppercase alphabet",b);
    }

    else
    {
       printf("%c is a lowercase alphabet",b);
    }

}