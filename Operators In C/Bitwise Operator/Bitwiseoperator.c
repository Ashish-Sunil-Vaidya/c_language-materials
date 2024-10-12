#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b,c,c1,c2;
    printf("Enter the Number\n");
    scanf("%d%d",&a,&b);
    printf("\n");

    c=a&b;
    printf("Bitwise AND = %d\n",c);

    c=a|b;
    printf("Bitwise OR = %d\n",c);

    c=a^b;
    printf("Bitwise EXOR = %d\n",c);

    c1=~a;
    c2=~b;
    printf("Bitwise NOT of a=%d and b=%d \n",c1,c2);

    c=a>>2;
    printf("Right Shift = %d\n",c);

    c=a<<2;
    printf("Left Shift = %d\n",c);

}