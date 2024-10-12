#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=0,b=2;
    printf("\n");
    if(a>b)//condition
    {
        printf("ABCD\n");

        if(a<b)//nested if
            {
            printf("EFGS\n");
            }
      
    }

    else 
       { printf("HIJK\n");}
       printf("\n");

return 0;

}