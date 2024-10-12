//WAP to accept the percentage of a student and check whether he/she has passed or not.

#include <stdio.h>

void main()
{
    int a,b;
    printf("Enter Ram's percentage:\n");
    scanf("%d",&a);

    if(a>50)
    {
        printf("Ram is pass, He has %d%% \n",a);
    }

    else
    {
        printf("Ram is fail, He has %d%% \n",a);
    }
    
    printf("\n");
    printf("Enter Tatya's percentage\n");
    scanf("%d",&b);

    if(b>50)
    {
        printf("Tatya is pass, He has %d%% \n",b);
    }

    else
    {
        printf("Tatya is fail, He has %d%% \n",b);
    }
}